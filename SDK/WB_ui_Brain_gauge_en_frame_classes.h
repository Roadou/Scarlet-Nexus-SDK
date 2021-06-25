// WidgetBlueprintGeneratedClass WB_ui_Brain_gauge_en_frame.WB_ui_Brain_gauge_en_frame_C
// Size: 0x3e0 (Inherited: 0x398)
struct UWB_ui_Brain_gauge_en_frame_C : UUIBrainGaugeEN {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)
	struct UWidgetAnimation* out_using; // 0x3a0(0x08)
	struct UWidgetAnimation* in_using; // 0x3a8(0x08)
	struct UWidgetAnimation* Using; // 0x3b0(0x08)
	struct UOverlay* All; // 0x3b8(0x08)
	struct UImage* guage_frame_2; // 0x3c0(0x08)
	struct UImage* guage_frame_3; // 0x3c8(0x08)
	struct UREDTextBlock* Text_brain_number_en_2; // 0x3d0(0x08)
	struct UREDTextBlock* Text_brain_second_en_2; // 0x3d8(0x08)

	void UpdateGaugeFrame(); // Function WB_ui_Brain_gauge_en_frame.WB_ui_Brain_gauge_en_frame_C.UpdateGaugeFrame // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoopUsing(int32_t SubState); // Function WB_ui_Brain_gauge_en_frame.WB_ui_Brain_gauge_en_frame_C.StateLoopUsing // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoopNormal(int32_t SubState); // Function WB_ui_Brain_gauge_en_frame.WB_ui_Brain_gauge_en_frame_C.StateLoopNormal // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_Brain_gauge_en_frame.WB_ui_Brain_gauge_en_frame_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Brain_gauge_en_frame.WB_ui_Brain_gauge_en_frame_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Brain_gauge_en_frame.WB_ui_Brain_gauge_en_frame_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Brain_gauge_en_frame(int32_t EntryPoint); // Function WB_ui_Brain_gauge_en_frame.WB_ui_Brain_gauge_en_frame_C.ExecuteUbergraph_WB_ui_Brain_gauge_en_frame // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

