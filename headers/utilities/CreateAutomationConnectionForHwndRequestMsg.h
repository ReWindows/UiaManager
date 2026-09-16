#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 13 member(s).
namespace UiaManagerProto {
class CreateAutomationConnectionForHwndRequestMsg {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ByteSizeLong@CreateAutomationConnectionForHwndRequestMsg@UiaManagerProto@@UEBA_KXZ
    virtual uint64_t ByteSizeLong() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckTypeAndMergeFrom@CreateAutomationConnectionForHwndRequestMsg@UiaManagerProto@@UEAAXAEBVMessageLite@protobuf@google@@@Z
    virtual void CheckTypeAndMergeFrom(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CreateAutomationConnectionForHwndRequestMsg@UiaManagerProto@@UEAAXXZ
    virtual void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedSize@CreateAutomationConnectionForHwndRequestMsg@UiaManagerProto@@UEBAHXZ
    virtual int GetCachedSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitialized@CreateAutomationConnectionForHwndRequestMsg@UiaManagerProto@@UEBA_NXZ
    virtual bool IsInitialized() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeFrom@CreateAutomationConnectionForHwndRequestMsg@UiaManagerProto@@QEAAXAEBV12@@Z
    void MergeFrom(::UiaManagerProto::CreateAutomationConnectionForHwndRequestMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?New@CreateAutomationConnectionForHwndRequestMsg@UiaManagerProto@@UEBAPEAV12@PEAVArena@protobuf@google@@@Z
    virtual ::UiaManagerProto::CreateAutomationConnectionForHwndRequestMsg * New(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalParse@CreateAutomationConnectionForHwndRequestMsg@UiaManagerProto@@UEAAPEBDPEBDPEAVParseContext@internal@protobuf@google@@@Z
    virtual char const * _InternalParse(char const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalSerialize@CreateAutomationConnectionForHwndRequestMsg@UiaManagerProto@@UEBAPEAEPEAEPEAVEpsCopyOutputStream@io@protobuf@google@@@Z
    virtual unsigned char * _InternalSerialize(unsigned char *, WindissectOpaque *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CreateAutomationConnectionForHwndRequestMsg@UiaManagerProto@@UEAA@XZ
    virtual ~CreateAutomationConnectionForHwndRequestMsg();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CreateAutomationConnectionForHwndRequestMsg@UiaManagerProto@@IEAA@PEAVArena@protobuf@google@@_N@Z
    CreateAutomationConnectionForHwndRequestMsg(WindissectOpaque *, bool);
};
} // namespace UiaManagerProto
