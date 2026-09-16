#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 3 member(s).
class BasicUtils {
public:
    class CrossMachinePipeNameGuard;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAppContainer@BasicUtils@@SA_NPEAX@Z
    static bool IsAppContainer(void *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroySecurityAttribute@BasicUtils@@CAXPEAU_SECURITY_ATTRIBUTES@@@Z
    static void DestroySecurityAttribute(_SECURITY_ATTRIBUTES *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInCrossMachineOnlyWdagContainer@BasicUtils@@CA_NXZ
    static bool IsInCrossMachineOnlyWdagContainer();
};
