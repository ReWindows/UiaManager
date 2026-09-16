#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 8 member(s).
namespace google::protobuf {
class MessageLite {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDemandRegisterArenaDtor@MessageLite@protobuf@google@@UEAAXPEAVArena@23@@Z
    virtual void OnDemandRegisterArenaDtor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseFromArray@MessageLite@protobuf@google@@QEAA_NPEBXH@Z
    bool ParseFromArray(void const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeToArray@MessageLite@protobuf@google@@QEBA_NPEAXH@Z
    bool SerializeToArray(void *, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalParse@MessageLite@protobuf@google@@UEAAPEBDPEBDPEAVParseContext@internal@23@@Z
    virtual char const * _InternalParse(char const *, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MessageLite@protobuf@google@@UEAA@XZ
    virtual ~MessageLite();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MessageLite@protobuf@google@@IEAA@PEAVArena@12@_N@Z
    MessageLite(WindissectOpaque *, bool);
};
} // namespace google::protobuf
