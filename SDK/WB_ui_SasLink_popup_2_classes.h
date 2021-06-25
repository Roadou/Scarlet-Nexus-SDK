// WidgetBlueprintGeneratedClass WB_ui_SasLink_popup_2.WB_ui_SasLink_popup_1_C
// Size: 0x521 (Inherited: 0x390)
struct UWB_ui_SasLink_popup_1_C : UUISASLinkPopup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x390(0x08)
	struct UWidgetAnimation* default_max_out; // 0x398(0x08)
	struct UWidgetAnimation* default_max_in; // 0x3a0(0x08)
	struct UWidgetAnimation* default_out; // 0x3a8(0x08)
	struct UWidgetAnimation* default_in; // 0x3b0(0x08)
	struct UWidgetAnimation* default_max; // 0x3b8(0x08)
	struct UWidgetAnimation* Default; // 0x3c0(0x08)
	struct UBorder* All; // 0x3c8(0x08)
	struct UImage* Base_Info; // 0x3d0(0x08)
	struct UImage* Bond_Base; // 0x3d8(0x08)
	struct UCanvasPanel* CanvasPanel_ViewRange; // 0x3e0(0x08)
	struct UImage* Cover_Black; // 0x3e8(0x08)
	struct UImage* Face_a2; // 0x3f0(0x08)
	struct UImage* Frame_List_2; // 0x3f8(0x08)
	struct UImage* Frame_List_3; // 0x400(0x08)
	struct UREDImageBase* icon_font_2; // 0x408(0x08)
	struct UImage* Movie_Line_2; // 0x410(0x08)
	struct UImage* Movie_Line_3; // 0x418(0x08)
	struct UOverlay* Overlay_2; // 0x420(0x08)
	struct UREDScrollBox* REDScrollBox_2; // 0x428(0x08)
	struct UImage* SAS_Base; // 0x430(0x08)
	struct UImage* sas_frame_pattern; // 0x438(0x08)
	struct UImage* sas_icon; // 0x440(0x08)
	struct UImage* sas_icon_add; // 0x448(0x08)
	struct UImage* Sas_Image_2; // 0x450(0x08)
	struct UImage* Sas_Image_3; // 0x458(0x08)
	struct USizeBox* SizeBox_1; // 0x460(0x08)
	struct UImage* Skill_List_Frame_3; // 0x468(0x08)
	struct UImage* Skill_List_Frame_1_under; // 0x470(0x08)
	struct UImage* Skill_List_Frame_1_up; // 0x478(0x08)
	struct UREDTextBlock* Text_saslink_bond_4_num; // 0x480(0x08)
	struct UREDTextBlock* Text_saslink_charaname_4; // 0x488(0x08)
	struct UREDTextBlock* Text_saslink_info_2; // 0x490(0x08)
	struct UREDTextBlock* Text_saslink_sasname_4; // 0x498(0x08)
	struct UREDTextBlock* Text_saslink_sasname_5; // 0x4a0(0x08)
	struct UImage* Thubnail_Base; // 0x4a8(0x08)
	struct UImage* Thubnail_Frame; // 0x4b0(0x08)
	struct UImage* Thubnail_Shade; // 0x4b8(0x08)
	struct UWB_ui_Guide_C* WB_ui_Guide; // 0x4c0(0x08)
	struct TArray<struct UWB_ui_SasLink_skill_parts_2_C*> SkillStatusList; // 0x4c8(0x10)
	enum class EPlayerID CharaID; // 0x4d8(0x01)
	char pad_4D9[0x3]; // 0x4d9(0x03)
	int32_t bondsLevel; // 0x4dc(0x04)
	int32_t MaxBondsLevel; // 0x4e0(0x04)
	int32_t cursorIndex; // 0x4e4(0x04)
	bool FlagViewMode; // 0x4e8(0x01)
	char pad_4E9[0x7]; // 0x4e9(0x07)
	struct ABP_MovieManager_C* MovieManager; // 0x4f0(0x08)
	int32_t StateMovie; // 0x4f8(0x04)
	bool FlagSetMovie; // 0x4fc(0x01)
	bool FlagCloseMovie; // 0x4fd(0x01)
	char pad_4FE[0x2]; // 0x4fe(0x02)
	struct FString MoviePath; // 0x500(0x10)
	struct FString playerId; // 0x510(0x10)
	bool FlagKasane; // 0x520(0x01)

	void UpdateTexture(); // Function WB_ui_SasLink_popup_2.WB_ui_SasLink_popup_1_C.UpdateTexture // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndMovie(); // Function WB_ui_SasLink_popup_2.WB_ui_SasLink_popup_1_C.EndMovie // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateMoviePath(); // Function WB_ui_SasLink_popup_2.WB_ui_SasLink_popup_1_C.CreateMoviePath // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateMovie(); // Function WB_ui_SasLink_popup_2.WB_ui_SasLink_popup_1_C.UpdateMovie // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void initializeMovie(); // Function WB_ui_SasLink_popup_2.WB_ui_SasLink_popup_1_C.initializeMovie // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Set Current CursorPosition(int32_t Position); // Function WB_ui_SasLink_popup_2.WB_ui_SasLink_popup_1_C.Set Current CursorPosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetViewMode(bool IsViewMode); // Function WB_ui_SasLink_popup_2.WB_ui_SasLink_popup_1_C.SetViewMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateSasElement(struct UWB_ui_SasLink_skill_parts_2_C* Element, int32_t Index); // Function WB_ui_SasLink_popup_2.WB_ui_SasLink_popup_1_C.UpdateSasElement // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupGuide(); // Function WB_ui_SasLink_popup_2.WB_ui_SasLink_popup_1_C.SetupGuide // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PCSasSelectEnable(bool Enable); // Function WB_ui_SasLink_popup_2.WB_ui_SasLink_popup_1_C.PCSasSelectEnable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateSasText(); // Function WB_ui_SasLink_popup_2.WB_ui_SasLink_popup_1_C.UpdateSasText // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsBondMax(bool IsMax); // Function WB_ui_SasLink_popup_2.WB_ui_SasLink_popup_1_C.IsBondMax // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void MoveCursor(); // Function WB_ui_SasLink_popup_2.WB_ui_SasLink_popup_1_C.MoveCursor // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Setup(); // Function WB_ui_SasLink_popup_2.WB_ui_SasLink_popup_1_C.Setup // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCharacter(enum class EPlayerID CharaID); // Function WB_ui_SasLink_popup_2.WB_ui_SasLink_popup_1_C.SetCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateClose(int32_t SubState); // Function WB_ui_SasLink_popup_2.WB_ui_SasLink_popup_1_C.StateClose // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_SasLink_popup_2.WB_ui_SasLink_popup_1_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateOpen(int32_t SubState); // Function WB_ui_SasLink_popup_2.WB_ui_SasLink_popup_1_C.StateOpen // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_SasLink_popup_2.WB_ui_SasLink_popup_1_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_SasLink_popup_2.WB_ui_SasLink_popup_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_SasLink_popup_2.WB_ui_SasLink_popup_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_SasLink_popup_2.WB_ui_SasLink_popup_1_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void Event_UpdateElement(int32_t Index, struct UUserWidget* pWidget); // Function WB_ui_SasLink_popup_2.WB_ui_SasLink_popup_1_C.Event_UpdateElement // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_Focus(struct UUserWidget* pWidget); // Function WB_ui_SasLink_popup_2.WB_ui_SasLink_popup_1_C.Event_Focus // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_UnFocus(struct UUserWidget* pWidget); // Function WB_ui_SasLink_popup_2.WB_ui_SasLink_popup_1_C.Event_UnFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_Focus_Mouse(int32_t isMouseScroll, int32_t Cursor, struct UUserWidget* pWidget); // Function WB_ui_SasLink_popup_2.WB_ui_SasLink_popup_1_C.Event_Focus_Mouse // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_UnFocus_Mouse(int32_t isMouseScroll, int32_t Cursor, struct UUserWidget* pWidget); // Function WB_ui_SasLink_popup_2.WB_ui_SasLink_popup_1_C.Event_UnFocus_Mouse // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_LeftDown_Mouse(int32_t Cursor, struct UUserWidget* pWidget); // Function WB_ui_SasLink_popup_2.WB_ui_SasLink_popup_1_C.Event_LeftDown_Mouse // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_SasLink_popup_2(int32_t EntryPoint); // Function WB_ui_SasLink_popup_2.WB_ui_SasLink_popup_1_C.ExecuteUbergraph_WB_ui_SasLink_popup_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

