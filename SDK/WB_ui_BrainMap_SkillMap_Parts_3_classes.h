// WidgetBlueprintGeneratedClass WB_ui_BrainMap_SkillMap_Parts_3.WB_ui_BrainMap_SkillMap_Parts_2_C
// Size: 0x3c1 (Inherited: 0x388)
struct UWB_ui_BrainMap_SkillMap_Parts_2_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* decision; // 0x390(0x08)
	struct UWidgetAnimation* select_out; // 0x398(0x08)
	struct UWidgetAnimation* select_in; // 0x3a0(0x08)
	struct UWidgetAnimation* default_none; // 0x3a8(0x08)
	struct UWidgetAnimation* select; // 0x3b0(0x08)
	struct UImage* cursor_01; // 0x3b8(0x08)
	bool IsDecide; // 0x3c0(0x01)

	void StateLoopDecide(int32_t SubState); // Function WB_ui_BrainMap_SkillMap_Parts_3.WB_ui_BrainMap_SkillMap_Parts_2_C.StateLoopDecide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDecide(bool IsDecide); // Function WB_ui_BrainMap_SkillMap_Parts_3.WB_ui_BrainMap_SkillMap_Parts_2_C.SetDecide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateClose(int32_t SubState); // Function WB_ui_BrainMap_SkillMap_Parts_3.WB_ui_BrainMap_SkillMap_Parts_2_C.StateClose // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_BrainMap_SkillMap_Parts_3.WB_ui_BrainMap_SkillMap_Parts_2_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateOpen(int32_t SubState); // Function WB_ui_BrainMap_SkillMap_Parts_3.WB_ui_BrainMap_SkillMap_Parts_2_C.StateOpen // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_BrainMap_SkillMap_Parts_3.WB_ui_BrainMap_SkillMap_Parts_2_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_BrainMap_SkillMap_Parts_3.WB_ui_BrainMap_SkillMap_Parts_2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_BrainMap_SkillMap_Parts_3.WB_ui_BrainMap_SkillMap_Parts_2_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_BrainMap_SkillMap_Parts_3.WB_ui_BrainMap_SkillMap_Parts_2_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_BrainMap_SkillMap_Parts_3(int32_t EntryPoint); // Function WB_ui_BrainMap_SkillMap_Parts_3.WB_ui_BrainMap_SkillMap_Parts_2_C.ExecuteUbergraph_WB_ui_BrainMap_SkillMap_Parts_3 // (Final|UbergraphFunction) // @ game+0x1685580
};

