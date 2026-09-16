#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 2 member(s).
class ViewManagerConnectedEventPayload {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Parse@ViewManagerConnectedEventPayload@@SA?AW4ParseStatus@@AEAVUiaManagerMsg@UiaManagerProto@@AEAU1@@Z
    static int Parse(::UiaManagerProto::UiaManagerMsg &, ViewManagerConnectedEventPayload &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ViewManagerConnectedEventPayload@@QEAA@XZ
    ~ViewManagerConnectedEventPayload();
};
