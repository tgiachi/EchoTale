using System.Collections.Concurrent;
using System.Text;
using System.Threading;
using DryIoc;
using EchoTale.Client.Data.Internal;
using EchoTale.Client.Data.Json;
using EchoTale.Client.Extensions;
using EchoTale.Client.Extensions.Strings;
using EchoTale.Client.Interfaces.Services;
using EchoTale.Client.Internal;
using EchoTale.Client.Types;
using SadConsole.UI;
using SadConsole.UI.Controls;
using SadRogue.Primitives;

namespace EchoTale.Client.Scenes;

public class StoryCreatorConfigScreen : ScreenObject
{
    private const string CreateStoryButtonText = "Create story";
    private const string BuildDslButtonText = "Build DSL";
    private const int WindowWidth = GameSettings.GAME_WIDTH - 10;
    private const int WindowHeight = GameSettings.GAME_HEIGHT - 10;
    private const int ControlWidth = WindowWidth - 4;
    private const int DescriptionWidth = ControlWidth - 1;
    private const int DescriptionHeight = 6;
    private const int DropdownHeight = 8;
    private const double SpinnerFrameIntervalMs = 120d;
    private const int TitleTypewriterDelayMs = 20;

    private readonly ScreenSurface _background;
    private readonly Window _window;
    private readonly TextBox _titleTextBox;
    private readonly Panel _descriptionPanel;
    private readonly TextEditor _descriptionViewer;
    private readonly ComboBox<StoryGenreType> _genreCombo;
    private readonly ComboBox<string> _languageCombo;
    private readonly Label _spinnerLabel;
    private readonly Label _statusLabel;
    private readonly char[] _spinnerFrames = ['|', '/', '-', '\\'];
    private readonly ConcurrentQueue<Action> _uiActions = new();
    private string _descriptionText = string.Empty;

    private bool _isSpinning;
    private int _spinnerFrameIndex;
    private double _spinnerElapsedMs;
    private string _spinnerMessage = "Creating story";

    public StoryCreatorConfig? CreatedConfig { get; private set; }

    private IOpenAIService OpenAIService => InstanceHolder.Container.Resolve<IOpenAIService>();
    private IStoryCreatorService StoryCreatorService => InstanceHolder.Container.Resolve<IStoryCreatorService>();

    public event Action<StoryCreatorConfig>? CreateStoryClicked;
    public event Action<StoryCreatorConfig>? BuildDslClicked;

    public StoryCreatorConfigScreen()
    {
        _background = new ScreenSurface(GameSettings.GAME_WIDTH, GameSettings.GAME_HEIGHT);
        _background.Surface.Fill(Color.White, Color.Black, ' ');

        _window = new Window(WindowWidth, WindowHeight)
        {
            Title = " Story Creator ",
            Position = new Point((GameSettings.GAME_WIDTH - WindowWidth) / 2, (GameSettings.GAME_HEIGHT - WindowHeight) / 2),
            CloseOnEscKey = false
        };

        Point left = new((WindowWidth - ControlWidth) / 2, 0);

        Label titleLabel = new("Title") { Position = new Point(left.X, 2) };
        _titleTextBox = new TextBox(ControlWidth)
        {
            Position = new Point(left.X, 3),
            Text = string.Empty
        };

        Label descriptionLabel = new("Description") { Position = new Point(left.X, 5) };
        _descriptionPanel = new Panel(DescriptionWidth + 2, DescriptionHeight + 2)
        {
            Position = new Point(left.X, 6),
            DrawBorder = true,
            UseExtendedBorderGlyphs = true
        };

        _descriptionViewer = new TextEditor(DescriptionWidth, DescriptionHeight)
        {
            Position = new Point(1, 1),
            WordWrap = true,
            ShowLineNumbers = false,
            DisableKeyboard = true,
            IsEditing = false,
            Text = string.Empty
        };
        _descriptionPanel.Add(_descriptionViewer);

        Label genreLabel = new("Genre") { Position = new Point(left.X, 13) };
        _genreCombo = new ComboBox<StoryGenreType>(
            ControlWidth,
            ControlWidth,
            DropdownHeight,
            Enum.GetValues<StoryGenreType>()
        )
        {
            Position = new Point(left.X, 14),
            SelectedIndex = 0
        };

        Label languageLabel = new("Language") { Position = new Point(left.X, 16) };
        _languageCombo = new ComboBox<string>(ControlWidth, ControlWidth, 4, ["Italiano", "English"])
        {
            Position = new Point(left.X, 17),
            SelectedIndex = 0
        };

        _spinnerLabel = new Label(ControlWidth)
        {
            Position = new Point(left.X, 19),
            DisplayText = string.Empty,
            Alignment = HorizontalAlignment.Center
        };

        int buttonsGap = 4;
        int buttonsTotalWidth = CreateStoryButtonText.Length + BuildDslButtonText.Length + buttonsGap;
        int buttonsStartX = (WindowWidth - buttonsTotalWidth) / 2;

        Button createButton = new(CreateStoryButtonText)
        {
            Position = new Point(buttonsStartX, 21)
        };
        createButton.Click += OnCreateStoryClick;

        Button buildDslButton = new(BuildDslButtonText)
        {
            Position = new Point(buttonsStartX + CreateStoryButtonText.Length + buttonsGap, 21)
        };
        buildDslButton.Click += OnBuildDslClick;

        _statusLabel = new Label(ControlWidth)
        {
            Position = new Point(left.X, 23),
            DisplayText = string.Empty,
            Alignment = HorizontalAlignment.Center
        };

        _window.Controls.Add(titleLabel);
        _window.Controls.Add(_titleTextBox);
        _window.Controls.Add(descriptionLabel);
        _window.Controls.Add(_descriptionPanel);
        _window.Controls.Add(genreLabel);
        _window.Controls.Add(_genreCombo);
        _window.Controls.Add(languageLabel);
        _window.Controls.Add(_languageCombo);
        _window.Controls.Add(_spinnerLabel);
        _window.Controls.Add(createButton);
        _window.Controls.Add(buildDslButton);
        _window.Controls.Add(_statusLabel);

        Children.Add(_background);
        Children.Add(_window);
        _window.Show(false);

        CreateStoryClicked += config =>
                              {
                                  InstanceHolder.Container
                                                .Resolve<IJobScheduler>()
                                                .Enqueue(() => GenerateStoryAsync(config));
                              };

        BuildDslClicked += config =>
                           {
                               StoryCreatorService.CreateStoryInBackground(config);
                               InstanceHolder.Host.Screen = new LoadingScreen();
                           };
    }

    public override void Update(TimeSpan delta)
    {
        while (_uiActions.TryDequeue(out Action? uiAction))
        {
            uiAction();
        }

        if (_isSpinning)
        {
            _spinnerElapsedMs += delta.TotalMilliseconds;

            if (_spinnerElapsedMs >= SpinnerFrameIntervalMs)
            {
                _spinnerElapsedMs -= SpinnerFrameIntervalMs;
                _spinnerFrameIndex = (_spinnerFrameIndex + 1) % _spinnerFrames.Length;
                _spinnerLabel.DisplayText = BuildSpinnerText();
            }
        }

        base.Update(delta);
    }

    public void StartSpinning(string message = "Creating story")
    {
        _spinnerMessage = string.IsNullOrWhiteSpace(message) ? "Creating story" : message;
        _isSpinning = true;
        _spinnerFrameIndex = 0;
        _spinnerElapsedMs = 0d;
        _spinnerLabel.DisplayText = BuildSpinnerText();
    }

    public void StopSpinning(string? message = null)
    {
        _isSpinning = false;
        _spinnerElapsedMs = 0d;
        _spinnerLabel.DisplayText = message ?? string.Empty;
    }

    private async Task GenerateStoryAsync(StoryCreatorConfig config)
    {
        EnqueueUi(() => StartSpinning());

        int receivedChars = 0;
        StoryTitleJson result = await OpenAIService.GetChatCompletionStreamingFromResourceAsync<StoryTitleJson>(
                                    "Assets/Prompts/story_creator_title.md",
                                    new()
                                    {
                                        { "Genere", config.Genre.ToString() },
                                        { "Lingua", config.Language }
                                    },
                                    chunk =>
                                    {
                                        int total = Interlocked.Add(ref receivedChars, chunk.Length);
                                        EnqueueUi(
                                            () =>
                                            {
                                                _statusLabel.DisplayText = $"Streaming... {total} chars";
                                                _statusLabel.IsDirty = true;
                                            }
                                        );
                                    }
                                );

        await TypewriteTitleAsync(result.Title);

        CreatedConfig = new StoryCreatorConfig()
        {
            Title = result.Title,
            Description = result.Description,
            Genre = config.Genre,
            Language = config.Language,
            StoryName = result.Title.ToSnakeCase(),
        };

        EnqueueUi(
            () =>
            {
                SetDescriptionText(result.Description);
                StopSpinning("Story created!");
            }
        );
    }

    private void OnCreateStoryClick(object? sender, EventArgs e)
    {
        StoryCreatorConfig config = BuildConfigFromForm();

        CreatedConfig = config;
        _statusLabel.DisplayText = $"Created: {config.Genre} / {config.Language}";
        InstanceHolder.EmitLog($"Story config created: {config.Genre} ({config.Language})", 1, 1);
        CreateStoryClicked?.Invoke(config);
    }

    private void OnBuildDslClick(object? sender, EventArgs e)
    {
        if (CreatedConfig != null)
        {
            BuildDslClicked?.Invoke(CreatedConfig);
        }
    }

    private StoryCreatorConfig BuildConfigFromForm()
    {
        StoryGenreType genre = _genreCombo.SelectedItem;
        string language = _languageCombo.SelectedItem;

        return new StoryCreatorConfig
        {
            StoryName = _titleTextBox.Text.Trim(),
            Title = _titleTextBox.Text.Trim(),
            Description = _descriptionText.Trim(),
            Genre = genre,
            Language = language,
            NumRooms = string.Empty
        };
    }

    private void SetDescriptionText(string text)
    {
        _descriptionText = text ?? string.Empty;
        _descriptionViewer.Text = WrapText(_descriptionText, DescriptionWidth);
        _descriptionViewer.IsDirty = true;
    }

    private static string WrapText(string text, int width)
    {
        if (string.IsNullOrWhiteSpace(text))
        {
            return string.Empty;
        }

        IEnumerable<string> paragraphs = text.Replace("\r\n", "\n").Split('\n');
        List<string> wrapped = [];

        foreach (string paragraph in paragraphs)
        {
            if (string.IsNullOrWhiteSpace(paragraph))
            {
                wrapped.Add(string.Empty);

                continue;
            }

            StringBuilder line = new();

            foreach (string word in paragraph.Split(' ', StringSplitOptions.RemoveEmptyEntries))
            {
                if (line.Length == 0)
                {
                    line.Append(word);

                    continue;
                }

                if (line.Length + 1 + word.Length > width)
                {
                    wrapped.Add(line.ToString());
                    line.Clear();
                    line.Append(word);

                    continue;
                }

                line.Append(' ').Append(word);
            }

            if (line.Length > 0)
            {
                wrapped.Add(line.ToString());
            }
        }

        return string.Join('\n', wrapped);
    }

    private async Task TypewriteTitleAsync(string title)
    {
        EnqueueUi(
            () =>
            {
                _titleTextBox.Text = string.Empty;
                _titleTextBox.IsDirty = true;
            }
        );

        string current = string.Empty;

        foreach (char c in title)
        {
            current += c;
            string snapshot = current;
            EnqueueUi(
                () =>
                {
                    _titleTextBox.Text = snapshot;
                    _titleTextBox.IsDirty = true;
                }
            );

            await Task.Delay(TitleTypewriterDelayMs);
        }
    }

    private string BuildSpinnerText()
        => $"{_spinnerMessage} {_spinnerFrames[_spinnerFrameIndex]}";

    private void EnqueueUi(Action action)
        => _uiActions.Enqueue(action);
}
