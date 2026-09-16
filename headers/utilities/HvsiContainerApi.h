#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 6 member(s).
class HvsiContainerApi {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCrossMachineId@HvsiContainerApi@@SA?AU_GUID@@XZ
    static _GUID GetCrossMachineId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMachineIdForProviderEntryPoint@HvsiContainerApi@@UEBA?AU_GUID@@XZ
    virtual _GUID GetMachineIdForProviderEntryPoint() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshMachineUsage@HvsiContainerApi@@UEAA?AW4RemoteMachineStatus@ICrossMachineCommunicationServices@@XZ
    virtual int RefreshMachineUsage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryEnsureMachineIsRunning@HvsiContainerApi@@UEAA?AW4RemoteMachineStatus@ICrossMachineCommunicationServices@@K@Z
    virtual int TryEnsureMachineIsRunning(unsigned long);
};
