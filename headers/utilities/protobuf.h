#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 3 member(s).
namespace google {
class protobuf {
public:
    class Arena;
    class FatalException;
    class MessageLite;
    class internal;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FastUInt32ToBufferLeft@protobuf@google@@YAPEADIPEAD@Z
    char * FastUInt32ToBufferLeft(unsigned int, char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FastUInt64ToBufferLeft@protobuf@google@@YAPEAD_KPEAD@Z
    char * FastUInt64ToBufferLeft(uint64_t, char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeToArrayImpl@protobuf@google@@YAPEAEAEBVMessageLite@12@PEAEH@Z
    unsigned char * SerializeToArrayImpl(WindissectOpaque const &, unsigned char *, int);
};
} // namespace google
