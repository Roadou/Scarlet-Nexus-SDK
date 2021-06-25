// WidgetBlueprintGeneratedClass WB_ui_PK_weight_gauge_2.WB_ui_PK_weight_gauge_1_C
// Size: 0x4f0 (Inherited: 0x440)
struct UWB_ui_PK_weight_gauge_1_C : UUIPsychicWeightGauge {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x440(0x08)
	struct UWidgetAnimation* Default_5; // 0x448(0x08)
	struct UWidgetAnimation* In_5; // 0x450(0x08)
	struct UWidgetAnimation* Default_4; // 0x458(0x08)
	struct UWidgetAnimation* decision_3; // 0x460(0x08)
	struct UWidgetAnimation* decision_2; // 0x468(0x08)
	struct UWidgetAnimation* Change_3; // 0x470(0x08)
	struct UWidgetAnimation* Change_2; // 0x478(0x08)
	struct UWidgetAnimation* Out_3; // 0x480(0x08)
	struct UWidgetAnimation* In_3; // 0x488(0x08)
	struct UWidgetAnimation* Default_3; // 0x490(0x08)
	struct UWidgetAnimation* Out_2; // 0x498(0x08)
	struct UWidgetAnimation* In_2; // 0x4a0(0x08)
	struct UWidgetAnimation* default_none; // 0x4a8(0x08)
	struct UWidgetAnimation* Default_2; // 0x4b0(0x08)
	struct UImage* Bar_2; // 0x4b8(0x08)
	struct UImage* Bar_3; // 0x4c0(0x08)
	struct UImage* Bar_1_add; // 0x4c8(0x08)
	struct UImage* Frame_2; // 0x4d0(0x08)
	struct UImage* Frame_3; // 0x4d8(0x08)
	struct UImage* weight_button; // 0x4e0(0x08)
	struct UImage* weight_icon_font; // 0x4e8(0x08)

	struct FLinearColor GetFontColorButton2(); // Function WB_ui_PK_weight_gauge_2.WB_ui_PK_weight_gauge_1_C.GetFontColorButton2 // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	struct FLinearColor GetFontColorButton1(); // Function WB_ui_PK_weight_gauge_2.WB_ui_PK_weight_gauge_1_C.GetFontColorButton1 // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	struct FVector GetPsychicObjectWeightGaugePos(struct AActor* Target); // Function WB_ui_PK_weight_gauge_2.WB_ui_PK_weight_gauge_1_C.GetPsychicObjectWeightGaugePos // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_PK_weight_gauge_2.WB_ui_PK_weight_gauge_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_PK_weight_gauge_2.WB_ui_PK_weight_gauge_1_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_PK_weight_gauge_2(int32_t EntryPoint); // Function WB_ui_PK_weight_gauge_2.WB_ui_PK_weight_gauge_1_C.ExecuteUbergraph_WB_ui_PK_weight_gauge_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

