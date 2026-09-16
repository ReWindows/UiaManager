#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 11 member(s).
class UiaManagerEndpointStateNotifier {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Advise@UiaManagerEndpointStateNotifier@@UEAAJPEAUIUiaManagerEndpointStateNotifierSink@@PEAUIUiaManagerLifetimeNotifier@@PEAPEAUIUiaManagerEndpointStateNotifierSinkRegistrationToken@@@Z
    virtual long Advise(IUiaManagerEndpointStateNotifierSink *, IUiaManagerLifetimeNotifier *, IUiaManagerEndpointStateNotifierSinkRegistrationToken * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?New@UiaManagerEndpointStateNotifier@@SA?AV?$ComPtr@VUiaManagerEndpointStateNotifier@@@WRL@Microsoft@@XZ
    static WindissectOpaque New();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEndpointAdded@UiaManagerEndpointStateNotifier@@UEAAJU_GUID@@@Z
    virtual long OnEndpointAdded(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEndpointHostChanged@UiaManagerEndpointStateNotifier@@UEAAJU_GUID@@@Z
    virtual long OnEndpointHostChanged(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEndpointRemoved@UiaManagerEndpointStateNotifier@@UEAAJU_GUID@@@Z
    virtual long OnEndpointRemoved(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@UiaManagerEndpointStateNotifier@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UiaManagerEndpointStateNotifier@@QEAA@XZ
    UiaManagerEndpointStateNotifier();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unadvise@UiaManagerEndpointStateNotifier@@UEAAJK@Z
    virtual long Unadvise(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UiaManagerEndpointStateNotifier@@UEAA@XZ
    virtual ~UiaManagerEndpointStateNotifier();
};
