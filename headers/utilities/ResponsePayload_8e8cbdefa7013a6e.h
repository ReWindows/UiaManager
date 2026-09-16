#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 5 member(s).
namespace GetHwndInfoService {
class ResponsePayload {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPayload@ResponsePayload@GetHwndInfoService@@QEBAXPEAVHwndInfoMsg@UiaManagerProto@@@Z
    void AddPayload(::UiaManagerProto::HwndInfoMsg *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Parse@ResponsePayload@GetHwndInfoService@@SA?AW4ParseStatus@@AEBVHwndInfoMsg@UiaManagerProto@@AEAU12@@Z
    static int Parse(::UiaManagerProto::HwndInfoMsg const &, ::GetHwndInfoService::ResponsePayload &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ResponsePayload@GetHwndInfoService@@QEAA@$$QEAU01@@Z
    ResponsePayload(::GetHwndInfoService::ResponsePayload &&);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ResponsePayload@GetHwndInfoService@@QEAA@XZ
    ~ResponsePayload();
};
} // namespace GetHwndInfoService
