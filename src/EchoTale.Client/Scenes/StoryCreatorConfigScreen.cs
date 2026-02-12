using DryIoc;
using EchoTale.Client.Data.Internal;
using EchoTale.Client.Interfaces.Services;
using EchoTale.Client.Internal;
using EchoTale.Client.Types;
using SadConsole.UI;
using SadConsole.UI.Controls;
using SadRogue.Primitives;

namespace EchoTale.Client.Scenes;

public class StoryCreatorConfigScreen : ScreenObject
{
    private const int WindowWidth = 64;
    private const int WindowHeight = 25;
    private const int ControlWidth = 36;
    private const int DropdownHeight = 8;
    private const double SpinnerFrameIntervalMs = 120d;

    private readonly ScreenSurface _background;
    private readonly Window _window;
    private readonly TextBox _titleTextBox;
    private readonly TextEditor _descriptionEditor;
    private readonly ComboBox<StoryGenreType> _genreCombo;
    private readonly ComboBox<string> _languageCombo;
    private readonly Label _spinnerLabel;
    private readonly Label _statusLabel;
    private readonly char[] _spinnerFrames = ['|', '/', '-', '\\'];

    private bool _isSpinning;
    private int _spinnerFrameIndex;
    private double _spinnerElapsedMs;
    private string _spinnerMessage = "Creating story";

    public StoryCreatorConfig? CreatedConfig { get; private set; }

    public event Action<StoryCreatorConfig>? CreateStoryClicked;

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

        Label titleLabel = new Label("Title")
        {
            Position = new Point((WindowWidth - ControlWidth) / 2, 2)
        };

        _titleTextBox = new TextBox(ControlWidth)
        {
            Position = new Point((WindowWidth - ControlWidth) / 2, 3),
            Text = string.Empty
        };

        Label descriptionLabel = new Label("Description")
        {
            Position = new Point((WindowWidth - ControlWidth) / 2, 5)
        };

        _descriptionEditor = new TextEditor(ControlWidth, 4)
        {
            Position = new Point((WindowWidth - ControlWidth) / 2, 6),
            Text = string.Empty
        };

        Label genreLabel = new Label("Genre")
        {
            Position = new Point((WindowWidth - ControlWidth) / 2, 11)
        };

        _genreCombo = new ComboBox<StoryGenreType>(
            ControlWidth,
            ControlWidth,
            DropdownHeight,
            Enum.GetValues<StoryGenreType>()
        )
        {
            Position = new Point((WindowWidth - ControlWidth) / 2, 12),
            SelectedIndex = 0
        };

        Label languageLabel = new Label("Language")
        {
            Position = new Point((WindowWidth - ControlWidth) / 2, 14)
        };

        _languageCombo = new ComboBox<string>(ControlWidth, ControlWidth, 4, ["Italiano", "English"])
        {
            Position = new Point((WindowWidth - ControlWidth) / 2, 15),
            SelectedIndex = 0
        };

        _spinnerLabel = new Label(ControlWidth)
        {
            Position = new Point((WindowWidth - ControlWidth) / 2, 17),
            DisplayText = string.Empty,
            Alignment = HorizontalAlignment.Center
        };

        Button createButton = new Button("Create story")
        {
            Position = new Point((WindowWidth - "Create story".Length) / 2, 19)
        };
        createButton.Click += OnCreateStoryClick;

        _statusLabel = new Label(ControlWidth)
        {
            Position = new Point((WindowWidth - ControlWidth) / 2, 21),
            DisplayText = string.Empty,
            Alignment = HorizontalAlignment.Center
        };

        _window.Controls.Add(titleLabel);
        _window.Controls.Add(_titleTextBox);
        _window.Controls.Add(descriptionLabel);
        _window.Controls.Add(_descriptionEditor);
        _window.Controls.Add(genreLabel);
        _window.Controls.Add(_genreCombo);
        _window.Controls.Add(languageLabel);
        _window.Controls.Add(_languageCombo);
        _window.Controls.Add(_spinnerLabel);
        _window.Controls.Add(createButton);
        _window.Controls.Add(_statusLabel);

        Children.Add(_background);
        Children.Add(_window);

        _window.Show(false);

        CreateStoryClicked += config =>
                              {
                                  InstanceHolder.Container
                                                .Resolve<IJobScheduler>()
                                                .Enqueue(
                                                    async () =>
                                                    {
                                                        StartSpinning();
                                                        await Task.Delay(5000);
                                                        StopSpinning("Story created!");
                                                    }
                                                );
                              };
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

    public override void Update(TimeSpan delta)
    {
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

    private void OnCreateStoryClick(object? sender, EventArgs e)
    {
        StoryGenreType genre = _genreCombo.SelectedItem;
        string language = _languageCombo.SelectedItem;

        StoryCreatorConfig config = new()
        {
            StoryName = _titleTextBox.Text.Trim(),
            Title = _titleTextBox.Text.Trim(),
            Description = _descriptionEditor.Text.Trim(),
            Genre = genre,
            Language = language,
            NumRooms = string.Empty
        };

        CreatedConfig = config;
        _statusLabel.DisplayText = $"Created: {genre} / {language}";
        InstanceHolder.EmitLog($"Story config created: {genre} ({language})", 1, 1);
        CreateStoryClicked?.Invoke(config);
    }

    private string BuildSpinnerText()
    {
        return $"{_spinnerMessage} {_spinnerFrames[_spinnerFrameIndex]}";
    }
}
