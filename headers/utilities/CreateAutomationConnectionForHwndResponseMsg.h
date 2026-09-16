#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 13 member(s).
namespace UiaManagerProto {
class CreateAutomationConnectionForHwndResponseMsg {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ByteSizeLong@CreateAutomationConnectionForHwndResponseMsg@UiaManagerProto@@UEBA_KXZ
    virtual uint64_t ByteSizeLong() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckTypeAndMergeFrom@CreateAutomationConnectionForHwndResponseMsg@UiaManagerProto@@UEAAXAEBVMessageLite@protobuf@google@@@Z
    virtual void CheckTypeAndMergeFrom(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CreateAutomationConnectionForHwndResponseMsg@UiaManagerProto@@UEAAXXZ
    virtual void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedSize@CreateAutomationConnectionForHwndResponseMsg@UiaManagerProto@@UEBAHXZ
    virtual int GetCachedSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitialized@CreateAutomationConnectionForHwndResponseMsg@UiaManagerProto@@UEBA_NXZ
    virtual bool IsInitialized() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeFrom@CreateAutomationConnectionForHwndResponseMsg@UiaManagerProto@@QEAAXAEBV12@@Z
    void MergeFrom(::UiaManagerProto::CreateAutomationConnectionForHwndResponseMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?New@CreateAutomationConnectionForHwndResponseMsg@UiaManagerProto@@UEBAPEAV12@PEAVArena@protobuf@google@@@Z
    virtual ::UiaManagerProto::CreateAutomationConnectionForHwndResponseMsg * New(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalParse@CreateAutomationConnectionForHwndResponseMsg@UiaManagerProto@@UEAAPEBDPEBDPEAVParseContext@internal@protobuf@google@@@Z
    virtual char const * _InternalParse(char const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalSerialize@CreateAutomationConnectionForHwndResponseMsg@UiaManagerProto@@UEBAPEAEPEAEPEAVEpsCopyOutputStream@io@protobuf@google@@@Z
    virtual unsigned char * _InternalSerialize(unsigned char *, WindissectOpaque *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CreateAutomationConnectionForHwndResponseMsg@UiaManagerProto@@UEAA@XZ
    virtual ~CreateAutomationConnectionForHwndResponseMsg();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CreateAutomationConnectionForHwndResponseMsg@UiaManagerProto@@IEAA@PEAVArena@protobuf@google@@_N@Z
    CreateAutomationConnectionForHwndResponseMsg(WindissectOpaque *, bool);
};
} // namespace UiaManagerProto
