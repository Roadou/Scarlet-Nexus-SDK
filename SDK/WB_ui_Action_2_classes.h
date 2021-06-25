// WidgetBlueprintGeneratedClass WB_ui_Action_2.WB_ui_Action_1_C
// Size: 0x580 (Inherited: 0x488)
struct UWB_ui_Action_1_C : UUIActionIcon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x488(0x08)
	struct UWidgetAnimation* out_2_bonds; // 0x490(0x08)
	struct UWidgetAnimation* in_2_bonds; // 0x498(0x08)
	struct UWidgetAnimation* decision_bonds; // 0x4a0(0x08)
	struct UWidgetAnimation* select_out_bonds; // 0x4a8(0x08)
	struct UWidgetAnimation* select_in_bonds; // 0x4b0(0x08)
	struct UWidgetAnimation* select_bonds; // 0x4b8(0x08)
	struct UWidgetAnimation* out_2_progress; // 0x4c0(0x08)
	struct UWidgetAnimation* in_2_progress; // 0x4c8(0x08)
	struct UWidgetAnimation* decision_progress; // 0x4d0(0x08)
	struct UWidgetAnimation* select_out_progress; // 0x4d8(0x08)
	struct UWidgetAnimation* select_in_progress; // 0x4e0(0x08)
	struct UWidgetAnimation* select_progress; // 0x4e8(0x08)
	struct UWidgetAnimation* Out_3; // 0x4f0(0x08)
	struct UWidgetAnimation* In_3; // 0x4f8(0x08)
	struct UWidgetAnimation* decision; // 0x500(0x08)
	struct UWidgetAnimation* select_out; // 0x508(0x08)
	struct UWidgetAnimation* select_in; // 0x510(0x08)
	struct UWidgetAnimation* select; // 0x518(0x08)
	struct UWidgetAnimation* Out; // 0x520(0x08)
	struct UWidgetAnimation* In; // 0x528(0x08)
	struct UWidgetAnimation* default_none; // 0x530(0x08)
	struct UWidgetAnimation* Default; // 0x538(0x08)
	struct UImage* Frame_2; // 0x540(0x08)
	struct UImage* frame_6_add; // 0x548(0x08)
	struct UImage* Icon_2; // 0x550(0x08)
	struct UREDImageBase* icon_font; // 0x558(0x08)
	struct UImage* restriction_base_2; // 0x560(0x08)
	struct UImage* restriction_eff_2; // 0x568(0x08)
	struct UImage* State_2; // 0x570(0x08)
	struct UREDTextBlock* Text_acton_name_2; // 0x578(0x08)

	void Construct(); // Function WB_ui_Action_2.WB_ui_Action_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Action_2.WB_ui_Action_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void PreConstruct(bool IsDesignTime); // Function WB_ui_Action_2.WB_ui_Action_1_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void setSubQuestStateDetail(enum class EActionIconSubQuestState State, bool isQuestActive, bool IsActive); // Function WB_ui_Action_2.WB_ui_Action_1_C.setSubQuestStateDetail // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Action_2(int32_t EntryPoint); // Function WB_ui_Action_2.WB_ui_Action_1_C.ExecuteUbergraph_WB_ui_Action_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

