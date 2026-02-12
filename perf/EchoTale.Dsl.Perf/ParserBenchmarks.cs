using BenchmarkDotNet.Attributes;

namespace EchoTale.Dsl.Perf;

[MemoryDiagnoser]
public class ParserBenchmarks
{
    private const string Script = """
                                  game "La Casa Storta" start laboratorio
                                  include "common/items.etale"
                                  author = "squid"
                                  version = "v1.0.0"
                                  voices {
                                    a = "narratore"
                                    b = "oggetti"
                                  }
                                  sounds {
                                    unlock = "unlock.wav"
                                    door = "door_creak.wav"
                                    coin = "coin_drop.wav"
                                  }
                                  music {
                                    lab = "lab_theme.ogg"
                                  }

                                  player {
                                    start laboratorio
                                    gives chiave
                                    hp 20
                                  }

                                  room laboratorio {
                                    name "Laboratorio" image "laboratorio.png"
                                    desc "<a>Una stanza polverosa. Una sedia e un armadietto."
                                    ambient "<a>La polvere danza nell'aria."
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
                                    default {
                                      do print "Non succede nulla."
                                    }
                                  }

                                  object armadietto {
                                    name "Armadietto"
                                    hidden false
                                    desc {
                                      if isOpen armadietto false
                                      "<b>Un armadietto metallico chiuso."
                                      else
                                      "<b>Un armadietto metallico aperto."
                                    }
                                    portable false
                                    container true
                                    openable true
                                    locked false
                                    isOpen false
                                    contains chiave
                                    verbs {
                                      usa {
                                        if isOpen armadietto false
                                        do open armadietto
                                        do print "Apri l'armadietto."
                                        else
                                        do print "E gia aperto."
                                      }
                                    }
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

                                  rule unlock_studio once {
                                    when use chiave on porta_studio
                                    if in corridoio
                                    if exitLocked corridoio east
                                    do unlock exit corridoio east
                                    do sound unlock
                                    do playMusic lab
                                    do print "Click. La porta si apre."
                                  }

                                  rule take_diario {
                                    when take diario
                                    do print "Senti qualcosa cadere a terra..."
                                    do reveal moneta in laboratorio
                                  }

                                  rule rain_ambience {
                                    when tick
                                    if in corridoio
                                    if chance 10
                                    do print "La pioggia tamburella lontano."
                                  }
                                  """;

    [Benchmark]
    public object ParseFullScenario()
    {
        return EchoTaleDslParser.Parse(Script);
    }
}
