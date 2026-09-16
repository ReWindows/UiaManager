#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 10 member(s).
class ContainerManagerApi {
public:
    class ClientContainerActivityData;
    class ContainerActivityGuard;
    class UnmapPipeContainerActivityContext;
    class UnmapPipeDataManager;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainerActivity@ContainerManagerApi@@QEAA?AVContainerActivityGuard@1@W4_CMS_CLIENT_ID@@W4_CMS_ACTIVITY_ID@@@Z
    WindissectOpaque GetContainerActivity(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshMachineUsage@ContainerManagerApi@@UEAA?AW4RemoteMachineStatus@ICrossMachineCommunicationServices@@XZ
    virtual int RefreshMachineUsage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartContainerActivitySynchronously@ContainerManagerApi@@QEAA?AVContainerActivityGuard@1@W4_CMS_CLIENT_ID@@W4_CMS_ACTIVITY_ID@@@Z
    WindissectOpaque StartContainerActivitySynchronously(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryEnsureMachineIsRunning@ContainerManagerApi@@UEAA?AW4RemoteMachineStatus@ICrossMachineCommunicationServices@@K@Z
    virtual int TryEnsureMachineIsRunning(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContainerManagerApi@@UEAA@XZ
    virtual ~ContainerManagerApi();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientActivityExpiredTimerHandler@ContainerManagerApi@@CAXU_GUID@@@Z
    static void ClientActivityExpiredTimerHandler(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientActivityNotificationCallback@ContainerManagerApi@@CAXPEAU_CMS_ACTIVITY_NOTIFICATION@@PEAX@Z
    static void ClientActivityNotificationCallback(_CMS_ACTIVITY_NOTIFICATION *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmapNamedPipesActivityNotificationCallback@ContainerManagerApi@@CAXPEAU_CMS_ACTIVITY_NOTIFICATION@@PEAX@Z
    static void UnmapNamedPipesActivityNotificationCallback(_CMS_ACTIVITY_NOTIFICATION *, void *);
};
