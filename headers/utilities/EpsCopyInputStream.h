#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 4 member(s).
namespace google::protobuf::internal {
class EpsCopyInputStream {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoneWithCheck@EpsCopyInputStream@internal@protobuf@google@@IEAA_NPEAPEBDH@Z
    bool DoneWithCheck(char const * *, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@EpsCopyInputStream@internal@protobuf@google@@AEAAPEBDXZ
    char const * Next();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NextBuffer@EpsCopyInputStream@internal@protobuf@google@@AEAAPEBDHH@Z
    char const * NextBuffer(int, int);
};
} // namespace google::protobuf::internal
