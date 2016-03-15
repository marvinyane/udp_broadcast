#ifndef __STCBROADMESSAGETEST2_H__
#define __STCBROADMESSAGETEST2_H__

#include <string.h>
#include <string>
#include "BroadMessage.h"

class StcBroadMessageTest2 : public BroadMessage
{
    public:
        // this is for writer
        StcBroadMessageTest2(std::string name, int age, int* _array, int length)
              : BroadMessage(STC_BROADMESSAGE_TEST_2) 
              , m_age(age)
              , m_name(name)
        {
            memcpy(m_array, _array, sizeof(int) * length);
            pack();
        }

        // this is for reader!
        StcBroadMessageTest2(int id, BroadMessage::Private* pri) 
            : BroadMessage(id, pri)
            , m_age(0)
            , m_name()
        {
            unpack();
        }

        ~StcBroadMessageTest2()
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

        int* getArray()
        {
            return m_array;
        }

        // why not set?
        
    private:
        void pack()
        {
        }

        void unpack()
        {
        }

    private:
        int             m_age;
        std::string     m_name;
        int             m_array[10];

};

typedef std::shared_ptr<StcBroadMessageTest2> StcBroadMessageTest2Sp;

#endif
