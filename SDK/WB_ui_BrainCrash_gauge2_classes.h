// WidgetBlueprintGeneratedClass WB_ui_BrainCrash_gauge2.WB_ui_BrainCrash_gauge2_C
// Size: 0x488 (Inherited: 0x420)
struct UWB_ui_BrainCrash_gauge2_C : UUIBrainCrashGauge {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x420(0x08)
	struct UWidgetAnimation* decision_3; // 0x428(0x08)
	struct UWidgetAnimation* decision; // 0x430(0x08)
	struct UWidgetAnimation* full; // 0x438(0x08)
	struct UWidgetAnimation* Out; // 0x440(0x08)
	struct UWidgetAnimation* In; // 0x448(0x08)
	struct UWidgetAnimation* default_none; // 0x450(0x08)
	struct UWidgetAnimation* Default; // 0x458(0x08)
	struct UImage* Gauge_damage; // 0x460(0x08)
	struct UImage* Gauge_eff1; // 0x468(0x08)
	struct UImage* Gauge_eff2; // 0x470(0x08)
	struct UImage* Gauge_eff3; // 0x478(0x08)
	struct UImage* Gauge_normal; // 0x480(0x08)

	void Construct(); // Function WB_ui_BrainCrash_gauge2.WB_ui_BrainCrash_gauge2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_BrainCrash_gauge2.WB_ui_BrainCrash_gauge2_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void WidgetAnimationEvt_decision_2_K2Node_WidgetAnimationEvent_1(); // Function WB_ui_BrainCrash_gauge2.WB_ui_BrainCrash_gauge2_C.WidgetAnimationEvt_decision_2_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x1685580
	void WidgetAnimationEvt_full_K2Node_WidgetAnimationEvent_2(); // Function WB_ui_BrainCrash_gauge2.WB_ui_BrainCrash_gauge2_C.WidgetAnimationEvt_full_K2Node_WidgetAnimationEvent_2 // (BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_BrainCrash_gauge2(int32_t EntryPoint); // Function WB_ui_BrainCrash_gauge2.WB_ui_BrainCrash_gauge2_C.ExecuteUbergraph_WB_ui_BrainCrash_gauge2 // (Final|UbergraphFunction) // @ game+0x1685580
};

