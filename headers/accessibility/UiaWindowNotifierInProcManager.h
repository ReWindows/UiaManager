#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 4 member(s).
class UiaWindowNotifierInProcManager {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUiaWindowNotifierCallback@UiaWindowNotifierInProcManager@@UEAAJIPEAPEAUIUiaWindowNotifierCallback@@@Z
    virtual long GetUiaWindowNotifierCallback(unsigned int, IUiaWindowNotifierCallback * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveNotifierCallback@UiaWindowNotifierInProcManager@@SAXI@Z
    static void RemoveNotifierCallback(unsigned int);
};
