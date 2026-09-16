#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 15 member(s).
namespace UiaManagerProto {
class WinEventMsg {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ByteSizeLong@WinEventMsg@UiaManagerProto@@UEBA_KXZ
    virtual uint64_t ByteSizeLong() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckTypeAndMergeFrom@WinEventMsg@UiaManagerProto@@UEAAXAEBVMessageLite@protobuf@google@@@Z
    virtual void CheckTypeAndMergeFrom(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@WinEventMsg@UiaManagerProto@@UEAAXXZ
    virtual void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedSize@WinEventMsg@UiaManagerProto@@UEBAHXZ
    virtual int GetCachedSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitialized@WinEventMsg@UiaManagerProto@@UEBA_NXZ
    virtual bool IsInitialized() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeFrom@WinEventMsg@UiaManagerProto@@QEAAXAEBV12@@Z
    void MergeFrom(::UiaManagerProto::WinEventMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?New@WinEventMsg@UiaManagerProto@@UEBAPEAV12@PEAVArena@protobuf@google@@@Z
    virtual ::UiaManagerProto::WinEventMsg * New(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalParse@WinEventMsg@UiaManagerProto@@UEAAPEBDPEBDPEAVParseContext@internal@protobuf@google@@@Z
    virtual char const * _InternalParse(char const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalSerialize@WinEventMsg@UiaManagerProto@@UEBAPEAEPEAEPEAVEpsCopyOutputStream@io@protobuf@google@@@Z
    virtual unsigned char * _InternalSerialize(unsigned char *, WindissectOpaque *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WinEventMsg@UiaManagerProto@@UEAA@XZ
    virtual ~WinEventMsg();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WinEventMsg@UiaManagerProto@@IEAA@PEAVArena@protobuf@google@@_N@Z
    WinEventMsg(WindissectOpaque *, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_has_hwnd_info@WinEventMsg@UiaManagerProto@@AEBA_NXZ
    bool _internal_has_hwnd_info() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_hwnd_info@WinEventMsg@UiaManagerProto@@AEAAPEAVHwndInfoMsg@2@XZ
    ::UiaManagerProto::HwndInfoMsg * _internal_mutable_hwnd_info();
};
} // namespace UiaManagerProto
