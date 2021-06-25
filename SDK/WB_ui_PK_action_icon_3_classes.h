// WidgetBlueprintGeneratedClass WB_ui_PK_action_icon_3.WB_ui_PK_action_icon_2_C
// Size: 0x3a9 (Inherited: 0x388)
struct UWB_ui_PK_action_icon_2_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* decision; // 0x390(0x08)
	struct UImage* Rush_eff01; // 0x398(0x08)
	struct UImage* Rush_eff02; // 0x3a0(0x08)
	bool IsDecidion; // 0x3a8(0x01)

	void StartDecision(); // Function WB_ui_PK_action_icon_3.WB_ui_PK_action_icon_2_C.StartDecision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateDecision(int32_t SubState); // Function WB_ui_PK_action_icon_3.WB_ui_PK_action_icon_2_C.StateDecision // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_PK_action_icon_3.WB_ui_PK_action_icon_2_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_PK_action_icon_3.WB_ui_PK_action_icon_2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_PK_action_icon_3.WB_ui_PK_action_icon_2_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_PK_action_icon_3.WB_ui_PK_action_icon_2_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_PK_action_icon_3(int32_t EntryPoint); // Function WB_ui_PK_action_icon_3.WB_ui_PK_action_icon_2_C.ExecuteUbergraph_WB_ui_PK_action_icon_3 // (Final|UbergraphFunction) // @ game+0x1685580
};

