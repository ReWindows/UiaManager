#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 15 member(s).
namespace UiaManagerProto {
class CreateAutomationConnectionForViewIdRequestMsg {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ByteSizeLong@CreateAutomationConnectionForViewIdRequestMsg@UiaManagerProto@@UEBA_KXZ
    virtual uint64_t ByteSizeLong() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckTypeAndMergeFrom@CreateAutomationConnectionForViewIdRequestMsg@UiaManagerProto@@UEAAXAEBVMessageLite@protobuf@google@@@Z
    virtual void CheckTypeAndMergeFrom(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CreateAutomationConnectionForViewIdRequestMsg@UiaManagerProto@@UEAAXXZ
    virtual void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedSize@CreateAutomationConnectionForViewIdRequestMsg@UiaManagerProto@@UEBAHXZ
    virtual int GetCachedSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitialized@CreateAutomationConnectionForViewIdRequestMsg@UiaManagerProto@@UEBA_NXZ
    virtual bool IsInitialized() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeFrom@CreateAutomationConnectionForViewIdRequestMsg@UiaManagerProto@@QEAAXAEBV12@@Z
    void MergeFrom(::UiaManagerProto::CreateAutomationConnectionForViewIdRequestMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?New@CreateAutomationConnectionForViewIdRequestMsg@UiaManagerProto@@UEBAPEAV12@PEAVArena@protobuf@google@@@Z
    virtual ::UiaManagerProto::CreateAutomationConnectionForViewIdRequestMsg * New(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalParse@CreateAutomationConnectionForViewIdRequestMsg@UiaManagerProto@@UEAAPEBDPEBDPEAVParseContext@internal@protobuf@google@@@Z
    virtual char const * _InternalParse(char const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalSerialize@CreateAutomationConnectionForViewIdRequestMsg@UiaManagerProto@@UEBAPEAEPEAEPEAVEpsCopyOutputStream@io@protobuf@google@@@Z
    virtual unsigned char * _InternalSerialize(unsigned char *, WindissectOpaque *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CreateAutomationConnectionForViewIdRequestMsg@UiaManagerProto@@UEAA@XZ
    virtual ~CreateAutomationConnectionForViewIdRequestMsg();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CreateAutomationConnectionForViewIdRequestMsg@UiaManagerProto@@IEAA@PEAVArena@protobuf@google@@_N@Z
    CreateAutomationConnectionForViewIdRequestMsg(WindissectOpaque *, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_has_connection_string@CreateAutomationConnectionForViewIdRequestMsg@UiaManagerProto@@AEBA_NXZ
    bool _internal_has_connection_string() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_connection_string@CreateAutomationConnectionForViewIdRequestMsg@UiaManagerProto@@AEAAPEAVWstringMsg@2@XZ
    ::UiaManagerProto::WstringMsg * _internal_mutable_connection_string();
};
} // namespace UiaManagerProto
