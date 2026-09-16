#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 8 member(s).
class UiaManagerServiceHostComponent {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@UiaManagerServiceHostComponent@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UiaManagerServiceHostComponent@@QEAA@XZ
    UiaManagerServiceHostComponent();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UiaManagerServiceHostComponent@@UEAA@XZ
    virtual ~UiaManagerServiceHostComponent();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_PublishServices@UiaManagerServiceHostComponent@@MEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z
    virtual long v_PublishServices(IServiceProvider *, IProfferService *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_ShutdownServices@UiaManagerServiceHostComponent@@MEAAJPEAUIProfferService@@@Z
    virtual long v_ShutdownServices(IProfferService *);
};
