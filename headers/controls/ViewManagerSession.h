#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 20 member(s).
class ViewManagerSession {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveViewInfo@ViewManagerSession@@QEAA?AUViewIdInfo@@XZ
    ViewIdInfo GetActiveViewInfo();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreWindowBounds@ViewManagerSession@@QEAAJIPEAUViewBounds@@@Z
    long GetCoreWindowBounds(unsigned int, ViewBounds *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHwndFromViewId@ViewManagerSession@@QEAAJIPEAPEAUHWND__@@@Z
    long GetHwndFromViewId(unsigned int, HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewIdFromHwnd@ViewManagerSession@@QEAAJPEAUHWND__@@PEAI@Z
    long GetViewIdFromHwnd(HWND__*, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCoreWindowActive@ViewManagerSession@@QEAAJIPEA_N@Z
    long IsCoreWindowActive(unsigned int, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopListening@ViewManagerSession@@QEAAXXZ
    void StopListening();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ViewManagerSession@@QEAA@XZ
    ~ViewManagerSession();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddWindow@ViewManagerSession@@AEAAXAEBUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@Z
    void AddWindow(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreWindowBounds_WindowManager@ViewManagerSession@@AEAAJIPEAUViewBounds@@@Z
    long GetCoreWindowBounds_WindowManager(unsigned int, ViewBounds *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHwndFromViewId_WindowManager@ViewManagerSession@@AEAAJIPEAPEAUHWND__@@@Z
    long GetHwndFromViewId_WindowManager(unsigned int, HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCoreWindowActive_WindowManager@ViewManagerSession@@AEAAJIPEA_N@Z
    long IsCoreWindowActive_WindowManager(unsigned int, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppViewVisibilityChanged@ViewManagerSession@@AEAAJUAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UAppViewVisibilityChangedEventArgs@34567@@Z
    long OnAppViewVisibilityChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowAdded@ViewManagerSession@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@34567@@Z
    long OnWindowAdded(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowEnumerationCompleted@ViewManagerSession@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIInspectable@Foundation@67@@Z
    long OnWindowEnumerationCompleted(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowForegroundChanged@ViewManagerSession@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowForegroundChangedEventArgs@34567@@Z
    long OnWindowForegroundChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowRemoved@ViewManagerSession@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@34567@@Z
    long OnWindowRemoved(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowVisibilityChanged@ViewManagerSession@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowVisibilityChangedEventArgs@34567@@Z
    long OnWindowVisibilityChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowWatcherStopped@ViewManagerSession@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIInspectable@Foundation@67@@Z
    long OnWindowWatcherStopped(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveWindow@ViewManagerSession@@AEAAXAEBUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@Z
    void RemoveWindow(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateActiveView@ViewManagerSession@@AEAAXAEBUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@_N@Z
    void UpdateActiveView(WindissectOpaque const &, bool);
};
