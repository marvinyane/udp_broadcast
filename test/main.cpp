#include "StcBroadMessageTest1.h"
#include "BroadSignal.h"
#include "BroadReceive.h"


class testReceive : public BroadReceive
{
    public:
        void handleMessage(char* buf, int len)
        {
            StcBroadMessageTest1* sp = new StcBroadMessageTest1();
        }
}

int main()
{
    BroadSignal signal;
    BroadReceive recv;

    sleep(1);

    BroadMessageSp msg(new StcBroadMessageTest1("marvin", 26));

    signal.broadcast(msg);

    while (1)
    {
        sleep(100);
    }

    return 0;
}
