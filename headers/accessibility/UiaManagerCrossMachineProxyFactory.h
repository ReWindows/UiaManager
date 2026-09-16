#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 5 member(s).
class UiaManagerCrossMachineProxyFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateProxy@UiaManagerCrossMachineProxyFactory@@UEAAJU_GUID@@PEAPEAUIUiaManagerCrossMachineConnection@@@Z
    virtual long CreateProxy(_GUID, IUiaManagerCrossMachineConnection * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UiaManagerCrossMachineProxyFactory@@QEAA@XZ
    UiaManagerCrossMachineProxyFactory();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UiaManagerCrossMachineProxyFactory@@UEAA@XZ
    virtual ~UiaManagerCrossMachineProxyFactory();
};
