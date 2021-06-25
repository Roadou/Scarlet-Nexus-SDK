// WidgetBlueprintGeneratedClass WB_ui_Auto_Save.WB_ui_Auto_Save_C
// Size: 0x410 (Inherited: 0x390)
struct UWB_ui_Auto_Save_C : UUIAutoSaving {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x390(0x08)
	struct UWidgetAnimation* Out; // 0x398(0x08)
	struct UWidgetAnimation* In; // 0x3a0(0x08)
	struct UWidgetAnimation* default_none; // 0x3a8(0x08)
	struct UWidgetAnimation* Default; // 0x3b0(0x08)
	struct UImage* Ghost; // 0x3b8(0x08)
	struct UImage* Icon_Auto_Save_2; // 0x3c0(0x08)
	struct UImage* Icon_Auto_Save_3; // 0x3c8(0x08)
	struct UImage* Icon_Auto_Save_add; // 0x3d0(0x08)
	struct UImage* Line_1_add; // 0x3d8(0x08)
	struct UImage* Line_2_add; // 0x3e0(0x08)
	struct UImage* Line_3_add; // 0x3e8(0x08)
	struct URetainerBox* RetainerBox_1; // 0x3f0(0x08)
	struct UREDTextBlock* Text_AutoSave_2; // 0x3f8(0x08)
	struct UImage* triangle_Loading; // 0x400(0x08)
	int32_t SavingTimer; // 0x408(0x04)
	float Delta; // 0x40c(0x04)

	void UpdateSaveingMaterial(); // Function WB_ui_Auto_Save.WB_ui_Auto_Save_C.UpdateSaveingMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateClose(int32_t SubState); // Function WB_ui_Auto_Save.WB_ui_Auto_Save_C.StateClose // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_Auto_Save.WB_ui_Auto_Save_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateOpen(int32_t SubState); // Function WB_ui_Auto_Save.WB_ui_Auto_Save_C.StateOpen // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_Auto_Save.WB_ui_Auto_Save_C.StateNone // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Auto_Save.WB_ui_Auto_Save_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Auto_Save.WB_ui_Auto_Save_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Auto_Save(int32_t EntryPoint); // Function WB_ui_Auto_Save.WB_ui_Auto_Save_C.ExecuteUbergraph_WB_ui_Auto_Save // (Final|UbergraphFunction) // @ game+0x1685580
};

