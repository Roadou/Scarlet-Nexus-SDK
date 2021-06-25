// WidgetBlueprintGeneratedClass WB_ui_Brain_bonus1.WB_ui_Brain_bonus1_C
// Size: 0x400 (Inherited: 0x388)
struct UWB_ui_Brain_bonus1_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* decision; // 0x390(0x08)
	struct UWidgetAnimation* Out; // 0x398(0x08)
	struct UWidgetAnimation* In; // 0x3a0(0x08)
	struct UWidgetAnimation* default_none; // 0x3a8(0x08)
	struct UWidgetAnimation* Default; // 0x3b0(0x08)
	struct UImage* base1; // 0x3b8(0x08)
	struct UImage* base2; // 0x3c0(0x08)
	struct UImage* base3; // 0x3c8(0x08)
	struct UOverlay* Set; // 0x3d0(0x08)
	struct UREDTextBlock* text_drive_bonus_2; // 0x3d8(0x08)
	struct UREDTextBlock* Text_drive_bonus_dot; // 0x3e0(0x08)
	struct UREDTextBlock* Text_drive_bonus_num1; // 0x3e8(0x08)
	struct UREDTextBlock* Text_drive_bonus_num2; // 0x3f0(0x08)
	bool FlagUpdate; // 0x3f8(0x01)
	char pad_3F9[0x3]; // 0x3f9(0x03)
	float bonus; // 0x3fc(0x04)

	void SetDefaultMessage(); // Function WB_ui_Brain_bonus1.WB_ui_Brain_bonus1_C.SetDefaultMessage // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateBonus(); // Function WB_ui_Brain_bonus1.WB_ui_Brain_bonus1_C.UpdateBonus // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void setBonus(float bonus); // Function WB_ui_Brain_bonus1.WB_ui_Brain_bonus1_C.setBonus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateClose(int32_t SubState); // Function WB_ui_Brain_bonus1.WB_ui_Brain_bonus1_C.StateClose // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_Brain_bonus1.WB_ui_Brain_bonus1_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateOpen(int32_t SubState); // Function WB_ui_Brain_bonus1.WB_ui_Brain_bonus1_C.StateOpen // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_Brain_bonus1.WB_ui_Brain_bonus1_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Brain_bonus1.WB_ui_Brain_bonus1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Brain_bonus1.WB_ui_Brain_bonus1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Brain_bonus1.WB_ui_Brain_bonus1_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Brain_bonus1(int32_t EntryPoint); // Function WB_ui_Brain_bonus1.WB_ui_Brain_bonus1_C.ExecuteUbergraph_WB_ui_Brain_bonus1 // (Final|UbergraphFunction) // @ game+0x1685580
};

