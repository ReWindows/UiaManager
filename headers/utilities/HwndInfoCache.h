#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 3 member(s).
class HwndInfoCache {
public:
    class CachedHwndInfo;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HwndInfoCache@@QEAA@XZ
    HwndInfoCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertEntry@HwndInfoCache@@QEAAXPEAUHWND__@@UCrossMachineHwndInfo@@@Z
    void InsertEntry(HWND__*, CrossMachineHwndInfo);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEntryValid@HwndInfoCache@@CA_NAEBUCachedHwndInfo@1@@Z
    static bool IsEntryValid(WindissectOpaque const &);
};
