#ifndef __BROADMESSAGEPRIVATE_H__
#define __BROADMESSAGEPRIVATE_H__

#include <string>

struct BroadMessage::Private
{
    Private(char* buffer, int len)
    {
        if (buffer != NULL && len > 0) 
        {
            m_data = std::string(buffer, len);
        }
    }


    std::string m_data;


    friend class BroadMessageFactory;
};

#endif
