// WidgetBlueprintGeneratedClass WB_ui_Start.WB_ui_Start_C
// Size: 0x5e8 (Inherited: 0x4d0)
struct UWB_ui_Start_C : UUITitleMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4d0(0x08)
	struct UWidgetAnimation* in_first; // 0x4d8(0x08)
	struct UWidgetAnimation* default_first; // 0x4e0(0x08)
	struct UWidgetAnimation* out_first; // 0x4e8(0x08)
	struct UWidgetAnimation* change_start_menu2; // 0x4f0(0x08)
	struct UWidgetAnimation* change_title; // 0x4f8(0x08)
	struct UWidgetAnimation* decision_start_menu; // 0x500(0x08)
	struct UWidgetAnimation* default_start_menu; // 0x508(0x08)
	struct UWidgetAnimation* change_start_menu; // 0x510(0x08)
	struct UWidgetAnimation* Out; // 0x518(0x08)
	struct UWidgetAnimation* In; // 0x520(0x08)
	struct UWidgetAnimation* default_none; // 0x528(0x08)
	struct UWidgetAnimation* Default; // 0x530(0x08)
	struct UImage* CA_Image_Blue; // 0x538(0x08)
	struct UImage* CA_Image_Green; // 0x540(0x08)
	struct UImage* CA_Image_Red; // 0x548(0x08)
	struct UREDRetainerBox* CA_REDRetainerBox_1; // 0x550(0x08)
	struct UImage* cursor_add; // 0x558(0x08)
	struct UImage* Ghost; // 0x560(0x08)
	struct UImage* Icon_2; // 0x568(0x08)
	struct UImage* Icon_3; // 0x570(0x08)
	struct UImage* Image_ghost_size; // 0x578(0x08)
	struct UImage* press_any_button_glow; // 0x580(0x08)
	struct URetainerBox* RetainerBox_2; // 0x588(0x08)
	struct UREDTextBlock* Text_copywriter_2; // 0x590(0x08)
	struct UREDTextBlock* Text_Start_3; // 0x598(0x08)
	struct UREDTextBlock* Text_User_Id_2; // 0x5a0(0x08)
	struct UREDTextBlock* Text_Version_2; // 0x5a8(0x08)
	struct UWB_ui_Start_Parts_1_C* WB_ui_Start_Parts_2; // 0x5b0(0x08)
	struct UWB_ui_Start_Parts_1_C* WB_ui_Start_Parts_3; // 0x5b8(0x08)
	struct UWB_ui_Start_Parts_1_C* WB_ui_Start_Parts_4; // 0x5c0(0x08)
	struct UWB_ui_Start_Parts_1_C* WB_ui_Start_Parts_5; // 0x5c8(0x08)
	struct UWB_ui_Start_Parts_1_C* WB_ui_Start_Parts_6; // 0x5d0(0x08)
	struct UWB_ui_Start_Parts_1_C* WB_ui_Start_Parts_7; // 0x5d8(0x08)
	struct UWB_ui_Start_Parts_1_C* WB_ui_Start_Parts_8; // 0x5e0(0x08)

	void UpdateStartMaterial(); // Function WB_ui_Start.WB_ui_Start_C.UpdateStartMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PreConstruct(bool IsDesignTime); // Function WB_ui_Start.WB_ui_Start_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Start.WB_ui_Start_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WB_ui_Start.WB_ui_Start_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Start.WB_ui_Start_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnClick(struct FRedMouseArgument argument, struct UUserWidget* pWidget); // Function WB_ui_Start.WB_ui_Start_C.OnClick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Start(int32_t EntryPoint); // Function WB_ui_Start.WB_ui_Start_C.ExecuteUbergraph_WB_ui_Start // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

