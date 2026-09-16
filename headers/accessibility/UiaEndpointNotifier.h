#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 9 member(s).
class UiaEndpointNotifier {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationConnection@UiaEndpointNotifier@@UEAAJU_GUID@@PEBG@Z
    virtual long OnCreateAutomationConnection(_GUID, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterEndpoint@UiaEndpointNotifier@@UEAAJU_GUID@@PEAUIUiaEndpointNotifierCallback@@@Z
    virtual long RegisterEndpoint(_GUID, IUiaEndpointNotifierCallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterEndpointHostAsCoreWindow@UiaEndpointNotifier@@UEAAJU_GUID@@PEAUIInspectable@@@Z
    virtual long RegisterEndpointHostAsCoreWindow(_GUID, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterEndpointHostAsEndpointId@UiaEndpointNotifier@@UEAAJU_GUID@@0@Z
    virtual long RegisterEndpointHostAsEndpointId(_GUID, _GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterEndpointHostAsHwnd@UiaEndpointNotifier@@UEAAJU_GUID@@PEAUHWND__@@@Z
    virtual long RegisterEndpointHostAsHwnd(_GUID, HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultVisualReferenceId@UiaEndpointNotifier@@UEAAJU_GUID@@_K@Z
    virtual long SetDefaultVisualReferenceId(_GUID, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterEndpoint@UiaEndpointNotifier@@UEAAJXZ
    virtual long UnregisterEndpoint();
};
