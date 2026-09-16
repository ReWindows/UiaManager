#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 13 member(s).
namespace UiaManagerProto {
class GetHwndFirstChildResponseMsg {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ByteSizeLong@GetHwndFirstChildResponseMsg@UiaManagerProto@@UEBA_KXZ
    virtual uint64_t ByteSizeLong() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckTypeAndMergeFrom@GetHwndFirstChildResponseMsg@UiaManagerProto@@UEAAXAEBVMessageLite@protobuf@google@@@Z
    virtual void CheckTypeAndMergeFrom(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@GetHwndFirstChildResponseMsg@UiaManagerProto@@UEAAXXZ
    virtual void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedSize@GetHwndFirstChildResponseMsg@UiaManagerProto@@UEBAHXZ
    virtual int GetCachedSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitialized@GetHwndFirstChildResponseMsg@UiaManagerProto@@UEBA_NXZ
    virtual bool IsInitialized() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeFrom@GetHwndFirstChildResponseMsg@UiaManagerProto@@QEAAXAEBV12@@Z
    void MergeFrom(::UiaManagerProto::GetHwndFirstChildResponseMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?New@GetHwndFirstChildResponseMsg@UiaManagerProto@@UEBAPEAV12@PEAVArena@protobuf@google@@@Z
    virtual ::UiaManagerProto::GetHwndFirstChildResponseMsg * New(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalParse@GetHwndFirstChildResponseMsg@UiaManagerProto@@UEAAPEBDPEBDPEAVParseContext@internal@protobuf@google@@@Z
    virtual char const * _InternalParse(char const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalSerialize@GetHwndFirstChildResponseMsg@UiaManagerProto@@UEBAPEAEPEAEPEAVEpsCopyOutputStream@io@protobuf@google@@@Z
    virtual unsigned char * _InternalSerialize(unsigned char *, WindissectOpaque *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetHwndFirstChildResponseMsg@UiaManagerProto@@UEAA@XZ
    virtual ~GetHwndFirstChildResponseMsg();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GetHwndFirstChildResponseMsg@UiaManagerProto@@IEAA@PEAVArena@protobuf@google@@_N@Z
    GetHwndFirstChildResponseMsg(WindissectOpaque *, bool);
};
} // namespace UiaManagerProto
