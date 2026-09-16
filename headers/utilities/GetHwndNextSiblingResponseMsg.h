#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 13 member(s).
namespace UiaManagerProto {
class GetHwndNextSiblingResponseMsg {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ByteSizeLong@GetHwndNextSiblingResponseMsg@UiaManagerProto@@UEBA_KXZ
    virtual uint64_t ByteSizeLong() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckTypeAndMergeFrom@GetHwndNextSiblingResponseMsg@UiaManagerProto@@UEAAXAEBVMessageLite@protobuf@google@@@Z
    virtual void CheckTypeAndMergeFrom(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@GetHwndNextSiblingResponseMsg@UiaManagerProto@@UEAAXXZ
    virtual void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedSize@GetHwndNextSiblingResponseMsg@UiaManagerProto@@UEBAHXZ
    virtual int GetCachedSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitialized@GetHwndNextSiblingResponseMsg@UiaManagerProto@@UEBA_NXZ
    virtual bool IsInitialized() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeFrom@GetHwndNextSiblingResponseMsg@UiaManagerProto@@QEAAXAEBV12@@Z
    void MergeFrom(::UiaManagerProto::GetHwndNextSiblingResponseMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?New@GetHwndNextSiblingResponseMsg@UiaManagerProto@@UEBAPEAV12@PEAVArena@protobuf@google@@@Z
    virtual ::UiaManagerProto::GetHwndNextSiblingResponseMsg * New(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalParse@GetHwndNextSiblingResponseMsg@UiaManagerProto@@UEAAPEBDPEBDPEAVParseContext@internal@protobuf@google@@@Z
    virtual char const * _InternalParse(char const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalSerialize@GetHwndNextSiblingResponseMsg@UiaManagerProto@@UEBAPEAEPEAEPEAVEpsCopyOutputStream@io@protobuf@google@@@Z
    virtual unsigned char * _InternalSerialize(unsigned char *, WindissectOpaque *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetHwndNextSiblingResponseMsg@UiaManagerProto@@UEAA@XZ
    virtual ~GetHwndNextSiblingResponseMsg();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GetHwndNextSiblingResponseMsg@UiaManagerProto@@IEAA@PEAVArena@protobuf@google@@_N@Z
    GetHwndNextSiblingResponseMsg(WindissectOpaque *, bool);
};
} // namespace UiaManagerProto
