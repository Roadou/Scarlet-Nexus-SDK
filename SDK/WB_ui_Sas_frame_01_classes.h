// WidgetBlueprintGeneratedClass WB_ui_Sas_frame_01.WB_ui_Sas_frame_01_C
// Size: 0x4e0 (Inherited: 0x448)
struct UWB_ui_Sas_frame_01_C : UUISASFrame {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x448(0x08)
	struct UWidgetAnimation* Change_3; // 0x450(0x08)
	struct UWidgetAnimation* Change_2; // 0x458(0x08)
	struct UWidgetAnimation* Default_3; // 0x460(0x08)
	struct UWidgetAnimation* gauge_full_out; // 0x468(0x08)
	struct UWidgetAnimation* gauge_useing; // 0x470(0x08)
	struct UWidgetAnimation* gauge_full_in; // 0x478(0x08)
	struct UWidgetAnimation* default_none; // 0x480(0x08)
	struct UWidgetAnimation* decision; // 0x488(0x08)
	struct UWidgetAnimation* gauge_full; // 0x490(0x08)
	struct UWidgetAnimation* Default; // 0x498(0x08)
	struct UImage* base_eff; // 0x4a0(0x08)
	struct UImage* icon_01; // 0x4a8(0x08)
	struct UImage* icon_01_add; // 0x4b0(0x08)
	struct UImage* Sas_gauge_use; // 0x4b8(0x08)
	struct UImage* Sas_gauge_use_add; // 0x4c0(0x08)
	struct UOverlay* Sas_set; // 0x4c8(0x08)
	struct UWB_ui_Sas_frame_02_C* ObjFrame; // 0x4d0(0x08)
	struct UImage* ObjNone; // 0x4d8(0x08)

	bool CheckCombinationVisionCost(enum class E_SASKindNative sas); // Function WB_ui_Sas_frame_01.WB_ui_Sas_frame_01_C.CheckCombinationVisionCost // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void Construct(); // Function WB_ui_Sas_frame_01.WB_ui_Sas_frame_01_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Sas_frame_01.WB_ui_Sas_frame_01_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void setSasGaugeR(struct UImage* Image, int32_t Index); // Function WB_ui_Sas_frame_01.WB_ui_Sas_frame_01_C.setSasGaugeR // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Sas_frame_01(int32_t EntryPoint); // Function WB_ui_Sas_frame_01.WB_ui_Sas_frame_01_C.ExecuteUbergraph_WB_ui_Sas_frame_01 // (Final|UbergraphFunction) // @ game+0x1685580
};

