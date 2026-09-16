#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 13 member(s).
namespace UiaManagerProto {
class GetHwndFocusResponseMsg {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ByteSizeLong@GetHwndFocusResponseMsg@UiaManagerProto@@UEBA_KXZ
    virtual uint64_t ByteSizeLong() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckTypeAndMergeFrom@GetHwndFocusResponseMsg@UiaManagerProto@@UEAAXAEBVMessageLite@protobuf@google@@@Z
    virtual void CheckTypeAndMergeFrom(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@GetHwndFocusResponseMsg@UiaManagerProto@@UEAAXXZ
    virtual void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedSize@GetHwndFocusResponseMsg@UiaManagerProto@@UEBAHXZ
    virtual int GetCachedSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitialized@GetHwndFocusResponseMsg@UiaManagerProto@@UEBA_NXZ
    virtual bool IsInitialized() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeFrom@GetHwndFocusResponseMsg@UiaManagerProto@@QEAAXAEBV12@@Z
    void MergeFrom(::UiaManagerProto::GetHwndFocusResponseMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?New@GetHwndFocusResponseMsg@UiaManagerProto@@UEBAPEAV12@PEAVArena@protobuf@google@@@Z
    virtual ::UiaManagerProto::GetHwndFocusResponseMsg * New(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalParse@GetHwndFocusResponseMsg@UiaManagerProto@@UEAAPEBDPEBDPEAVParseContext@internal@protobuf@google@@@Z
    virtual char const * _InternalParse(char const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalSerialize@GetHwndFocusResponseMsg@UiaManagerProto@@UEBAPEAEPEAEPEAVEpsCopyOutputStream@io@protobuf@google@@@Z
    virtual unsigned char * _InternalSerialize(unsigned char *, WindissectOpaque *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetHwndFocusResponseMsg@UiaManagerProto@@UEAA@XZ
    virtual ~GetHwndFocusResponseMsg();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GetHwndFocusResponseMsg@UiaManagerProto@@IEAA@PEAVArena@protobuf@google@@_N@Z
    GetHwndFocusResponseMsg(WindissectOpaque *, bool);
};
} // namespace UiaManagerProto
