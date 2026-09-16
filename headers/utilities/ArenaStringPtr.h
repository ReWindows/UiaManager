#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 3 member(s).
namespace google::protobuf::internal {
class ArenaStringPtr {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearToEmpty@ArenaStringPtr@internal@protobuf@google@@QEAAXXZ
    void ClearToEmpty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@ArenaStringPtr@internal@protobuf@google@@QEAAXXZ
    void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBytes@ArenaStringPtr@internal@protobuf@google@@QEAAXPEBX_KPEAVArena@34@@Z
    void SetBytes(void const *, uint64_t, WindissectOpaque *);
};
} // namespace google::protobuf::internal
