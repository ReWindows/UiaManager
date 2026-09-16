#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 13 member(s).
namespace UiaManagerProto {
class SetSurrogateWindowRequestMsg {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ByteSizeLong@SetSurrogateWindowRequestMsg@UiaManagerProto@@UEBA_KXZ
    virtual uint64_t ByteSizeLong() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckTypeAndMergeFrom@SetSurrogateWindowRequestMsg@UiaManagerProto@@UEAAXAEBVMessageLite@protobuf@google@@@Z
    virtual void CheckTypeAndMergeFrom(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@SetSurrogateWindowRequestMsg@UiaManagerProto@@UEAAXXZ
    virtual void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedSize@SetSurrogateWindowRequestMsg@UiaManagerProto@@UEBAHXZ
    virtual int GetCachedSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitialized@SetSurrogateWindowRequestMsg@UiaManagerProto@@UEBA_NXZ
    virtual bool IsInitialized() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeFrom@SetSurrogateWindowRequestMsg@UiaManagerProto@@QEAAXAEBV12@@Z
    void MergeFrom(::UiaManagerProto::SetSurrogateWindowRequestMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?New@SetSurrogateWindowRequestMsg@UiaManagerProto@@UEBAPEAV12@PEAVArena@protobuf@google@@@Z
    virtual ::UiaManagerProto::SetSurrogateWindowRequestMsg * New(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalParse@SetSurrogateWindowRequestMsg@UiaManagerProto@@UEAAPEBDPEBDPEAVParseContext@internal@protobuf@google@@@Z
    virtual char const * _InternalParse(char const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalSerialize@SetSurrogateWindowRequestMsg@UiaManagerProto@@UEBAPEAEPEAEPEAVEpsCopyOutputStream@io@protobuf@google@@@Z
    virtual unsigned char * _InternalSerialize(unsigned char *, WindissectOpaque *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SetSurrogateWindowRequestMsg@UiaManagerProto@@UEAA@XZ
    virtual ~SetSurrogateWindowRequestMsg();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SetSurrogateWindowRequestMsg@UiaManagerProto@@IEAA@PEAVArena@protobuf@google@@_N@Z
    SetSurrogateWindowRequestMsg(WindissectOpaque *, bool);
};
} // namespace UiaManagerProto
