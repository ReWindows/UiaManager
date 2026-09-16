#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 17 member(s).
namespace UiaManagerProto {
class HwndInfoMsg {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ByteSizeLong@HwndInfoMsg@UiaManagerProto@@UEBA_KXZ
    virtual uint64_t ByteSizeLong() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckTypeAndMergeFrom@HwndInfoMsg@UiaManagerProto@@UEAAXAEBVMessageLite@protobuf@google@@@Z
    virtual void CheckTypeAndMergeFrom(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@HwndInfoMsg@UiaManagerProto@@UEAAXXZ
    virtual void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedSize@HwndInfoMsg@UiaManagerProto@@UEBAHXZ
    virtual int GetCachedSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitialized@HwndInfoMsg@UiaManagerProto@@UEBA_NXZ
    virtual bool IsInitialized() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeFrom@HwndInfoMsg@UiaManagerProto@@QEAAXAEBV12@@Z
    void MergeFrom(::UiaManagerProto::HwndInfoMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?New@HwndInfoMsg@UiaManagerProto@@UEBAPEAV12@PEAVArena@protobuf@google@@@Z
    virtual ::UiaManagerProto::HwndInfoMsg * New(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalParse@HwndInfoMsg@UiaManagerProto@@UEAAPEBDPEBDPEAVParseContext@internal@protobuf@google@@@Z
    virtual char const * _InternalParse(char const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalSerialize@HwndInfoMsg@UiaManagerProto@@UEBAPEAEPEAEPEAVEpsCopyOutputStream@io@protobuf@google@@@Z
    virtual unsigned char * _InternalSerialize(unsigned char *, WindissectOpaque *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HwndInfoMsg@UiaManagerProto@@UEAA@XZ
    virtual ~HwndInfoMsg();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HwndInfoMsg@UiaManagerProto@@IEAA@PEAVArena@protobuf@google@@_N@Z
    HwndInfoMsg(WindissectOpaque *, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_has_class_name@HwndInfoMsg@UiaManagerProto@@AEBA_NXZ
    bool _internal_has_class_name() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_has_hwnd_window_rect@HwndInfoMsg@UiaManagerProto@@AEBA_NXZ
    bool _internal_has_hwnd_window_rect() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_class_name@HwndInfoMsg@UiaManagerProto@@AEAAPEAVWstringMsg@2@XZ
    ::UiaManagerProto::WstringMsg * _internal_mutable_class_name();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_hwnd_window_rect@HwndInfoMsg@UiaManagerProto@@AEAAPEAVRectMsg@2@XZ
    ::UiaManagerProto::RectMsg * _internal_mutable_hwnd_window_rect();
};
} // namespace UiaManagerProto
