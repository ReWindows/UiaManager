#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 13 member(s).
namespace UiaManagerProto {
class ViewManagerConnectedEventMsg {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ByteSizeLong@ViewManagerConnectedEventMsg@UiaManagerProto@@UEBA_KXZ
    virtual uint64_t ByteSizeLong() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckTypeAndMergeFrom@ViewManagerConnectedEventMsg@UiaManagerProto@@UEAAXAEBVMessageLite@protobuf@google@@@Z
    virtual void CheckTypeAndMergeFrom(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@ViewManagerConnectedEventMsg@UiaManagerProto@@UEAAXXZ
    virtual void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedSize@ViewManagerConnectedEventMsg@UiaManagerProto@@UEBAHXZ
    virtual int GetCachedSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitialized@ViewManagerConnectedEventMsg@UiaManagerProto@@UEBA_NXZ
    virtual bool IsInitialized() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeFrom@ViewManagerConnectedEventMsg@UiaManagerProto@@QEAAXAEBV12@@Z
    void MergeFrom(::UiaManagerProto::ViewManagerConnectedEventMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?New@ViewManagerConnectedEventMsg@UiaManagerProto@@UEBAPEAV12@PEAVArena@protobuf@google@@@Z
    virtual ::UiaManagerProto::ViewManagerConnectedEventMsg * New(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalParse@ViewManagerConnectedEventMsg@UiaManagerProto@@UEAAPEBDPEBDPEAVParseContext@internal@protobuf@google@@@Z
    virtual char const * _InternalParse(char const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalSerialize@ViewManagerConnectedEventMsg@UiaManagerProto@@UEBAPEAEPEAEPEAVEpsCopyOutputStream@io@protobuf@google@@@Z
    virtual unsigned char * _InternalSerialize(unsigned char *, WindissectOpaque *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ViewManagerConnectedEventMsg@UiaManagerProto@@UEAA@XZ
    virtual ~ViewManagerConnectedEventMsg();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ViewManagerConnectedEventMsg@UiaManagerProto@@IEAA@PEAVArena@protobuf@google@@_N@Z
    ViewManagerConnectedEventMsg(WindissectOpaque *, bool);
};
} // namespace UiaManagerProto
