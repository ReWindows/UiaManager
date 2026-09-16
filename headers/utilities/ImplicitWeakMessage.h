#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 10 member(s).
namespace google::protobuf::internal {
class ImplicitWeakMessage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ByteSizeLong@ImplicitWeakMessage@internal@protobuf@google@@UEBA_KXZ
    virtual uint64_t ByteSizeLong() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckTypeAndMergeFrom@ImplicitWeakMessage@internal@protobuf@google@@UEAAXAEBVMessageLite@34@@Z
    virtual void CheckTypeAndMergeFrom(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@ImplicitWeakMessage@internal@protobuf@google@@UEAAXXZ
    virtual void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedSize@ImplicitWeakMessage@internal@protobuf@google@@UEBAHXZ
    virtual int GetCachedSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitialized@ImplicitWeakMessage@internal@protobuf@google@@UEBA_NXZ
    virtual bool IsInitialized() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?New@ImplicitWeakMessage@internal@protobuf@google@@UEBAPEAVMessageLite@34@PEAVArena@34@@Z
    virtual WindissectOpaque * New(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalParse@ImplicitWeakMessage@internal@protobuf@google@@UEAAPEBDPEBDPEAVParseContext@234@@Z
    virtual char const * _InternalParse(char const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalSerialize@ImplicitWeakMessage@internal@protobuf@google@@UEBAPEAEPEAEPEAVEpsCopyOutputStream@io@34@@Z
    virtual unsigned char * _InternalSerialize(unsigned char *, WindissectOpaque *) const;
};
} // namespace google::protobuf::internal
