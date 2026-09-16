#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 3 member(s).
class SharedBlock {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SharedAlloc@SharedBlock@@QEAAJPEAUHWND__@@@Z
    long SharedAlloc(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SharedFree@SharedBlock@@QEAAXXZ
    void SharedFree();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SharedRead@SharedBlock@@QEAAJPEAX@Z
    long SharedRead(void *);
};
