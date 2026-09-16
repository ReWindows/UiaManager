#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 70 member(s).
class IoDispatcher {
public:
    class RequestGuard;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFeatureSupportedByPeer@IoDispatcher@@QEBA_NW4PeerVersionDependentFeature@@@Z
    bool IsFeatureSupportedByPeer(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartConnection@IoDispatcher@@QEAAXXZ
    void StartConnection();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1IoDispatcher@@QEAA@XZ
    ~IoDispatcher();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextRequestId@IoDispatcher@@AEAAIXZ
    unsigned int GetNextRequestId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleRequest@IoDispatcher@@AEAAXIAEAVUiaManagerMsg@UiaManagerProto@@@Z
    void HandleRequest(unsigned int, ::UiaManagerProto::UiaManagerMsg &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleResponse@IoDispatcher@@AEAAXIAEAVUiaManagerMsg@UiaManagerProto@@@Z
    void HandleResponse(unsigned int, ::UiaManagerProto::UiaManagerMsg &);
};
