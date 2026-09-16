#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 13 member(s).
namespace UiaManagerProto {
class GetEmbeddedHwndFragmentRootsRequestMsg {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ByteSizeLong@GetEmbeddedHwndFragmentRootsRequestMsg@UiaManagerProto@@UEBA_KXZ
    virtual uint64_t ByteSizeLong() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckTypeAndMergeFrom@GetEmbeddedHwndFragmentRootsRequestMsg@UiaManagerProto@@UEAAXAEBVMessageLite@protobuf@google@@@Z
    virtual void CheckTypeAndMergeFrom(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@GetEmbeddedHwndFragmentRootsRequestMsg@UiaManagerProto@@UEAAXXZ
    virtual void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedSize@GetEmbeddedHwndFragmentRootsRequestMsg@UiaManagerProto@@UEBAHXZ
    virtual int GetCachedSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitialized@GetEmbeddedHwndFragmentRootsRequestMsg@UiaManagerProto@@UEBA_NXZ
    virtual bool IsInitialized() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeFrom@GetEmbeddedHwndFragmentRootsRequestMsg@UiaManagerProto@@QEAAXAEBV12@@Z
    void MergeFrom(::UiaManagerProto::GetEmbeddedHwndFragmentRootsRequestMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?New@GetEmbeddedHwndFragmentRootsRequestMsg@UiaManagerProto@@UEBAPEAV12@PEAVArena@protobuf@google@@@Z
    virtual ::UiaManagerProto::GetEmbeddedHwndFragmentRootsRequestMsg * New(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalParse@GetEmbeddedHwndFragmentRootsRequestMsg@UiaManagerProto@@UEAAPEBDPEBDPEAVParseContext@internal@protobuf@google@@@Z
    virtual char const * _InternalParse(char const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalSerialize@GetEmbeddedHwndFragmentRootsRequestMsg@UiaManagerProto@@UEBAPEAEPEAEPEAVEpsCopyOutputStream@io@protobuf@google@@@Z
    virtual unsigned char * _InternalSerialize(unsigned char *, WindissectOpaque *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetEmbeddedHwndFragmentRootsRequestMsg@UiaManagerProto@@UEAA@XZ
    virtual ~GetEmbeddedHwndFragmentRootsRequestMsg();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GetEmbeddedHwndFragmentRootsRequestMsg@UiaManagerProto@@IEAA@PEAVArena@protobuf@google@@_N@Z
    GetEmbeddedHwndFragmentRootsRequestMsg(WindissectOpaque *, bool);
};
} // namespace UiaManagerProto
