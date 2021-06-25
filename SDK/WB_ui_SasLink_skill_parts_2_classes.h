// WidgetBlueprintGeneratedClass WB_ui_SasLink_skill_parts_2.WB_ui_SasLink_skill_parts_1_C
// Size: 0x3ba (Inherited: 0x388)
struct UWB_ui_SasLink_skill_parts_1_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* unselect; // 0x390(0x08)
	struct UWidgetAnimation* Default; // 0x398(0x08)
	struct UImage* base_bond; // 0x3a0(0x08)
	struct UREDTextBlock* Text_saslink_bond_2_num; // 0x3a8(0x08)
	struct UREDTextBlock* Text_saslink_sasname_3; // 0x3b0(0x08)
	bool FlagUnSelect; // 0x3b8(0x01)
	bool FlagCurrentUnSelect; // 0x3b9(0x01)

	void SetChara(enum class E_SASKind SkillID, int32_t LV, bool IsKasane); // Function WB_ui_SasLink_skill_parts_2.WB_ui_SasLink_skill_parts_1_C.SetChara // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUnSelect(bool IsUnSelect); // Function WB_ui_SasLink_skill_parts_2.WB_ui_SasLink_skill_parts_1_C.SetUnSelect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_SasLink_skill_parts_2.WB_ui_SasLink_skill_parts_1_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_SasLink_skill_parts_2.WB_ui_SasLink_skill_parts_1_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_SasLink_skill_parts_2.WB_ui_SasLink_skill_parts_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_SasLink_skill_parts_2.WB_ui_SasLink_skill_parts_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_SasLink_skill_parts_2.WB_ui_SasLink_skill_parts_1_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_SasLink_skill_parts_2(int32_t EntryPoint); // Function WB_ui_SasLink_skill_parts_2.WB_ui_SasLink_skill_parts_1_C.ExecuteUbergraph_WB_ui_SasLink_skill_parts_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

