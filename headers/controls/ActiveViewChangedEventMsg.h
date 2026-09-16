#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 13 member(s).
namespace UiaManagerProto {
class ActiveViewChangedEventMsg {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ByteSizeLong@ActiveViewChangedEventMsg@UiaManagerProto@@UEBA_KXZ
    virtual uint64_t ByteSizeLong() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckTypeAndMergeFrom@ActiveViewChangedEventMsg@UiaManagerProto@@UEAAXAEBVMessageLite@protobuf@google@@@Z
    virtual void CheckTypeAndMergeFrom(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@ActiveViewChangedEventMsg@UiaManagerProto@@UEAAXXZ
    virtual void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedSize@ActiveViewChangedEventMsg@UiaManagerProto@@UEBAHXZ
    virtual int GetCachedSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitialized@ActiveViewChangedEventMsg@UiaManagerProto@@UEBA_NXZ
    virtual bool IsInitialized() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeFrom@ActiveViewChangedEventMsg@UiaManagerProto@@QEAAXAEBV12@@Z
    void MergeFrom(::UiaManagerProto::ActiveViewChangedEventMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?New@ActiveViewChangedEventMsg@UiaManagerProto@@UEBAPEAV12@PEAVArena@protobuf@google@@@Z
    virtual ::UiaManagerProto::ActiveViewChangedEventMsg * New(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalParse@ActiveViewChangedEventMsg@UiaManagerProto@@UEAAPEBDPEBDPEAVParseContext@internal@protobuf@google@@@Z
    virtual char const * _InternalParse(char const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalSerialize@ActiveViewChangedEventMsg@UiaManagerProto@@UEBAPEAEPEAEPEAVEpsCopyOutputStream@io@protobuf@google@@@Z
    virtual unsigned char * _InternalSerialize(unsigned char *, WindissectOpaque *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ActiveViewChangedEventMsg@UiaManagerProto@@UEAA@XZ
    virtual ~ActiveViewChangedEventMsg();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ActiveViewChangedEventMsg@UiaManagerProto@@IEAA@PEAVArena@protobuf@google@@_N@Z
    ActiveViewChangedEventMsg(WindissectOpaque *, bool);
};
} // namespace UiaManagerProto
