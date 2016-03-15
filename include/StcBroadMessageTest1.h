#ifndef __STCBROADMESSAGETEST1_H__
#define __STCBROADMESSAGETEST1_H__

#include <string.h>
#include <string>

#include "BroadMessage.h"
#include "BroadMessageList.h"
#include "test1_generated.h"

class StcBroadMessageTest1 : public BroadMessage
{
    public:
        // this is for writer
        StcBroadMessageTest1(std::string name, int age)
              : BroadMessage(STC_BROADMESSAGE_TEST_1) 
              , m_name(name)
              , m_age(age)
        {
            pack();
        }

        // this is for reader!
        StcBroadMessageTest1(int id, BroadMessage::Private* pri) 
            : BroadMessage(id, pri)
            , m_name()
            , m_age(0)
        {
            unpack();
        }

        ~StcBroadMessageTest1()
        {
        }

        // to get?
        const std::string& getName()
        {
            return m_name;
        }

        int getAge()
        {
            return m_age;
        }

    private:
        void pack()
        {
            flatbuffers::FlatBufferBuilder builder;
            auto name = builder.CreateString(m_name);
            auto flat = TestFlat::CreateStcTestMessage1(builder, name, m_age);
            builder.Finish(flat);


            char* buf = (char*) builder.GetBufferPointer();
            int len = builder.GetSize();

            setPrivate(buf, len);
        }

        void unpack()
        {
            const char* buf = getPrivate();

            const TestFlat::StcTestMessage1* obj = TestFlat::GetStcTestMessage1((uint8_t*)buf);

            m_name = obj->name()->data();
            m_age = obj->age();
        }

    private:
        std::string     m_name;
        int             m_age;

};

typedef std::shared_ptr<StcBroadMessageTest1> StcBroadMessageTest1Sp;

#endif
