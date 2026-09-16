#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 20 member(s).
namespace UiaManagerProto {
class UiaManagerMsg {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ByteSizeLong@UiaManagerMsg@UiaManagerProto@@UEBA_KXZ
    virtual uint64_t ByteSizeLong() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckTypeAndMergeFrom@UiaManagerMsg@UiaManagerProto@@UEAAXAEBVMessageLite@protobuf@google@@@Z
    virtual void CheckTypeAndMergeFrom(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@UiaManagerMsg@UiaManagerProto@@UEAAXXZ
    virtual void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedSize@UiaManagerMsg@UiaManagerProto@@UEBAHXZ
    virtual int GetCachedSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitialized@UiaManagerMsg@UiaManagerProto@@UEBA_NXZ
    virtual bool IsInitialized() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeFrom@UiaManagerMsg@UiaManagerProto@@QEAAXAEBV12@@Z
    void MergeFrom(::UiaManagerProto::UiaManagerMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?New@UiaManagerMsg@UiaManagerProto@@UEBAPEAV12@PEAVArena@protobuf@google@@@Z
    virtual ::UiaManagerProto::UiaManagerMsg * New(WindissectOpaque *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UiaManagerMsg@UiaManagerProto@@QEAA@XZ
    UiaManagerMsg();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalParse@UiaManagerMsg@UiaManagerProto@@UEAAPEBDPEBDPEAVParseContext@internal@protobuf@google@@@Z
    virtual char const * _InternalParse(char const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalSerialize@UiaManagerMsg@UiaManagerProto@@UEBAPEAEPEAEPEAVEpsCopyOutputStream@io@protobuf@google@@@Z
    virtual unsigned char * _InternalSerialize(unsigned char *, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?clear_message_payload@UiaManagerMsg@UiaManagerProto@@QEAAXXZ
    void clear_message_payload();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UiaManagerMsg@UiaManagerProto@@UEAA@XZ
    virtual ~UiaManagerMsg();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UiaManagerMsg@UiaManagerProto@@IEAA@PEAVArena@protobuf@google@@_N@Z
    UiaManagerMsg(WindissectOpaque *, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalSwap@UiaManagerMsg@UiaManagerProto@@AEAAXPEAV12@@Z
    void InternalSwap(::UiaManagerProto::UiaManagerMsg *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_event_payload@UiaManagerMsg@UiaManagerProto@@AEAAPEAVEventPayloadMsg@2@XZ
    ::UiaManagerProto::EventPayloadMsg * _internal_mutable_event_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_request_payload@UiaManagerMsg@UiaManagerProto@@AEAAPEAVRequestPayloadMsg@2@XZ
    ::UiaManagerProto::RequestPayloadMsg * _internal_mutable_request_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_response_payload@UiaManagerMsg@UiaManagerProto@@AEAAPEAVResponsePayloadMsg@2@XZ
    ::UiaManagerProto::ResponsePayloadMsg * _internal_mutable_response_payload();
};
} // namespace UiaManagerProto
