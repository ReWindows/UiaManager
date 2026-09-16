#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 2 member(s).
namespace GetCurrentViewsService {
class ResponsePayload {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Parse@ResponsePayload@GetCurrentViewsService@@SA?AW4ParseStatus@@AEBVResponsePayloadMsg@UiaManagerProto@@AEAU12@@Z
    static int Parse(::UiaManagerProto::ResponsePayloadMsg const &, ::GetCurrentViewsService::ResponsePayload &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ResponsePayload@GetCurrentViewsService@@QEAA@XZ
    ~ResponsePayload();
};
} // namespace GetCurrentViewsService
