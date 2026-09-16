#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 2 member(s).
class ProtobufHelper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetServiceIdForMessage@ProtobufHelper@@SAHAEBVUiaManagerMsg@UiaManagerProto@@@Z
    static int GetServiceIdForMessage(::UiaManagerProto::UiaManagerMsg const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBstrPayload@ProtobufHelper@@SAXAEAVWstringMsg@UiaManagerProto@@PEAG@Z
    static void SetBstrPayload(::UiaManagerProto::WstringMsg &, unsigned short *);
};
