using EchoTale.Client.Data.Internal;
using EchoTale.Client.Internal;
using SadConsole.UI;
using SadConsole.UI.Controls;
using SadRogue.Primitives;

namespace EchoTale.Client.Scenes;

public class LoadingScreen : ScreenObject
{
    private const int BatchSize = 3;
    private const int ProgressBarWidth = 60;

    private readonly ControlsConsole _controls;
    private readonly Label _logLabel;
    private readonly ProgressBar _progressBar;

    public LoadingScreen()
    {
        _controls = new ControlsConsole(GameSettings.GAME_WIDTH, GameSettings.GAME_HEIGHT);
        _logLabel = new Label(ProgressBarWidth)
        {
            DisplayText = string.Empty,
            Alignment = HorizontalAlignment.Center,
            Position = new Point((GameSettings.GAME_WIDTH - ProgressBarWidth) / 2, (GameSettings.GAME_HEIGHT / 2) - 2)
        };

        _progressBar = new ProgressBar(ProgressBarWidth, 1, HorizontalAlignment.Left)
        {
            Position = new Point((GameSettings.GAME_WIDTH - ProgressBarWidth) / 2, GameSettings.GAME_HEIGHT / 2),
            Progress = 0f,
            DisplayText = "%",
            DisplayTextAlignment = HorizontalAlignment.Center
        };

        _controls.Controls.Add(_logLabel);
        _controls.Controls.Add(_progressBar);
        Children.Add(_controls);
    }

    public override void Update(TimeSpan delta)
    {
        IReadOnlyList<LogEmitData> logs = InstanceHolder.DequeueLogs(BatchSize);

        if (logs.Count > 0)
        {
            LogEmitData current = logs[^1];
            _logLabel.DisplayText = current.Message;
            _progressBar.Progress = CalculateProgress(current.CurrentProcessed, current.TotalToProcess);
        }

        base.Update(delta);
    }

    private static float CalculateProgress(int currentProcessed, int totalToProcess)
    {
        if (totalToProcess <= 0)
        {
            return 0f;
        }

        float progress = currentProcessed / (float)totalToProcess;

        return Math.Clamp(progress, 0f, 1f);
    }
}
