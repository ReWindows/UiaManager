#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 16 member(s).
namespace UiaManagerProto {
class PropertyValueMsg {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ByteSizeLong@PropertyValueMsg@UiaManagerProto@@UEBA_KXZ
    virtual uint64_t ByteSizeLong() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckTypeAndMergeFrom@PropertyValueMsg@UiaManagerProto@@UEAAXAEBVMessageLite@protobuf@google@@@Z
    virtual void CheckTypeAndMergeFrom(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@PropertyValueMsg@UiaManagerProto@@UEAAXXZ
    virtual void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedSize@PropertyValueMsg@UiaManagerProto@@UEBAHXZ
    virtual int GetCachedSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitialized@PropertyValueMsg@UiaManagerProto@@UEBA_NXZ
    virtual bool IsInitialized() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeFrom@PropertyValueMsg@UiaManagerProto@@QEAAXAEBV12@@Z
    void MergeFrom(::UiaManagerProto::PropertyValueMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?New@PropertyValueMsg@UiaManagerProto@@UEBAPEAV12@PEAVArena@protobuf@google@@@Z
    virtual ::UiaManagerProto::PropertyValueMsg * New(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalParse@PropertyValueMsg@UiaManagerProto@@UEAAPEBDPEBDPEAVParseContext@internal@protobuf@google@@@Z
    virtual char const * _InternalParse(char const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalSerialize@PropertyValueMsg@UiaManagerProto@@UEBAPEAEPEAEPEAVEpsCopyOutputStream@io@protobuf@google@@@Z
    virtual unsigned char * _InternalSerialize(unsigned char *, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?clear_value@PropertyValueMsg@UiaManagerProto@@QEAAXXZ
    void clear_value();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PropertyValueMsg@UiaManagerProto@@UEAA@XZ
    virtual ~PropertyValueMsg();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PropertyValueMsg@UiaManagerProto@@IEAA@PEAVArena@protobuf@google@@_N@Z
    PropertyValueMsg(WindissectOpaque *, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_variant@PropertyValueMsg@UiaManagerProto@@AEAAPEAVVariantMsg@2@XZ
    ::UiaManagerProto::VariantMsg * _internal_mutable_variant();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_set_hr@PropertyValueMsg@UiaManagerProto@@AEAAXH@Z
    void _internal_set_hr(int);
};
} // namespace UiaManagerProto
