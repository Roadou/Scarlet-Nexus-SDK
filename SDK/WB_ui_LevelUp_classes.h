// WidgetBlueprintGeneratedClass WB_ui_LevelUp.WB_ui_LevelUp_C
// Size: 0x40d (Inherited: 0x388)
struct UWB_ui_LevelUp_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* Out; // 0x390(0x08)
	struct UWidgetAnimation* In; // 0x398(0x08)
	struct UWidgetAnimation* default_none; // 0x3a0(0x08)
	struct UWidgetAnimation* Default; // 0x3a8(0x08)
	struct UImage* Base_2; // 0x3b0(0x08)
	struct UImage* Base_3; // 0x3b8(0x08)
	struct UImage* Base_4; // 0x3c0(0x08)
	struct UImage* eff_2; // 0x3c8(0x08)
	struct UImage* eff_3; // 0x3d0(0x08)
	struct UImage* eff_4; // 0x3d8(0x08)
	struct UImage* eff_5; // 0x3e0(0x08)
	struct UImage* eff_6; // 0x3e8(0x08)
	struct UImage* Ghost_2; // 0x3f0(0x08)
	struct UREDTextBlock* Text_LevelUp_2; // 0x3f8(0x08)
	struct UREDTextBlock* Text_LevelUp_3; // 0x400(0x08)
	float Timer; // 0x408(0x04)
	bool IsDrawMiniTips; // 0x40c(0x01)

	void UpdateMiniTips(); // Function WB_ui_LevelUp.WB_ui_LevelUp_C.UpdateMiniTips // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update LevelUp(); // Function WB_ui_LevelUp.WB_ui_LevelUp_C.Update LevelUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitString(); // Function WB_ui_LevelUp.WB_ui_LevelUp_C.InitString // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLevel(int32_t NewLevel); // Function WB_ui_LevelUp.WB_ui_LevelUp_C.SetLevel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateClose(int32_t SubState); // Function WB_ui_LevelUp.WB_ui_LevelUp_C.StateClose // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_LevelUp.WB_ui_LevelUp_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateOpen(int32_t SubState); // Function WB_ui_LevelUp.WB_ui_LevelUp_C.StateOpen // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_LevelUp.WB_ui_LevelUp_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_LevelUp.WB_ui_LevelUp_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_LevelUp.WB_ui_LevelUp_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_LevelUp(int32_t EntryPoint); // Function WB_ui_LevelUp.WB_ui_LevelUp_C.ExecuteUbergraph_WB_ui_LevelUp // (Final|UbergraphFunction) // @ game+0x1685580
};

