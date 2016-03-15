#ifndef __BROADMESSAGE_H__
#define __BROADMESSAGE_H__

#include <memory>

class BroadSignal;
class BroadReceive;

class BroadMessage
{
    public:
        struct Private;

        // this is for writer
        BroadMessage(int id);

        // this is for reader
        BroadMessage(int id, Private* pri);

        virtual ~BroadMessage();

        int getId() 
        {
             return m_id;
        }


    protected:
        int m_id;
        Private* pri;

        void setPrivate(char* buf, int len);
        const char* getPrivate();

    private:

        virtual void pack() = 0;
        virtual void unpack() = 0;

 friend class BroadSignal;

};

typedef std::shared_ptr<BroadMessage> BroadMessageSp;


#endif
