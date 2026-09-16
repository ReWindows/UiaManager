#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 13 member(s).
namespace UiaManagerProto {
class GetCurrentViewsResponseMsg {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ByteSizeLong@GetCurrentViewsResponseMsg@UiaManagerProto@@UEBA_KXZ
    virtual uint64_t ByteSizeLong() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckTypeAndMergeFrom@GetCurrentViewsResponseMsg@UiaManagerProto@@UEAAXAEBVMessageLite@protobuf@google@@@Z
    virtual void CheckTypeAndMergeFrom(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@GetCurrentViewsResponseMsg@UiaManagerProto@@UEAAXXZ
    virtual void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedSize@GetCurrentViewsResponseMsg@UiaManagerProto@@UEBAHXZ
    virtual int GetCachedSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitialized@GetCurrentViewsResponseMsg@UiaManagerProto@@UEBA_NXZ
    virtual bool IsInitialized() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeFrom@GetCurrentViewsResponseMsg@UiaManagerProto@@QEAAXAEBV12@@Z
    void MergeFrom(::UiaManagerProto::GetCurrentViewsResponseMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?New@GetCurrentViewsResponseMsg@UiaManagerProto@@UEBAPEAV12@PEAVArena@protobuf@google@@@Z
    virtual ::UiaManagerProto::GetCurrentViewsResponseMsg * New(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalParse@GetCurrentViewsResponseMsg@UiaManagerProto@@UEAAPEBDPEBDPEAVParseContext@internal@protobuf@google@@@Z
    virtual char const * _InternalParse(char const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalSerialize@GetCurrentViewsResponseMsg@UiaManagerProto@@UEBAPEAEPEAEPEAVEpsCopyOutputStream@io@protobuf@google@@@Z
    virtual unsigned char * _InternalSerialize(unsigned char *, WindissectOpaque *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetCurrentViewsResponseMsg@UiaManagerProto@@UEAA@XZ
    virtual ~GetCurrentViewsResponseMsg();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GetCurrentViewsResponseMsg@UiaManagerProto@@IEAA@PEAVArena@protobuf@google@@_N@Z
    GetCurrentViewsResponseMsg(WindissectOpaque *, bool);
};
} // namespace UiaManagerProto
