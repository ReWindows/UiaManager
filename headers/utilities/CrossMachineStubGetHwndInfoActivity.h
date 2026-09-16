#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 4 member(s).
namespace UiaManagerTraceLoggingProvider {
class CrossMachineStubGetHwndInfoActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CrossMachineStubGetHwndInfoActivity@UiaManagerTraceLoggingProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CrossMachineStubGetHwndInfoActivity@UiaManagerTraceLoggingProvider@@QEAA@XZ
    ~CrossMachineStubGetHwndInfoActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CrossMachineStubGetHwndInfoActivity@UiaManagerTraceLoggingProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CrossMachineStubGetHwndInfoActivity@UiaManagerTraceLoggingProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace UiaManagerTraceLoggingProvider
