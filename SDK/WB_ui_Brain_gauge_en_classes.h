// WidgetBlueprintGeneratedClass WB_ui_Brain_gauge_en.WB_ui_Brain_gauge_en_C
// Size: 0x3df (Inherited: 0x398)
struct UWB_ui_Brain_gauge_en_C : UUIBrainGaugeEN {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)
	struct UWidgetAnimation* out_using; // 0x3a0(0x08)
	struct UWidgetAnimation* in_using; // 0x3a8(0x08)
	struct UWidgetAnimation* Using; // 0x3b0(0x08)
	struct UImage* effect_brain_2; // 0x3b8(0x08)
	struct UImage* effect_brain_3; // 0x3c0(0x08)
	struct UImage* gauge_Bar_2; // 0x3c8(0x08)
	struct UImage* gauge_Bar_3; // 0x3d0(0x08)
	float CurrentPercent; // 0x3d8(0x04)
	bool FlagBrainField; // 0x3dc(0x01)
	bool FlagBrainUp; // 0x3dd(0x01)
	bool IsChange; // 0x3de(0x01)

	void UpdateGaugePercent(); // Function WB_ui_Brain_gauge_en.WB_ui_Brain_gauge_en_C.UpdateGaugePercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoopUsing(int32_t SubState); // Function WB_ui_Brain_gauge_en.WB_ui_Brain_gauge_en_C.StateLoopUsing // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoopNormal(int32_t SubState); // Function WB_ui_Brain_gauge_en.WB_ui_Brain_gauge_en_C.StateLoopNormal // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_Brain_gauge_en.WB_ui_Brain_gauge_en_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Brain_gauge_en.WB_ui_Brain_gauge_en_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Brain_gauge_en.WB_ui_Brain_gauge_en_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Brain_gauge_en.WB_ui_Brain_gauge_en_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Brain_gauge_en(int32_t EntryPoint); // Function WB_ui_Brain_gauge_en.WB_ui_Brain_gauge_en_C.ExecuteUbergraph_WB_ui_Brain_gauge_en // (Final|UbergraphFunction) // @ game+0x1685580
};

