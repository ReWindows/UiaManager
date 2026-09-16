#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 6 member(s).
class CoreUiSession {
public:
    class CoreUiThreadState;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreWindowBounds@CoreUiSession@@QEAAJIPEAUViewBounds@@@Z
    long GetCoreWindowBounds(unsigned int, ViewBounds *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHwndFromViewId@CoreUiSession@@QEAAJIPEAPEAUHWND__@@@Z
    long GetHwndFromViewId(unsigned int, HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewIdFromHwnd@CoreUiSession@@QEAAJPEAUHWND__@@PEAI@Z
    long GetViewIdFromHwnd(HWND__*, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCoreWindowActive@CoreUiSession@@QEAAJIPEA_N@Z
    long IsCoreWindowActive(unsigned int, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@CoreUiSession@@QEAAXXZ
    void Shutdown();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreUiSession@@QEAA@XZ
    ~CoreUiSession();
};
