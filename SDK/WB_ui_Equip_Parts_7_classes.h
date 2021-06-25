// WidgetBlueprintGeneratedClass WB_ui_Equip_Parts_7.WB_ui_Equip_Parts_6_C
// Size: 0x3c0 (Inherited: 0x388)
struct UWB_ui_Equip_Parts_6_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* Out; // 0x390(0x08)
	struct UWidgetAnimation* In; // 0x398(0x08)
	struct UWidgetAnimation* default_none; // 0x3a0(0x08)
	struct UWidgetAnimation* Default; // 0x3a8(0x08)
	struct UImage* arrow; // 0x3b0(0x08)
	struct UImage* Arrow_Add; // 0x3b8(0x08)

	void StateClose(int32_t SubState); // Function WB_ui_Equip_Parts_7.WB_ui_Equip_Parts_6_C.StateClose // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_Equip_Parts_7.WB_ui_Equip_Parts_6_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateOpen(int32_t SubState); // Function WB_ui_Equip_Parts_7.WB_ui_Equip_Parts_6_C.StateOpen // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_Equip_Parts_7.WB_ui_Equip_Parts_6_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Equip_Parts_7.WB_ui_Equip_Parts_6_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Equip_Parts_7.WB_ui_Equip_Parts_6_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Equip_Parts_7.WB_ui_Equip_Parts_6_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Equip_Parts_7(int32_t EntryPoint); // Function WB_ui_Equip_Parts_7.WB_ui_Equip_Parts_6_C.ExecuteUbergraph_WB_ui_Equip_Parts_7 // (Final|UbergraphFunction) // @ game+0x1685580
};

