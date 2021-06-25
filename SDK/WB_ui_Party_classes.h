// WidgetBlueprintGeneratedClass WB_ui_Party.WB_ui_Party_C
// Size: 0x638 (Inherited: 0x3b8)
struct UWB_ui_Party_C : UUIParty {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b8(0x08)
	struct UWidgetAnimation* select_3; // 0x3c0(0x08)
	struct UWidgetAnimation* change_2_1sub; // 0x3c8(0x08)
	struct UWidgetAnimation* change_1_2sub; // 0x3d0(0x08)
	struct UWidgetAnimation* decision; // 0x3d8(0x08)
	struct UWidgetAnimation* select_2; // 0x3e0(0x08)
	struct UWidgetAnimation* change_2_1main; // 0x3e8(0x08)
	struct UWidgetAnimation* change_1_2main; // 0x3f0(0x08)
	struct UWidgetAnimation* Out_3; // 0x3f8(0x08)
	struct UWidgetAnimation* Default_3; // 0x400(0x08)
	struct UWidgetAnimation* Out_2; // 0x408(0x08)
	struct UWidgetAnimation* In_2; // 0x410(0x08)
	struct UWidgetAnimation* default_none; // 0x418(0x08)
	struct UWidgetAnimation* Default_2; // 0x420(0x08)
	struct UOverlay* All_Set; // 0x428(0x08)
	struct UImage* Base_3; // 0x430(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x438(0x08)
	struct UCanvasPanel* CanvasPanel_ViewRange; // 0x440(0x08)
	struct UImage* CharaInfo_Noise_2; // 0x448(0x08)
	struct UImage* CharaInfo_Noise_3; // 0x450(0x08)
	struct UImage* CharaInfo_Noise_1_2; // 0x458(0x08)
	struct UImage* CharaInfo_Noise_2_2; // 0x460(0x08)
	struct UOverlay* CharaInfo_Set; // 0x468(0x08)
	struct UImage* Frame_Base_3; // 0x470(0x08)
	struct UImage* Frame_Sas_2; // 0x478(0x08)
	struct UImage* Frame_Sas_3; // 0x480(0x08)
	struct UREDImageBase* MemberSas_line_3; // 0x488(0x08)
	struct UOverlay* MemberSas_Set; // 0x490(0x08)
	struct UOverlay* MissionMembers_List; // 0x498(0x08)
	struct UOverlay* Overlay_2; // 0x4a0(0x08)
	struct UBorder* PG_All_Color; // 0x4a8(0x08)
	struct UImage* PG_RT_2; // 0x4b0(0x08)
	struct UREDRetainerBox* REDRetainerBox_Menu; // 0x4b8(0x08)
	struct UREDScrollBox* RedScrollBox_C_1; // 0x4c0(0x08)
	struct UImage* RT_3; // 0x4c8(0x08)
	struct UImage* SAS_Base_2; // 0x4d0(0x08)
	struct UImage* SAS_Base_3; // 0x4d8(0x08)
	struct UImage* sas_frame_pattern_2; // 0x4e0(0x08)
	struct UImage* sas_frame_pattern_3; // 0x4e8(0x08)
	struct UImage* sas_icon_2; // 0x4f0(0x08)
	struct UImage* sas_icon_3; // 0x4f8(0x08)
	struct UImage* sas_icon_add_2; // 0x500(0x08)
	struct UImage* sas_icon_add_3; // 0x508(0x08)
	struct UImage* SecondMembers_List; // 0x510(0x08)
	struct UREDTextBlock* Text_party_membersas_2; // 0x518(0x08)
	struct UREDTextBlock* Text_party_membersas_1_text; // 0x520(0x08)
	struct UWB_ui_Party_CharaInfo_Parts_3_C* WB_ui_Party_CharaInfo_Parts_4; // 0x528(0x08)
	struct UWB_ui_Party_CharaInfo_Parts_1_C* WB_ui_Party_CharaInfo_Parts_1_2; // 0x530(0x08)
	struct UWB_ui_Party_CharaInfo_Parts_1_C* WB_ui_Party_CharaInfo_Parts_1_3; // 0x538(0x08)
	struct UWB_ui_Party_MemberList_Parts_1_C* WB_ui_Party_MemberList_Parts_1_2; // 0x540(0x08)
	struct UWB_ui_Party_MemberList_Parts_1_C* WB_ui_Party_MemberList_Parts_1_3; // 0x548(0x08)
	struct UWB_ui_Party_MemberList_Parts_1_C* WB_ui_Party_MemberList_Parts_1_4; // 0x550(0x08)
	struct UWB_ui_SasLink_popup_1_C* WB_ui_SasLink_popup_2; // 0x558(0x08)
	int32_t CursorPosMain; // 0x560(0x04)
	int32_t CursorPosSub; // 0x564(0x04)
	struct TArray<struct UWB_ui_Party_MemberList_Parts_1_C*> CursorListMain; // 0x568(0x10)
	int32_t SubMemberNum; // 0x578(0x04)
	bool IsMain; // 0x57c(0x01)
	bool isLock; // 0x57d(0x01)
	bool IsMainLock; // 0x57e(0x01)
	char pad_57F[0x1]; // 0x57f(0x01)
	int32_t CursorPosLock; // 0x580(0x04)
	char pad_584[0x4]; // 0x584(0x04)
	struct TArray<int32_t> MemberIndexList; // 0x588(0x10)
	struct TArray<int32_t> DrawIndexList; // 0x598(0x10)
	bool IsSwap; // 0x5a8(0x01)
	char pad_5A9[0x3]; // 0x5a9(0x03)
	int32_t StateInformation; // 0x5ac(0x04)
	int32_t InfoIndex; // 0x5b0(0x04)
	int32_t InfoLockIndex; // 0x5b4(0x04)
	struct FMulticastInlineDelegate SetCharaID_Main; // 0x5b8(0x10)
	struct FMulticastInlineDelegate SetCharaID_Sub; // 0x5c8(0x10)
	struct FMulticastInlineDelegate SetScene; // 0x5d8(0x10)
	struct TArray<enum class RSPartyPlayerKind> PartyKindList; // 0x5e8(0x10)
	bool IsEnd; // 0x5f8(0x01)
	bool IsContentsChange; // 0x5f9(0x01)
	char pad_5FA[0x6]; // 0x5fa(0x06)
	struct FMulticastInlineDelegate HideScene; // 0x600(0x10)
	struct UTextBlock* TextWidgetHelp; // 0x610(0x08)
	struct UWB_ui_Guide_C* GuideWidget; // 0x618(0x08)
	bool MouseDecideMain; // 0x620(0x01)
	bool IsAnimation; // 0x621(0x01)
	bool IsDrawPartyTips; // 0x622(0x01)
	bool isOperationFlag; // 0x623(0x01)
	bool IsKasane; // 0x624(0x01)
	char pad_625[0x3]; // 0x625(0x03)
	struct FMulticastInlineDelegate SetPopupMode; // 0x628(0x10)

	void SetupDefaultParts(); // Function WB_ui_Party.WB_ui_Party_C.SetupDefaultParts // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupDrawPartyTips(); // Function WB_ui_Party.WB_ui_Party_C.SetupDrawPartyTips // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMemberIndex(int32_t DrawIndex, int32_t MemberIndex); // Function WB_ui_Party.WB_ui_Party_C.GetMemberIndex // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetupBonusText(); // Function WB_ui_Party.WB_ui_Party_C.SetupBonusText // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupBonus(); // Function WB_ui_Party.WB_ui_Party_C.SetupBonus // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDrawBonus(); // Function WB_ui_Party.WB_ui_Party_C.UpdateDrawBonus // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateGuide(); // Function WB_ui_Party.WB_ui_Party_C.UpdateGuide // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitChangeTab(); // Function WB_ui_Party.WB_ui_Party_C.InitChangeTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitOpenMenu(); // Function WB_ui_Party.WB_ui_Party_C.InitOpenMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OperationMouseDisable(); // Function WB_ui_Party.WB_ui_Party_C.OperationMouseDisable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SubListMouseDisable(bool disable); // Function WB_ui_Party.WB_ui_Party_C.SubListMouseDisable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MainListMouseDisable(bool disable); // Function WB_ui_Party.WB_ui_Party_C.MainListMouseDisable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LeaveCursorMember(); // Function WB_ui_Party.WB_ui_Party_C.LeaveCursorMember // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void setGuide(bool IsEnableRemove, bool IsEnableSAS); // Function WB_ui_Party.WB_ui_Party_C.setGuide // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHelpText(int32_t Index); // Function WB_ui_Party.WB_ui_Party_C.SetHelpText // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeCommonParts(struct UTextBlock* textHelp, struct UWB_ui_Guide_C* guide); // Function WB_ui_Party.WB_ui_Party_C.InitializeCommonParts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetContentsChange(bool IsChange); // Function WB_ui_Party.WB_ui_Party_C.SetContentsChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void isEndMenu(bool IsEnd); // Function WB_ui_Party.WB_ui_Party_C.isEndMenu // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ReflectPartyMember(); // Function WB_ui_Party.WB_ui_Party_C.ReflectPartyMember // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInfoParameter(int32_t Index, struct UWB_ui_Party_CharaInfo_Parts_1_C* Widget, bool IsMain, bool IsViewReverse, bool IsNoiseReset); // Function WB_ui_Party.WB_ui_Party_C.SetInfoParameter // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSubCharacterTexture(struct UTextureRenderTarget2D* Texture, struct UTextureRenderTarget2D* AlphaTexture); // Function WB_ui_Party.WB_ui_Party_C.SetSubCharacterTexture // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMainCharacterTexture(struct UTextureRenderTarget2D* Texture, struct UTextureRenderTarget2D* AlphaTexture); // Function WB_ui_Party.WB_ui_Party_C.SetMainCharacterTexture // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetLockCharaIndex(int32_t Index, int32_t MemberIndex); // Function WB_ui_Party.WB_ui_Party_C.GetLockCharaIndex // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetCurrentCharaIndex(int32_t Index); // Function WB_ui_Party.WB_ui_Party_C.GetCurrentCharaIndex // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateInfomation(); // Function WB_ui_Party.WB_ui_Party_C.UpdateInfomation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsCursorAnimationSub(bool IsAnimation); // Function WB_ui_Party.WB_ui_Party_C.IsCursorAnimationSub // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsCursorAnimationMain(bool IsAnimation); // Function WB_ui_Party.WB_ui_Party_C.IsCursorAnimationMain // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateMainMember(); // Function WB_ui_Party.WB_ui_Party_C.UpdateMainMember // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSubMemberParameter(struct UWB_ui_Party_MemberList_Parts_1_C* Widget, int32_t Index); // Function WB_ui_Party.WB_ui_Party_C.SetSubMemberParameter // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SortSubMemberList(); // Function WB_ui_Party.WB_ui_Party_C.SortSubMemberList // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SwapCurrentMember(); // Function WB_ui_Party.WB_ui_Party_C.SwapCurrentMember // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddSubMemberList(int32_t member); // Function WB_ui_Party.WB_ui_Party_C.AddSubMemberList // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RemoveCurrentMemberList(); // Function WB_ui_Party.WB_ui_Party_C.RemoveCurrentMemberList // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSubMemberListCount(int32_t count); // Function WB_ui_Party.WB_ui_Party_C.GetSubMemberListCount // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void InitMemberList(); // Function WB_ui_Party.WB_ui_Party_C.InitMemberList // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DecisionCursor(); // Function WB_ui_Party.WB_ui_Party_C.DecisionCursor // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReleaseSubMemberList(); // Function WB_ui_Party.WB_ui_Party_C.ReleaseSubMemberList // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupSubMemberList(); // Function WB_ui_Party.WB_ui_Party_C.SetupSubMemberList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CloseCursor(); // Function WB_ui_Party.WB_ui_Party_C.CloseCursor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InputCursor(); // Function WB_ui_Party.WB_ui_Party_C.InputCursor // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCursor(); // Function WB_ui_Party.WB_ui_Party_C.UpdateCursor // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OpenCursor(); // Function WB_ui_Party.WB_ui_Party_C.OpenCursor // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateClose(int32_t SubState); // Function WB_ui_Party.WB_ui_Party_C.StateClose // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_Party.WB_ui_Party_C.StateLoop // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateOpen(int32_t SubState); // Function WB_ui_Party.WB_ui_Party_C.StateOpen // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_Party.WB_ui_Party_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PreConstruct(bool IsDesignTime); // Function WB_ui_Party.WB_ui_Party_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Party.WB_ui_Party_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Party.WB_ui_Party_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void EventSubListUpdateElement(int32_t Index, struct UUserWidget* pWidget); // Function WB_ui_Party.WB_ui_Party_C.EventSubListUpdateElement // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventSubListFocus(struct UUserWidget* pWidget); // Function WB_ui_Party.WB_ui_Party_C.EventSubListFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventSubListUnFocus(struct UUserWidget* pWidget); // Function WB_ui_Party.WB_ui_Party_C.EventSubListUnFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MouseFocus(int32_t isMouseScroll, int32_t Cursor, struct UUserWidget* pWidget); // Function WB_ui_Party.WB_ui_Party_C.MouseFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MouseUnFocus(int32_t isMouseScroll, int32_t Cursor, struct UUserWidget* pWidget); // Function WB_ui_Party.WB_ui_Party_C.MouseUnFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void  ƒ¡ã‚¤  (struct FRedMouseArgument argument, struct UUserWidget* pWidget); // Function WB_ui_Party.WB_ui_Party_C. ƒ¡ã‚¤   // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MouseListLeftDown(int32_t Cursor, struct UUserWidget* pWidget); // Function WB_ui_Party.WB_ui_Party_C.MouseListLeftDown // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Party.WB_ui_Party_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void CustomEvent(struct FRedMouseArgument argument, struct UUserWidget* pWidget); // Function WB_ui_Party.WB_ui_Party_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Party(int32_t EntryPoint); // Function WB_ui_Party.WB_ui_Party_C.ExecuteUbergraph_WB_ui_Party // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
	void SetPopupMode__DelegateSignature(bool IsPopup); // Function WB_ui_Party.WB_ui_Party_C.SetPopupMode__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void HideScene__DelegateSignature(); // Function WB_ui_Party.WB_ui_Party_C.HideScene__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetScene__DelegateSignature(enum class EUIMain3DCharacterSceneID SceneID); // Function WB_ui_Party.WB_ui_Party_C.SetScene__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCharaID_Sub__DelegateSignature(int32_t CharaID, struct UImage* Image, bool IsNoiseReset); // Function WB_ui_Party.WB_ui_Party_C.SetCharaID_Sub__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCharaID_Main__DelegateSignature(int32_t CharaID, struct UImage* Image, bool IsNoiseReset); // Function WB_ui_Party.WB_ui_Party_C.SetCharaID_Main__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

