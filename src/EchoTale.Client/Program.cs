using ConsoleAppFramework;
using DryIoc;
using EchoTale.Client;
using EchoTale.Client.Data;
using EchoTale.Client.Interfaces.Services;
using EchoTale.Client.Internal;
using EchoTale.Client.Scenes;
using EchoTale.Client.Services;
using SadConsole.Configuration;
using Serilog;

Log.Logger = new LoggerConfiguration()
             .MinimumLevel
             .Verbose()
             .WriteTo
             .Console()
             .CreateLogger();

ConsoleApp.RunAsync(
    args,
    (string? startGameDirectory = null, string? rootDirectory = null) =>
    {
        Settings.WindowTitle = "Echo Tale";

        rootDirectory ??= Path.Combine(Directory.GetCurrentDirectory(), "EchoTale");

        Builder
            .GetBuilder()
            .OnStart(
                (sender, host) =>
                {
                    InstanceHolder.Container = new();

                    InstanceHolder.Container.RegisterInstance(
                        new EchoTaleConfig()
                        {
                            OpenAIKey = Environment.GetEnvironmentVariable("ECHO_TALE_OPENAPI_KEY"),
                        }
                    );

                    InstanceHolder.Container.Register<IOpenAIService, OpenAIService>(Reuse.Singleton);
                    InstanceHolder.Container.Register<IJobScheduler, JobScheduler>(Reuse.Singleton);

                    InstanceHolder.Container.Resolve<IJobScheduler>().Start(5);


                }
            )
            .SetWindowSizeInCells(GameSettings.GAME_WIDTH, GameSettings.GAME_HEIGHT)
            .SetStartingScreen<StoryCreatorConfigScreen>()
            .IsStartingScreenFocused(true)
            .ConfigureFonts(true)
            .Run();
    }
);
