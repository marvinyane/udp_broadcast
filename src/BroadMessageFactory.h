#ifndef __BROADMESSAGEFACTORY_H__
#define __BROADMESSAGEFACTORY_H__

#include <memory>

#include "test_generated.h"
#include "BroadMessage.h"
#include "BroadMessagePrivate.h"
#include "BroadMessageList.h"

class BroadMessageFactory
{
    public:
        BroadMessageSp createMessage(char* buf, int len)
        {
            const TestFlat::StcTestMessage* obj = TestFlat::GetStcTestMessage((uint8_t*)buf);
            int id = obj->id();

            BroadMessage::Private* pri = new BroadMessage::Private(buf, len);

            switch (id)
            {
                case STC_BROADMESSAGE_TEST_1:
                    return std::make_shared<StcBroadMessageTest1>(id, pri);
            }


        }
};

#endif
