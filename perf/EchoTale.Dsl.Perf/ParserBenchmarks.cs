using BenchmarkDotNet.Attributes;

namespace EchoTale.Dsl.Perf;

[MemoryDiagnoser]
public class ParserBenchmarks
{
    private const string Script = """
                                  game "La Casa Storta" start laboratorio
                                  include "common/items.etf"
                                  sound unlock = "unlock.wav"
                                  sound door = "door_creak.wav"
                                  sound coin = "coin_drop.wav"

                                  player {
                                    start laboratorio
                                    gives chiave
                                    hp 20
                                  }

                                  room laboratorio {
                                    name "Laboratorio" image "laboratorio.png"
                                    desc "Una stanza polverosa. Una sedia e un armadietto."
                                    exit east -> corridoio
                                    contains sedia
                                    contains armadietto
                                  }

                                  room corridoio {
                                    name "Corridoio"
                                    desc "Lungo e silenzioso."
                                    exit west -> laboratorio
                                    exit east -> studio locked true key chiave "La porta e chiusa."
                                    contains porta_studio
                                  }

                                  room studio {
                                    name "Studio"
                                    desc "Carte ovunque."
                                    exit west -> corridoio
                                  }

                                  object sedia {
                                    name "Sedia"
                                    desc "Una sedia traballante."
                                    portable false
                                  }

                                  object armadietto {
                                    name "Armadietto"
                                    desc "Un armadietto metallico chiuso."
                                    portable false
                                    container true
                                    openable true
                                    locked false
                                    isOpen false
                                    contains chiave
                                  }

                                  object chiave {
                                    name "Chiave"
                                    desc "Una chiave arrugginita."
                                    portable true
                                  }

                                  object porta_studio {
                                    name "Porta dello studio"
                                    desc "Una porta robusta con serratura."
                                    portable false
                                  }

                                  rule unlock_studio {
                                    when use chiave on porta_studio
                                    if in corridoio
                                    if exitLocked corridoio east
                                    do unlock exit corridoio east
                                    do sound unlock
                                    do print "Click. La porta si apre."
                                  }

                                  rule take_diario {
                                    when take diario
                                    do print "Senti qualcosa cadere a terra..."
                                    do spawn moneta in laboratorio
                                  }
                                  """;

    [Benchmark]
    public object ParseFullScenario()
    {
        return EchoTaleDslParser.Parse(Script);
    }
}
