#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 3 member(s).
class WinEventBuffer {
public:
    class BufferedData;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@WinEventBuffer@@QEAAXAEBUWinEvent@@@Z
    void Insert(WinEvent const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WinEventBuffer@@QEAA@XZ
    ~WinEventBuffer();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAndClear@WinEventBuffer@@AEAA?AUBufferedData@1@XZ
    WindissectOpaque GetAndClear();
};
