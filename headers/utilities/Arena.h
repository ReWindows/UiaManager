#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 80 member(s).
namespace google::protobuf {
class Arena {
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateAlignedWithHook@Arena@protobuf@google@@AEAAPEAX_KPEBVtype_info@@@Z
    void * AllocateAlignedWithHook(uint64_t, type_info const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateAlignedWithHookForArray@Arena@protobuf@google@@AEAAPEAX_KPEBVtype_info@@@Z
    void * AllocateAlignedWithHookForArray(uint64_t, type_info const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReturnArrayMemory@Arena@protobuf@google@@AEAAXPEAX_K@Z
    void ReturnArrayMemory(void *, uint64_t);
};
} // namespace google::protobuf
