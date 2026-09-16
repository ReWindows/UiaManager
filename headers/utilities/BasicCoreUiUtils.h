#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 6 member(s).
class BasicCoreUiUtils {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewIdFromHwnd@BasicCoreUiUtils@@SAJPEAUIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@@PEAUHWND__@@PEAI@Z
    static long GetViewIdFromHwnd(::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics *, HWND__*, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewIdFromWindow@BasicCoreUiUtils@@SAIPEAUIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@@AEBUWindow@3456winrt@@@Z
    static unsigned int GetViewIdFromWindow(::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics *, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCoreWindow@BasicCoreUiUtils@@SA_NPEAUHWND__@@@Z
    static bool IsCoreWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowVisible@BasicCoreUiUtils@@SA_NPEAUIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@@AEBUWindow@3456winrt@@@Z
    static bool IsWindowVisible(::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetWindowFromViewId@BasicCoreUiUtils@@SA?AUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@PEAUIAppViewStatics@3456@I@Z
    static WindissectOpaque TryGetWindowFromViewId(::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics *, unsigned int);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppView@BasicCoreUiUtils@@CA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@PEAUIAppViewStatics@3456@AEBUWindow@34567@@Z
    static WindissectOpaque GetAppView(::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics *, WindissectOpaque const &);
};
