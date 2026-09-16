#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 2 member(s).
namespace google::protobuf::internal {
class SerialArena {
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateAlignedFallback@SerialArena@internal@protobuf@google@@AEAAPEAX_KPEBUAllocationPolicy@234@@Z
    void * AllocateAlignedFallback(uint64_t, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateNewBlock@SerialArena@internal@protobuf@google@@AEAAX_KPEBUAllocationPolicy@234@@Z
    void AllocateNewBlock(uint64_t, WindissectOpaque const *);
};
} // namespace google::protobuf::internal
