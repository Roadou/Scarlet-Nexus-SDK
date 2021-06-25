// WidgetBlueprintGeneratedClass WB_ui_BrainMes_Parts_2.WB_ui_BrainMes_Parts_1_C
// Size: 0x40e (Inherited: 0x388)
struct UWB_ui_BrainMes_Parts_1_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* select_in; // 0x390(0x08)
	struct UWidgetAnimation* select; // 0x398(0x08)
	struct UWidgetAnimation* default_none; // 0x3a0(0x08)
	struct UWidgetAnimation* Default; // 0x3a8(0x08)
	struct UImage* Face_2; // 0x3b0(0x08)
	struct UImage* Frame_2; // 0x3b8(0x08)
	struct UImage* Frame_4; // 0x3c0(0x08)
	struct UImage* Frame_1_Base; // 0x3c8(0x08)
	struct UImage* icon_Bond; // 0x3d0(0x08)
	struct UImage* icon_Bond_add; // 0x3d8(0x08)
	struct UImage* icon_new; // 0x3e0(0x08)
	struct UImage* icon_Reply; // 0x3e8(0x08)
	struct UImage* icon_Reply_add; // 0x3f0(0x08)
	struct UREDTextBlock* Text_BrainMes_list_2; // 0x3f8(0x08)
	bool FlagSelect; // 0x400(0x01)
	bool FlagDecide; // 0x401(0x01)
	char pad_402[0x2]; // 0x402(0x02)
	int32_t MemberNum; // 0x404(0x04)
	int32_t ThreadIndex; // 0x408(0x04)
	bool FlagStart; // 0x40c(0x01)
	bool FlagResetSelect; // 0x40d(0x01)

	void GetThreadIndex(int32_t Index); // Function WB_ui_BrainMes_Parts_2.WB_ui_BrainMes_Parts_1_C.GetThreadIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetThreadIndex(int32_t Index); // Function WB_ui_BrainMes_Parts_2.WB_ui_BrainMes_Parts_1_C.SetThreadIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMouseSelectUnFocus(bool IsSelect); // Function WB_ui_BrainMes_Parts_2.WB_ui_BrainMes_Parts_1_C.SetMouseSelectUnFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMouseSelectFocus(bool IsSelect); // Function WB_ui_BrainMes_Parts_2.WB_ui_BrainMes_Parts_1_C.SetMouseSelectFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetThumbnailFace(int32_t Number, int32_t CharaIndex); // Function WB_ui_BrainMes_Parts_2.WB_ui_BrainMes_Parts_1_C.SetThumbnailFace // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetThumbnailNum(int32_t Num); // Function WB_ui_BrainMes_Parts_2.WB_ui_BrainMes_Parts_1_C.SetThumbnailNum // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMember(int32_t Num, struct TArray<int32_t> member); // Function WB_ui_BrainMes_Parts_2.WB_ui_BrainMes_Parts_1_C.SetMember // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetFlagReply(bool isReply, bool IsStartBond, bool IsEnable); // Function WB_ui_BrainMes_Parts_2.WB_ui_BrainMes_Parts_1_C.SetFlagReply // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetFlagNew(bool IsNew); // Function WB_ui_BrainMes_Parts_2.WB_ui_BrainMes_Parts_1_C.SetFlagNew // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTitle(struct FName TitleID); // Function WB_ui_BrainMes_Parts_2.WB_ui_BrainMes_Parts_1_C.SetTitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Decide(); // Function WB_ui_BrainMes_Parts_2.WB_ui_BrainMes_Parts_1_C.Decide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSelect(bool IsSelect); // Function WB_ui_BrainMes_Parts_2.WB_ui_BrainMes_Parts_1_C.SetSelect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoopSelect(int32_t SubState); // Function WB_ui_BrainMes_Parts_2.WB_ui_BrainMes_Parts_1_C.StateLoopSelect // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_BrainMes_Parts_2.WB_ui_BrainMes_Parts_1_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_BrainMes_Parts_2.WB_ui_BrainMes_Parts_1_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_BrainMes_Parts_2.WB_ui_BrainMes_Parts_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_BrainMes_Parts_2.WB_ui_BrainMes_Parts_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_BrainMes_Parts_2.WB_ui_BrainMes_Parts_1_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void Destruct(); // Function WB_ui_BrainMes_Parts_2.WB_ui_BrainMes_Parts_1_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_BrainMes_Parts_2(int32_t EntryPoint); // Function WB_ui_BrainMes_Parts_2.WB_ui_BrainMes_Parts_1_C.ExecuteUbergraph_WB_ui_BrainMes_Parts_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

