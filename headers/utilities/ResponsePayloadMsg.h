#pragma once
#include "../windissect_forwards.h"

// Reconstructed from UiaManager.dll by Windissect. 42 member(s).
namespace UiaManagerProto {
class ResponsePayloadMsg {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ByteSizeLong@ResponsePayloadMsg@UiaManagerProto@@UEBA_KXZ
    virtual uint64_t ByteSizeLong() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckTypeAndMergeFrom@ResponsePayloadMsg@UiaManagerProto@@UEAAXAEBVMessageLite@protobuf@google@@@Z
    virtual void CheckTypeAndMergeFrom(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@ResponsePayloadMsg@UiaManagerProto@@UEAAXXZ
    virtual void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedSize@ResponsePayloadMsg@UiaManagerProto@@UEBAHXZ
    virtual int GetCachedSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitialized@ResponsePayloadMsg@UiaManagerProto@@UEBA_NXZ
    virtual bool IsInitialized() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeFrom@ResponsePayloadMsg@UiaManagerProto@@QEAAXAEBV12@@Z
    void MergeFrom(::UiaManagerProto::ResponsePayloadMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?New@ResponsePayloadMsg@UiaManagerProto@@UEBAPEAV12@PEAVArena@protobuf@google@@@Z
    virtual ::UiaManagerProto::ResponsePayloadMsg * New(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalParse@ResponsePayloadMsg@UiaManagerProto@@UEAAPEBDPEBDPEAVParseContext@internal@protobuf@google@@@Z
    virtual char const * _InternalParse(char const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalSerialize@ResponsePayloadMsg@UiaManagerProto@@UEBAPEAEPEAEPEAVEpsCopyOutputStream@io@protobuf@google@@@Z
    virtual unsigned char * _InternalSerialize(unsigned char *, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?clear_payload@ResponsePayloadMsg@UiaManagerProto@@QEAAXXZ
    void clear_payload();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ResponsePayloadMsg@UiaManagerProto@@UEAA@XZ
    virtual ~ResponsePayloadMsg();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ResponsePayloadMsg@UiaManagerProto@@IEAA@PEAVArena@protobuf@google@@_N@Z
    ResponsePayloadMsg(WindissectOpaque *, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_create_connection_for_hwnd_payload@ResponsePayloadMsg@UiaManagerProto@@AEAAPEAVCreateAutomationConnectionForHwndResponseMsg@2@XZ
    ::UiaManagerProto::CreateAutomationConnectionForHwndResponseMsg * _internal_mutable_create_connection_for_hwnd_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_create_connection_for_view_id_payload@ResponsePayloadMsg@UiaManagerProto@@AEAAPEAVCreateAutomationConnectionForViewIdResponseMsg@2@XZ
    ::UiaManagerProto::CreateAutomationConnectionForViewIdResponseMsg * _internal_mutable_create_connection_for_view_id_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_ensure_win_event_registered_payload@ResponsePayloadMsg@UiaManagerProto@@AEAAPEAVEnsureWinEventRegisteredResponseMsg@2@XZ
    ::UiaManagerProto::EnsureWinEventRegisteredResponseMsg * _internal_mutable_ensure_win_event_registered_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_get_composition_input_sink_view_instance_id_from_point_payload@ResponsePayloadMsg@UiaManagerProto@@AEAAPEAVGetCompositionInputSinkViewInstanceIdFromPointResponseMsg@2@XZ
    ::UiaManagerProto::GetCompositionInputSinkViewInstanceIdFromPointResponseMsg * _internal_mutable_get_composition_input_sink_view_instance_id_from_point_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_get_core_window_bounds_payload@ResponsePayloadMsg@UiaManagerProto@@AEAAPEAVGetCoreWindowBoundsResponseMsg@2@XZ
    ::UiaManagerProto::GetCoreWindowBoundsResponseMsg * _internal_mutable_get_core_window_bounds_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_get_current_views_payload@ResponsePayloadMsg@UiaManagerProto@@AEAAPEAVGetCurrentViewsResponseMsg@2@XZ
    ::UiaManagerProto::GetCurrentViewsResponseMsg * _internal_mutable_get_current_views_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_get_descendant_hwnd_from_point_payload@ResponsePayloadMsg@UiaManagerProto@@AEAAPEAVGetDescendantHwndFromPointResponseMsg@2@XZ
    ::UiaManagerProto::GetDescendantHwndFromPointResponseMsg * _internal_mutable_get_descendant_hwnd_from_point_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_get_desktop_window_hwnd_payload@ResponsePayloadMsg@UiaManagerProto@@AEAAPEAVGetDesktopWindowHwndResponseMsg@2@XZ
    ::UiaManagerProto::GetDesktopWindowHwndResponseMsg * _internal_mutable_get_desktop_window_hwnd_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_get_embedded_hwnd_fragment_roots_payload@ResponsePayloadMsg@UiaManagerProto@@AEAAPEAVGetEmbeddedHwndFragmentRootsResponseMsg@2@XZ
    ::UiaManagerProto::GetEmbeddedHwndFragmentRootsResponseMsg * _internal_mutable_get_embedded_hwnd_fragment_roots_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_get_host_view_instance_id_payload@ResponsePayloadMsg@UiaManagerProto@@AEAAPEAVGetHostViewInstanceIdResponseMsg@2@XZ
    ::UiaManagerProto::GetHostViewInstanceIdResponseMsg * _internal_mutable_get_host_view_instance_id_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_get_hwnd_descendants_payload@ResponsePayloadMsg@UiaManagerProto@@AEAAPEAVGetHwndDescendantsResponseMsg@2@XZ
    ::UiaManagerProto::GetHwndDescendantsResponseMsg * _internal_mutable_get_hwnd_descendants_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_get_hwnd_first_child_payload@ResponsePayloadMsg@UiaManagerProto@@AEAAPEAVGetHwndFirstChildResponseMsg@2@XZ
    ::UiaManagerProto::GetHwndFirstChildResponseMsg * _internal_mutable_get_hwnd_first_child_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_get_hwnd_focus_payload@ResponsePayloadMsg@UiaManagerProto@@AEAAPEAVGetHwndFocusResponseMsg@2@XZ
    ::UiaManagerProto::GetHwndFocusResponseMsg * _internal_mutable_get_hwnd_focus_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_get_hwnd_from_view_id_payload@ResponsePayloadMsg@UiaManagerProto@@AEAAPEAVGetHwndFromViewIdResponseMsg@2@XZ
    ::UiaManagerProto::GetHwndFromViewIdResponseMsg * _internal_mutable_get_hwnd_from_view_id_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_get_hwnd_info_payload@ResponsePayloadMsg@UiaManagerProto@@AEAAPEAVGetHwndInfoResponseMsg@2@XZ
    ::UiaManagerProto::GetHwndInfoResponseMsg * _internal_mutable_get_hwnd_info_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_get_hwnd_last_child_payload@ResponsePayloadMsg@UiaManagerProto@@AEAAPEAVGetHwndLastChildResponseMsg@2@XZ
    ::UiaManagerProto::GetHwndLastChildResponseMsg * _internal_mutable_get_hwnd_last_child_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_get_hwnd_next_sibling_payload@ResponsePayloadMsg@UiaManagerProto@@AEAAPEAVGetHwndNextSiblingResponseMsg@2@XZ
    ::UiaManagerProto::GetHwndNextSiblingResponseMsg * _internal_mutable_get_hwnd_next_sibling_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_get_hwnd_parent_payload@ResponsePayloadMsg@UiaManagerProto@@AEAAPEAVGetHwndParentResponseMsg@2@XZ
    ::UiaManagerProto::GetHwndParentResponseMsg * _internal_mutable_get_hwnd_parent_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_get_hwnd_previous_sibling_payload@ResponsePayloadMsg@UiaManagerProto@@AEAAPEAVGetHwndPreviousSiblingResponseMsg@2@XZ
    ::UiaManagerProto::GetHwndPreviousSiblingResponseMsg * _internal_mutable_get_hwnd_previous_sibling_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_get_hwnd_window_rect_payload@ResponsePayloadMsg@UiaManagerProto@@AEAAPEAVGetHwndWindowRectResponseMsg@2@XZ
    ::UiaManagerProto::GetHwndWindowRectResponseMsg * _internal_mutable_get_hwnd_window_rect_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_get_process_app_identity_payload@ResponsePayloadMsg@UiaManagerProto@@AEAAPEAVGetProcessAppIdentityResponseMsg@2@XZ
    ::UiaManagerProto::GetProcessAppIdentityResponseMsg * _internal_mutable_get_process_app_identity_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_hwnd_move_payload@ResponsePayloadMsg@UiaManagerProto@@AEAAPEAVHwndMoveResponseMsg@2@XZ
    ::UiaManagerProto::HwndMoveResponseMsg * _internal_mutable_hwnd_move_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_hwnd_scroll_payload@ResponsePayloadMsg@UiaManagerProto@@AEAAPEAVHwndScrollResponseMsg@2@XZ
    ::UiaManagerProto::HwndScrollResponseMsg * _internal_mutable_hwnd_scroll_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_is_core_window_active_payload@ResponsePayloadMsg@UiaManagerProto@@AEAAPEAVIsCoreWindowActiveResponseMsg@2@XZ
    ::UiaManagerProto::IsCoreWindowActiveResponseMsg * _internal_mutable_is_core_window_active_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_is_window_payload@ResponsePayloadMsg@UiaManagerProto@@AEAAPEAVIsWindowResponseMsg@2@XZ
    ::UiaManagerProto::IsWindowResponseMsg * _internal_mutable_is_window_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_set_focus_payload@ResponsePayloadMsg@UiaManagerProto@@AEAAPEAVSetFocusResponseMsg@2@XZ
    ::UiaManagerProto::SetFocusResponseMsg * _internal_mutable_set_focus_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_set_surrogate_window_payload@ResponsePayloadMsg@UiaManagerProto@@AEAAPEAVSetSurrogateWindowResponseMsg@2@XZ
    ::UiaManagerProto::SetSurrogateWindowResponseMsg * _internal_mutable_set_surrogate_window_payload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_internal_mutable_signal_pipe_ready_event_payload@ResponsePayloadMsg@UiaManagerProto@@AEAAPEAVSignalPipeReadyEventResponseMsg@2@XZ
    ::UiaManagerProto::SignalPipeReadyEventResponseMsg * _internal_mutable_signal_pipe_ready_event_payload();
};
} // namespace UiaManagerProto
