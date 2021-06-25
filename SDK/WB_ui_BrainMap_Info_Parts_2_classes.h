// WidgetBlueprintGeneratedClass WB_ui_BrainMap_Info_Parts_2.WB_ui_BrainMap_Info_Parts_1_C
// Size: 0x52b (Inherited: 0x388)
struct UWB_ui_BrainMap_Info_Parts_1_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* default_none; // 0x390(0x08)
	struct UWidgetAnimation* Default; // 0x398(0x08)
	struct UHorizonFlipbookWidget* Arrow_1_category_2; // 0x3a0(0x08)
	struct UHorizonFlipbookWidget* Arrow_1_category_3; // 0x3a8(0x08)
	struct UHorizonFlipbookWidget* Arrow_1_category_4; // 0x3b0(0x08)
	struct UHorizonFlipbookWidget* Arrow_1_category_5; // 0x3b8(0x08)
	struct UHorizonFlipbookWidget* Arrow_2_category_2; // 0x3c0(0x08)
	struct UHorizonFlipbookWidget* Arrow_2_category_3; // 0x3c8(0x08)
	struct UHorizonFlipbookWidget* Arrow_2_category_4; // 0x3d0(0x08)
	struct UHorizonFlipbookWidget* Arrow_2_category_5; // 0x3d8(0x08)
	struct UImage* Face_a; // 0x3e0(0x08)
	struct UImage* Face_Frame; // 0x3e8(0x08)
	struct UImage* Face_Noise; // 0x3f0(0x08)
	struct UImage* Frame_Base_all; // 0x3f8(0x08)
	struct UImage* Frame_Base_Chara; // 0x400(0x08)
	struct UImage* Frame_List; // 0x408(0x08)
	struct UREDImageBase* icon_font_2; // 0x410(0x08)
	struct UImage* Line_2; // 0x418(0x08)
	struct UImage* Line_3; // 0x420(0x08)
	struct UImage* Movie; // 0x428(0x08)
	struct UImage* Picture; // 0x430(0x08)
	struct UREDTextBlock* Text_Bmap_info_category_2; // 0x438(0x08)
	struct UREDTextBlock* Text_Bmap_info_category_3; // 0x440(0x08)
	struct UREDTextBlock* Text_Bmap_info_category_4; // 0x448(0x08)
	struct UREDTextBlock* Text_Bmap_info_category_5; // 0x450(0x08)
	struct UREDTextBlock* Text_Bmap_info_category_1_num; // 0x458(0x08)
	struct UREDTextBlock* Text_Bmap_info_category_2_num; // 0x460(0x08)
	struct UREDTextBlock* Text_Bmap_info_category_3_num; // 0x468(0x08)
	struct UREDTextBlock* Text_Bmap_info_category_4_num; // 0x470(0x08)
	struct UREDTextBlock* Text_Bmap_info_skill_2; // 0x478(0x08)
	struct UREDTextBlock* Text_Bmap_info_skill_3; // 0x480(0x08)
	struct UImage* Thubnail_Base; // 0x488(0x08)
	struct UImage* Thubnail_Frame; // 0x490(0x08)
	struct UImage* Thubnail_Shade; // 0x498(0x08)
	struct UWB_ui_BrainMap_Info_Parts_3_C* WB_ui_BrainMap_Info_Parts_4; // 0x4a0(0x08)
	enum class EPlayerSkill skill; // 0x4a8(0x01)
	bool FlagKasane; // 0x4a9(0x01)
	char pad_4AA[0x6]; // 0x4aa(0x06)
	struct TArray<int32_t> ParamList; // 0x4b0(0x10)
	struct TArray<int32_t> ParamOffsetList; // 0x4c0(0x10)
	struct TArray<struct UTextBlock*> ParamTextList; // 0x4d0(0x10)
	int32_t BP; // 0x4e0(0x04)
	char pad_4E4[0x4]; // 0x4e4(0x04)
	struct TArray<struct UHorizonFlipbookWidget*> ArrowUpList; // 0x4e8(0x10)
	struct ABP_MovieManager_C* MovieManager; // 0x4f8(0x08)
	int32_t StateMovie; // 0x500(0x04)
	bool FlagSetMovie; // 0x504(0x01)
	bool FlagCloseMovie; // 0x505(0x01)
	char pad_506[0x2]; // 0x506(0x02)
	struct FString MoviePath; // 0x508(0x10)
	struct FString playerId; // 0x518(0x10)
	bool FlagInitializeMovie; // 0x528(0x01)
	bool FlagAlreadyLearn; // 0x529(0x01)
	bool FlagEnableLearn; // 0x52a(0x01)

	void SetSkillPoint(int32_t Point); // Function WB_ui_BrainMap_Info_Parts_2.WB_ui_BrainMap_Info_Parts_1_C.SetSkillPoint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSkillIndex(enum class EPlayerSkill SkillID, int32_t Index); // Function WB_ui_BrainMap_Info_Parts_2.WB_ui_BrainMap_Info_Parts_1_C.GetSkillIndex // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ResetPicture(); // Function WB_ui_BrainMap_Info_Parts_2.WB_ui_BrainMap_Info_Parts_1_C.ResetPicture // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePicture(); // Function WB_ui_BrainMap_Info_Parts_2.WB_ui_BrainMap_Info_Parts_1_C.UpdatePicture // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndMovie(); // Function WB_ui_BrainMap_Info_Parts_2.WB_ui_BrainMap_Info_Parts_1_C.EndMovie // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateMoviePath(); // Function WB_ui_BrainMap_Info_Parts_2.WB_ui_BrainMap_Info_Parts_1_C.CreateMoviePath // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateMovie(); // Function WB_ui_BrainMap_Info_Parts_2.WB_ui_BrainMap_Info_Parts_1_C.UpdateMovie // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void initializeMovie(); // Function WB_ui_BrainMap_Info_Parts_2.WB_ui_BrainMap_Info_Parts_1_C.initializeMovie // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetParamOffset(); // Function WB_ui_BrainMap_Info_Parts_2.WB_ui_BrainMap_Info_Parts_1_C.ResetParamOffset // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetParamOffset(enum class EPlayerSkill skill); // Function WB_ui_BrainMap_Info_Parts_2.WB_ui_BrainMap_Info_Parts_1_C.SetParamOffset // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DrawParam(); // Function WB_ui_BrainMap_Info_Parts_2.WB_ui_BrainMap_Info_Parts_1_C.DrawParam // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPlayerType(bool IsKasane); // Function WB_ui_BrainMap_Info_Parts_2.WB_ui_BrainMap_Info_Parts_1_C.SetPlayerType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBaseText(); // Function WB_ui_BrainMap_Info_Parts_2.WB_ui_BrainMap_Info_Parts_1_C.SetBaseText // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_BrainMap_Info_Parts_2.WB_ui_BrainMap_Info_Parts_1_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_BrainMap_Info_Parts_2.WB_ui_BrainMap_Info_Parts_1_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetSkill(); // Function WB_ui_BrainMap_Info_Parts_2.WB_ui_BrainMap_Info_Parts_1_C.ResetSkill // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSkill(enum class EPlayerSkill skill, bool IsAlreadyLearn, bool IsResetParam); // Function WB_ui_BrainMap_Info_Parts_2.WB_ui_BrainMap_Info_Parts_1_C.SetSkill // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_BrainMap_Info_Parts_2.WB_ui_BrainMap_Info_Parts_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_BrainMap_Info_Parts_2.WB_ui_BrainMap_Info_Parts_1_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_BrainMap_Info_Parts_2.WB_ui_BrainMap_Info_Parts_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_BrainMap_Info_Parts_2(int32_t EntryPoint); // Function WB_ui_BrainMap_Info_Parts_2.WB_ui_BrainMap_Info_Parts_1_C.ExecuteUbergraph_WB_ui_BrainMap_Info_Parts_2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

