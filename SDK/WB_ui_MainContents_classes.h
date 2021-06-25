// WidgetBlueprintGeneratedClass WB_ui_MainContents.WB_ui_MainContents_C
// Size: 0x5b9 (Inherited: 0x3d0)
struct UWB_ui_MainContents_C : UUIMainContents {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct UWidgetAnimation* info_window_out; // 0x3d8(0x08)
	struct UWidgetAnimation* info_window_in; // 0x3e0(0x08)
	struct UWidgetAnimation* info_window; // 0x3e8(0x08)
	struct UWidgetAnimation* default_view; // 0x3f0(0x08)
	struct UWidgetAnimation* cange_default; // 0x3f8(0x08)
	struct UWidgetAnimation* cange_view; // 0x400(0x08)
	struct UWidgetAnimation* Out; // 0x408(0x08)
	struct UWidgetAnimation* In; // 0x410(0x08)
	struct UWidgetAnimation* default_none; // 0x418(0x08)
	struct UWidgetAnimation* Default; // 0x420(0x08)
	struct UBorder* All_Color; // 0x428(0x08)
	struct UOverlay* All_Set; // 0x430(0x08)
	struct UImage* BlackBand_L; // 0x438(0x08)
	struct UImage* BlackBand_R; // 0x440(0x08)
	struct UImage* BlackBand_Un; // 0x448(0x08)
	struct UImage* BlackBand_Up; // 0x450(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x458(0x08)
	struct UOverlay* Contents_Set; // 0x460(0x08)
	struct UOverlay* MainContents_Set; // 0x468(0x08)
	struct UOverlay* MainMenu_Set; // 0x470(0x08)
	struct UBorder* Menu_Set; // 0x478(0x08)
	struct UREDRetainerBox* REDRetainerBox_Menu; // 0x480(0x08)
	struct UREDTextBlock* Text_main_bp_2; // 0x488(0x08)
	struct UREDTextBlock* Text_main_bp_2_num; // 0x490(0x08)
	struct UREDTextBlock* Text_main_gold_1_num; // 0x498(0x08)
	struct UREDTextBlock* Text_main_help_2; // 0x4a0(0x08)
	struct UREDTextBlock* Text_main_time_3; // 0x4a8(0x08)
	struct UREDTextBlock* Text_main_time_4; // 0x4b0(0x08)
	struct UREDTextBlock* Text_main_time_hh; // 0x4b8(0x08)
	struct UREDTextBlock* Text_main_time_mm; // 0x4c0(0x08)
	struct UREDTextBlock* Text_main_time_ss; // 0x4c8(0x08)
	struct UWB_ui_BrainMap_1_C* WB_ui_BrainMap_2; // 0x4d0(0x08)
	struct UWB_ui_Config_C* WB_ui_Config; // 0x4d8(0x08)
	struct UWB_ui_Equip_C* WB_ui_Equipage; // 0x4e0(0x08)
	struct UWB_ui_Guide_C* WB_ui_Guide; // 0x4e8(0x08)
	struct UWB_ui_Item_C* WB_ui_Item; // 0x4f0(0x08)
	struct UWB_ui_Books_C* WB_ui_Library; // 0x4f8(0x08)
	struct UWB_ui_MainContents_Parts_2_C* WB_ui_MainContents_Parts_3; // 0x500(0x08)
	struct UWB_ui_MainContents_Parts_3_C* WB_ui_MainContents_Parts_4; // 0x508(0x08)
	struct UWB_ui_MainContents_Parts_1_C* WB_ui_MainContents_Parts_1_2; // 0x510(0x08)
	struct UWB_ui_MainContents_Parts_1_C* WB_ui_MainContents_Parts_1_3; // 0x518(0x08)
	struct UWB_ui_MainContents_Parts_1_C* WB_ui_MainContents_Parts_1_4; // 0x520(0x08)
	struct UWB_ui_MainContents_Parts_1_C* WB_ui_MainContents_Parts_1_5; // 0x528(0x08)
	struct UWB_ui_MainContents_Parts_1_C* WB_ui_MainContents_Parts_1_6; // 0x530(0x08)
	struct UWB_ui_MainContents_Parts_1_C* WB_ui_MainContents_Parts_1_7; // 0x538(0x08)
	struct UWB_ui_MainContents_Parts_1_C* WB_ui_MainContents_Parts_1_8; // 0x540(0x08)
	struct UWB_ui_MainContents_Parts_1_C* WB_ui_MainContents_Parts_1_9; // 0x548(0x08)
	struct UWB_ui_Party_C* WB_ui_Party; // 0x550(0x08)
	struct UWB_ui_Quest_C* WB_ui_Quest; // 0x558(0x08)
	struct UWB_ui_SasLink_C* WB_ui_SasLink; // 0x560(0x08)
	struct TArray<struct UWB_ui_MainContents_Parts_1_C*> TabList; // 0x568(0x10)
	struct ABP_UIMain3DManager_C* BGView; // 0x578(0x08)
	struct UMaterialInstanceDynamic* MaterialSelectCharacter; // 0x580(0x08)
	struct UMaterialInstanceDynamic* MaterialChangeCharacter; // 0x588(0x08)
	bool FlagInitializeBGView; // 0x590(0x01)
	char pad_591[0x3]; // 0x591(0x03)
	int32_t DispIndexMenu; // 0x594(0x04)
	bool ReserveBondEventFlag; // 0x598(0x01)
	char pad_599[0x7]; // 0x599(0x07)
	struct FString ReserveBondEventPath; // 0x5a0(0x10)
	bool FlagInfomation; // 0x5b0(0x01)
	bool FlagViewerMode; // 0x5b1(0x01)
	bool FlagPopupMode; // 0x5b2(0x01)
	char pad_5B3[0x1]; // 0x5b3(0x01)
	float TabChangeTimer; // 0x5b4(0x04)
	bool FlagEndTutorial; // 0x5b8(0x01)

	bool SetMouseEnableMode(bool Flag); // Function WB_ui_MainContents.WB_ui_MainContents_C.SetMouseEnableMode // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	float GetBrainMapCursorCorrectArea(); // Function WB_ui_MainContents.WB_ui_MainContents_C.GetBrainMapCursorCorrectArea // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool SetBrainMapCursorCorrectArea(float Area); // Function WB_ui_MainContents.WB_ui_MainContents_C.SetBrainMapCursorCorrectArea // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	float GetBrainMapCursorCorrectSpeed(); // Function WB_ui_MainContents.WB_ui_MainContents_C.GetBrainMapCursorCorrectSpeed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool SetBrainMapCursorCorrectSpeed(float Speed); // Function WB_ui_MainContents.WB_ui_MainContents_C.SetBrainMapCursorCorrectSpeed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	float GetBrainMapCursorSpeed(); // Function WB_ui_MainContents.WB_ui_MainContents_C.GetBrainMapCursorSpeed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool SetBrainMapCursorSpeed(float Speed); // Function WB_ui_MainContents.WB_ui_MainContents_C.SetBrainMapCursorSpeed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ResetReplyBondsEpisodeFlag(); // Function WB_ui_MainContents.WB_ui_MainContents_C.ResetReplyBondsEpisodeFlag // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateInformation(int32_t SubState); // Function WB_ui_MainContents.WB_ui_MainContents_C.StateInformation // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateBP(); // Function WB_ui_MainContents.WB_ui_MainContents_C.UpdateBP // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsReplyBondsEpisode(); // Function WB_ui_MainContents.WB_ui_MainContents_C.IsReplyBondsEpisode // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool ResetWeaponMenuDefaultCursor(); // Function WB_ui_MainContents.WB_ui_MainContents_C.ResetWeaponMenuDefaultCursor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetWeaponMenuDefaultCursor(enum class EPlayerID CharaID, bool IsVisual); // Function WB_ui_MainContents.WB_ui_MainContents_C.SetWeaponMenuDefaultCursor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupMenuTabChange(); // Function WB_ui_MainContents.WB_ui_MainContents_C.SetupMenuTabChange // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupMenuOpen(); // Function WB_ui_MainContents.WB_ui_MainContents_C.SetupMenuOpen // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupBaseMessage(); // Function WB_ui_MainContents.WB_ui_MainContents_C.SetupBaseMessage // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupTabEnable(); // Function WB_ui_MainContents.WB_ui_MainContents_C.SetupTabEnable // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePlayTime(); // Function WB_ui_MainContents.WB_ui_MainContents_C.UpdatePlayTime // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateMoney(); // Function WB_ui_MainContents.WB_ui_MainContents_C.UpdateMoney // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUpWindows(); // Function WB_ui_MainContents.WB_ui_MainContents_C.SetUpWindows // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CallBondEvent(); // Function WB_ui_MainContents.WB_ui_MainContents_C.CallBondEvent // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReserveBondEvent(struct FString Path); // Function WB_ui_MainContents.WB_ui_MainContents_C.ReserveBondEvent // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CloseIndexMenu(int32_t IndexMenu); // Function WB_ui_MainContents.WB_ui_MainContents_C.CloseIndexMenu // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetIndexMenu(int32_t IndexMenu, struct UUIBase* MenuWidget); // Function WB_ui_MainContents.WB_ui_MainContents_C.GetIndexMenu // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetTabMode(bool IsTabMode); // Function WB_ui_MainContents.WB_ui_MainContents_C.SetTabMode // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsEndCurrentMenu(); // Function WB_ui_MainContents.WB_ui_MainContents_C.IsEndCurrentMenu // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	bool Create3DView(); // Function WB_ui_MainContents.WB_ui_MainContents_C.Create3DView // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool Release3DView(); // Function WB_ui_MainContents.WB_ui_MainContents_C.Release3DView // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsOpenCurrentMenu(bool IsOpen); // Function WB_ui_MainContents.WB_ui_MainContents_C.IsOpenCurrentMenu // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CloseTab(); // Function WB_ui_MainContents.WB_ui_MainContents_C.CloseTab // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OpenTab(); // Function WB_ui_MainContents.WB_ui_MainContents_C.OpenTab // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SelectTab(int32_t ValueIndex); // Function WB_ui_MainContents.WB_ui_MainContents_C.SelectTab // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupTabList(); // Function WB_ui_MainContents.WB_ui_MainContents_C.SetupTabList // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentMenu(struct UUIBase* MenuWidget); // Function WB_ui_MainContents.WB_ui_MainContents_C.GetCurrentMenu // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsPlayCurrentMenu(bool isPlay); // Function WB_ui_MainContents.WB_ui_MainContents_C.IsPlayCurrentMenu // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CloseCurrentMenu(); // Function WB_ui_MainContents.WB_ui_MainContents_C.CloseCurrentMenu // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OpenCurrentMenu(); // Function WB_ui_MainContents.WB_ui_MainContents_C.OpenCurrentMenu // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupMenuList(); // Function WB_ui_MainContents.WB_ui_MainContents_C.SetupMenuList // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateClose(int32_t SubState); // Function WB_ui_MainContents.WB_ui_MainContents_C.StateClose // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_MainContents.WB_ui_MainContents_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateOpen(int32_t SubState); // Function WB_ui_MainContents.WB_ui_MainContents_C.StateOpen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_MainContents.WB_ui_MainContents_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_MainContents.WB_ui_MainContents_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_MainContents.WB_ui_MainContents_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void Event_SetCharaID_Main(int32_t CharaID, struct UImage* Image, bool IsNoiseReset); // Function WB_ui_MainContents.WB_ui_MainContents_C.Event_SetCharaID_Main // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_SetCharaID_Sub(int32_t CharaID, struct UImage* Image, bool IsNoiseReset); // Function WB_ui_MainContents.WB_ui_MainContents_C.Event_SetCharaID_Sub // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_SetScene(enum class EUIMain3DCharacterSceneID SceneID); // Function WB_ui_MainContents.WB_ui_MainContents_C.Event_SetScene // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_Equip_SetCharaID(int32_t CharaID, struct UImage* Image); // Function WB_ui_MainContents.WB_ui_MainContents_C.Event_Equip_SetCharaID // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_Equip_SetSelectEquip(enum class EUIMain3DEquipSelectID select, int32_t AttachmentIndex); // Function WB_ui_MainContents.WB_ui_MainContents_C.Event_Equip_SetSelectEquip // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_HideScene(); // Function WB_ui_MainContents.WB_ui_MainContents_C.Event_HideScene // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_Equip_StartViewMode(); // Function WB_ui_MainContents.WB_ui_MainContents_C.Event_Equip_StartViewMode // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_Equip_EndViewMode(); // Function WB_ui_MainContents.WB_ui_MainContents_C.Event_Equip_EndViewMode // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_Equip_SetMoveMode(bool CharaMoveFlag); // Function WB_ui_MainContents.WB_ui_MainContents_C.Event_Equip_SetMoveMode // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_CallBondEpisode(struct FString Path); // Function WB_ui_MainContents.WB_ui_MainContents_C.Event_CallBondEpisode // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AnimPressButtonR(); // Function WB_ui_MainContents.WB_ui_MainContents_C.AnimPressButtonR // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void AnimPressButtonL(); // Function WB_ui_MainContents.WB_ui_MainContents_C.AnimPressButtonL // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void  ��ブ (struct FRedMouseArgument argument, struct UUserWidget* pWidget); // Function WB_ui_MainContents.WB_ui_MainContents_C. ��ブ  // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void  タブ (struct FRedMouseArgument argument, struct UUserWidget* pWidget); // Function WB_ui_MainContents.WB_ui_MainContents_C. タブ  // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void  タブ (struct FRedMouseArgument argument, struct UUserWidget* pWidget); // Function WB_ui_MainContents.WB_ui_MainContents_C. タブ  // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PreConstruct(bool IsDesignTime); // Function WB_ui_MainContents.WB_ui_MainContents_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void Event_ChangeSelectListCursor(bool IsCostumeAttachment, int32_t CursorCategory, int32_t SelectID); // Function WB_ui_MainContents.WB_ui_MainContents_C.Event_ChangeSelectListCursor // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_SetupEquipAllRequest(); // Function WB_ui_MainContents.WB_ui_MainContents_C.Event_SetupEquipAllRequest // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WB_ui_MainContents.WB_ui_MainContents_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void Event_SasLinkSetPopupMode(bool IsPopup); // Function WB_ui_MainContents.WB_ui_MainContents_C.Event_SasLinkSetPopupMode // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_EquipSetPopupMode(bool IsPopup); // Function WB_ui_MainContents.WB_ui_MainContents_C.Event_EquipSetPopupMode // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_ChangeSelectListCursorAllAttachment(int32_t Attachment0, int32_t Attachment1, int32_t Attachment2, int32_t CameraIndex); // Function WB_ui_MainContents.WB_ui_MainContents_C.Event_ChangeSelectListCursorAllAttachment // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_BrainMapSetPopupMode(bool IsPopup); // Function WB_ui_MainContents.WB_ui_MainContents_C.Event_BrainMapSetPopupMode // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_PartySetPopupMode(bool IsPopup); // Function WB_ui_MainContents.WB_ui_MainContents_C.Event_PartySetPopupMode // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_BrainMessageSetPopupMode(bool IsPopup); // Function WB_ui_MainContents.WB_ui_MainContents_C.Event_BrainMessageSetPopupMode // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_MainContents.WB_ui_MainContents_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_MainContents(int32_t EntryPoint); // Function WB_ui_MainContents.WB_ui_MainContents_C.ExecuteUbergraph_WB_ui_MainContents // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

