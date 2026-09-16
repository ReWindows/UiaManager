#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 17 member(s).
namespace UiaManagerProto {
class GetProcessAppIdentityResponseMsg {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ByteSizeLong@GetProcessAppIdentityResponseMsg@UiaManagerProto@@UEBA_KXZ
    virtual uint64_t ByteSizeLong() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckTypeAndMergeFrom@GetProcessAppIdentityResponseMsg@UiaManagerProto@@UEAAXAEBVMessageLite@protobuf@google@@@Z
    virtual void CheckTypeAndMergeFrom(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@GetProcessAppIdentityResponseMsg@UiaManagerProto@@UEAAXXZ
    virtual void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedSize@GetProcessAppIdentityResponseMsg@UiaManagerProto@@UEBAHXZ
    virtual int GetCachedSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitialized@GetProcessAppIdentityResponseMsg@UiaManagerProto@@UEBA_NXZ
    virtual bool IsInitialized() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeFrom@GetProcessAppIdentityResponseMsg@UiaManagerProto@@QEAAXAEBV12@@Z
    void MergeFrom(::UiaManagerProto::GetProcessAppIdentityResponseMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?New@GetProcessAppIdentityResponseMsg@UiaManagerProto@@UEBAPEAV12@PEAVArena@protobuf@google@@@Z
    virtual ::UiaManagerProto::GetProcessAppIdentityResponseMsg * New(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalParse@GetProcessAppIdentityResponseMsg@UiaManagerProto@@UEAAPEBDPEBDPEAVParseContext@internal@protobuf@google@@@Z
    virtual char const * _InternalParse(char const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalSerialize@GetProcessAppIdentityResponseMsg@UiaManagerProto@@UEBAPEAEPEAEPEAVEpsCopyOutputStream@io@protobuf@google@@@Z
    virtual unsigned char * _InternalSerialize(unsigned char *, WindissectOpaque *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetProcessAppIdentityResponseMsg@UiaManagerProto@@UEAA@XZ
    virtual ~GetProcessAppIdentityResponseMsg();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GetProcessAppIdentityResponseMsg@UiaManagerProto@@IEAA@PEAVArena@protobuf@google@@_N@Z
    GetProcessAppIdentityResponseMsg(WindissectOpaque *, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_has_app_user_model_id@GetProcessAppIdentityResponseMsg@UiaManagerProto@@AEBA_NXZ
    bool _internal_has_app_user_model_id() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_has_executable_file_name@GetProcessAppIdentityResponseMsg@UiaManagerProto@@AEBA_NXZ
    bool _internal_has_executable_file_name() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_app_user_model_id@GetProcessAppIdentityResponseMsg@UiaManagerProto@@AEAAPEAVWstringMsg@2@XZ
    ::UiaManagerProto::WstringMsg * _internal_mutable_app_user_model_id();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_executable_file_name@GetProcessAppIdentityResponseMsg@UiaManagerProto@@AEAAPEAVWstringMsg@2@XZ
    ::UiaManagerProto::WstringMsg * _internal_mutable_executable_file_name();
};
} // namespace UiaManagerProto
