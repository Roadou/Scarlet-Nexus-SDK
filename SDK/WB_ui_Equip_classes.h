// WidgetBlueprintGeneratedClass WB_ui_Equip.WB_ui_Equip_C
// Size: 0x750 (Inherited: 0x3b0)
struct UWB_ui_Equip_C : UUIEquip {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b0(0x08)
	struct UWidgetAnimation* info_window_out; // 0x3b8(0x08)
	struct UWidgetAnimation* info_window_in; // 0x3c0(0x08)
	struct UWidgetAnimation* info_window; // 0x3c8(0x08)
	struct UWidgetAnimation* chanege_default; // 0x3d0(0x08)
	struct UWidgetAnimation* change_view; // 0x3d8(0x08)
	struct UWidgetAnimation* default_view; // 0x3e0(0x08)
	struct UWidgetAnimation* Out; // 0x3e8(0x08)
	struct UWidgetAnimation* In; // 0x3f0(0x08)
	struct UWidgetAnimation* default_none; // 0x3f8(0x08)
	struct UWidgetAnimation* Default; // 0x400(0x08)
	struct UCanvasPanel* CanvasPanel_2; // 0x408(0x08)
	struct UOverlay* Chara_Set; // 0x410(0x08)
	struct UImage* Chara_Set_Base_2; // 0x418(0x08)
	struct UImage* Chara_Set_Frame_2; // 0x420(0x08)
	struct UImage* Line_2; // 0x428(0x08)
	struct UOverlay* PG_All_Set; // 0x430(0x08)
	struct UImage* PG_Cover_Black; // 0x438(0x08)
	struct UOverlay* PG_Overlay_3; // 0x440(0x08)
	struct UREDRetainerBox* REDRetainerBox_Menu; // 0x448(0x08)
	struct UImage* RT_2; // 0x450(0x08)
	struct UOverlay* SubContents_Set; // 0x458(0x08)
	struct UUniformGridPanel* UniformGridPanel_1; // 0x460(0x08)
	struct UWB_ui_Equip_Parts_5_C* WB_ui_Equipages_Parts_6; // 0x468(0x08)
	struct UWB_ui_Equip_Parts_6_C* WB_ui_Equipages_Parts_7; // 0x470(0x08)
	struct UWB_ui_Equip_Parts_7_C* WB_ui_Equipages_Parts_8; // 0x478(0x08)
	struct UWB_ui_Equip_Parts_1_C* WB_ui_Equipages_Parts_1_2; // 0x480(0x08)
	struct UWB_ui_Equip_Parts_1_C* WB_ui_Equipages_Parts_1_3; // 0x488(0x08)
	struct UWB_ui_Equip_Parts_1_C* WB_ui_Equipages_Parts_1_4; // 0x490(0x08)
	struct UWB_ui_Equip_Parts_1_C* WB_ui_Equipages_Parts_1_5; // 0x498(0x08)
	struct UWB_ui_Equip_Parts_1_C* WB_ui_Equipages_Parts_1_6; // 0x4a0(0x08)
	struct UWB_ui_Equip_Parts_1_C* WB_ui_Equipages_Parts_1_7; // 0x4a8(0x08)
	struct UWB_ui_Equip_Parts_1_C* WB_ui_Equipages_Parts_1_8; // 0x4b0(0x08)
	struct UWB_ui_Equip_Parts_1_C* WB_ui_Equipages_Parts_1_9; // 0x4b8(0x08)
	struct UWB_ui_Equip_Parts_1_C* WB_ui_Equipages_Parts_1_10; // 0x4c0(0x08)
	struct UWB_ui_Equip_Parts_1_C* WB_ui_Equipages_Parts_1_11; // 0x4c8(0x08)
	struct UWB_ui_Equip_Parts_3_C* WB_ui_Equipages_Parts_3_2; // 0x4d0(0x08)
	struct UWB_ui_Equip_Parts_3_C* WB_ui_Equipages_Parts_3_3; // 0x4d8(0x08)
	struct UWB_ui_MainChoice_Parts_1_C* WB_ui_MainChoice_Parts_2; // 0x4e0(0x08)
	struct UWB_ui_MainContents_Parts_4_C* WB_ui_MainContents_Parts_5; // 0x4e8(0x08)
	struct UWB_ui_MainContents_Parts_5_C* WB_ui_MainContents_Parts_6; // 0x4f0(0x08)
	struct UWB_ui_MainContents_Parts_6_C* WB_ui_MainContents_Parts_6_2; // 0x4f8(0x08)
	struct UWB_ui_MainContents_Parts_6_C* WB_ui_MainContents_Parts_6_3; // 0x500(0x08)
	struct UWB_ui_Party_CharaInfo_Parts_1_C* WB_ui_Party_CharaInfo_Parts_2; // 0x508(0x08)
	bool IsContentsChange; // 0x510(0x01)
	bool IsEnd; // 0x511(0x01)
	char pad_512[0x6]; // 0x512(0x06)
	struct TArray<struct UWB_ui_Equip_Parts_1_C*> CharaList; // 0x518(0x10)
	int32_t ModeState; // 0x528(0x04)
	int32_t CursorTab; // 0x52c(0x04)
	int32_t CursorChara; // 0x530(0x04)
	int32_t CursorCategory; // 0x534(0x04)
	int32_t CursorItem; // 0x538(0x04)
	char pad_53C[0x4]; // 0x53c(0x04)
	struct TArray<struct Fstruct_ui_equip_item_list> CheckItemList; // 0x540(0x10)
	struct TArray<struct FPlayerInfo> PlayerList; // 0x550(0x10)
	struct FMulticastInlineDelegate SetCharaID; // 0x560(0x10)
	struct FMulticastInlineDelegate SetScene; // 0x570(0x10)
	struct FMulticastInlineDelegate SetSelectEquip; // 0x580(0x10)
	struct FMulticastInlineDelegate HideScene; // 0x590(0x10)
	struct UTextBlock* TextWidgetHelp; // 0x5a0(0x08)
	struct UWB_ui_Guide_C* GuideWidget; // 0x5a8(0x08)
	struct TArray<struct UWB_ui_MainContents_Parts_6_C*> TabList; // 0x5b0(0x10)
	bool IsChangeTab; // 0x5c0(0x01)
	char pad_5C1[0x3]; // 0x5c1(0x03)
	int32_t BackupModeState; // 0x5c4(0x04)
	int32_t ViewerState; // 0x5c8(0x04)
	char pad_5CC[0x4]; // 0x5cc(0x04)
	struct FMulticastInlineDelegate StartViewMode; // 0x5d0(0x10)
	struct FMulticastInlineDelegate EndViewMode; // 0x5e0(0x10)
	struct FMulticastInlineDelegate SetCharaMoveMode; // 0x5f0(0x10)
	bool isMouseInit; // 0x600(0x01)
	char pad_601[0x3]; // 0x601(0x03)
	struct FPlayerInfo CurrentPlayerInfoBefore; // 0x604(0xac)
	struct FMulticastInlineDelegate ChangeSelectListCursor; // 0x6b0(0x10)
	struct FMulticastInlineDelegate SetupEquipAllRequest; // 0x6c0(0x10)
	bool IsChangeEquip; // 0x6d0(0x01)
	bool IsChangeChara; // 0x6d1(0x01)
	char pad_6D2[0x2]; // 0x6d2(0x02)
	int32_t SortIndex; // 0x6d4(0x04)
	int32_t FilterIndex; // 0x6d8(0x04)
	bool IsCompare; // 0x6dc(0x01)
	char pad_6DD[0x3]; // 0x6dd(0x03)
	struct FMulticastInlineDelegate SetPopupMode; // 0x6e0(0x10)
	int32_t WarningState; // 0x6f0(0x04)
	struct FName GraphicUpdateID; // 0x6f4(0x08)
	char pad_6FC[0x4]; // 0x6fc(0x04)
	struct TArray<int32_t> SortBackupList; // 0x700(0x10)
	struct TArray<int32_t> EquipParameter; // 0x710(0x10)
	struct TArray<int32_t> EquipParameter2; // 0x720(0x10)
	struct TArray<int32_t> FilterParameter; // 0x730(0x10)
	struct FMulticastInlineDelegate ChangeSelectListCursorAllAttachment; // 0x740(0x10)

	void UpdateItemListCursor(); // Function WB_ui_Equip.WB_ui_Equip_C.UpdateItemListCursor // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupDefaultParts(); // Function WB_ui_Equip.WB_ui_Equip_C.SetupDefaultParts // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsNPCLeaderUnableItem(struct FName ItemId, bool IsUnable); // Function WB_ui_Equip.WB_ui_Equip_C.IsNPCLeaderUnableItem // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ChangeAttachment3DModel(); // Function WB_ui_Equip.WB_ui_Equip_C.ChangeAttachment3DModel // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsOnlyPlayer(struct FName ItemId, bool IsOnly); // Function WB_ui_Equip.WB_ui_Equip_C.IsOnlyPlayer // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsEnableAttachmentFilter(enum class EItemCategory CheckCategory, bool IsEnable); // Function WB_ui_Equip.WB_ui_Equip_C.IsEnableAttachmentFilter // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void Get Sort Backup Index(int32_t Index); // Function WB_ui_Equip.WB_ui_Equip_C.Get Sort Backup Index // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateSortBackupIndex(); // Function WB_ui_Equip.WB_ui_Equip_C.UpdateSortBackupIndex // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateWarning(); // Function WB_ui_Equip.WB_ui_Equip_C.UpdateWarning // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RemoveSamePlugin(struct FName BaseID); // Function WB_ui_Equip.WB_ui_Equip_C.RemoveSamePlugin // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsCurrentEquipPlugin(bool IsPlugin); // Function WB_ui_Equip.WB_ui_Equip_C.IsCurrentEquipPlugin // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void StartWarning(); // Function WB_ui_Equip.WB_ui_Equip_C.StartWarning // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RemoveSameAttachment(struct FName BaseID); // Function WB_ui_Equip.WB_ui_Equip_C.RemoveSameAttachment // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartCheck(int32_t Type); // Function WB_ui_Equip.WB_ui_Equip_C.StartCheck // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateChangeEquip(); // Function WB_ui_Equip.WB_ui_Equip_C.UpdateChangeEquip // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCheckEquipChange(); // Function WB_ui_Equip.WB_ui_Equip_C.UpdateCheckEquipChange // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAttachmentCategoryAlreadyEquip(struct FPlayerInfo CharaInfo, int32_t SwapIndex, enum class EItemCategory CheckCategory, bool IsAlreadyEquip); // Function WB_ui_Equip.WB_ui_Equip_C.IsAttachmentCategoryAlreadyEquip // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetupItemList(bool IsOpenItemList); // Function WB_ui_Equip.WB_ui_Equip_C.SetupItemList // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IncSortIndex(bool IsChange); // Function WB_ui_Equip.WB_ui_Equip_C.IncSortIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAttachment(enum class EItemCategory checkId, bool IsAttachment); // Function WB_ui_Equip.WB_ui_Equip_C.IsAttachment // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateCurrentCharaInfo(); // Function WB_ui_Equip.WB_ui_Equip_C.UpdateCurrentCharaInfo // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateLockChara(); // Function WB_ui_Equip.WB_ui_Equip_C.UpdateLockChara // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupLockSelectCharaList(); // Function WB_ui_Equip.WB_ui_Equip_C.SetupLockSelectCharaList // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OpenItemList(bool IsStartSelect); // Function WB_ui_Equip.WB_ui_Equip_C.OpenItemList // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitChangeTab(); // Function WB_ui_Equip.WB_ui_Equip_C.InitChangeTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitOpenMenu(); // Function WB_ui_Equip.WB_ui_Equip_C.InitOpenMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEquipNumAttachment(int32_t ID, int32_t Num); // Function WB_ui_Equip.WB_ui_Equip_C.GetEquipNumAttachment // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetEquipNumCostume(int32_t ID, int32_t Num); // Function WB_ui_Equip.WB_ui_Equip_C.GetEquipNumCostume // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetEquipNumAccessory(int32_t ID, int32_t Num); // Function WB_ui_Equip.WB_ui_Equip_C.GetEquipNumAccessory // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetEquipNumWeapon(int32_t ID, int32_t Num); // Function WB_ui_Equip.WB_ui_Equip_C.GetEquipNumWeapon // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetEquipNum(int32_t Type, int32_t ID, int32_t Num); // Function WB_ui_Equip.WB_ui_Equip_C.GetEquipNum // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetEquipID(int32_t Type, int32_t BaseID, struct FName ID); // Function WB_ui_Equip.WB_ui_Equip_C.GetEquipID // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsSameCategory(enum class EItemCategory category1, enum class EItemCategory category2, bool IsSame); // Function WB_ui_Equip.WB_ui_Equip_C.IsSameCategory // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetEquipCategory(int32_t Type, int32_t ID, enum class EItemCategory Category); // Function WB_ui_Equip.WB_ui_Equip_C.GetEquipCategory // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetupGuideWidget(bool ViewFlag, bool RemoveFlag, bool DetailFlag, bool SortFlag, bool FilterFlag); // Function WB_ui_Equip.WB_ui_Equip_C.SetupGuideWidget // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHelpMessage(); // Function WB_ui_Equip.WB_ui_Equip_C.SetHelpMessage // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsCurrentEquipAttachment(bool IsAttachment); // Function WB_ui_Equip.WB_ui_Equip_C.IsCurrentEquipAttachment // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetPlayerInfoComparison(struct FPlayerInfo PlayerInfo, struct FPlayerInfo NewParam); // Function WB_ui_Equip.WB_ui_Equip_C.SetPlayerInfoComparison // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCalcPlayerParam(struct FName NewItemID, struct FName equipItemID, struct FPlayerInfo nowPlayerInfo, struct FPlayerInfo NewPlayerData); // Function WB_ui_Equip.WB_ui_Equip_C.GetCalcPlayerParam // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetItemInfo(struct FName ItemName, struct FItemDataCell ItemData); // Function WB_ui_Equip.WB_ui_Equip_C.GetItemInfo // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetSelectPlayerInfo(struct FPlayerInfo PlayerInfo); // Function WB_ui_Equip.WB_ui_Equip_C.SetSelectPlayerInfo // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUpdateCharaStatusDetail(struct FName ItemId); // Function WB_ui_Equip.WB_ui_Equip_C.SetUpdateCharaStatusDetail // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCharaInfo(struct FPlayerInfo Info); // Function WB_ui_Equip.WB_ui_Equip_C.SetCharaInfo // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EquipCharaMouseSetUp(enum class ESlateVisibility Visible); // Function WB_ui_Equip.WB_ui_Equip_C.EquipCharaMouseSetUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EquipCharaDecide(); // Function WB_ui_Equip.WB_ui_Equip_C.EquipCharaDecide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SelectTabUpdate(); // Function WB_ui_Equip.WB_ui_Equip_C.SelectTabUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCurrentEquipCostume(struct FName ID); // Function WB_ui_Equip.WB_ui_Equip_C.SetCurrentEquipCostume // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCurrentEquipWeapon(struct FName ID); // Function WB_ui_Equip.WB_ui_Equip_C.SetCurrentEquipWeapon // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupCharaIcon(); // Function WB_ui_Equip.WB_ui_Equip_C.SetupCharaIcon // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangePlayerList(); // Function WB_ui_Equip.WB_ui_Equip_C.ChangePlayerList // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupPlayerList(); // Function WB_ui_Equip.WB_ui_Equip_C.SetupPlayerList // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeViewer(); // Function WB_ui_Equip.WB_ui_Equip_C.ChangeViewer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateViewer(); // Function WB_ui_Equip.WB_ui_Equip_C.UpdateViewer // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAttachmentID(int32_t BaseID, struct FName attachmentId); // Function WB_ui_Equip.WB_ui_Equip_C.GetAttachmentID // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetCostumeID(int32_t BaseID, struct FName CostumeId); // Function WB_ui_Equip.WB_ui_Equip_C.GetCostumeID // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SelectTab(); // Function WB_ui_Equip.WB_ui_Equip_C.SelectTab // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitSelectEquip(bool UpdateCursor); // Function WB_ui_Equip.WB_ui_Equip_C.InitSelectEquip // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeTab(); // Function WB_ui_Equip.WB_ui_Equip_C.ChangeTab // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupTab(); // Function WB_ui_Equip.WB_ui_Equip_C.SetupTab // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoopCostume(); // Function WB_ui_Equip.WB_ui_Equip_C.StateLoopCostume // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeCommonParts(struct UTextBlock* textHelp, struct UWB_ui_Guide_C* guide); // Function WB_ui_Equip.WB_ui_Equip_C.InitializeCommonParts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateItemList(struct FName AddItem, struct FName SubItem); // Function WB_ui_Equip.WB_ui_Equip_C.UpdateItemList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCurrentEquipID(struct FName ID); // Function WB_ui_Equip.WB_ui_Equip_C.SetCurrentEquipID // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentEquipID(struct FName ID, int32_t IDValue); // Function WB_ui_Equip.WB_ui_Equip_C.GetCurrentEquipID // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetIDNumber(struct FName BaseID, int32_t Number); // Function WB_ui_Equip.WB_ui_Equip_C.GetIDNumber // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SwapCurrentItem(); // Function WB_ui_Equip.WB_ui_Equip_C.SwapCurrentItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EquipChangeSubItem(struct FName ID); // Function WB_ui_Equip.WB_ui_Equip_C.EquipChangeSubItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EquipChangeAddItem(struct FName ID); // Function WB_ui_Equip.WB_ui_Equip_C.EquipChangeAddItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Sub Equip Item Count(struct FName ID, bool IsEquip); // Function WB_ui_Equip.WB_ui_Equip_C.Sub Equip Item Count // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAccessoryID(int32_t BaseID, struct FName accessoryId); // Function WB_ui_Equip.WB_ui_Equip_C.GetAccessoryID // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetWeaponID(int32_t BaseID, struct FName WeaponId); // Function WB_ui_Equip.WB_ui_Equip_C.GetWeaponID // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetCurrentListParam(); // Function WB_ui_Equip.WB_ui_Equip_C.SetCurrentListParam // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCurrentEquipParam(); // Function WB_ui_Equip.WB_ui_Equip_C.SetCurrentEquipParam // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateCheckItemList(bool IsAccessory); // Function WB_ui_Equip.WB_ui_Equip_C.CreateCheckItemList // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateStatusCheck(); // Function WB_ui_Equip.WB_ui_Equip_C.UpdateStatusCheck // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateSelectItem(); // Function WB_ui_Equip.WB_ui_Equip_C.UpdateSelectItem // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAccessoryName(int32_t ID, struct FString Name); // Function WB_ui_Equip.WB_ui_Equip_C.GetAccessoryName // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetWeaponName(int32_t ID, struct FString Name); // Function WB_ui_Equip.WB_ui_Equip_C.GetWeaponName // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void DrawCurrentEquip(bool EnableCursor); // Function WB_ui_Equip.WB_ui_Equip_C.DrawCurrentEquip // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateSelectEquip(); // Function WB_ui_Equip.WB_ui_Equip_C.UpdateSelectEquip // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateSelectChara(); // Function WB_ui_Equip.WB_ui_Equip_C.UpdateSelectChara // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void isEndMenu(bool IsEnd); // Function WB_ui_Equip.WB_ui_Equip_C.isEndMenu // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetContentsChange(bool IsChange); // Function WB_ui_Equip.WB_ui_Equip_C.SetContentsChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateClose(int32_t SubState); // Function WB_ui_Equip.WB_ui_Equip_C.StateClose // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_Equip.WB_ui_Equip_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateOpen(int32_t SubState); // Function WB_ui_Equip.WB_ui_Equip_C.StateOpen // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_Equip.WB_ui_Equip_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PreConstruct(bool IsDesignTime); // Function WB_ui_Equip.WB_ui_Equip_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Equip.WB_ui_Equip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Equip.WB_ui_Equip_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void  ‚µ (struct FRedMouseArgument argument, struct UUserWidget* pWidget); // Function WB_ui_Equip.WB_ui_Equip_C. ‚µ  // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void  ‚µãƒ–(struct FRedMouseArgument argument, struct UUserWidget* pWidget); // Function WB_ui_Equip.WB_ui_Equip_C. ‚µãƒ– // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void  ‚­ãƒ£  (struct FRedMouseArgument argument, struct UUserWidget* pWidget); // Function WB_ui_Equip.WB_ui_Equip_C. ‚­ãƒ£   // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Equip.WB_ui_Equip_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Equip(int32_t EntryPoint); // Function WB_ui_Equip.WB_ui_Equip_C.ExecuteUbergraph_WB_ui_Equip // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
	void ChangeSelectListCursorAllAttachment__DelegateSignature(int32_t Attachment0, int32_t Attachment1, int32_t Attachment2, int32_t CameraIndex); // Function WB_ui_Equip.WB_ui_Equip_C.ChangeSelectListCursorAllAttachment__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPopupMode__DelegateSignature(bool IsPopup); // Function WB_ui_Equip.WB_ui_Equip_C.SetPopupMode__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupEquipAllRequest__DelegateSignature(); // Function WB_ui_Equip.WB_ui_Equip_C.SetupEquipAllRequest__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeSelectListCursor__DelegateSignature(bool IsCostumeAttachment, int32_t CursorCategory, int32_t SelectID); // Function WB_ui_Equip.WB_ui_Equip_C.ChangeSelectListCursor__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCharaMoveMode__DelegateSignature(bool CharaMoveFlag); // Function WB_ui_Equip.WB_ui_Equip_C.SetCharaMoveMode__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndViewMode__DelegateSignature(); // Function WB_ui_Equip.WB_ui_Equip_C.EndViewMode__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartViewMode__DelegateSignature(); // Function WB_ui_Equip.WB_ui_Equip_C.StartViewMode__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void HideScene__DelegateSignature(); // Function WB_ui_Equip.WB_ui_Equip_C.HideScene__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSelectEquip__DelegateSignature(enum class EUIMain3DEquipSelectID select, int32_t AttachmentIndex); // Function WB_ui_Equip.WB_ui_Equip_C.SetSelectEquip__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetScene__DelegateSignature(enum class EUIMain3DCharacterSceneID SceneID); // Function WB_ui_Equip.WB_ui_Equip_C.SetScene__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCharaID__DelegateSignature(int32_t CharaID, struct UImage* Image); // Function WB_ui_Equip.WB_ui_Equip_C.SetCharaID__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

