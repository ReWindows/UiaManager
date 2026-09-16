#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 3 member(s).
class WinEventsManager {
public:
    class ListenerEntry;
    class ListenerGuard;
    class ThreadState;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WinEventsManager@@QEAA@K@Z
    WinEventsManager(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WinEventsManager@@QEAA@XZ
    ~WinEventsManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowsAppMessageCallback@WinEventsManager@@CAXAEBUtagMSG@@AEAUThreadState@1@@Z
    static void WindowsAppMessageCallback(tagMSG const &, WindissectOpaque &);
};
