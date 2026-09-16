#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 7 member(s).
namespace google::protobuf::internal {
class ThreadSafeArena {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ThreadSafeArena@internal@protobuf@google@@QEAA@XZ
    ~ThreadSafeArena();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateAlignedFallback@ThreadSafeArena@internal@protobuf@google@@AEAAPEAX_KPEBVtype_info@@@Z
    void * AllocateAlignedFallback(uint64_t, type_info const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheSerialArena@ThreadSafeArena@internal@protobuf@google@@AEAAXPEAVSerialArena@234@@Z
    void CacheSerialArena(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupList@ThreadSafeArena@internal@protobuf@google@@AEAAXXZ
    void CleanupList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Free@ThreadSafeArena@internal@protobuf@google@@AEAA?AUMemory@SerialArena@234@PEA_K@Z
    WindissectOpaque Free(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSerialArenaFallback@ThreadSafeArena@internal@protobuf@google@@AEAAPEAVSerialArena@234@PEAX@Z
    WindissectOpaque * GetSerialArenaFallback(void *);
};
} // namespace google::protobuf::internal
