#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 51 member(s).
class UiaManagerCrossMachineProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Advise@UiaManagerCrossMachineProxy@@UEAAJPEAUIUiaManagerCrossMachineEventSink@@PEAUIUiaManagerLifetimeNotifier@@PEAPEAUIUiaManagerCrossMachineEventSinkRegistrationToken@@@Z
    virtual long Advise(IUiaManagerCrossMachineEventSink *, IUiaManagerLifetimeNotifier *, IUiaManagerCrossMachineEventSinkRegistrationToken * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAutomationConnectionForHwnd@UiaManagerCrossMachineProxy@@UEAAJPEAUHWND__@@IIHPEA_KPEA_J@Z
    virtual long CreateAutomationConnectionForHwnd(HWND__*, unsigned int, unsigned int, int, uint64_t *, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAutomationConnectionForViewId@UiaManagerCrossMachineProxy@@UEAAJIPEBGIPEA_J@Z
    virtual long CreateAutomationConnectionForViewId(unsigned int, unsigned short const *, unsigned int, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWinEventRegistered@UiaManagerCrossMachineProxy@@UEAAJI@Z
    virtual long EnsureWinEventRegistered(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanUiaSynthesizeNonClientAreaProvider@UiaManagerCrossMachineProxy@@UEAAJPEAUHWND__@@PEAH@Z
    virtual long GetCanUiaSynthesizeNonClientAreaProvider(HWND__*, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositionInputSinkViewInstanceIdFromPoint@UiaManagerCrossMachineProxy@@UEAAJUtagPOINT@@PEAI@Z
    virtual long GetCompositionInputSinkViewInstanceIdFromPoint(tagPOINT, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreWindowBounds@UiaManagerCrossMachineProxy@@UEAAJIPEAUtagRECT@@@Z
    virtual long GetCoreWindowBounds(unsigned int, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentViews@UiaManagerCrossMachineProxy@@UEAAJPEAPEAUtagSAFEARRAY@@0PEAI@Z
    virtual long GetCurrentViews(tagSAFEARRAY * *, tagSAFEARRAY * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescendantHwndFromPoint@UiaManagerCrossMachineProxy@@UEAAJPEAUHWND__@@UtagPOINT@@PEAPEAU2@@Z
    virtual long GetDescendantHwndFromPoint(HWND__*, tagPOINT, HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesktopWindowHwnd@UiaManagerCrossMachineProxy@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetDesktopWindowHwnd(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEmbeddedHwndFragmentRoots@UiaManagerCrossMachineProxy@@UEAAJPEAUHWND__@@PEAPEAUtagSAFEARRAY@@@Z
    virtual long GetEmbeddedHwndFragmentRoots(HWND__*, tagSAFEARRAY * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstHwndChild@UiaManagerCrossMachineProxy@@UEAAJPEAUHWND__@@PEAPEAU2@@Z
    virtual long GetFirstHwndChild(HWND__*, HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHostViewInstanceId@UiaManagerCrossMachineProxy@@UEAAJIPEAI@Z
    virtual long GetHostViewInstanceId(unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHwndClassName@UiaManagerCrossMachineProxy@@UEAAJPEAUHWND__@@PEAPEAG@Z
    virtual long GetHwndClassName(HWND__*, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHwndDescendants@UiaManagerCrossMachineProxy@@UEAAJPEAUHWND__@@PEAPEAUtagSAFEARRAY@@1@Z
    virtual long GetHwndDescendants(HWND__*, tagSAFEARRAY * *, tagSAFEARRAY * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHwndFocus@UiaManagerCrossMachineProxy@@UEAAJPEAPEAUHWND__@@0@Z
    virtual long GetHwndFocus(HWND__* *, HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHwndFromViewId@UiaManagerCrossMachineProxy@@UEAAJIPEAPEAUHWND__@@@Z
    virtual long GetHwndFromViewId(unsigned int, HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHwndParent@UiaManagerCrossMachineProxy@@UEAAJPEAUHWND__@@PEAPEAU2@1@Z
    virtual long GetHwndParent(HWND__*, HWND__* *, HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHwndStyle@UiaManagerCrossMachineProxy@@UEAAJPEAUHWND__@@PEAH@Z
    virtual long GetHwndStyle(HWND__*, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHwndWindowRect@UiaManagerCrossMachineProxy@@UEAAJPEAUHWND__@@PEAUtagRECT@@@Z
    virtual long GetHwndWindowRect(HWND__*, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastHwndChild@UiaManagerCrossMachineProxy@@UEAAJPEAUHWND__@@PEAPEAU2@@Z
    virtual long GetLastHwndChild(HWND__*, HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextHwndSibling@UiaManagerCrossMachineProxy@@UEAAJPEAUHWND__@@PEAPEAU2@@Z
    virtual long GetNextHwndSibling(HWND__*, HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreviousHwndSibling@UiaManagerCrossMachineProxy@@UEAAJPEAUHWND__@@PEAPEAU2@@Z
    virtual long GetPreviousHwndSibling(HWND__*, HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessAppIdentity@UiaManagerCrossMachineProxy@@UEAAJHPEAPEAG0@Z
    virtual long GetProcessAppIdentity(int, unsigned short * *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessId@UiaManagerCrossMachineProxy@@UEAAJPEAUHWND__@@PEAI@Z
    virtual long GetProcessId(HWND__*, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValue@UiaManagerCrossMachineProxy@@UEAAJPEAUHWND__@@HPEAUtagVARIANT@@@Z
    virtual long GetPropertyValue(HWND__*, int, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewIdFromHwnd@UiaManagerCrossMachineProxy@@UEAAJPEAUHWND__@@PEAI@Z
    virtual long GetViewIdFromHwnd(HWND__*, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowVisibility@UiaManagerCrossMachineProxy@@UEAAJPEAUHWND__@@PEAH1PEAI@Z
    virtual long GetWindowVisibility(HWND__*, int *, int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HwndMove@UiaManagerCrossMachineProxy@@UEAAJPEAUHWND__@@NN@Z
    virtual long HwndMove(HWND__*, double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HwndScroll@UiaManagerCrossMachineProxy@@UEAAJPEAUHWND__@@HH@Z
    virtual long HwndScroll(HWND__*, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCoreWindowActive@UiaManagerCrossMachineProxy@@UEAAJIPEAH@Z
    virtual long IsCoreWindowActive(unsigned int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindow@UiaManagerCrossMachineProxy@@UEAAJPEAUHWND__@@PEAH@Z
    virtual long IsWindow(HWND__*, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowPatternWindow@UiaManagerCrossMachineProxy@@UEAAJPEAUHWND__@@PEAH@Z
    virtual long IsWindowPatternWindow(HWND__*, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocus@UiaManagerCrossMachineProxy@@UEAAJPEAUHWND__@@@Z
    virtual long SetFocus(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSurrogateWindow@UiaManagerCrossMachineProxy@@UEAAJPEAUHWND__@@0I@Z
    virtual long SetSurrogateWindow(HWND__*, HWND__*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalPipeReadyEvent@UiaManagerCrossMachineProxy@@UEAAJ_K@Z
    virtual long SignalPipeReadyEvent(uint64_t);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UiaManagerCrossMachineProxy@@QEAA@XZ
    UiaManagerCrossMachineProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unadvise@UiaManagerCrossMachineProxy@@UEAAJK@Z
    virtual long Unadvise(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UiaManagerCrossMachineProxy@@UEAA@XZ
    virtual ~UiaManagerCrossMachineProxy();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureGotCurrentViewsAndConnected@UiaManagerCrossMachineProxy@@AEAAJXZ
    long EnsureGotCurrentViewsAndConnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteGetHwndInfoService@UiaManagerCrossMachineProxy@@AEAA?AUHwndInfoPayload@@PEAUHWND__@@@Z
    HwndInfoPayload ExecuteGetHwndInfoService(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleOnActiveViewChangedEvent@UiaManagerCrossMachineProxy@@AEAAXUViewIdInfo@@@Z
    void HandleOnActiveViewChangedEvent(ViewIdInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleOnViewAddedEvent@UiaManagerCrossMachineProxy@@AEAAXUViewIdInfo@@@Z
    void HandleOnViewAddedEvent(ViewIdInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleOnViewRemovedEvent@UiaManagerCrossMachineProxy@@AEAAXI@Z
    void HandleOnViewRemovedEvent(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleOnViewReplacedEvent@UiaManagerCrossMachineProxy@@AEAAXIUViewIdInfo@@@Z
    void HandleOnViewReplacedEvent(unsigned int, ViewIdInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertHwndCacheEntry@UiaManagerCrossMachineProxy@@AEAAXPEAUHWND__@@AEAUHwndInfoPayload@@@Z
    void InsertHwndCacheEntry(HWND__*, HwndInfoPayload &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareEventHandlers@UiaManagerCrossMachineProxy@@AEAAXXZ
    void PrepareEventHandlers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreprocessCrossMachineWinEvent@UiaManagerCrossMachineProxy@@AEAAXIPEAUHWND__@@_NHH@Z
    void PreprocessCrossMachineWinEvent(unsigned int, HWND__*, bool, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendWinEventToSinks@UiaManagerCrossMachineProxy@@AEAAXIPEAUHWND__@@HH@Z
    void SendWinEventToSinks(unsigned int, HWND__*, int, int);
};
