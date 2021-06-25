// WidgetBlueprintGeneratedClass WB_ui_Number_damage_2.WB_ui_Number_damage_1_C
// Size: 0x538 (Inherited: 0x470)
struct UWB_ui_Number_damage_1_C : UUINumberDamage {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x470(0x08)
	struct UWidgetAnimation* braincrash_clitical; // 0x478(0x08)
	struct UWidgetAnimation* sas_clitical; // 0x480(0x08)
	struct UWidgetAnimation* nodamage; // 0x488(0x08)
	struct UWidgetAnimation* heal; // 0x490(0x08)
	struct UWidgetAnimation* enemy_clitical; // 0x498(0x08)
	struct UWidgetAnimation* Enemy; // 0x4a0(0x08)
	struct UHorizontalBox* clitical_set; // 0x4a8(0x08)
	struct UImage* Name_grow_2; // 0x4b0(0x08)
	struct UOverlay* nodamage_set; // 0x4b8(0x08)
	struct UHorizontalBox* normal_set; // 0x4c0(0x08)
	struct UImage* number_1_2; // 0x4c8(0x08)
	struct UImage* number_1_11; // 0x4d0(0x08)
	struct UImage* number_1_101; // 0x4d8(0x08)
	struct UImage* number_1_1001; // 0x4e0(0x08)
	struct UImage* number_1_10001; // 0x4e8(0x08)
	struct UImage* number_1_100001; // 0x4f0(0x08)
	struct UImage* number_3_2; // 0x4f8(0x08)
	struct UImage* number_3_11; // 0x500(0x08)
	struct UImage* number_3_101; // 0x508(0x08)
	struct UImage* number_3_1001; // 0x510(0x08)
	struct UImage* number_3_10001; // 0x518(0x08)
	struct UImage* number_3_100001; // 0x520(0x08)
	struct UOverlay* Overlay_Parent; // 0x528(0x08)
	struct UREDTextBlock* Text_Number_damage_2; // 0x530(0x08)

	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Number_damage_2.WB_ui_Number_damage_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void SetThumbnailNumebr1(struct UImage* Image, int32_t Value); // Function WB_ui_Number_damage_2.WB_ui_Number_damage_1_C.SetThumbnailNumebr1 // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void SetThumbnailNumebr3(struct UImage* Image, int32_t Value); // Function WB_ui_Number_damage_2.WB_ui_Number_damage_1_C.SetThumbnailNumebr3 // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Number_damage_2.WB_ui_Number_damage_1_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Number_damage_2.WB_ui_Number_damage_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void WidgetAnimationEvt_nodamage_K2Node_WidgetAnimationEvent_1(); // Function WB_ui_Number_damage_2.WB_ui_Number_damage_1_C.WidgetAnimationEvt_nodamage_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Number_damage_2(int32_t EntryPoint); // Function WB_ui_Number_damage_2.WB_ui_Number_damage_1_C.ExecuteUbergraph_WB_ui_Number_damage_2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

