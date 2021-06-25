// WidgetBlueprintGeneratedClass WB_ui_TeamKizuna.WB_ui_TeamKizuna_C
// Size: 0x3e1 (Inherited: 0x388)
struct UWB_ui_TeamKizuna_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* out_max; // 0x390(0x08)
	struct UWidgetAnimation* in_max; // 0x398(0x08)
	struct UWidgetAnimation* default_max; // 0x3a0(0x08)
	struct UWidgetAnimation* Out; // 0x3a8(0x08)
	struct UWidgetAnimation* In; // 0x3b0(0x08)
	struct UWidgetAnimation* Default; // 0x3b8(0x08)
	struct UImage* Area_here01; // 0x3c0(0x08)
	struct UImage* Frame_Grow; // 0x3c8(0x08)
	struct UREDTextBlock* Text_TeamKizuna_2; // 0x3d0(0x08)
	struct UREDTextBlock* Text_TeamKizuna_Level_2; // 0x3d8(0x08)
	bool IsMax; // 0x3e0(0x01)

	void SetTeamBondsLevel(); // Function WB_ui_TeamKizuna.WB_ui_TeamKizuna_C.SetTeamBondsLevel // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBaseText(); // Function WB_ui_TeamKizuna.WB_ui_TeamKizuna_C.SetBaseText // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateBondLevel(); // Function WB_ui_TeamKizuna.WB_ui_TeamKizuna_C.UpdateBondLevel // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateClose(int32_t SubState); // Function WB_ui_TeamKizuna.WB_ui_TeamKizuna_C.StateClose // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_TeamKizuna.WB_ui_TeamKizuna_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateOpen(int32_t SubState); // Function WB_ui_TeamKizuna.WB_ui_TeamKizuna_C.StateOpen // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_TeamKizuna.WB_ui_TeamKizuna_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_TeamKizuna.WB_ui_TeamKizuna_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_TeamKizuna.WB_ui_TeamKizuna_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_TeamKizuna.WB_ui_TeamKizuna_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_TeamKizuna(int32_t EntryPoint); // Function WB_ui_TeamKizuna.WB_ui_TeamKizuna_C.ExecuteUbergraph_WB_ui_TeamKizuna // (Final|UbergraphFunction) // @ game+0x1685580
};

