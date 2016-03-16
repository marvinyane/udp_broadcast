#include "StcBroadMessageTest1.h"
#include "BroadSignal.h"

int main()
{
    BroadSignal signal;

    sleep(1);

    BroadMessageSp msg(new StcBroadMessageTest1("marvin", 26));

    signal.broadcast(msg);

    while (1)
    {
        sleep(100);
    }

    return 0;
}
