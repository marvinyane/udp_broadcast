#include "BroadMessage.h"
#include "BroadReceive.h"
#include "BroadReceiveImpl.h"

#include <stdio.h>

BroadReceive::BroadReceive()
    : m_impl (new BroadReceiveImpl(this))
{
}

BroadReceive::~BroadReceive()
{
    delete m_impl;
}
