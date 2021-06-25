// WidgetBlueprintGeneratedClass WB_ui_Brain_tutorial1.WB_ui_Brain_tutorial1_C
// Size: 0x429 (Inherited: 0x388)
struct UWB_ui_Brain_tutorial1_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* decision; // 0x390(0x08)
	struct UWidgetAnimation* Out; // 0x398(0x08)
	struct UWidgetAnimation* In; // 0x3a0(0x08)
	struct UWidgetAnimation* default_none; // 0x3a8(0x08)
	struct UWidgetAnimation* Default; // 0x3b0(0x08)
	struct UImage* Button_icon_font_L; // 0x3b8(0x08)
	struct UImage* Button_icon_font_r; // 0x3c0(0x08)
	struct UImage* Button_Icon_L; // 0x3c8(0x08)
	struct UImage* Button_Icon_L_Base; // 0x3d0(0x08)
	struct UImage* Button_Icon_r; // 0x3d8(0x08)
	struct UImage* Button_Icon_r_Base; // 0x3e0(0x08)
	struct UImage* Button_l_eff; // 0x3e8(0x08)
	struct UOverlay* Button_R; // 0x3f0(0x08)
	struct UImage* eff01_L_add; // 0x3f8(0x08)
	struct UImage* eff01_R_add; // 0x400(0x08)
	struct UImage* Eff_L; // 0x408(0x08)
	struct UImage* Eff_R; // 0x410(0x08)
	struct UImage* Noise_L; // 0x418(0x08)
	struct UImage* Noise_R; // 0x420(0x08)
	bool buttondecide; // 0x428(0x01)

	void Update Button Fixed Text(); // Function WB_ui_Brain_tutorial1.WB_ui_Brain_tutorial1_C.Update Button Fixed Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainTutorialOpen(); // Function WB_ui_Brain_tutorial1.WB_ui_Brain_tutorial1_C.BrainTutorialOpen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateButtonText(); // Function WB_ui_Brain_tutorial1.WB_ui_Brain_tutorial1_C.UpdateButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetButtonDecision(); // Function WB_ui_Brain_tutorial1.WB_ui_Brain_tutorial1_C.SetButtonDecision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateClose(int32_t SubState); // Function WB_ui_Brain_tutorial1.WB_ui_Brain_tutorial1_C.UpdateClose // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateLoop(int32_t SubState); // Function WB_ui_Brain_tutorial1.WB_ui_Brain_tutorial1_C.UpdateLoop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateOpen(int32_t SubState); // Function WB_ui_Brain_tutorial1.WB_ui_Brain_tutorial1_C.UpdateOpen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateNone(int32_t SubState); // Function WB_ui_Brain_tutorial1.WB_ui_Brain_tutorial1_C.UpdateNone // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Brain_tutorial1.WB_ui_Brain_tutorial1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Brain_tutorial1.WB_ui_Brain_tutorial1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Brain_tutorial1.WB_ui_Brain_tutorial1_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Brain_tutorial1(int32_t EntryPoint); // Function WB_ui_Brain_tutorial1.WB_ui_Brain_tutorial1_C.ExecuteUbergraph_WB_ui_Brain_tutorial1 // (Final|UbergraphFunction) // @ game+0x1685580
};

