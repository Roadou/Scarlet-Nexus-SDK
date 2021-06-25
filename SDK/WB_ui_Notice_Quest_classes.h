// WidgetBlueprintGeneratedClass WB_ui_Notice_Quest.WB_ui_Notice_Quest_C
// Size: 0x3fd (Inherited: 0x388)
struct UWB_ui_Notice_Quest_C : UUINoticeQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* Out; // 0x390(0x08)
	struct UWidgetAnimation* In; // 0x398(0x08)
	struct UWidgetAnimation* default_none; // 0x3a0(0x08)
	struct UWidgetAnimation* Default; // 0x3a8(0x08)
	struct UImage* Quest_Frame_2; // 0x3b0(0x08)
	struct UImage* Quest_Frame_3; // 0x3b8(0x08)
	struct UImage* Quest_Grow; // 0x3c0(0x08)
	struct UImage* Quest_mark; // 0x3c8(0x08)
	struct UImage* Quest_noise_2; // 0x3d0(0x08)
	struct UImage* Quest_noise_3; // 0x3d8(0x08)
	struct UREDTextBlock* Text_notice_quest_category_2; // 0x3e0(0x08)
	struct UREDTextBlock* Text_notice_quest_title; // 0x3e8(0x08)
	float AddCnt; // 0x3f0(0x04)
	bool ManualClose; // 0x3f4(0x01)
	char pad_3F5[0x3]; // 0x3f5(0x03)
	float DispTime; // 0x3f8(0x04)
	bool QuestCategory; // 0x3fc(0x01)

	void SetBondsQuestText(struct FName questId); // Function WB_ui_Notice_Quest.WB_ui_Notice_Quest_C.SetBondsQuestText // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSubQuestText(struct FName questId); // Function WB_ui_Notice_Quest.WB_ui_Notice_Quest_C.SetSubQuestText // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateClose(int32_t SubState, float DeltaSecond); // Function WB_ui_Notice_Quest.WB_ui_Notice_Quest_C.StateClose // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState, float DeltaSecond); // Function WB_ui_Notice_Quest.WB_ui_Notice_Quest_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateOpen(int32_t SubState, float DeltaSecond); // Function WB_ui_Notice_Quest.WB_ui_Notice_Quest_C.StateOpen // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState, float DeltaSecond); // Function WB_ui_Notice_Quest.WB_ui_Notice_Quest_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CloseStartBondsQuest(struct FName questId, float DispTime, bool ManualClose); // Function WB_ui_Notice_Quest.WB_ui_Notice_Quest_C.CloseStartBondsQuest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CloseStartSubQuest(struct FName questId, float DispTime, bool ManualClose); // Function WB_ui_Notice_Quest.WB_ui_Notice_Quest_C.CloseStartSubQuest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OpenStartBondsQuest(struct FName questId, float DispTime, bool ManualClose); // Function WB_ui_Notice_Quest.WB_ui_Notice_Quest_C.OpenStartBondsQuest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OpenStartSubQuest(struct FName questId, float DispTime, bool ManualClose); // Function WB_ui_Notice_Quest.WB_ui_Notice_Quest_C.OpenStartSubQuest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Notice_Quest.WB_ui_Notice_Quest_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Notice_Quest.WB_ui_Notice_Quest_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void WidgetAnimationEvt_in_K2Node_WidgetAnimationEvent_1(); // Function WB_ui_Notice_Quest.WB_ui_Notice_Quest_C.WidgetAnimationEvt_in_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Notice_Quest(int32_t EntryPoint); // Function WB_ui_Notice_Quest.WB_ui_Notice_Quest_C.ExecuteUbergraph_WB_ui_Notice_Quest // (Final|UbergraphFunction) // @ game+0x1685580
};

