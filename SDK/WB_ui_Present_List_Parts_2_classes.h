// WidgetBlueprintGeneratedClass WB_ui_Present_List_Parts_2.WB_ui_Present_List_Parts_1_C
// Size: 0x403 (Inherited: 0x388)
struct UWB_ui_Present_List_Parts_1_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* default_none; // 0x390(0x08)
	struct UWidgetAnimation* select_out; // 0x398(0x08)
	struct UWidgetAnimation* select_in; // 0x3a0(0x08)
	struct UWidgetAnimation* select; // 0x3a8(0x08)
	struct UWidgetAnimation* Default; // 0x3b0(0x08)
	struct UImage* Base; // 0x3b8(0x08)
	struct UImage* Frame; // 0x3c0(0x08)
	struct UImage* icon_category; // 0x3c8(0x08)
	struct UImage* icon_new; // 0x3d0(0x08)
	struct UImage* Present_icon_frame; // 0x3d8(0x08)
	struct UREDTextBlock* Text_Present_list; // 0x3e0(0x08)
	struct UREDTextBlock* Text_Present_list_num; // 0x3e8(0x08)
	bool IsSelect; // 0x3f0(0x01)
	char pad_3F1[0x3]; // 0x3f1(0x03)
	struct FName ItemId; // 0x3f4(0x08)
	int32_t Num; // 0x3fc(0x04)
	bool IsNew; // 0x400(0x01)
	bool IsStartSelect; // 0x401(0x01)
	bool IsResetSelect; // 0x402(0x01)

	void SetMouseSelectUnFocus(bool IsSelect); // Function WB_ui_Present_List_Parts_2.WB_ui_Present_List_Parts_1_C.SetMouseSelectUnFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMouseSelectFocus(bool IsSelect); // Function WB_ui_Present_List_Parts_2.WB_ui_Present_List_Parts_1_C.SetMouseSelectFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetNewFlag(bool IsNew); // Function WB_ui_Present_List_Parts_2.WB_ui_Present_List_Parts_1_C.SetNewFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetItem(struct FName ItemId, bool IsNew); // Function WB_ui_Present_List_Parts_2.WB_ui_Present_List_Parts_1_C.SetItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSelect(bool IsSelect); // Function WB_ui_Present_List_Parts_2.WB_ui_Present_List_Parts_1_C.SetSelect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoopSelect(int32_t SubState); // Function WB_ui_Present_List_Parts_2.WB_ui_Present_List_Parts_1_C.StateLoopSelect // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_Present_List_Parts_2.WB_ui_Present_List_Parts_1_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_Present_List_Parts_2.WB_ui_Present_List_Parts_1_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Present_List_Parts_2.WB_ui_Present_List_Parts_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Present_List_Parts_2.WB_ui_Present_List_Parts_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Present_List_Parts_2.WB_ui_Present_List_Parts_1_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Present_List_Parts_2(int32_t EntryPoint); // Function WB_ui_Present_List_Parts_2.WB_ui_Present_List_Parts_1_C.ExecuteUbergraph_WB_ui_Present_List_Parts_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

