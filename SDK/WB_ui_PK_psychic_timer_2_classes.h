// WidgetBlueprintGeneratedClass WB_ui_PK_psychic_timer_2.WB_ui_PK_psychic_timer_1_C
// Size: 0x440 (Inherited: 0x388)
struct UWB_ui_PK_psychic_timer_1_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* chanege_gauge_timer; // 0x390(0x08)
	struct UWidgetAnimation* chanege_timer_gauge; // 0x398(0x08)
	struct UWidgetAnimation* Out; // 0x3a0(0x08)
	struct UWidgetAnimation* In; // 0x3a8(0x08)
	struct UWidgetAnimation* Default; // 0x3b0(0x08)
	struct UImage* all_add_4; // 0x3b8(0x08)
	struct UImage* Bar_5; // 0x3c0(0x08)
	struct UImage* Bar_4_add; // 0x3c8(0x08)
	struct USizeBox* Size_Bar_5; // 0x3d0(0x08)
	struct USizeBox* Size_Bar_7; // 0x3d8(0x08)
	struct USizeBox* SizeBoxObject; // 0x3e0(0x08)
	bool IsActive; // 0x3e8(0x01)
	char pad_3E9[0x7]; // 0x3e9(0x07)
	struct TMap<struct FName, struct FPsychicDroneGuageDataCell> StateTable; // 0x3f0(0x50)

	void SetState(int32_t Index); // Function WB_ui_PK_psychic_timer_2.WB_ui_PK_psychic_timer_1_C.SetState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetActiveFlag(bool IsActive); // Function WB_ui_PK_psychic_timer_2.WB_ui_PK_psychic_timer_1_C.SetActiveFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetGaugePercent(float percent); // Function WB_ui_PK_psychic_timer_2.WB_ui_PK_psychic_timer_1_C.SetGaugePercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateClose(int32_t SubState); // Function WB_ui_PK_psychic_timer_2.WB_ui_PK_psychic_timer_1_C.StateClose // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_PK_psychic_timer_2.WB_ui_PK_psychic_timer_1_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateOpen(int32_t SubState); // Function WB_ui_PK_psychic_timer_2.WB_ui_PK_psychic_timer_1_C.StateOpen // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_PK_psychic_timer_2.WB_ui_PK_psychic_timer_1_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_PK_psychic_timer_2.WB_ui_PK_psychic_timer_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_PK_psychic_timer_2.WB_ui_PK_psychic_timer_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_PK_psychic_timer_2.WB_ui_PK_psychic_timer_1_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_PK_psychic_timer_2(int32_t EntryPoint); // Function WB_ui_PK_psychic_timer_2.WB_ui_PK_psychic_timer_1_C.ExecuteUbergraph_WB_ui_PK_psychic_timer_2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

