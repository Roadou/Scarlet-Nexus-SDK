// WidgetBlueprintGeneratedClass WB_ui_Sas_hologram_01.WB_ui_Sas_hologram_01_C
// Size: 0x451 (Inherited: 0x388)
struct UWB_ui_Sas_hologram_01_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* decision; // 0x390(0x08)
	struct UWidgetAnimation* Default; // 0x398(0x08)
	struct UWidgetAnimation* Out; // 0x3a0(0x08)
	struct UWidgetAnimation* In; // 0x3a8(0x08)
	struct UWidgetAnimation* default_none; // 0x3b0(0x08)
	struct UOverlay* Button; // 0x3b8(0x08)
	struct UImage* Button_base_2; // 0x3c0(0x08)
	struct UImage* Button_base_3; // 0x3c8(0x08)
	struct UImage* Button_eff_2; // 0x3d0(0x08)
	struct UImage* Button_eff_2_2; // 0x3d8(0x08)
	struct UImage* Button_eff_2_3; // 0x3e0(0x08)
	struct UImage* Button_frame; // 0x3e8(0x08)
	struct UOverlay* Button_Set; // 0x3f0(0x08)
	struct UImage* Face_a; // 0x3f8(0x08)
	struct UImage* Face_base; // 0x400(0x08)
	struct UImage* Face_Frame; // 0x408(0x08)
	struct UImage* Face_Noise; // 0x410(0x08)
	struct UImage* sas_hologram_button_c; // 0x418(0x08)
	struct UImage* sas_hologram_button_l; // 0x420(0x08)
	struct UImage* sas_hologram_button_r; // 0x428(0x08)
	struct UHorizontalBox* sas_hologram_button_set; // 0x430(0x08)
	struct UImage* sas_hologram_icon_font; // 0x438(0x08)
	struct UImage* Size; // 0x440(0x08)
	struct UImage* size_ghost; // 0x448(0x08)
	bool IsDecide; // 0x450(0x01)

	void UpdateButton(); // Function WB_ui_Sas_hologram_01.WB_ui_Sas_hologram_01_C.UpdateButton // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Decide(); // Function WB_ui_Sas_hologram_01.WB_ui_Sas_hologram_01_C.Decide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCharacter(enum class EPlayerID CharaID); // Function WB_ui_Sas_hologram_01.WB_ui_Sas_hologram_01_C.SetCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateClose(int32_t SubState); // Function WB_ui_Sas_hologram_01.WB_ui_Sas_hologram_01_C.StateClose // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_Sas_hologram_01.WB_ui_Sas_hologram_01_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateOpen(int32_t SubState); // Function WB_ui_Sas_hologram_01.WB_ui_Sas_hologram_01_C.StateOpen // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_Sas_hologram_01.WB_ui_Sas_hologram_01_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Sas_hologram_01.WB_ui_Sas_hologram_01_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Sas_hologram_01.WB_ui_Sas_hologram_01_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Sas_hologram_01.WB_ui_Sas_hologram_01_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Sas_hologram_01(int32_t EntryPoint); // Function WB_ui_Sas_hologram_01.WB_ui_Sas_hologram_01_C.ExecuteUbergraph_WB_ui_Sas_hologram_01 // (Final|UbergraphFunction) // @ game+0x1685580
};

