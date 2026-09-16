#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 8 member(s).
class StubViewManagerEventsHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActiveViewChanged@StubViewManagerEventsHandler@@UEAAXUViewIdInfo@@@Z
    virtual void OnActiveViewChanged(ViewIdInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewAdded@StubViewManagerEventsHandler@@UEAAXUViewIdInfo@@@Z
    virtual void OnViewAdded(ViewIdInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewManagerDisconnected@StubViewManagerEventsHandler@@UEAAXXZ
    virtual void OnViewManagerDisconnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewRemoved@StubViewManagerEventsHandler@@UEAAXI@Z
    virtual void OnViewRemoved(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewReplaced@StubViewManagerEventsHandler@@UEAAXIUViewIdInfo@@@Z
    virtual void OnViewReplaced(unsigned int, ViewIdInfo);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StubViewManagerEventsHandler@@UEAA@XZ
    virtual ~StubViewManagerEventsHandler();
};
