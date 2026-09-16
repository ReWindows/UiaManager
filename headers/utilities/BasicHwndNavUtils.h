#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 3 member(s).
class BasicHwndNavUtils {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParent@BasicHwndNavUtils@@SAPEAUHWND__@@PEAU2@AEAUUIA_TIMEOUTDATA@@@Z
    static HWND__* GetParent(HWND__*, UIA_TIMEOUTDATA &);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpecialChild@BasicHwndNavUtils@@CAPEAUHWND__@@PEAU2@AEAUUIA_TIMEOUTDATA@@@Z
    static HWND__* GetSpecialChild(HWND__*, UIA_TIMEOUTDATA &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetWindowHelper@BasicHwndNavUtils@@CAPEAUHWND__@@PEAU2@I@Z
    static HWND__* InternalGetWindowHelper(HWND__*, unsigned int);
};
