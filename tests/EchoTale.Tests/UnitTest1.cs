using EchoTale.Client;

namespace EchoTale.Tests;

public class Tests
{
    [SetUp]
    public void Setup()
    {
        while (InstanceHolder.DequeueLogs(10).Count > 0)
        {
        }
    }

    [Test]
    public void DequeueLogs_ShouldReturnAtMostRequestedCount_InFifoOrder()
    {
        InstanceHolder.EmitLog("first", 1, 9);
        InstanceHolder.EmitLog("second", 2, 9);
        InstanceHolder.EmitLog("third", 3, 9);
        InstanceHolder.EmitLog("fourth", 4, 9);

        var batch = InstanceHolder.DequeueLogs(3);

        Assert.That(batch.Count, Is.EqualTo(3));
        Assert.That(batch[0].Message, Is.EqualTo("first"));
        Assert.That(batch[1].Message, Is.EqualTo("second"));
        Assert.That(batch[2].Message, Is.EqualTo("third"));
    }

    [Test]
    public void DequeueLogs_ShouldReturnOnlyAvailableItems_WhenQueueHasLessThanRequested()
    {
        InstanceHolder.EmitLog("one", 1, 1);

        var batch = InstanceHolder.DequeueLogs(3);

        Assert.That(batch.Count, Is.EqualTo(1));
        Assert.That(batch[0].Message, Is.EqualTo("one"));
    }
}
