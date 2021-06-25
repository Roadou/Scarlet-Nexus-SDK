// WidgetBlueprintGeneratedClass WB_ui_BrainMap_Info_Parts_4.WB_ui_BrainMap_Info_Parts_3_C
// Size: 0x3e2 (Inherited: 0x388)
struct UWB_ui_BrainMap_Info_Parts_3_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* default_none; // 0x390(0x08)
	struct UWidgetAnimation* Default_4; // 0x398(0x08)
	struct UWidgetAnimation* Default_3; // 0x3a0(0x08)
	struct UWidgetAnimation* Default_2; // 0x3a8(0x08)
	struct UImage* Ghost_BrainMap_OutlineColor1; // 0x3b0(0x08)
	struct UREDTextBlock* Text_Bmap_info_1_num; // 0x3b8(0x08)
	struct UREDTextBlock* Text_Bmap_info_2_num; // 0x3c0(0x08)
	struct UREDTextBlock* Text_Bmap_info_Complete; // 0x3c8(0x08)
	struct UREDTextBlock* Text_Bmap_info_skill_4; // 0x3d0(0x08)
	struct UREDTextBlock* Text_Bmap_info_slash_2; // 0x3d8(0x08)
	bool FlagAlreadyLearn; // 0x3e0(0x01)
	bool FlagEnableLearn; // 0x3e1(0x01)

	void SetCurrentAnimation(); // Function WB_ui_BrainMap_Info_Parts_4.WB_ui_BrainMap_Info_Parts_3_C.SetCurrentAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_BrainMap_Info_Parts_4.WB_ui_BrainMap_Info_Parts_3_C.StateLoop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_BrainMap_Info_Parts_4.WB_ui_BrainMap_Info_Parts_3_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnableLearn(bool IsEnableLearn); // Function WB_ui_BrainMap_Info_Parts_4.WB_ui_BrainMap_Info_Parts_3_C.SetEnableLearn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAlreadyLearn(bool IsAlreadyLearn); // Function WB_ui_BrainMap_Info_Parts_4.WB_ui_BrainMap_Info_Parts_3_C.SetAlreadyLearn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBaseText(); // Function WB_ui_BrainMap_Info_Parts_4.WB_ui_BrainMap_Info_Parts_3_C.SetBaseText // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBP(int32_t BpCurrent, int32_t BpSkill); // Function WB_ui_BrainMap_Info_Parts_4.WB_ui_BrainMap_Info_Parts_3_C.SetBP // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateBrainMapFontOutlineMaterial(); // Function WB_ui_BrainMap_Info_Parts_4.WB_ui_BrainMap_Info_Parts_3_C.UpdateBrainMapFontOutlineMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_BrainMap_Info_Parts_4.WB_ui_BrainMap_Info_Parts_3_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_BrainMap_Info_Parts_4.WB_ui_BrainMap_Info_Parts_3_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_BrainMap_Info_Parts_4.WB_ui_BrainMap_Info_Parts_3_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_BrainMap_Info_Parts_4(int32_t EntryPoint); // Function WB_ui_BrainMap_Info_Parts_4.WB_ui_BrainMap_Info_Parts_3_C.ExecuteUbergraph_WB_ui_BrainMap_Info_Parts_4 // (Final|UbergraphFunction) // @ game+0x1685580
};

