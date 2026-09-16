#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 7 member(s).
class UiaManagerCrossMachineStubFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStub@UiaManagerCrossMachineStubFactory@@UEAAJU_GUID@@@Z
    virtual long CreateStub(_GUID);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMachineIdInRemoteSession@UiaManagerCrossMachineStubFactory@@UEAAJPEAU_GUID@@@Z
    virtual long GetMachineIdInRemoteSession(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSurrogateProcessId@UiaManagerCrossMachineStubFactory@@UEAAJPEAI@Z
    virtual long GetSurrogateProcessId(unsigned int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UiaManagerCrossMachineStubFactory@@QEAA@XZ
    UiaManagerCrossMachineStubFactory();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UiaManagerCrossMachineStubFactory@@UEAA@XZ
    virtual ~UiaManagerCrossMachineStubFactory();
};
