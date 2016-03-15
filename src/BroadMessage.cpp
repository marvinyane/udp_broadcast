#include "BroadMessage.h"
#include "BroadMessagePrivate.h"

BroadMessage::BroadMessage(int id)
    : m_id (id)
{
    pri = new Private(NULL, 0);
}

BroadMessage::BroadMessage(int id, Private* _pri)
    : m_id (id)
    , pri(_pri)
{
}

BroadMessage::~BroadMessage()
{
    if (pri)
    {
        delete pri;
    }
}

void BroadMessage::setPrivate(char* buf, int len)
{
    pri->m_data = std::string(buf, len);
}

const char* BroadMessage::getPrivate()
{
    return pri->m_data.data();
}
