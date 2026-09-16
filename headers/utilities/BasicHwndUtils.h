#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 33 member(s).
class BasicHwndUtils {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBaseClassName@BasicHwndUtils@@SAJPEAUHWND__@@AEAUUIA_TIMEOUTDATA@@PEAGH@Z
    static long GetBaseClassName(HWND__*, UIA_TIMEOUTDATA &, unsigned short *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanUiaSynthesizeNonClientAreaProvider@BasicHwndUtils@@SA_NPEAUHWND__@@@Z
    static bool GetCanUiaSynthesizeNonClientAreaProvider(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComboBoxInfoTimeout@BasicHwndUtils@@SAJPEAUHWND__@@AEAUUIA_TIMEOUTDATA@@PEAUtagCOMBOBOXINFO@@PEAH@Z
    static long GetComboBoxInfoTimeout(HWND__*, UIA_TIMEOUTDATA &, tagCOMBOBOXINFO *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComboFromList@BasicHwndUtils@@SAJPEAUHWND__@@AEAUUIA_TIMEOUTDATA@@PEAPEAU2@@Z
    static long GetComboFromList(HWND__*, UIA_TIMEOUTDATA &, HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHwndCanMove@BasicHwndUtils@@SAJPEAUHWND__@@PEAH@Z
    static long GetHwndCanMove(HWND__*, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHwndFocus@BasicHwndUtils@@SAJPEAPEAUHWND__@@@Z
    static long GetHwndFocus(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHwndPropertyIndex@BasicHwndUtils@@SA_KH@Z
    static uint64_t GetHwndPropertyIndex(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetListFromCombo@BasicHwndUtils@@SAJPEAUHWND__@@AEAUUIA_TIMEOUTDATA@@PEAPEAU2@@Z
    static long GetListFromCombo(HWND__*, UIA_TIMEOUTDATA &, HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValue@BasicHwndUtils@@SAJPEAUHWND__@@HAEAUUIA_TIMEOUTDATA@@PEAUtagVARIANT@@@Z
    static long GetPropertyValue(HWND__*, int, UIA_TIMEOUTDATA &, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealOwner@BasicHwndUtils@@SAPEAUHWND__@@PEAU2@@Z
    static HWND__* GetRealOwner(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealProcessId@BasicHwndUtils@@SAKPEAUHWND__@@@Z
    static unsigned long GetRealProcessId(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWinFormsId@BasicHwndUtils@@SAJPEAUHWND__@@AEAUUIA_TIMEOUTDATA@@PEAPEAG@Z
    static long GetWinFormsId(HWND__*, UIA_TIMEOUTDATA &, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowTextAsBstr@BasicHwndUtils@@SAJPEAUHWND__@@AEAUUIA_TIMEOUTDATA@@PEAPEAG@Z
    static long GetWindowTextAsBstr(HWND__*, UIA_TIMEOUTDATA &, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowVisibility@BasicHwndUtils@@SA?AW4WindowVisibility@1@PEAUHWND__@@@Z
    static int GetWindowVisibility(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HwndMove@BasicHwndUtils@@SAJPEAUHWND__@@NN@Z
    static long HwndMove(HWND__*, double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HwndSetFocus@BasicHwndUtils@@SAHPEAUHWND__@@@Z
    static int HwndSetFocus(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCrossMachineRoot@BasicHwndUtils@@SA_NPEAUHWND__@@@Z
    static bool IsCrossMachineRoot(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsKnownBadWmGetObjectImpl@BasicHwndUtils@@SA_NPEAUHWND__@@AEBUUIA_TIMEOUTDATA@@@Z
    static bool IsKnownBadWmGetObjectImpl(HWND__*, UIA_TIMEOUTDATA const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRemoteAppMarkerWindow@BasicHwndUtils@@SA_NPEAUHWND__@@@Z
    static bool IsRemoteAppMarkerWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsScrollable@BasicHwndUtils@@SA_NPEAUHWND__@@H@Z
    static bool IsScrollable(HWND__*, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTopLevelWindow@BasicHwndUtils@@SAHPEAUHWND__@@@Z
    static int IsTopLevelWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWinFormsControl@BasicHwndUtils@@SAHPEAUHWND__@@@Z
    static int IsWinFormsControl(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowPatternWindow@BasicHwndUtils@@SAHPEAUHWND__@@@Z
    static int IsWindowPatternWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowReallyEnabled@BasicHwndUtils@@SAHPEAUHWND__@@@Z
    static int IsWindowReallyEnabled(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowVisibilityOverridden@BasicHwndUtils@@SA?AW4VisibilityOverride@1@PEAUHWND__@@@Z
    static int IsWindowVisibilityOverridden(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollCursor@BasicHwndUtils@@SA_NPEAUHWND__@@W4ScrollAmount@@HAEAUUIA_TIMEOUTDATA@@@Z
    static bool ScrollCursor(HWND__*, int, int, UIA_TIMEOUTDATA &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendKeyboardInputVK@BasicHwndUtils@@SAXEHK@Z
    static void SendKeyboardInputVK(unsigned char, int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendKeyboardPressUnmodified@BasicHwndUtils@@SAXE@Z
    static void SendKeyboardPressUnmodified(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMessageWithSharedBuffer@BasicHwndUtils@@SAJPEAUHWND__@@I_KAEAUUIA_TIMEOUTDATA@@PEAXK@Z
    static long SendMessageWithSharedBuffer(HWND__*, unsigned int, uint64_t, UIA_TIMEOUTDATA &, void *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowPlacementHelper@BasicHwndUtils@@SA_NPEAUHWND__@@PEBUtagWINDOWPLACEMENT@@@Z
    static bool SetWindowPlacementHelper(HWND__*, tagWINDOWPLACEMENT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIASendMessageTimeout@BasicHwndUtils@@SAJAEBUUIA_TIMEOUTDATA@@PEAUHWND__@@I_K_JPEA_J@Z
    static long UIASendMessageTimeout(UIA_TIMEOUTDATA const &, HWND__*, unsigned int, uint64_t, int64_t, int64_t *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescendantFromPointInternal@BasicHwndUtils@@CAPEAUHWND__@@PEAU2@UtagPOINT@@AEAUUIA_TIMEOUTDATA@@I@Z
    static HWND__* GetDescendantFromPointInternal(HWND__*, tagPOINT, UIA_TIMEOUTDATA &, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTransparentWindowAccProvider@BasicHwndUtils@@CA_NPEAUHWND__@@KAEAUUIA_TIMEOUTDATA@@@Z
    static bool IsTransparentWindowAccProvider(HWND__*, unsigned long, UIA_TIMEOUTDATA &);
};
