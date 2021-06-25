// WidgetBlueprintGeneratedClass WB_ui_BrainMes_Parts_4.WB_ui_BrainMes_Parts_3_C
// Size: 0x3fa (Inherited: 0x388)
struct UWB_ui_BrainMes_Parts_3_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* select; // 0x390(0x08)
	struct UWidgetAnimation* select_out; // 0x398(0x08)
	struct UWidgetAnimation* select_in; // 0x3a0(0x08)
	struct UWidgetAnimation* decision; // 0x3a8(0x08)
	struct UWidgetAnimation* Default; // 0x3b0(0x08)
	struct UWidgetAnimation* default_none; // 0x3b8(0x08)
	struct UImage* Frame_2; // 0x3c0(0x08)
	struct UImage* Frame_3; // 0x3c8(0x08)
	struct UImage* frame_add_3; // 0x3d0(0x08)
	struct UImage* frame_add_4; // 0x3d8(0x08)
	struct UImage* Icon_2; // 0x3e0(0x08)
	struct UImage* Icon_3; // 0x3e8(0x08)
	struct UREDTextBlock* Text_BrainMes_Reply_2; // 0x3f0(0x08)
	bool IsSelect; // 0x3f8(0x01)
	bool IsDecide; // 0x3f9(0x01)

	void SetDefaultMessage(); // Function WB_ui_BrainMes_Parts_4.WB_ui_BrainMes_Parts_3_C.SetDefaultMessage // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoopSelect(int32_t SubState); // Function WB_ui_BrainMes_Parts_4.WB_ui_BrainMes_Parts_3_C.StateLoopSelect // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Decide(); // Function WB_ui_BrainMes_Parts_4.WB_ui_BrainMes_Parts_3_C.Decide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSelect(bool IsSelect); // Function WB_ui_BrainMes_Parts_4.WB_ui_BrainMes_Parts_3_C.SetSelect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateClose(int32_t SubState); // Function WB_ui_BrainMes_Parts_4.WB_ui_BrainMes_Parts_3_C.StateClose // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_BrainMes_Parts_4.WB_ui_BrainMes_Parts_3_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateOpen(int32_t SubState); // Function WB_ui_BrainMes_Parts_4.WB_ui_BrainMes_Parts_3_C.StateOpen // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_BrainMes_Parts_4.WB_ui_BrainMes_Parts_3_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_BrainMes_Parts_4.WB_ui_BrainMes_Parts_3_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_BrainMes_Parts_4.WB_ui_BrainMes_Parts_3_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_BrainMes_Parts_4.WB_ui_BrainMes_Parts_3_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_BrainMes_Parts_4(int32_t EntryPoint); // Function WB_ui_BrainMes_Parts_4.WB_ui_BrainMes_Parts_3_C.ExecuteUbergraph_WB_ui_BrainMes_Parts_4 // (Final|UbergraphFunction) // @ game+0x1685580
};

