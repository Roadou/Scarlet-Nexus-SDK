// WidgetBlueprintGeneratedClass WB_ui_PK_psychic_gauge_3.WB_ui_PK_psychic_gauge_2_C
// Size: 0x3e9 (Inherited: 0x388)
struct UWB_ui_PK_psychic_gauge_2_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* change_2_2; // 0x390(0x08)
	struct UWidgetAnimation* change_1_3; // 0x398(0x08)
	struct UWidgetAnimation* default_2_out; // 0x3a0(0x08)
	struct UWidgetAnimation* default_2_in; // 0x3a8(0x08)
	struct UWidgetAnimation* Default_3; // 0x3b0(0x08)
	struct UWidgetAnimation* default_1_out; // 0x3b8(0x08)
	struct UWidgetAnimation* default_1_in; // 0x3c0(0x08)
	struct UWidgetAnimation* Default_2; // 0x3c8(0x08)
	struct UImage* psychic_gauge_3_base; // 0x3d0(0x08)
	struct UImage* psychic_timer_base_5; // 0x3d8(0x08)
	struct USizeBox* Size_psychic_gauge; // 0x3e0(0x08)
	bool IsTimerMode; // 0x3e8(0x01)

	void SetGaugeLevel(int32_t Level); // Function WB_ui_PK_psychic_gauge_3.WB_ui_PK_psychic_gauge_2_C.SetGaugeLevel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateClose(int32_t SubState); // Function WB_ui_PK_psychic_gauge_3.WB_ui_PK_psychic_gauge_2_C.StateClose // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTimerModeFlag(bool IsTimerMode); // Function WB_ui_PK_psychic_gauge_3.WB_ui_PK_psychic_gauge_2_C.SetTimerModeFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoopTimer(int32_t SubState); // Function WB_ui_PK_psychic_gauge_3.WB_ui_PK_psychic_gauge_2_C.StateLoopTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_PK_psychic_gauge_3.WB_ui_PK_psychic_gauge_2_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateOpen(int32_t SubState); // Function WB_ui_PK_psychic_gauge_3.WB_ui_PK_psychic_gauge_2_C.StateOpen // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_PK_psychic_gauge_3.WB_ui_PK_psychic_gauge_2_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_PK_psychic_gauge_3.WB_ui_PK_psychic_gauge_2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_PK_psychic_gauge_3.WB_ui_PK_psychic_gauge_2_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_PK_psychic_gauge_3.WB_ui_PK_psychic_gauge_2_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_PK_psychic_gauge_3(int32_t EntryPoint); // Function WB_ui_PK_psychic_gauge_3.WB_ui_PK_psychic_gauge_2_C.ExecuteUbergraph_WB_ui_PK_psychic_gauge_3 // (Final|UbergraphFunction) // @ game+0x1685580
};

