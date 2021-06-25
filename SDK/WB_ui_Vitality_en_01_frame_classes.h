// WidgetBlueprintGeneratedClass WB_ui_Vitality_en_01_frame.WB_ui_Vitality_en_01_frame_C
// Size: 0x498 (Inherited: 0x418)
struct UWB_ui_Vitality_en_01_frame_C : UUIVitalityEN01 {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x418(0x08)
	struct UWidgetAnimation* default_none; // 0x420(0x08)
	struct UWidgetAnimation* Out; // 0x428(0x08)
	struct UWidgetAnimation* In; // 0x430(0x08)
	struct UWidgetAnimation* Default; // 0x438(0x08)
	struct UOverlay* All; // 0x440(0x08)
	struct UImage* brain_crash_frame; // 0x448(0x08)
	struct UImage* guage_frame; // 0x450(0x08)
	struct UImage* Icon_Status01; // 0x458(0x08)
	struct UImage* Icon_Status02; // 0x460(0x08)
	struct UImage* Icon_Status03; // 0x468(0x08)
	struct UImage* Icon_Status04; // 0x470(0x08)
	struct UImage* Icon_Status05; // 0x478(0x08)
	struct UREDTextBlock* Text_en_01; // 0x480(0x08)
	struct UREDTextBlock* Text_en_LV_2; // 0x488(0x08)
	struct UREDTextBlock* Text_en_LV_1_num; // 0x490(0x08)

	void Construct(); // Function WB_ui_Vitality_en_01_frame.WB_ui_Vitality_en_01_frame_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Vitality_en_01_frame.WB_ui_Vitality_en_01_frame_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void SetIcon1(struct UImage* Icon, int32_t Index); // Function WB_ui_Vitality_en_01_frame.WB_ui_Vitality_en_01_frame_C.SetIcon1 // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void SetIcon2(struct UImage* Icon, int32_t Index); // Function WB_ui_Vitality_en_01_frame.WB_ui_Vitality_en_01_frame_C.SetIcon2 // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void SetLevel(int32_t Level); // Function WB_ui_Vitality_en_01_frame.WB_ui_Vitality_en_01_frame_C.SetLevel // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Vitality_en_01_frame(int32_t EntryPoint); // Function WB_ui_Vitality_en_01_frame.WB_ui_Vitality_en_01_frame_C.ExecuteUbergraph_WB_ui_Vitality_en_01_frame // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

