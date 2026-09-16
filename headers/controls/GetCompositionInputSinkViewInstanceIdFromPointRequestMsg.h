#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 13 member(s).
namespace UiaManagerProto {
class GetCompositionInputSinkViewInstanceIdFromPointRequestMsg {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ByteSizeLong@GetCompositionInputSinkViewInstanceIdFromPointRequestMsg@UiaManagerProto@@UEBA_KXZ
    virtual uint64_t ByteSizeLong() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckTypeAndMergeFrom@GetCompositionInputSinkViewInstanceIdFromPointRequestMsg@UiaManagerProto@@UEAAXAEBVMessageLite@protobuf@google@@@Z
    virtual void CheckTypeAndMergeFrom(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@GetCompositionInputSinkViewInstanceIdFromPointRequestMsg@UiaManagerProto@@UEAAXXZ
    virtual void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedSize@GetCompositionInputSinkViewInstanceIdFromPointRequestMsg@UiaManagerProto@@UEBAHXZ
    virtual int GetCachedSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitialized@GetCompositionInputSinkViewInstanceIdFromPointRequestMsg@UiaManagerProto@@UEBA_NXZ
    virtual bool IsInitialized() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeFrom@GetCompositionInputSinkViewInstanceIdFromPointRequestMsg@UiaManagerProto@@QEAAXAEBV12@@Z
    void MergeFrom(::UiaManagerProto::GetCompositionInputSinkViewInstanceIdFromPointRequestMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?New@GetCompositionInputSinkViewInstanceIdFromPointRequestMsg@UiaManagerProto@@UEBAPEAV12@PEAVArena@protobuf@google@@@Z
    virtual ::UiaManagerProto::GetCompositionInputSinkViewInstanceIdFromPointRequestMsg * New(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalParse@GetCompositionInputSinkViewInstanceIdFromPointRequestMsg@UiaManagerProto@@UEAAPEBDPEBDPEAVParseContext@internal@protobuf@google@@@Z
    virtual char const * _InternalParse(char const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalSerialize@GetCompositionInputSinkViewInstanceIdFromPointRequestMsg@UiaManagerProto@@UEBAPEAEPEAEPEAVEpsCopyOutputStream@io@protobuf@google@@@Z
    virtual unsigned char * _InternalSerialize(unsigned char *, WindissectOpaque *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetCompositionInputSinkViewInstanceIdFromPointRequestMsg@UiaManagerProto@@UEAA@XZ
    virtual ~GetCompositionInputSinkViewInstanceIdFromPointRequestMsg();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GetCompositionInputSinkViewInstanceIdFromPointRequestMsg@UiaManagerProto@@IEAA@PEAVArena@protobuf@google@@_N@Z
    GetCompositionInputSinkViewInstanceIdFromPointRequestMsg(WindissectOpaque *, bool);
};
} // namespace UiaManagerProto
