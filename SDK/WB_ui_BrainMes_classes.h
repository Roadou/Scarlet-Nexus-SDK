// WidgetBlueprintGeneratedClass WB_ui_BrainMes.WB_ui_BrainMes_C
// Size: 0x616 (Inherited: 0x3a8)
struct UWB_ui_BrainMes_C : UUIBrainMessage {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a8(0x08)
	struct UWidgetAnimation* info_window_out; // 0x3b0(0x08)
	struct UWidgetAnimation* info_window_in; // 0x3b8(0x08)
	struct UWidgetAnimation* info_window; // 0x3c0(0x08)
	struct UWidgetAnimation* default_none; // 0x3c8(0x08)
	struct UWidgetAnimation* Default; // 0x3d0(0x08)
	struct UBorder* All_Color; // 0x3d8(0x08)
	struct UOverlay* All_Set; // 0x3e0(0x08)
	struct UImage* Base_Line_2; // 0x3e8(0x08)
	struct UImage* Base_List_Frame; // 0x3f0(0x08)
	struct UCanvasPanel* CanvasPanel_ViewRange_Message; // 0x3f8(0x08)
	struct UCanvasPanel* CanvasPanel_ViewRange_Thread; // 0x400(0x08)
	struct UImage* Cover_Black; // 0x408(0x08)
	struct UBorder* List_Message_Color; // 0x410(0x08)
	struct UOverlay* List_Message_Set; // 0x418(0x08)
	struct UBorder* List_Thread_Color; // 0x420(0x08)
	struct UOverlay* List_Thread_Set; // 0x428(0x08)
	struct UImage* Massage_Base_4; // 0x430(0x08)
	struct UImage* Massage_Base_5; // 0x438(0x08)
	struct UImage* Massage_Base_3bg; // 0x440(0x08)
	struct UImage* Massage_Member_frame; // 0x448(0x08)
	struct UImage* Massage_Member_frame_add; // 0x450(0x08)
	struct UImage* Massage_Title_frame; // 0x458(0x08)
	struct UImage* Massage_Title_frame_1_add; // 0x460(0x08)
	struct UImage* Massage_Title_frame_2_add; // 0x468(0x08)
	struct UREDScrollBox* REDScrollBox_Message; // 0x470(0x08)
	struct UREDScrollBox* REDScrollBox_Thread; // 0x478(0x08)
	struct UScaleBox* ScaleBox_1; // 0x480(0x08)
	struct UREDTextBlock* Text_BrainMes_Member_2; // 0x488(0x08)
	struct UREDTextBlock* Text_BrainMes_Member_3; // 0x490(0x08)
	struct UREDTextBlock* Text_BrainMes_Name_2; // 0x498(0x08)
	struct UREDTextBlock* Text_BrainMes_Reply; // 0x4a0(0x08)
	struct UREDTextBlock* Text_BrainMes_Title_2; // 0x4a8(0x08)
	struct UImage* Thread_Base_2; // 0x4b0(0x08)
	struct UImage* Thread_Heder_base; // 0x4b8(0x08)
	struct UImage* Thread_Heder_face; // 0x4c0(0x08)
	struct UImage* Thread_Heder_face_frame; // 0x4c8(0x08)
	struct UImage* Thread_Heder_pattern; // 0x4d0(0x08)
	struct UWB_ui_BrainMes_Parts_1_C* WB_ui_BrainMes_Parts_2; // 0x4d8(0x08)
	struct UWB_ui_BrainMes_Parts_3_C* WB_ui_BrainMes_Parts_4; // 0x4e0(0x08)
	struct UWB_ui_MainChoice_Parts_1_C* WB_ui_MainChoice_Parts_2; // 0x4e8(0x08)
	int32_t CursorThread; // 0x4f0(0x04)
	int32_t CursorMessage; // 0x4f4(0x04)
	struct TArray<struct FBrainMessageDBDataCell> ThreadList; // 0x4f8(0x10)
	bool FlagMessageTest; // 0x508(0x01)
	char pad_509[0x3]; // 0x509(0x03)
	int32_t messageNum; // 0x50c(0x04)
	int32_t threadNum; // 0x510(0x04)
	bool isReply; // 0x514(0x01)
	bool FlagLock; // 0x515(0x01)
	char pad_516[0x2]; // 0x516(0x02)
	struct TArray<int32_t> ThreadMemberList; // 0x518(0x10)
	bool MessageInputFlag; // 0x528(0x01)
	bool FlagSetCurrentThreadID; // 0x529(0x01)
	char pad_52A[0x2]; // 0x52a(0x02)
	struct FName CurrentThreadID; // 0x52c(0x08)
	bool IsReady; // 0x534(0x01)
	bool MessageLoopFlag; // 0x535(0x01)
	char pad_536[0x2]; // 0x536(0x02)
	int32_t MessageLoopCounter; // 0x538(0x04)
	float ReturnTimer; // 0x53c(0x04)
	int32_t ReplyMessageNum; // 0x540(0x04)
	struct FName playerId; // 0x544(0x08)
	char pad_54C[0x4]; // 0x54c(0x04)
	struct TArray<struct Fstruct_ui_brainmes_work> MessageWorkList; // 0x550(0x10)
	struct FMulticastInlineDelegate CallBondEpisode; // 0x560(0x10)
	bool IsInput; // 0x570(0x01)
	bool AutoReplyFlag; // 0x571(0x01)
	char pad_572[0x2]; // 0x572(0x02)
	int32_t AutoReplyState; // 0x574(0x04)
	float AutoReplyTimer; // 0x578(0x04)
	bool FlagBattle; // 0x57c(0x01)
	char pad_57D[0x3]; // 0x57d(0x03)
	struct TArray<int32_t> ReadMessageNumList; // 0x580(0x10)
	int32_t AlreadyReadNum; // 0x590(0x04)
	char pad_594[0x4]; // 0x594(0x04)
	struct UTextBlock* TextWidgetHelp; // 0x598(0x08)
	struct UWB_ui_Guide_C* GuideWidget; // 0x5a0(0x08)
	bool newFlagInit; // 0x5a8(0x01)
	char pad_5A9[0x7]; // 0x5a9(0x07)
	struct TArray<int32_t> SortIndexList; // 0x5b0(0x10)
	struct TArray<int32_t> SortIndexWorkList; // 0x5c0(0x10)
	int32_t SortType; // 0x5d0(0x04)
	bool IsReply2; // 0x5d4(0x01)
	char pad_5D5[0x3]; // 0x5d5(0x03)
	struct FName WidgetThreadID; // 0x5d8(0x08)
	int32_t AlreadyReadNumWork; // 0x5e0(0x04)
	bool FlagReplyWork; // 0x5e4(0x01)
	char pad_5E5[0x3]; // 0x5e5(0x03)
	struct UUIBase* ParentWidget; // 0x5e8(0x08)
	struct URSAtomComponentBase* ScrollSE; // 0x5f0(0x08)
	float BrainMesListScrollOffset; // 0x5f8(0x04)
	char pad_5FC[0x4]; // 0x5fc(0x04)
	struct FMulticastInlineDelegate SetPopupMode; // 0x600(0x10)
	float Delta; // 0x610(0x04)
	bool IsReplyBonds; // 0x614(0x01)
	bool IsEnableBonds; // 0x615(0x01)

	void DebugSetFlagMessageTest(bool IsTest); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.DebugSetFlagMessageTest // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetParent(struct UUIBase* Parent); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.SetParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupThreadMember(struct UWB_ui_BrainMes_Parts_1_C* Widget, int32_t Index); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.SetupThreadMember // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupMemberList(int32_t Index); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.SetupMemberList // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckInputAfterReplyBondsEpisode(bool IsInput); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.CheckInputAfterReplyBondsEpisode // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsThreadNew(int32_t Index, bool IsNew); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.IsThreadNew // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateCurrentThreadAlreadyReadNum(bool NoticeEnable); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.UpdateCurrentThreadAlreadyReadNum // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateSortIndex(bool isinit); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.UpdateSortIndex // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitSortParam(); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.InitSortParam // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool UpdateThreadTitleNative(int32_t Index); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.UpdateThreadTitleNative // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool InitListMessageNative(int32_t Index); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.InitListMessageNative // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitListMessage_MouseScroll(int32_t Index); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.InitListMessage_MouseScroll // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ClearCurrentNewFlagNative(int32_t Index, struct UUserWidget* Widget); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.ClearCurrentNewFlagNative // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupErrorText(bool IsBonds, bool IsErrorBattle); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.SetupErrorText // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Setup Default Message(); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.Setup Default Message // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupGuide(bool IsEnableReply); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.SetupGuide // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupHelpText(); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.SetupHelpText // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeCommonParts(struct UTextBlock* textHelp, struct UWB_ui_Guide_C* guide); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.InitializeCommonParts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupKizunaCheck(); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.SetupKizunaCheck // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAutoMode(bool IsAutoMode); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.SetAutoMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AutoReplyProcess(bool FlagReply, bool FlagClose); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.AutoReplyProcess // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Reply(); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.Reply // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReserveBondEpisode(); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.ReserveBondEpisode // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupMessageWork(); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.SetupMessageWork // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCharaName(int32_t Index, bool IsShort, struct FString CharaName); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.GetCharaName // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetCurrentMessageNum(int32_t Num); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.GetCurrentMessageNum // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void StateReply(int32_t SubState); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.StateReply // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckReply(bool AutoFlagReply, int32_t Result); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.CheckReply // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsReadyView(bool IsReady); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.IsReadyView // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ResetCurrentThreadID(); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.ResetCurrentThreadID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCurrentThreadID(struct FName threadID); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.SetCurrentThreadID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetThreadCursor(struct FName threadID); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.SetThreadCursor // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLock(bool isLock); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.SetLock // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableReply(bool CheckBattle, bool IsEnableReply); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.IsEnableReply // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateThreadTitle(); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.UpdateThreadTitle // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupPlayer(); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.SetupPlayer // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCharaIDNumber(struct FName IdName, int32_t IDNumber); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.GetCharaIDNumber // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void AddMessage(); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.AddMessage // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitWork(); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.InitWork // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearListThread(); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.ClearListThread // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearListMessage(); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.ClearListMessage // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MoveCursorListMessage(); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.MoveCursorListMessage // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateListMessageWidget(int32_t Index, struct UWB_ui_BrainMes_Parts_2_C* Widget); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.UpdateListMessageWidget // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitListMessage(); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.InitListMessage // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MoveCursorListThread(bool IsChangeMessage); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.MoveCursorListThread // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateListThreadWidget(int32_t Index, struct UWB_ui_BrainMes_Parts_1_C* Widget); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.UpdateListThreadWidget // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitListThread(); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.InitListThread // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateClose(int32_t SubState); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.StateClose // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateOpen(int32_t SubState); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.StateOpen // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void Event_UpdateElementListThread(int32_t Index, struct UUserWidget* pWidget); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.Event_UpdateElementListThread // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_FocusListThread(struct UUserWidget* pWidget); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.Event_FocusListThread // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_UnFocusListThread(struct UUserWidget* pWidget); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.Event_UnFocusListThread // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_UpdateElementListMessage(int32_t Index, struct UUserWidget* pWidget); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.Event_UpdateElementListMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_FocusListMessage(struct UUserWidget* pWidget); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.Event_FocusListMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_UnFocusListMessage(struct UUserWidget* pWidget); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.Event_UnFocusListMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PreConstruct(bool IsDesignTime); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void SetDefaultThread(struct FName threadID); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.SetDefaultThread // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetDefaultThread(); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.ResetDefaultThread // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void  ƒžã‚¦  (int32_t Cursor, struct UUserWidget* pWidget); // Function WB_ui_BrainMes.WB_ui_BrainMes_C. ƒžã‚¦   // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListFocusMouse(int32_t isMouseScroll, int32_t Index, struct UUserWidget* Widget); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.ListFocusMouse // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListUnFocusMouse(int32_t isMouseScroll, int32_t Index, struct UUserWidget* Widget); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.ListUnFocusMouse // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_Reply2(enum class EUINoticeMessageCallType senderType, struct FName datatableId); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.Event_Reply2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_BrainMes(int32_t EntryPoint); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.ExecuteUbergraph_WB_ui_BrainMes // (Final|UbergraphFunction) // @ game+0x1685580
	void SetPopupMode__DelegateSignature(bool IsPopup); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.SetPopupMode__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CallBondEpisode__DelegateSignature(struct FString Path); // Function WB_ui_BrainMes.WB_ui_BrainMes_C.CallBondEpisode__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

