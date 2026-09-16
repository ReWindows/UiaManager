#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 17 member(s).
namespace UiaManagerProto {
class VariantMsg {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ByteSizeLong@VariantMsg@UiaManagerProto@@UEBA_KXZ
    virtual uint64_t ByteSizeLong() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckTypeAndMergeFrom@VariantMsg@UiaManagerProto@@UEAAXAEBVMessageLite@protobuf@google@@@Z
    virtual void CheckTypeAndMergeFrom(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@VariantMsg@UiaManagerProto@@UEAAXXZ
    virtual void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedSize@VariantMsg@UiaManagerProto@@UEBAHXZ
    virtual int GetCachedSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitialized@VariantMsg@UiaManagerProto@@UEBA_NXZ
    virtual bool IsInitialized() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeFrom@VariantMsg@UiaManagerProto@@QEAAXAEBV12@@Z
    void MergeFrom(::UiaManagerProto::VariantMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?New@VariantMsg@UiaManagerProto@@UEBAPEAV12@PEAVArena@protobuf@google@@@Z
    virtual ::UiaManagerProto::VariantMsg * New(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalParse@VariantMsg@UiaManagerProto@@UEAAPEBDPEBDPEAVParseContext@internal@protobuf@google@@@Z
    virtual char const * _InternalParse(char const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalSerialize@VariantMsg@UiaManagerProto@@UEBAPEAEPEAEPEAVEpsCopyOutputStream@io@protobuf@google@@@Z
    virtual unsigned char * _InternalSerialize(unsigned char *, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?clear_value@VariantMsg@UiaManagerProto@@QEAAXXZ
    void clear_value();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VariantMsg@UiaManagerProto@@UEAA@XZ
    virtual ~VariantMsg();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VariantMsg@UiaManagerProto@@IEAA@PEAVArena@protobuf@google@@_N@Z
    VariantMsg(WindissectOpaque *, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_string_payload@VariantMsg@UiaManagerProto@@AEAAPEAVWstringMsg@2@XZ
    ::UiaManagerProto::WstringMsg * _internal_mutable_string_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_set_bool_payload@VariantMsg@UiaManagerProto@@AEAAX_N@Z
    void _internal_set_bool_payload(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_set_int_payload@VariantMsg@UiaManagerProto@@AEAAXH@Z
    void _internal_set_int_payload(int);
};
} // namespace UiaManagerProto
