#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 48 member(s).
class UiaManagerCrossMachineStub {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAutomationConnectionForHwnd@UiaManagerCrossMachineStub@@UEAAJPEAUHWND__@@IIHPEA_KPEA_J@Z
    virtual long CreateAutomationConnectionForHwnd(HWND__*, unsigned int, unsigned int, int, uint64_t *, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAutomationConnectionForViewId@UiaManagerCrossMachineStub@@UEAAJIPEBGIPEA_J@Z
    virtual long CreateAutomationConnectionForViewId(unsigned int, unsigned short const *, unsigned int, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWinEventRegistered@UiaManagerCrossMachineStub@@UEAAJI@Z
    virtual long EnsureWinEventRegistered(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanUiaSynthesizeNonClientAreaProvider@UiaManagerCrossMachineStub@@UEAAJPEAUHWND__@@PEAH@Z
    virtual long GetCanUiaSynthesizeNonClientAreaProvider(HWND__*, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositionInputSinkViewInstanceIdFromPoint@UiaManagerCrossMachineStub@@UEAAJUtagPOINT@@PEAI@Z
    virtual long GetCompositionInputSinkViewInstanceIdFromPoint(tagPOINT, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreWindowBounds@UiaManagerCrossMachineStub@@UEAAJIPEAUtagRECT@@@Z
    virtual long GetCoreWindowBounds(unsigned int, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentViews@UiaManagerCrossMachineStub@@UEAAJPEAPEAUtagSAFEARRAY@@0PEAI@Z
    virtual long GetCurrentViews(tagSAFEARRAY * *, tagSAFEARRAY * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescendantHwndFromPoint@UiaManagerCrossMachineStub@@UEAAJPEAUHWND__@@UtagPOINT@@PEAPEAU2@@Z
    virtual long GetDescendantHwndFromPoint(HWND__*, tagPOINT, HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesktopWindowHwnd@UiaManagerCrossMachineStub@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetDesktopWindowHwnd(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEmbeddedHwndFragmentRoots@UiaManagerCrossMachineStub@@UEAAJPEAUHWND__@@PEAPEAUtagSAFEARRAY@@@Z
    virtual long GetEmbeddedHwndFragmentRoots(HWND__*, tagSAFEARRAY * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstHwndChild@UiaManagerCrossMachineStub@@UEAAJPEAUHWND__@@PEAPEAU2@@Z
    virtual long GetFirstHwndChild(HWND__*, HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHostViewInstanceId@UiaManagerCrossMachineStub@@UEAAJIPEAI@Z
    virtual long GetHostViewInstanceId(unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHwndClassName@UiaManagerCrossMachineStub@@UEAAJPEAUHWND__@@PEAPEAG@Z
    virtual long GetHwndClassName(HWND__*, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHwndDescendants@UiaManagerCrossMachineStub@@UEAAJPEAUHWND__@@PEAPEAUtagSAFEARRAY@@1@Z
    virtual long GetHwndDescendants(HWND__*, tagSAFEARRAY * *, tagSAFEARRAY * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHwndFocus@UiaManagerCrossMachineStub@@UEAAJPEAPEAUHWND__@@0@Z
    virtual long GetHwndFocus(HWND__* *, HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHwndFromViewId@UiaManagerCrossMachineStub@@UEAAJIPEAPEAUHWND__@@@Z
    virtual long GetHwndFromViewId(unsigned int, HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHwndInfo@UiaManagerCrossMachineStub@@UEAAJPEAUHWND__@@PEAUCrossMachineHwndInfo@@@Z
    virtual long GetHwndInfo(HWND__*, CrossMachineHwndInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHwndParent@UiaManagerCrossMachineStub@@UEAAJPEAUHWND__@@PEAPEAU2@1@Z
    virtual long GetHwndParent(HWND__*, HWND__* *, HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHwndStyle@UiaManagerCrossMachineStub@@UEAAJPEAUHWND__@@PEAH@Z
    virtual long GetHwndStyle(HWND__*, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHwndWindowRect@UiaManagerCrossMachineStub@@UEAAJPEAUHWND__@@PEAUtagRECT@@@Z
    virtual long GetHwndWindowRect(HWND__*, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastHwndChild@UiaManagerCrossMachineStub@@UEAAJPEAUHWND__@@PEAPEAU2@@Z
    virtual long GetLastHwndChild(HWND__*, HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextHwndSibling@UiaManagerCrossMachineStub@@UEAAJPEAUHWND__@@PEAPEAU2@@Z
    virtual long GetNextHwndSibling(HWND__*, HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreviousHwndSibling@UiaManagerCrossMachineStub@@UEAAJPEAUHWND__@@PEAPEAU2@@Z
    virtual long GetPreviousHwndSibling(HWND__*, HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessAppIdentity@UiaManagerCrossMachineStub@@UEAAJHPEAPEAG0@Z
    virtual long GetProcessAppIdentity(int, unsigned short * *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessId@UiaManagerCrossMachineStub@@UEAAJPEAUHWND__@@PEAI@Z
    virtual long GetProcessId(HWND__*, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValue@UiaManagerCrossMachineStub@@UEAAJPEAUHWND__@@HPEAUtagVARIANT@@@Z
    virtual long GetPropertyValue(HWND__*, int, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewIdFromHwnd@UiaManagerCrossMachineStub@@UEAAJPEAUHWND__@@PEAI@Z
    virtual long GetViewIdFromHwnd(HWND__*, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowVisibility@UiaManagerCrossMachineStub@@UEAAJPEAUHWND__@@PEAH1PEAI@Z
    virtual long GetWindowVisibility(HWND__*, int *, int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HwndMove@UiaManagerCrossMachineStub@@UEAAJPEAUHWND__@@NN@Z
    virtual long HwndMove(HWND__*, double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HwndScroll@UiaManagerCrossMachineStub@@UEAAJPEAUHWND__@@HH@Z
    virtual long HwndScroll(HWND__*, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCoreWindowActive@UiaManagerCrossMachineStub@@UEAAJIPEAH@Z
    virtual long IsCoreWindowActive(unsigned int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindow@UiaManagerCrossMachineStub@@UEAAJPEAUHWND__@@PEAH@Z
    virtual long IsWindow(HWND__*, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowPatternWindow@UiaManagerCrossMachineStub@@UEAAJPEAUHWND__@@PEAH@Z
    virtual long IsWindowPatternWindow(HWND__*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@UiaManagerCrossMachineStub@@QEAAJAEBU_GUID@@@Z
    long RuntimeClassInitialize(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocus@UiaManagerCrossMachineStub@@UEAAJPEAUHWND__@@@Z
    virtual long SetFocus(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSurrogateWindow@UiaManagerCrossMachineStub@@UEAAJPEAUHWND__@@0I@Z
    virtual long SetSurrogateWindow(HWND__*, HWND__*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalPipeReadyEvent@UiaManagerCrossMachineStub@@UEAAJ_K@Z
    virtual long SignalPipeReadyEvent(uint64_t);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UiaManagerCrossMachineStub@@QEAA@XZ
    UiaManagerCrossMachineStub();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UiaManagerCrossMachineStub@@UEAA@XZ
    virtual ~UiaManagerCrossMachineStub();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCuiBrokerInitialized@UiaManagerCrossMachineStub@@AEAAJXZ
    long EnsureCuiBrokerInitialized();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlatformSpecificSecurityAttributes@UiaManagerCrossMachineStub@@AEAAJIPEAU_SECURITY_ATTRIBUTES@@@Z
    long GetPlatformSpecificSecurityAttributes(unsigned int, _SECURITY_ATTRIBUTES *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSurrogateHwnd@UiaManagerCrossMachineStub@@AEAAPEAUHWND__@@PEAU2@@Z
    HWND__* GetSurrogateHwnd(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsComponentViewRoot@UiaManagerCrossMachineStub@@AEAA_NPEAUHWND__@@@Z
    bool IsComponentViewRoot(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFocusIgnoredPopupWindow@UiaManagerCrossMachineStub@@AEAA_NPEAUHWND__@@@Z
    bool IsFocusIgnoredPopupWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareRequestHandlers@UiaManagerCrossMachineStub@@AEAAXXZ
    void PrepareRequestHandlers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForRelevantWinEvents@UiaManagerCrossMachineStub@@AEAAXXZ
    void RegisterForRelevantWinEvents();
};
