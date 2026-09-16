#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 21 member(s).
class NamedPipeChannel {
public:
    class EventHandlers;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsConnectionBroken@NamedPipeChannel@@UEBA_NXZ
    virtual bool IsConnectionBroken() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartConnection@NamedPipeChannel@@UEAAXXZ
    virtual void StartConnection();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NamedPipeChannel@@UEAA@XZ
    virtual ~NamedPipeChannel();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitPartialReadMessage@NamedPipeChannel@@AEAAXK@Z
    void CommitPartialReadMessage(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disconnect@NamedPipeChannel@@AEAAXXZ
    void Disconnect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoRead@NamedPipeChannel@@AEAA_NXZ
    bool DoRead();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalizePendingRead@NamedPipeChannel@@AEAA_NXZ
    bool FinalizePendingRead();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalizeWrite@NamedPipeChannel@@AEAAXXZ
    void FinalizeWrite();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleIoFailure@NamedPipeChannel@@AEAA?AW4IoFailure@1@XZ
    int HandleIoFailure();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyReadCompleted@NamedPipeChannel@@AEAAXXZ
    void NotifyReadCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnect@NamedPipeChannel@@AEAAXXZ
    void OnConnect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWriteQueued@NamedPipeChannel@@AEAAXXZ
    void OnWriteQueued();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunOnce@NamedPipeChannel@@AEAAJXZ
    long RunOnce();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetChannelState@NamedPipeChannel@@AEAAXW4ChannelState@1@@Z
    void SetChannelState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupEventsForActiveConnection@NamedPipeChannel@@AEAAXXZ
    void SetupEventsForActiveConnection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupEventsForPendingConnection@NamedPipeChannel@@AEAAXXZ
    void SetupEventsForPendingConnection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartConnect@NamedPipeChannel@@AEAAXXZ
    void StartConnect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartRead@NamedPipeChannel@@AEAAXXZ
    void StartRead();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartWrite@NamedPipeChannel@@AEAAXXZ
    void StartWrite();
};
