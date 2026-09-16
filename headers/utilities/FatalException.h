#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 5 member(s).
namespace google::protobuf {
class FatalException {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FatalException@protobuf@google@@QEAA@AEBV012@@Z
    FatalException(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?what@FatalException@protobuf@google@@UEBAPEBDXZ
    virtual char const * what() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FatalException@protobuf@google@@UEAA@XZ
    virtual ~FatalException();
};
} // namespace google::protobuf
