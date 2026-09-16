#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 4 member(s).
namespace GetProcessAppIdentityService {
class ResponsePayload {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPayload@ResponsePayload@GetProcessAppIdentityService@@QEBAXAEAVResponsePayloadMsg@UiaManagerProto@@@Z
    void AddPayload(::UiaManagerProto::ResponsePayloadMsg &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Parse@ResponsePayload@GetProcessAppIdentityService@@SA?AW4ParseStatus@@AEBVResponsePayloadMsg@UiaManagerProto@@AEAU12@@Z
    static int Parse(::UiaManagerProto::ResponsePayloadMsg const &, ::GetProcessAppIdentityService::ResponsePayload &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ResponsePayload@GetProcessAppIdentityService@@QEAA@$$QEAU01@@Z
    ResponsePayload(::GetProcessAppIdentityService::ResponsePayload &&);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ResponsePayload@GetProcessAppIdentityService@@QEAA@XZ
    ~ResponsePayload();
};
} // namespace GetProcessAppIdentityService
