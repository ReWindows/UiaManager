#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 5 member(s).
class UiaEndpointRegistration {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAutomationConnection@UiaEndpointRegistration@@UEAAJPEBG@Z
    virtual long CreateAutomationConnection(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessId@UiaEndpointRegistration@@UEBAJPEAI@Z
    virtual long GetProcessId(unsigned int *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UiaEndpointRegistration@@QEAA@XZ
    UiaEndpointRegistration();
};
