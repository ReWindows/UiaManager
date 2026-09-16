#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 13 member(s).
namespace UiaManagerProto {
class CreateAutomationConnectionForViewIdResponseMsg {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ByteSizeLong@CreateAutomationConnectionForViewIdResponseMsg@UiaManagerProto@@UEBA_KXZ
    virtual uint64_t ByteSizeLong() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckTypeAndMergeFrom@CreateAutomationConnectionForViewIdResponseMsg@UiaManagerProto@@UEAAXAEBVMessageLite@protobuf@google@@@Z
    virtual void CheckTypeAndMergeFrom(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CreateAutomationConnectionForViewIdResponseMsg@UiaManagerProto@@UEAAXXZ
    virtual void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedSize@CreateAutomationConnectionForViewIdResponseMsg@UiaManagerProto@@UEBAHXZ
    virtual int GetCachedSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitialized@CreateAutomationConnectionForViewIdResponseMsg@UiaManagerProto@@UEBA_NXZ
    virtual bool IsInitialized() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeFrom@CreateAutomationConnectionForViewIdResponseMsg@UiaManagerProto@@QEAAXAEBV12@@Z
    void MergeFrom(::UiaManagerProto::CreateAutomationConnectionForViewIdResponseMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?New@CreateAutomationConnectionForViewIdResponseMsg@UiaManagerProto@@UEBAPEAV12@PEAVArena@protobuf@google@@@Z
    virtual ::UiaManagerProto::CreateAutomationConnectionForViewIdResponseMsg * New(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalParse@CreateAutomationConnectionForViewIdResponseMsg@UiaManagerProto@@UEAAPEBDPEBDPEAVParseContext@internal@protobuf@google@@@Z
    virtual char const * _InternalParse(char const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalSerialize@CreateAutomationConnectionForViewIdResponseMsg@UiaManagerProto@@UEBAPEAEPEAEPEAVEpsCopyOutputStream@io@protobuf@google@@@Z
    virtual unsigned char * _InternalSerialize(unsigned char *, WindissectOpaque *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CreateAutomationConnectionForViewIdResponseMsg@UiaManagerProto@@UEAA@XZ
    virtual ~CreateAutomationConnectionForViewIdResponseMsg();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CreateAutomationConnectionForViewIdResponseMsg@UiaManagerProto@@IEAA@PEAVArena@protobuf@google@@_N@Z
    CreateAutomationConnectionForViewIdResponseMsg(WindissectOpaque *, bool);
};
} // namespace UiaManagerProto
