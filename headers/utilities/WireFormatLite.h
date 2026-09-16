#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 6 member(s).
namespace google::protobuf::internal {
class WireFormatLite {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Int32Size@WireFormatLite@internal@protobuf@google@@SA_KAEBV?$RepeatedField@H@34@@Z
    static uint64_t Int32Size(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalWriteMessage@WireFormatLite@internal@protobuf@google@@SAPEAEHAEBVMessageLite@34@HPEAEPEAVEpsCopyOutputStream@io@34@@Z
    static unsigned char * InternalWriteMessage(int, WindissectOpaque const &, int, unsigned char *, WindissectOpaque *);
};
} // namespace google::protobuf::internal
