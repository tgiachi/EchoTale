using EchoTale.Client.Internal;
using EchoTale.Client.Scenes;
using SadConsole.Configuration;

Settings.WindowTitle = "My SadConsole Game";

Builder
    .GetBuilder()
    .SetWindowSizeInCells(GameSettings.GAME_WIDTH, GameSettings.GAME_HEIGHT)
    .SetStartingScreen<RootScreen>()
    .IsStartingScreenFocused(true)
    .ConfigureFonts(true)
    .Run();
