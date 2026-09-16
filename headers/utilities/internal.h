#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 14 member(s).
namespace google::protobuf {
class internal {
public:
    class ArenaStringPtr;
    class EpsCopyInputStream;
    class ImplicitWeakMessage;
    class InternalMetadata;
    class LogFinisher;
    class LogMessage;
    class MutexLock;
    class ParseContext;
    class RepeatedPtrFieldBase;
    class SerialArena;
    class ShutdownData;
    class TaggedStringPtr;
    class ThreadSafeArena;
    class WireFormatLite;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyString@internal@protobuf@google@@YAXPEBX@Z
    void DestroyString(void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitProtobufDefaultsSlow@internal@protobuf@google@@YAXXZ
    void InitProtobufDefaultsSlow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShutdownRun@internal@protobuf@google@@YAXP6AXPEBX@Z0@Z
    void OnShutdownRun(void ( *)(void const *), void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PackedInt32Parser@internal@protobuf@google@@YAPEBDPEAXPEBDPEAVParseContext@123@@Z
    char const * PackedInt32Parser(void *, char const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadSize@internal@protobuf@google@@YAIPEAPEBD@Z
    unsigned int ReadSize(char const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadTag@internal@protobuf@google@@YAPEBDPEBDPEAII@Z
    char const * ReadTag(char const *, unsigned int *, unsigned int);
};
} // namespace google::protobuf
