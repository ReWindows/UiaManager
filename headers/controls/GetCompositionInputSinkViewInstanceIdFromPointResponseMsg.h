#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 13 member(s).
namespace UiaManagerProto {
class GetCompositionInputSinkViewInstanceIdFromPointResponseMsg {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ByteSizeLong@GetCompositionInputSinkViewInstanceIdFromPointResponseMsg@UiaManagerProto@@UEBA_KXZ
    virtual uint64_t ByteSizeLong() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckTypeAndMergeFrom@GetCompositionInputSinkViewInstanceIdFromPointResponseMsg@UiaManagerProto@@UEAAXAEBVMessageLite@protobuf@google@@@Z
    virtual void CheckTypeAndMergeFrom(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@GetCompositionInputSinkViewInstanceIdFromPointResponseMsg@UiaManagerProto@@UEAAXXZ
    virtual void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedSize@GetCompositionInputSinkViewInstanceIdFromPointResponseMsg@UiaManagerProto@@UEBAHXZ
    virtual int GetCachedSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitialized@GetCompositionInputSinkViewInstanceIdFromPointResponseMsg@UiaManagerProto@@UEBA_NXZ
    virtual bool IsInitialized() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeFrom@GetCompositionInputSinkViewInstanceIdFromPointResponseMsg@UiaManagerProto@@QEAAXAEBV12@@Z
    void MergeFrom(::UiaManagerProto::GetCompositionInputSinkViewInstanceIdFromPointResponseMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?New@GetCompositionInputSinkViewInstanceIdFromPointResponseMsg@UiaManagerProto@@UEBAPEAV12@PEAVArena@protobuf@google@@@Z
    virtual ::UiaManagerProto::GetCompositionInputSinkViewInstanceIdFromPointResponseMsg * New(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalParse@GetCompositionInputSinkViewInstanceIdFromPointResponseMsg@UiaManagerProto@@UEAAPEBDPEBDPEAVParseContext@internal@protobuf@google@@@Z
    virtual char const * _InternalParse(char const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalSerialize@GetCompositionInputSinkViewInstanceIdFromPointResponseMsg@UiaManagerProto@@UEBAPEAEPEAEPEAVEpsCopyOutputStream@io@protobuf@google@@@Z
    virtual unsigned char * _InternalSerialize(unsigned char *, WindissectOpaque *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetCompositionInputSinkViewInstanceIdFromPointResponseMsg@UiaManagerProto@@UEAA@XZ
    virtual ~GetCompositionInputSinkViewInstanceIdFromPointResponseMsg();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GetCompositionInputSinkViewInstanceIdFromPointResponseMsg@UiaManagerProto@@IEAA@PEAVArena@protobuf@google@@_N@Z
    GetCompositionInputSinkViewInstanceIdFromPointResponseMsg(WindissectOpaque *, bool);
};
} // namespace UiaManagerProto
