#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 23 member(s).
namespace UiaManagerProto {
class EventPayloadMsg {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ByteSizeLong@EventPayloadMsg@UiaManagerProto@@UEBA_KXZ
    virtual uint64_t ByteSizeLong() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckTypeAndMergeFrom@EventPayloadMsg@UiaManagerProto@@UEAAXAEBVMessageLite@protobuf@google@@@Z
    virtual void CheckTypeAndMergeFrom(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@EventPayloadMsg@UiaManagerProto@@UEAAXXZ
    virtual void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedSize@EventPayloadMsg@UiaManagerProto@@UEBAHXZ
    virtual int GetCachedSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitialized@EventPayloadMsg@UiaManagerProto@@UEBA_NXZ
    virtual bool IsInitialized() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeFrom@EventPayloadMsg@UiaManagerProto@@QEAAXAEBV12@@Z
    void MergeFrom(::UiaManagerProto::EventPayloadMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?New@EventPayloadMsg@UiaManagerProto@@UEBAPEAV12@PEAVArena@protobuf@google@@@Z
    virtual ::UiaManagerProto::EventPayloadMsg * New(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalParse@EventPayloadMsg@UiaManagerProto@@UEAAPEBDPEBDPEAVParseContext@internal@protobuf@google@@@Z
    virtual char const * _InternalParse(char const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalSerialize@EventPayloadMsg@UiaManagerProto@@UEBAPEAEPEAEPEAVEpsCopyOutputStream@io@protobuf@google@@@Z
    virtual unsigned char * _InternalSerialize(unsigned char *, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?clear_payload@EventPayloadMsg@UiaManagerProto@@QEAAXXZ
    void clear_payload();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EventPayloadMsg@UiaManagerProto@@UEAA@XZ
    virtual ~EventPayloadMsg();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EventPayloadMsg@UiaManagerProto@@IEAA@PEAVArena@protobuf@google@@_N@Z
    EventPayloadMsg(WindissectOpaque *, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_active_view_changed_payload@EventPayloadMsg@UiaManagerProto@@AEAAPEAVActiveViewChangedEventMsg@2@XZ
    ::UiaManagerProto::ActiveViewChangedEventMsg * _internal_mutable_active_view_changed_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_stub_connected_payload@EventPayloadMsg@UiaManagerProto@@AEAAPEAVStubConnectedEventMsg@2@XZ
    ::UiaManagerProto::StubConnectedEventMsg * _internal_mutable_stub_connected_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_version_exchange_payload@EventPayloadMsg@UiaManagerProto@@AEAAPEAVVersionExchangeEventMsg@2@XZ
    ::UiaManagerProto::VersionExchangeEventMsg * _internal_mutable_version_exchange_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_view_added_payload@EventPayloadMsg@UiaManagerProto@@AEAAPEAVViewAddedEventMsg@2@XZ
    ::UiaManagerProto::ViewAddedEventMsg * _internal_mutable_view_added_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_view_manager_connected_payload@EventPayloadMsg@UiaManagerProto@@AEAAPEAVViewManagerConnectedEventMsg@2@XZ
    ::UiaManagerProto::ViewManagerConnectedEventMsg * _internal_mutable_view_manager_connected_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_view_manager_disconnected_payload@EventPayloadMsg@UiaManagerProto@@AEAAPEAVViewManagerDisconnectedEventMsg@2@XZ
    ::UiaManagerProto::ViewManagerDisconnectedEventMsg * _internal_mutable_view_manager_disconnected_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_view_removed_payload@EventPayloadMsg@UiaManagerProto@@AEAAPEAVViewRemovedEventMsg@2@XZ
    ::UiaManagerProto::ViewRemovedEventMsg * _internal_mutable_view_removed_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_view_replaced_payload@EventPayloadMsg@UiaManagerProto@@AEAAPEAVViewReplacedEventMsg@2@XZ
    ::UiaManagerProto::ViewReplacedEventMsg * _internal_mutable_view_replaced_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_win_event_payload@EventPayloadMsg@UiaManagerProto@@AEAAPEAVWinEventMsg@2@XZ
    ::UiaManagerProto::WinEventMsg * _internal_mutable_win_event_payload();
};
} // namespace UiaManagerProto
