// WidgetBlueprintGeneratedClass WB_ui_SasLink_skill_parts_3.WB_ui_SasLink_skill_parts_2_C
// Size: 0x3ed (Inherited: 0x388)
struct UWB_ui_SasLink_skill_parts_2_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* select_2_in; // 0x390(0x08)
	struct UWidgetAnimation* select_3; // 0x398(0x08)
	struct UWidgetAnimation* select_in; // 0x3a0(0x08)
	struct UWidgetAnimation* select; // 0x3a8(0x08)
	struct UWidgetAnimation* unselect; // 0x3b0(0x08)
	struct UWidgetAnimation* Default; // 0x3b8(0x08)
	struct UImage* base_bond; // 0x3c0(0x08)
	struct UImage* Skill_List_Frame_2; // 0x3c8(0x08)
	struct UImage* Skill_List_Frame_base_2; // 0x3d0(0x08)
	struct UREDTextBlock* Text_saslink_bond_5_num; // 0x3d8(0x08)
	struct UREDTextBlock* Text_saslink_sasname_6; // 0x3e0(0x08)
	bool IsSelect; // 0x3e8(0x01)
	bool isDisable; // 0x3e9(0x01)
	bool IsCurrentDisable; // 0x3ea(0x01)
	bool IsStart; // 0x3eb(0x01)
	bool IsResetSelect; // 0x3ec(0x01)

	void SetDisable(bool isDisable); // Function WB_ui_SasLink_skill_parts_3.WB_ui_SasLink_skill_parts_2_C.SetDisable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSelect(bool IsSelect); // Function WB_ui_SasLink_skill_parts_3.WB_ui_SasLink_skill_parts_2_C.SetSelect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetText(int32_t LV, struct FText text); // Function WB_ui_SasLink_skill_parts_3.WB_ui_SasLink_skill_parts_2_C.SetText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoopSelect(int32_t SubState); // Function WB_ui_SasLink_skill_parts_3.WB_ui_SasLink_skill_parts_2_C.StateLoopSelect // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_SasLink_skill_parts_3.WB_ui_SasLink_skill_parts_2_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_SasLink_skill_parts_3.WB_ui_SasLink_skill_parts_2_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_SasLink_skill_parts_3.WB_ui_SasLink_skill_parts_2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_SasLink_skill_parts_3.WB_ui_SasLink_skill_parts_2_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_SasLink_skill_parts_3.WB_ui_SasLink_skill_parts_2_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_SasLink_skill_parts_3(int32_t EntryPoint); // Function WB_ui_SasLink_skill_parts_3.WB_ui_SasLink_skill_parts_2_C.ExecuteUbergraph_WB_ui_SasLink_skill_parts_3 // (Final|UbergraphFunction) // @ game+0x1685580
};

