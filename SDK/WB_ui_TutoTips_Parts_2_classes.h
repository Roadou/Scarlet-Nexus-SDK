// WidgetBlueprintGeneratedClass WB_ui_TutoTips_Parts_2.WB_ui_TutoTips_Parts_1_C
// Size: 0x4c8 (Inherited: 0x450)
struct UWB_ui_TutoTips_Parts_1_C : UUITutoTipsParts {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UWidgetAnimation* default_none; // 0x458(0x08)
	struct UWidgetAnimation* Default_3; // 0x460(0x08)
	struct UWidgetAnimation* Default_2; // 0x468(0x08)
	struct UREDImageBase* icon_font; // 0x470(0x08)
	struct UOverlay* Text_Info_Set; // 0x478(0x08)
	struct UREDTextBlock* Text_tutorial_body_2; // 0x480(0x08)
	struct UREDTextBlock* Text_tutorial_page_1_num; // 0x488(0x08)
	struct UREDTextBlock* Text_tutorial_page_2_num; // 0x490(0x08)
	struct UREDTextBlock* Text_tutorial_slash_2; // 0x498(0x08)
	struct UREDTextBlock* Text_tutorial_title_2; // 0x4a0(0x08)
	struct UImage* Thubnail_Base; // 0x4a8(0x08)
	struct UImage* Thubnail_Frame; // 0x4b0(0x08)
	struct UImage* Thubnail_Shade; // 0x4b8(0x08)
	struct UImage* Tutorial_Image_2; // 0x4c0(0x08)

	bool isPlayMovie(); // Function WB_ui_TutoTips_Parts_2.WB_ui_TutoTips_Parts_1_C.isPlayMovie // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool initializeMovie(); // Function WB_ui_TutoTips_Parts_2.WB_ui_TutoTips_Parts_1_C.initializeMovie // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StatePicture(int32_t SubState); // Function WB_ui_TutoTips_Parts_2.WB_ui_TutoTips_Parts_1_C.StatePicture // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateMovie(int32_t SubState); // Function WB_ui_TutoTips_Parts_2.WB_ui_TutoTips_Parts_1_C.StateMovie // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool isMovieStop(); // Function WB_ui_TutoTips_Parts_2.WB_ui_TutoTips_Parts_1_C.isMovieStop // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_TutoTips_Parts_2.WB_ui_TutoTips_Parts_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void Destruct(); // Function WB_ui_TutoTips_Parts_2.WB_ui_TutoTips_Parts_1_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_TutoTips_Parts_2.WB_ui_TutoTips_Parts_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void StopMovieForce(); // Function WB_ui_TutoTips_Parts_2.WB_ui_TutoTips_Parts_1_C.StopMovieForce // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_TutoTips_Parts_2(int32_t EntryPoint); // Function WB_ui_TutoTips_Parts_2.WB_ui_TutoTips_Parts_1_C.ExecuteUbergraph_WB_ui_TutoTips_Parts_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

