#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 10 member(s).
namespace google::protobuf::internal {
class RepeatedPtrFieldBase {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyProtos@RepeatedPtrFieldBase@internal@protobuf@google@@IEAAXXZ
    void DestroyProtos();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOutOfLineHelper@RepeatedPtrFieldBase@internal@protobuf@google@@AEAAPEAXPEAX@Z
    void * AddOutOfLineHelper(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalExtend@RepeatedPtrFieldBase@internal@protobuf@google@@AEAAPEAPEAXH@Z
    void * * InternalExtend(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeFromInternal@RepeatedPtrFieldBase@internal@protobuf@google@@AEAAXAEBV1234@P81234@EAAXPEAPEAX1HH@Z@Z
    void MergeFromInternal(WindissectOpaque const &, void ( ::google::protobuf::internal::RepeatedPtrFieldBase::*)(void * *, void * *, int, int));
};
} // namespace google::protobuf::internal
