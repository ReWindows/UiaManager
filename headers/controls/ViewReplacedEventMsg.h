#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 14 member(s).
namespace UiaManagerProto {
class ViewReplacedEventMsg {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ByteSizeLong@ViewReplacedEventMsg@UiaManagerProto@@UEBA_KXZ
    virtual uint64_t ByteSizeLong() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckTypeAndMergeFrom@ViewReplacedEventMsg@UiaManagerProto@@UEAAXAEBVMessageLite@protobuf@google@@@Z
    virtual void CheckTypeAndMergeFrom(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@ViewReplacedEventMsg@UiaManagerProto@@UEAAXXZ
    virtual void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedSize@ViewReplacedEventMsg@UiaManagerProto@@UEBAHXZ
    virtual int GetCachedSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitialized@ViewReplacedEventMsg@UiaManagerProto@@UEBA_NXZ
    virtual bool IsInitialized() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeFrom@ViewReplacedEventMsg@UiaManagerProto@@QEAAXAEBV12@@Z
    void MergeFrom(::UiaManagerProto::ViewReplacedEventMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?New@ViewReplacedEventMsg@UiaManagerProto@@UEBAPEAV12@PEAVArena@protobuf@google@@@Z
    virtual ::UiaManagerProto::ViewReplacedEventMsg * New(WindissectOpaque *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ViewReplacedEventMsg@UiaManagerProto@@QEAA@AEBV01@@Z
    ViewReplacedEventMsg(::UiaManagerProto::ViewReplacedEventMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalParse@ViewReplacedEventMsg@UiaManagerProto@@UEAAPEBDPEBDPEAVParseContext@internal@protobuf@google@@@Z
    virtual char const * _InternalParse(char const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalSerialize@ViewReplacedEventMsg@UiaManagerProto@@UEBAPEAEPEAEPEAVEpsCopyOutputStream@io@protobuf@google@@@Z
    virtual unsigned char * _InternalSerialize(unsigned char *, WindissectOpaque *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ViewReplacedEventMsg@UiaManagerProto@@UEAA@XZ
    virtual ~ViewReplacedEventMsg();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ViewReplacedEventMsg@UiaManagerProto@@IEAA@PEAVArena@protobuf@google@@_N@Z
    ViewReplacedEventMsg(WindissectOpaque *, bool);
};
} // namespace UiaManagerProto
