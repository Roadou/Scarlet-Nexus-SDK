// WidgetBlueprintGeneratedClass WB_ui_Party_CharaInfo_Parts_3.WB_ui_Party_CharaInfo_Parts_2_C
// Size: 0x3f0 (Inherited: 0x388)
struct UWB_ui_Party_CharaInfo_Parts_2_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* unselect_out; // 0x390(0x08)
	struct UWidgetAnimation* unselect_in; // 0x398(0x08)
	struct UWidgetAnimation* unselect; // 0x3a0(0x08)
	struct UWidgetAnimation* decision; // 0x3a8(0x08)
	struct UWidgetAnimation* select_out; // 0x3b0(0x08)
	struct UWidgetAnimation* select_in; // 0x3b8(0x08)
	struct UWidgetAnimation* select; // 0x3c0(0x08)
	struct UWidgetAnimation* default_none; // 0x3c8(0x08)
	struct UWidgetAnimation* Default; // 0x3d0(0x08)
	struct UImage* Cursor_BG; // 0x3d8(0x08)
	struct UREDTextBlock* Text_party_info_planlist_2; // 0x3e0(0x08)
	bool FlagSelect; // 0x3e8(0x01)
	bool FlagUnSelect; // 0x3e9(0x01)
	bool FlagCursorPosition; // 0x3ea(0x01)
	bool FlagDecision; // 0x3eb(0x01)
	int32_t OperationIndex; // 0x3ec(0x04)

	void StateLoopUnSelect(int32_t SubState); // Function WB_ui_Party_CharaInfo_Parts_3.WB_ui_Party_CharaInfo_Parts_2_C.StateLoopUnSelect // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoopSelect(int32_t SubState); // Function WB_ui_Party_CharaInfo_Parts_3.WB_ui_Party_CharaInfo_Parts_2_C.StateLoopSelect // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSelectFlag(bool Flag); // Function WB_ui_Party_CharaInfo_Parts_3.WB_ui_Party_CharaInfo_Parts_2_C.SetSelectFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDecision(bool IsDecision); // Function WB_ui_Party_CharaInfo_Parts_3.WB_ui_Party_CharaInfo_Parts_2_C.IsDecision // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetOperations(int32_t Operations); // Function WB_ui_Party_CharaInfo_Parts_3.WB_ui_Party_CharaInfo_Parts_2_C.GetOperations // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetOperations(int32_t Index); // Function WB_ui_Party_CharaInfo_Parts_3.WB_ui_Party_CharaInfo_Parts_2_C.SetOperations // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDecision(); // Function WB_ui_Party_CharaInfo_Parts_3.WB_ui_Party_CharaInfo_Parts_2_C.SetDecision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCursorPositionFlag(bool Flag); // Function WB_ui_Party_CharaInfo_Parts_3.WB_ui_Party_CharaInfo_Parts_2_C.SetCursorPositionFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_Party_CharaInfo_Parts_3.WB_ui_Party_CharaInfo_Parts_2_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_Party_CharaInfo_Parts_3.WB_ui_Party_CharaInfo_Parts_2_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Party_CharaInfo_Parts_3.WB_ui_Party_CharaInfo_Parts_2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Party_CharaInfo_Parts_3.WB_ui_Party_CharaInfo_Parts_2_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Party_CharaInfo_Parts_3.WB_ui_Party_CharaInfo_Parts_2_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Party_CharaInfo_Parts_3(int32_t EntryPoint); // Function WB_ui_Party_CharaInfo_Parts_3.WB_ui_Party_CharaInfo_Parts_2_C.ExecuteUbergraph_WB_ui_Party_CharaInfo_Parts_3 // (Final|UbergraphFunction) // @ game+0x1685580
};

