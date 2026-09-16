#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 25 member(s).
class UiaManagerImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddViewIdToWindowRegistration@UiaManagerImpl@@UEAAJIIE@Z
    virtual long AddViewIdToWindowRegistration(unsigned int, unsigned int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAutomationConnection@UiaManagerImpl@@UEAAJU_GUID@@PEBGI@Z
    virtual long CreateAutomationConnection(_GUID, unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAutomationConnection@UiaManagerImpl@@UEAAJIPEBGI@Z
    virtual long CreateAutomationConnection(unsigned int, unsigned short const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCrossMachineHwndHostId@UiaManagerImpl@@UEAAJU__MIDL___MIDL_itf_uiamanager_0000_0030_0001@@PEAU__MIDL___MIDL_itf_uiamanager_0000_0025_0002@@@Z
    virtual long GetCrossMachineHwndHostId(__MIDL___MIDL_itf_uiamanager_0000_0030_0001, __MIDL___MIDL_itf_uiamanager_0000_0025_0002*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCrossMachineServices@UiaManagerImpl@@UEAAJU_GUID@@PEAPEAUIUiaCrossMachineServices@@@Z
    virtual long GetCrossMachineServices(_GUID, IUiaCrossMachineServices * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEndpointHostId@UiaManagerImpl@@UEAAJU_GUID@@PEAHPEAU__MIDL___MIDL_itf_uiamanager_0000_0025_0002@@@Z
    virtual long GetEndpointHostId(_GUID, int *, __MIDL___MIDL_itf_uiamanager_0000_0025_0002*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEndpointProcessInfo@UiaManagerImpl@@UEAAJU_GUID@@PEAIPEAPEAG22@Z
    virtual long GetEndpointProcessInfo(_GUID, unsigned int *, unsigned short * *, unsigned short * *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExecutableFileName@UiaManagerImpl@@UEAAJIPEAPEAG@Z
    virtual long GetExecutableFileName(unsigned int, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterCrossMachineHwndHost@UiaManagerImpl@@UEAAJU__MIDL___MIDL_itf_uiamanager_0000_0030_0001@@U__MIDL___MIDL_itf_uiamanager_0000_0025_0002@@@Z
    virtual long RegisterCrossMachineHwndHost(__MIDL___MIDL_itf_uiamanager_0000_0030_0001, __MIDL___MIDL_itf_uiamanager_0000_0025_0002);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterCrossMachineServices@UiaManagerImpl@@UEAAJU_GUID@@PEAUIUiaCrossMachineServices@@@Z
    virtual long RegisterCrossMachineServices(_GUID, IUiaCrossMachineServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterEndpoint@UiaManagerImpl@@UEAAJU_GUID@@IPEAUIUiaEndpointNotifierCallback@@PEAPEAUIUiaEndpointRegistrationToken@@@Z
    virtual long RegisterEndpoint(_GUID, unsigned int, IUiaEndpointNotifierCallback *, IUiaEndpointRegistrationToken * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterEndpointHostAsEndpointId@UiaManagerImpl@@UEAAJU_GUID@@0@Z
    virtual long RegisterEndpointHostAsEndpointId(_GUID, _GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterEndpointHostAsHwnd@UiaManagerImpl@@UEAAJU_GUID@@PEAUHWND__@@@Z
    virtual long RegisterEndpointHostAsHwnd(_GUID, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterEndpointHostAsViewInstanceId@UiaManagerImpl@@UEAAJU_GUID@@I@Z
    virtual long RegisterEndpointHostAsViewInstanceId(_GUID, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWindow@UiaManagerImpl@@UEAAJIPEAUIUiaWindowNotifierCallback@@PEAPEAUIUiaWindowRegistrationToken@@@Z
    virtual long RegisterWindow(unsigned int, IUiaWindowNotifierCallback *, IUiaWindowRegistrationToken * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveEndpointRegistration@UiaManagerImpl@@QEAAXU_GUID@@@Z
    void RemoveEndpointRegistration(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveNamedPipeFromVailContainer@UiaManagerImpl@@UEAAJU_GUID@@PEBG1@Z
    virtual long RemoveNamedPipeFromVailContainer(_GUID, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveWindowRegistration@UiaManagerImpl@@QEAAXII@Z
    void RemoveWindowRegistration(unsigned int, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UiaManagerImpl@@QEAA@XZ
    UiaManagerImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterCrossMachineHwndHost@UiaManagerImpl@@UEAAJU__MIDL___MIDL_itf_uiamanager_0000_0030_0001@@@Z
    virtual long UnregisterCrossMachineHwndHost(__MIDL___MIDL_itf_uiamanager_0000_0030_0001);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterCrossMachineServices@UiaManagerImpl@@UEAAJU_GUID@@@Z
    virtual long UnregisterCrossMachineServices(_GUID);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UiaManagerImpl@@UEAA@XZ
    virtual ~UiaManagerImpl();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUiaManagerEndpointStateNotifier@UiaManagerImpl@@AEAA?AV?$ComPtr@UIUiaManagerEndpointStateNotifierSink@@@WRL@Microsoft@@XZ
    WindissectOpaque GetUiaManagerEndpointStateNotifier();
};
