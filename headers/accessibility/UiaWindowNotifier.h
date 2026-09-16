#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 8 member(s).
class UiaWindowNotifier {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddViewIdToWindowRegistration@UiaWindowNotifier@@UEAAJPEAUHWND__@@IE@Z
    virtual long AddViewIdToWindowRegistration(HWND__*, unsigned int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationConnection@UiaWindowNotifier@@UEAAJPEBGIE@Z
    virtual long OnCreateAutomationConnection(unsigned short const *, unsigned int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWindow@UiaWindowNotifier@@UEAAJPEAUHWND__@@@Z
    virtual long RegisterWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOnCreateAutomationConnectionCallback@UiaWindowNotifier@@UEAAJPEAUIUiaWindowNotifierOnCreateAutomationConnectionCallback@@@Z
    virtual long SetOnCreateAutomationConnectionCallback(IUiaWindowNotifierOnCreateAutomationConnectionCallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterWindow@UiaWindowNotifier@@UEAAJXZ
    virtual long UnregisterWindow();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UiaWindowNotifier@@UEAA@XZ
    virtual ~UiaWindowNotifier();
};
