#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 42 member(s).
namespace UiaManagerProto {
class RequestPayloadMsg {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ByteSizeLong@RequestPayloadMsg@UiaManagerProto@@UEBA_KXZ
    virtual uint64_t ByteSizeLong() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckTypeAndMergeFrom@RequestPayloadMsg@UiaManagerProto@@UEAAXAEBVMessageLite@protobuf@google@@@Z
    virtual void CheckTypeAndMergeFrom(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@RequestPayloadMsg@UiaManagerProto@@UEAAXXZ
    virtual void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedSize@RequestPayloadMsg@UiaManagerProto@@UEBAHXZ
    virtual int GetCachedSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitialized@RequestPayloadMsg@UiaManagerProto@@UEBA_NXZ
    virtual bool IsInitialized() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeFrom@RequestPayloadMsg@UiaManagerProto@@QEAAXAEBV12@@Z
    void MergeFrom(::UiaManagerProto::RequestPayloadMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?New@RequestPayloadMsg@UiaManagerProto@@UEBAPEAV12@PEAVArena@protobuf@google@@@Z
    virtual ::UiaManagerProto::RequestPayloadMsg * New(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalParse@RequestPayloadMsg@UiaManagerProto@@UEAAPEBDPEBDPEAVParseContext@internal@protobuf@google@@@Z
    virtual char const * _InternalParse(char const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalSerialize@RequestPayloadMsg@UiaManagerProto@@UEBAPEAEPEAEPEAVEpsCopyOutputStream@io@protobuf@google@@@Z
    virtual unsigned char * _InternalSerialize(unsigned char *, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?clear_payload@RequestPayloadMsg@UiaManagerProto@@QEAAXXZ
    void clear_payload();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RequestPayloadMsg@UiaManagerProto@@UEAA@XZ
    virtual ~RequestPayloadMsg();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RequestPayloadMsg@UiaManagerProto@@IEAA@PEAVArena@protobuf@google@@_N@Z
    RequestPayloadMsg(WindissectOpaque *, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_create_connection_for_hwnd_payload@RequestPayloadMsg@UiaManagerProto@@AEAAPEAVCreateAutomationConnectionForHwndRequestMsg@2@XZ
    ::UiaManagerProto::CreateAutomationConnectionForHwndRequestMsg * _internal_mutable_create_connection_for_hwnd_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_create_connection_for_view_id_payload@RequestPayloadMsg@UiaManagerProto@@AEAAPEAVCreateAutomationConnectionForViewIdRequestMsg@2@XZ
    ::UiaManagerProto::CreateAutomationConnectionForViewIdRequestMsg * _internal_mutable_create_connection_for_view_id_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_ensure_win_event_registered_payload@RequestPayloadMsg@UiaManagerProto@@AEAAPEAVEnsureWinEventRegisteredRequestMsg@2@XZ
    ::UiaManagerProto::EnsureWinEventRegisteredRequestMsg * _internal_mutable_ensure_win_event_registered_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_get_composition_input_sink_view_instance_id_from_point_payload@RequestPayloadMsg@UiaManagerProto@@AEAAPEAVGetCompositionInputSinkViewInstanceIdFromPointRequestMsg@2@XZ
    ::UiaManagerProto::GetCompositionInputSinkViewInstanceIdFromPointRequestMsg * _internal_mutable_get_composition_input_sink_view_instance_id_from_point_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_get_core_window_bounds_payload@RequestPayloadMsg@UiaManagerProto@@AEAAPEAVGetCoreWindowBoundsRequestMsg@2@XZ
    ::UiaManagerProto::GetCoreWindowBoundsRequestMsg * _internal_mutable_get_core_window_bounds_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_get_current_views_payload@RequestPayloadMsg@UiaManagerProto@@AEAAPEAVGetCurrentViewsRequestMsg@2@XZ
    ::UiaManagerProto::GetCurrentViewsRequestMsg * _internal_mutable_get_current_views_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_get_descendant_hwnd_from_point_payload@RequestPayloadMsg@UiaManagerProto@@AEAAPEAVGetDescendantHwndFromPointRequestMsg@2@XZ
    ::UiaManagerProto::GetDescendantHwndFromPointRequestMsg * _internal_mutable_get_descendant_hwnd_from_point_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_get_desktop_window_hwnd_payload@RequestPayloadMsg@UiaManagerProto@@AEAAPEAVGetDesktopWindowHwndRequestMsg@2@XZ
    ::UiaManagerProto::GetDesktopWindowHwndRequestMsg * _internal_mutable_get_desktop_window_hwnd_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_get_embedded_hwnd_fragment_roots_payload@RequestPayloadMsg@UiaManagerProto@@AEAAPEAVGetEmbeddedHwndFragmentRootsRequestMsg@2@XZ
    ::UiaManagerProto::GetEmbeddedHwndFragmentRootsRequestMsg * _internal_mutable_get_embedded_hwnd_fragment_roots_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_get_host_view_instance_id_payload@RequestPayloadMsg@UiaManagerProto@@AEAAPEAVGetHostViewInstanceIdRequestMsg@2@XZ
    ::UiaManagerProto::GetHostViewInstanceIdRequestMsg * _internal_mutable_get_host_view_instance_id_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_get_hwnd_descendants_payload@RequestPayloadMsg@UiaManagerProto@@AEAAPEAVGetHwndDescendantsRequestMsg@2@XZ
    ::UiaManagerProto::GetHwndDescendantsRequestMsg * _internal_mutable_get_hwnd_descendants_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_get_hwnd_first_child_payload@RequestPayloadMsg@UiaManagerProto@@AEAAPEAVGetHwndFirstChildRequestMsg@2@XZ
    ::UiaManagerProto::GetHwndFirstChildRequestMsg * _internal_mutable_get_hwnd_first_child_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_get_hwnd_focus_payload@RequestPayloadMsg@UiaManagerProto@@AEAAPEAVGetHwndFocusRequestMsg@2@XZ
    ::UiaManagerProto::GetHwndFocusRequestMsg * _internal_mutable_get_hwnd_focus_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_get_hwnd_from_view_id_payload@RequestPayloadMsg@UiaManagerProto@@AEAAPEAVGetHwndFromViewIdRequestMsg@2@XZ
    ::UiaManagerProto::GetHwndFromViewIdRequestMsg * _internal_mutable_get_hwnd_from_view_id_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_get_hwnd_info_payload@RequestPayloadMsg@UiaManagerProto@@AEAAPEAVGetHwndInfoRequestMsg@2@XZ
    ::UiaManagerProto::GetHwndInfoRequestMsg * _internal_mutable_get_hwnd_info_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_get_hwnd_last_child_payload@RequestPayloadMsg@UiaManagerProto@@AEAAPEAVGetHwndLastChildRequestMsg@2@XZ
    ::UiaManagerProto::GetHwndLastChildRequestMsg * _internal_mutable_get_hwnd_last_child_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_get_hwnd_next_sibling_payload@RequestPayloadMsg@UiaManagerProto@@AEAAPEAVGetHwndNextSiblingRequestMsg@2@XZ
    ::UiaManagerProto::GetHwndNextSiblingRequestMsg * _internal_mutable_get_hwnd_next_sibling_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_get_hwnd_parent_payload@RequestPayloadMsg@UiaManagerProto@@AEAAPEAVGetHwndParentRequestMsg@2@XZ
    ::UiaManagerProto::GetHwndParentRequestMsg * _internal_mutable_get_hwnd_parent_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_get_hwnd_previous_sibling_payload@RequestPayloadMsg@UiaManagerProto@@AEAAPEAVGetHwndPreviousSiblingRequestMsg@2@XZ
    ::UiaManagerProto::GetHwndPreviousSiblingRequestMsg * _internal_mutable_get_hwnd_previous_sibling_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_get_hwnd_window_rect_payload@RequestPayloadMsg@UiaManagerProto@@AEAAPEAVGetHwndWindowRectRequestMsg@2@XZ
    ::UiaManagerProto::GetHwndWindowRectRequestMsg * _internal_mutable_get_hwnd_window_rect_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_get_process_app_identity_payload@RequestPayloadMsg@UiaManagerProto@@AEAAPEAVGetProcessAppIdentityRequestMsg@2@XZ
    ::UiaManagerProto::GetProcessAppIdentityRequestMsg * _internal_mutable_get_process_app_identity_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_hwnd_move_payload@RequestPayloadMsg@UiaManagerProto@@AEAAPEAVHwndMoveRequestMsg@2@XZ
    ::UiaManagerProto::HwndMoveRequestMsg * _internal_mutable_hwnd_move_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_hwnd_scroll_payload@RequestPayloadMsg@UiaManagerProto@@AEAAPEAVHwndScrollRequestMsg@2@XZ
    ::UiaManagerProto::HwndScrollRequestMsg * _internal_mutable_hwnd_scroll_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_is_core_window_active_payload@RequestPayloadMsg@UiaManagerProto@@AEAAPEAVIsCoreWindowActiveRequestMsg@2@XZ
    ::UiaManagerProto::IsCoreWindowActiveRequestMsg * _internal_mutable_is_core_window_active_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_is_window_payload@RequestPayloadMsg@UiaManagerProto@@AEAAPEAVIsWindowRequestMsg@2@XZ
    ::UiaManagerProto::IsWindowRequestMsg * _internal_mutable_is_window_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_set_focus_payload@RequestPayloadMsg@UiaManagerProto@@AEAAPEAVSetFocusRequestMsg@2@XZ
    ::UiaManagerProto::SetFocusRequestMsg * _internal_mutable_set_focus_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_set_surrogate_window_payload@RequestPayloadMsg@UiaManagerProto@@AEAAPEAVSetSurrogateWindowRequestMsg@2@XZ
    ::UiaManagerProto::SetSurrogateWindowRequestMsg * _internal_mutable_set_surrogate_window_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_signal_pipe_ready_event_payload@RequestPayloadMsg@UiaManagerProto@@AEAAPEAVSignalPipeReadyEventRequestMsg@2@XZ
    ::UiaManagerProto::SignalPipeReadyEventRequestMsg * _internal_mutable_signal_pipe_ready_event_payload();
};
} // namespace UiaManagerProto
