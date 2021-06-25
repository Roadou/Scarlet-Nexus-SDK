// WidgetBlueprintGeneratedClass WB_ui_Vitality_pl_03.WB_ui_Vitality_pl_03_C
// Size: 0x4a8 (Inherited: 0x468)
struct UWB_ui_Vitality_pl_03_C : UUIVitalityPL03 {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x468(0x08)
	struct UWidgetAnimation* Out; // 0x470(0x08)
	struct UWidgetAnimation* In; // 0x478(0x08)
	struct UWidgetAnimation* default_none; // 0x480(0x08)
	struct UWidgetAnimation* Default; // 0x488(0x08)
	struct UImage* gauge_Bar_damage; // 0x490(0x08)
	struct UImage* gauge_Bar_nomal; // 0x498(0x08)
	struct UImage* gauge_Bar_nomal_add; // 0x4a0(0x08)

	bool CreateDynamicGaugeMaterial(); // Function WB_ui_Vitality_pl_03.WB_ui_Vitality_pl_03_C.CreateDynamicGaugeMaterial // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetIcon1(struct UImage* Icon, int32_t Index); // Function WB_ui_Vitality_pl_03.WB_ui_Vitality_pl_03_C.SetIcon1 // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void SetIcon2(struct UImage* Icon, int32_t Index); // Function WB_ui_Vitality_pl_03.WB_ui_Vitality_pl_03_C.SetIcon2 // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Vitality_pl_03.WB_ui_Vitality_pl_03_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Vitality_pl_03.WB_ui_Vitality_pl_03_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Vitality_pl_03(int32_t EntryPoint); // Function WB_ui_Vitality_pl_03.WB_ui_Vitality_pl_03_C.ExecuteUbergraph_WB_ui_Vitality_pl_03 // (Final|UbergraphFunction) // @ game+0x1685580
};

