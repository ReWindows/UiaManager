#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 6 member(s).
namespace google::protobuf::io {
class EpsCopyOutputStream {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteRaw@EpsCopyOutputStream@io@protobuf@google@@QEAAPEAEPEBXHPEAE@Z
    unsigned char * WriteRaw(void const *, int, unsigned char *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Encode64@EpsCopyOutputStream@io@protobuf@google@@CA_K_K@Z
    static uint64_t Encode64(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSpaceFallback@EpsCopyOutputStream@io@protobuf@google@@AEAAPEAEPEAE@Z
    unsigned char * EnsureSpaceFallback(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@EpsCopyOutputStream@io@protobuf@google@@AEAAHPEAE@Z
    int Flush(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TagSize@EpsCopyOutputStream@io@protobuf@google@@CAHI@Z
    static int TagSize(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteRawFallback@EpsCopyOutputStream@io@protobuf@google@@AEAAPEAEPEBXHPEAE@Z
    unsigned char * WriteRawFallback(void const *, int, unsigned char *);
};
} // namespace google::protobuf::io
