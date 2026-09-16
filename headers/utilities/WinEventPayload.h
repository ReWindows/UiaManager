#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 3 member(s).
class WinEventPayload {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Parse@WinEventPayload@@SA?AW4ParseStatus@@AEAVUiaManagerMsg@UiaManagerProto@@AEAU1@@Z
    static int Parse(::UiaManagerProto::UiaManagerMsg &, WinEventPayload &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WinEventPayload@@QEAA@$$QEAU0@@Z
    WinEventPayload(WinEventPayload &&);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WinEventPayload@@QEAA@XZ
    ~WinEventPayload();
};
