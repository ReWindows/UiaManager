#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 9 member(s).
class BasicUiaUtils {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSecurityDescriptorForProcess@BasicUiaUtils@@SAJPEAXPEAPEAX@Z
    static long CreateSecurityDescriptorForProcess(void *, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConnectionFormatString@BasicUiaUtils@@SAJ_KI_N0PEAG@Z
    static long GetConnectionFormatString(uint64_t, unsigned int, bool, uint64_t, unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConnectionSequenceEventName@BasicUiaUtils@@SAJW4ConnectionSequenceEventType@1@PEBG_KPEAG_N@Z
    static long GetConnectionSequenceEventName(int, unsigned short const *, uint64_t, unsigned short *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElevatedInstanceWithElevationMoniker@BasicUiaUtils@@SAJPEAUHWND__@@AEBU_GUID@@1PEAPEAX@Z
    static long GetElevatedInstanceWithElevationMoniker(HWND__*, _GUID const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDesktop@BasicUiaUtils@@SA_NXZ
    static bool IsDesktop();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHoloLens@BasicUiaUtils@@SA_NXZ
    static bool IsHoloLens();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOneCore@BasicUiaUtils@@SA_NXZ
    static bool IsOneCore();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUiaManagerElevated@BasicUiaUtils@@SA_NXZ
    static bool IsUiaManagerElevated();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWinPE@BasicUiaUtils@@SA_NXZ
    static bool IsWinPE();
};
