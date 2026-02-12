using DryIoc;
using EchoTale.Client.Data.Internal;

namespace EchoTale.Client;

public class InstanceHolder
{
    private static readonly object _logQueueSync = new();
    private static readonly Queue<LogEmitData> _logQueue = new();

    public static Container Container { get; set; }

    public static void EmitLog(string log, int currentProcessed, int totalToProcess)
    {
        lock (_logQueueSync)
        {
            _logQueue.Enqueue(new LogEmitData(log, currentProcessed, totalToProcess));
        }
    }

    public static IReadOnlyList<LogEmitData> DequeueLogs(int maxCount)
    {
        if (maxCount <= 0)
        {
            return [];
        }

        List<LogEmitData> result = new(maxCount);
        lock (_logQueueSync)
        {
            while (result.Count < maxCount && _logQueue.Count > 0)
            {
                result.Add(_logQueue.Dequeue());
            }
        }

        return result;
    }
}
