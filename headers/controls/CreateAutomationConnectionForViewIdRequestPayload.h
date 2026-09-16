#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 3 member(s).
class CreateAutomationConnectionForViewIdRequestPayload {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CreateAutomationConnectionForViewIdRequestPayload@@QEAA@AEBU0@@Z
    CreateAutomationConnectionForViewIdRequestPayload(CreateAutomationConnectionForViewIdRequestPayload const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Parse@CreateAutomationConnectionForViewIdRequestPayload@@SA?AW4ParseStatus@@AEAVUiaManagerMsg@UiaManagerProto@@AEAU1@@Z
    static int Parse(::UiaManagerProto::UiaManagerMsg &, CreateAutomationConnectionForViewIdRequestPayload &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CreateAutomationConnectionForViewIdRequestPayload@@QEAA@XZ
    ~CreateAutomationConnectionForViewIdRequestPayload();
};
