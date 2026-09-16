#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 15 member(s).
namespace UiaManagerProto {
class GetCoreWindowBoundsResponseMsg {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ByteSizeLong@GetCoreWindowBoundsResponseMsg@UiaManagerProto@@UEBA_KXZ
    virtual uint64_t ByteSizeLong() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckTypeAndMergeFrom@GetCoreWindowBoundsResponseMsg@UiaManagerProto@@UEAAXAEBVMessageLite@protobuf@google@@@Z
    virtual void CheckTypeAndMergeFrom(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@GetCoreWindowBoundsResponseMsg@UiaManagerProto@@UEAAXXZ
    virtual void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedSize@GetCoreWindowBoundsResponseMsg@UiaManagerProto@@UEBAHXZ
    virtual int GetCachedSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitialized@GetCoreWindowBoundsResponseMsg@UiaManagerProto@@UEBA_NXZ
    virtual bool IsInitialized() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeFrom@GetCoreWindowBoundsResponseMsg@UiaManagerProto@@QEAAXAEBV12@@Z
    void MergeFrom(::UiaManagerProto::GetCoreWindowBoundsResponseMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?New@GetCoreWindowBoundsResponseMsg@UiaManagerProto@@UEBAPEAV12@PEAVArena@protobuf@google@@@Z
    virtual ::UiaManagerProto::GetCoreWindowBoundsResponseMsg * New(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalParse@GetCoreWindowBoundsResponseMsg@UiaManagerProto@@UEAAPEBDPEBDPEAVParseContext@internal@protobuf@google@@@Z
    virtual char const * _InternalParse(char const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalSerialize@GetCoreWindowBoundsResponseMsg@UiaManagerProto@@UEBAPEAEPEAEPEAVEpsCopyOutputStream@io@protobuf@google@@@Z
    virtual unsigned char * _InternalSerialize(unsigned char *, WindissectOpaque *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetCoreWindowBoundsResponseMsg@UiaManagerProto@@UEAA@XZ
    virtual ~GetCoreWindowBoundsResponseMsg();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GetCoreWindowBoundsResponseMsg@UiaManagerProto@@IEAA@PEAVArena@protobuf@google@@_N@Z
    GetCoreWindowBoundsResponseMsg(WindissectOpaque *, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_has_rect@GetCoreWindowBoundsResponseMsg@UiaManagerProto@@AEBA_NXZ
    bool _internal_has_rect() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_rect@GetCoreWindowBoundsResponseMsg@UiaManagerProto@@AEAAPEAVRectMsg@2@XZ
    ::UiaManagerProto::RectMsg * _internal_mutable_rect();
};
} // namespace UiaManagerProto
