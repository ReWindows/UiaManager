#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 13 member(s).
namespace UiaManagerProto {
class GetHwndPreviousSiblingResponseMsg {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ByteSizeLong@GetHwndPreviousSiblingResponseMsg@UiaManagerProto@@UEBA_KXZ
    virtual uint64_t ByteSizeLong() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckTypeAndMergeFrom@GetHwndPreviousSiblingResponseMsg@UiaManagerProto@@UEAAXAEBVMessageLite@protobuf@google@@@Z
    virtual void CheckTypeAndMergeFrom(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@GetHwndPreviousSiblingResponseMsg@UiaManagerProto@@UEAAXXZ
    virtual void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedSize@GetHwndPreviousSiblingResponseMsg@UiaManagerProto@@UEBAHXZ
    virtual int GetCachedSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitialized@GetHwndPreviousSiblingResponseMsg@UiaManagerProto@@UEBA_NXZ
    virtual bool IsInitialized() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeFrom@GetHwndPreviousSiblingResponseMsg@UiaManagerProto@@QEAAXAEBV12@@Z
    void MergeFrom(::UiaManagerProto::GetHwndPreviousSiblingResponseMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?New@GetHwndPreviousSiblingResponseMsg@UiaManagerProto@@UEBAPEAV12@PEAVArena@protobuf@google@@@Z
    virtual ::UiaManagerProto::GetHwndPreviousSiblingResponseMsg * New(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalParse@GetHwndPreviousSiblingResponseMsg@UiaManagerProto@@UEAAPEBDPEBDPEAVParseContext@internal@protobuf@google@@@Z
    virtual char const * _InternalParse(char const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalSerialize@GetHwndPreviousSiblingResponseMsg@UiaManagerProto@@UEBAPEAEPEAEPEAVEpsCopyOutputStream@io@protobuf@google@@@Z
    virtual unsigned char * _InternalSerialize(unsigned char *, WindissectOpaque *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetHwndPreviousSiblingResponseMsg@UiaManagerProto@@UEAA@XZ
    virtual ~GetHwndPreviousSiblingResponseMsg();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GetHwndPreviousSiblingResponseMsg@UiaManagerProto@@IEAA@PEAVArena@protobuf@google@@_N@Z
    GetHwndPreviousSiblingResponseMsg(WindissectOpaque *, bool);
};
} // namespace UiaManagerProto
