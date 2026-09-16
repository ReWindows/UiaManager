#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 4 member(s).
class CrossMachineCommunicationServices {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshMachineUsage@CrossMachineCommunicationServices@@UEAA?AW4RemoteMachineStatus@ICrossMachineCommunicationServices@@XZ
    virtual int RefreshMachineUsage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryEnsureMachineIsRunning@CrossMachineCommunicationServices@@UEAA?AW4RemoteMachineStatus@ICrossMachineCommunicationServices@@K@Z
    virtual int TryEnsureMachineIsRunning(unsigned long);
};
