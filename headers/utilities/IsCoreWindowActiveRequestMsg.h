#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 13 member(s).
namespace UiaManagerProto {
class IsCoreWindowActiveRequestMsg {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ByteSizeLong@IsCoreWindowActiveRequestMsg@UiaManagerProto@@UEBA_KXZ
    virtual uint64_t ByteSizeLong() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckTypeAndMergeFrom@IsCoreWindowActiveRequestMsg@UiaManagerProto@@UEAAXAEBVMessageLite@protobuf@google@@@Z
    virtual void CheckTypeAndMergeFrom(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@IsCoreWindowActiveRequestMsg@UiaManagerProto@@UEAAXXZ
    virtual void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedSize@IsCoreWindowActiveRequestMsg@UiaManagerProto@@UEBAHXZ
    virtual int GetCachedSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitialized@IsCoreWindowActiveRequestMsg@UiaManagerProto@@UEBA_NXZ
    virtual bool IsInitialized() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeFrom@IsCoreWindowActiveRequestMsg@UiaManagerProto@@QEAAXAEBV12@@Z
    void MergeFrom(::UiaManagerProto::IsCoreWindowActiveRequestMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?New@IsCoreWindowActiveRequestMsg@UiaManagerProto@@UEBAPEAV12@PEAVArena@protobuf@google@@@Z
    virtual ::UiaManagerProto::IsCoreWindowActiveRequestMsg * New(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalParse@IsCoreWindowActiveRequestMsg@UiaManagerProto@@UEAAPEBDPEBDPEAVParseContext@internal@protobuf@google@@@Z
    virtual char const * _InternalParse(char const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalSerialize@IsCoreWindowActiveRequestMsg@UiaManagerProto@@UEBAPEAEPEAEPEAVEpsCopyOutputStream@io@protobuf@google@@@Z
    virtual unsigned char * _InternalSerialize(unsigned char *, WindissectOpaque *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1IsCoreWindowActiveRequestMsg@UiaManagerProto@@UEAA@XZ
    virtual ~IsCoreWindowActiveRequestMsg();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0IsCoreWindowActiveRequestMsg@UiaManagerProto@@IEAA@PEAVArena@protobuf@google@@_N@Z
    IsCoreWindowActiveRequestMsg(WindissectOpaque *, bool);
};
} // namespace UiaManagerProto
