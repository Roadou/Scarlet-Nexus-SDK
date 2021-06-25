// WidgetBlueprintGeneratedClass WB_ui_Caption_Guide_2.WB_ui_Caption_Guide_1_C
// Size: 0x3b8 (Inherited: 0x388)
struct UWB_ui_Caption_Guide_1_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* Out; // 0x390(0x08)
	struct UWidgetAnimation* In; // 0x398(0x08)
	struct UWidgetAnimation* Default; // 0x3a0(0x08)
	struct USpacer* Spacer_2; // 0x3a8(0x08)
	struct UWB_ui_Guide_C* WB_ui_Guide; // 0x3b0(0x08)

	void setGuide(bool FlagSkip, bool FlagDecide, bool FlagCancel); // Function WB_ui_Caption_Guide_2.WB_ui_Caption_Guide_1_C.setGuide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateClose(int32_t SubState); // Function WB_ui_Caption_Guide_2.WB_ui_Caption_Guide_1_C.StateClose // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_Caption_Guide_2.WB_ui_Caption_Guide_1_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateOpen(int32_t SubState); // Function WB_ui_Caption_Guide_2.WB_ui_Caption_Guide_1_C.StateOpen // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_Caption_Guide_2.WB_ui_Caption_Guide_1_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Caption_Guide_2.WB_ui_Caption_Guide_1_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Caption_Guide_2.WB_ui_Caption_Guide_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Caption_Guide_2(int32_t EntryPoint); // Function WB_ui_Caption_Guide_2.WB_ui_Caption_Guide_1_C.ExecuteUbergraph_WB_ui_Caption_Guide_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

