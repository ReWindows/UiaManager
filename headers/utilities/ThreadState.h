#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 4 member(s).
namespace WinEventsManager {
class ThreadState {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleWinEvent@ThreadState@WinEventsManager@@QEAAXUWinEventHookParams@2@@Z
    void HandleWinEvent(WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ThreadState@WinEventsManager@@QEAA@XZ
    ThreadState();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ThreadState@WinEventsManager@@QEAA@XZ
    ~ThreadState();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddWinEventHook@ThreadState@WinEventsManager@@AEAAXIK@Z
    void AddWinEventHook(unsigned int, unsigned long);
};
} // namespace WinEventsManager
