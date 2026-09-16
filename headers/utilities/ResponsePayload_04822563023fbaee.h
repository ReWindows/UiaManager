#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 2 member(s).
namespace GetHwndDescendantsService {
class ResponsePayload {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Parse@ResponsePayload@GetHwndDescendantsService@@SA?AW4ParseStatus@@AEBVResponsePayloadMsg@UiaManagerProto@@AEAU12@@Z
    static int Parse(::UiaManagerProto::ResponsePayloadMsg const &, ::GetHwndDescendantsService::ResponsePayload &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ResponsePayload@GetHwndDescendantsService@@QEAA@XZ
    ~ResponsePayload();
};
} // namespace GetHwndDescendantsService
