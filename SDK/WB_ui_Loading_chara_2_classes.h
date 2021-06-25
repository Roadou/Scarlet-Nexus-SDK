// WidgetBlueprintGeneratedClass WB_ui_Loading_chara_2.WB_ui_Loading_chara_1_C
// Size: 0x4a6 (Inherited: 0x388)
struct UWB_ui_Loading_chara_1_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* Out; // 0x390(0x08)
	struct UWidgetAnimation* In; // 0x398(0x08)
	struct UWidgetAnimation* default_none; // 0x3a0(0x08)
	struct UWidgetAnimation* Default; // 0x3a8(0x08)
	struct UImage* Base_black; // 0x3b0(0x08)
	struct UImage* BG_Shadow; // 0x3b8(0x08)
	struct UImage* black_cover_2; // 0x3c0(0x08)
	struct UImage* black_cover_3; // 0x3c8(0x08)
	struct UImage* BlackBand_L; // 0x3d0(0x08)
	struct UImage* BlackBand_R; // 0x3d8(0x08)
	struct UImage* BlackBand_Un; // 0x3e0(0x08)
	struct UImage* BlackBand_Up; // 0x3e8(0x08)
	struct UImage* CA_Image_Blue; // 0x3f0(0x08)
	struct UImage* CA_Image_Green; // 0x3f8(0x08)
	struct UImage* CA_Image_Red; // 0x400(0x08)
	struct UREDRetainerBox* CA_RetainerBox; // 0x408(0x08)
	struct UREDImageBase* icon_font_2; // 0x410(0x08)
	struct UImage* Line_2; // 0x418(0x08)
	struct UImage* Line_3; // 0x420(0x08)
	struct UImage* Line_4; // 0x428(0x08)
	struct UImage* Line_5; // 0x430(0x08)
	struct UImage* line_1_particle; // 0x438(0x08)
	struct UImage* line_2_particle; // 0x440(0x08)
	struct UImage* line_3_particle; // 0x448(0x08)
	struct UImage* line_4_particle; // 0x450(0x08)
	struct UImage* noise_line; // 0x458(0x08)
	struct UImage* noise_TV; // 0x460(0x08)
	struct UREDRetainerBox* REDRetainerBox_Menu; // 0x468(0x08)
	struct URetainerBox* REDRetainerBox_noise; // 0x470(0x08)
	struct UImage* RT_chara; // 0x478(0x08)
	struct UREDTextBlock* Text_load_chara_info; // 0x480(0x08)
	struct UREDTextBlock* Text_load_chara_title; // 0x488(0x08)
	int32_t ID; // 0x490(0x04)
	char pad_494[0x4]; // 0x494(0x04)
	struct ABP_UILoading3D_C* Scene; // 0x498(0x08)
	float DrawTime; // 0x4a0(0x04)
	bool FlagDisableClose; // 0x4a4(0x01)
	bool FlagTest; // 0x4a5(0x01)

	void SetTest(bool IsTest); // Function WB_ui_Loading_chara_2.WB_ui_Loading_chara_1_C.SetTest // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Release3DScene(); // Function WB_ui_Loading_chara_2.WB_ui_Loading_chara_1_C.Release3DScene // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Create3DScene(); // Function WB_ui_Loading_chara_2.WB_ui_Loading_chara_1_C.Create3DScene // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetId(int32_t ID); // Function WB_ui_Loading_chara_2.WB_ui_Loading_chara_1_C.SetId // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateClose(int32_t SubState); // Function WB_ui_Loading_chara_2.WB_ui_Loading_chara_1_C.StateClose // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_Loading_chara_2.WB_ui_Loading_chara_1_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateOpen(int32_t SubState); // Function WB_ui_Loading_chara_2.WB_ui_Loading_chara_1_C.StateOpen // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_Loading_chara_2.WB_ui_Loading_chara_1_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Loading_chara_2.WB_ui_Loading_chara_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Loading_chara_2.WB_ui_Loading_chara_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Loading_chara_2.WB_ui_Loading_chara_1_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Loading_chara_2(int32_t EntryPoint); // Function WB_ui_Loading_chara_2.WB_ui_Loading_chara_1_C.ExecuteUbergraph_WB_ui_Loading_chara_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

