// WidgetBlueprintGeneratedClass WB_ui_SasSkill_Popup.WB_ui_SasSkill_Popup_C
// Size: 0x3c8 (Inherited: 0x388)
struct UWB_ui_SasSkill_Popup_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* Out; // 0x390(0x08)
	struct UWidgetAnimation* In; // 0x398(0x08)
	struct UWidgetAnimation* Default; // 0x3a0(0x08)
	struct UBorder* All_Color; // 0x3a8(0x08)
	struct UOverlay* All_Set; // 0x3b0(0x08)
	struct UImage* BG_Black; // 0x3b8(0x08)
	struct UWB_ui_SasLink_popup_1_C* WB_ui_SasLink_popup_2; // 0x3c0(0x08)

	void SetCharacter(enum class EPlayerID CharaID); // Function WB_ui_SasSkill_Popup.WB_ui_SasSkill_Popup_C.SetCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateClose(int32_t SubState); // Function WB_ui_SasSkill_Popup.WB_ui_SasSkill_Popup_C.StateClose // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_SasSkill_Popup.WB_ui_SasSkill_Popup_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateOpen(int32_t SubState); // Function WB_ui_SasSkill_Popup.WB_ui_SasSkill_Popup_C.StateOpen // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_SasSkill_Popup.WB_ui_SasSkill_Popup_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_SasSkill_Popup.WB_ui_SasSkill_Popup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_SasSkill_Popup.WB_ui_SasSkill_Popup_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_SasSkill_Popup.WB_ui_SasSkill_Popup_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_SasSkill_Popup(int32_t EntryPoint); // Function WB_ui_SasSkill_Popup.WB_ui_SasSkill_Popup_C.ExecuteUbergraph_WB_ui_SasSkill_Popup // (Final|UbergraphFunction) // @ game+0x1685580
};

