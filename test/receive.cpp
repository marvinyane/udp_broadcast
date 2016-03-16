#include "StcBroadMessageTest1.h"
#include "BroadSignal.h"
#include "BroadReceive.h"


class testReceive : public BroadReceive
{
    public:
        void handleMessage(BroadMessageSp sp)
        {
            int id = sp->getId();

            switch (id)
            {
                case STC_BROADMESSAGE_TEST_1:
                    StcBroadMessageTest1Sp msg = std::static_pointer_cast<StcBroadMessageTest1>(sp);
                    printf("name is %s, age is %d\n", msg->getName().c_str(), msg->getAge());
                    break;
            }
        }
};

int main()
{
    testReceive recv;

    while (1)
    {
        sleep(100);
    }

    return 0;
}
