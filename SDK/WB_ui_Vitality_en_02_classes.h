// WidgetBlueprintGeneratedClass WB_ui_Vitality_en_02.WB_ui_Vitality_en_02_C
// Size: 0x521 (Inherited: 0x448)
struct UWB_ui_Vitality_en_02_C : UUIVitalityEN02 {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x448(0x08)
	struct UWidgetAnimation* default05; // 0x450(0x08)
	struct UWidgetAnimation* default04; // 0x458(0x08)
	struct UWidgetAnimation* default03; // 0x460(0x08)
	struct UWidgetAnimation* default02; // 0x468(0x08)
	struct UWidgetAnimation* default_none; // 0x470(0x08)
	struct UWidgetAnimation* Out; // 0x478(0x08)
	struct UWidgetAnimation* In; // 0x480(0x08)
	struct UWidgetAnimation* default01; // 0x488(0x08)
	struct UOverlay* All; // 0x490(0x08)
	struct UImage* Base; // 0x498(0x08)
	struct UImage* Ghost; // 0x4a0(0x08)
	struct UImage* guage_Bar_damage; // 0x4a8(0x08)
	struct UImage* guage_Bar_nomal; // 0x4b0(0x08)
	struct UImage* guage_Bar_nomal_add; // 0x4b8(0x08)
	struct UImage* guage_frame; // 0x4c0(0x08)
	struct UImage* Icon_Status01; // 0x4c8(0x08)
	struct UImage* Icon_Status02; // 0x4d0(0x08)
	struct UImage* Icon_Status03; // 0x4d8(0x08)
	struct UImage* Icon_Status04; // 0x4e0(0x08)
	struct UImage* Icon_Status05; // 0x4e8(0x08)
	struct UImage* subquest_icon; // 0x4f0(0x08)
	struct UREDTextBlock* Text_en_02; // 0x4f8(0x08)
	struct UREDTextBlock* Text_en_LV_3; // 0x500(0x08)
	struct UREDTextBlock* Text_en_LV_2_num; // 0x508(0x08)
	struct FString SubQuestTargetName; // 0x510(0x10)
	bool IsSubQuestTarget; // 0x520(0x01)

	void UpdateSubQuestTargetIcon(); // Function WB_ui_Vitality_en_02.WB_ui_Vitality_en_02_C.UpdateSubQuestTargetIcon // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Vitality_en_02.WB_ui_Vitality_en_02_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void SetIcon1(struct UImage* Icon, int32_t Index); // Function WB_ui_Vitality_en_02.WB_ui_Vitality_en_02_C.SetIcon1 // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void SetIcon2(struct UImage* Icon, int32_t Index); // Function WB_ui_Vitality_en_02.WB_ui_Vitality_en_02_C.SetIcon2 // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Vitality_en_02.WB_ui_Vitality_en_02_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Vitality_en_02.WB_ui_Vitality_en_02_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void SetLevel(int32_t Level); // Function WB_ui_Vitality_en_02.WB_ui_Vitality_en_02_C.SetLevel // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void SetSubQuestTarget(struct FName Name); // Function WB_ui_Vitality_en_02.WB_ui_Vitality_en_02_C.SetSubQuestTarget // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Vitality_en_02(int32_t EntryPoint); // Function WB_ui_Vitality_en_02.WB_ui_Vitality_en_02_C.ExecuteUbergraph_WB_ui_Vitality_en_02 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

