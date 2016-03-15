#include "BroadMessage.h"

class BroadSignalImpl;

class BroadSignal
{
    public:
        BroadSignal();
        virtual ~BroadSignal();
        int broadcast(BroadMessageSp message);

    private:
        BroadSignal(const BroadSignal&);
        BroadSignal& operator=(const BroadSignal&);

    private:
        BroadSignalImpl* m_impl;
};
