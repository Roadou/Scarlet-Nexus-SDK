// WidgetBlueprintGeneratedClass WB_ui_BrainMes_Parts_3.WB_ui_BrainMes_Parts_2_C
// Size: 0x3fc (Inherited: 0x388)
struct UWB_ui_BrainMes_Parts_2_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* default_R_in; // 0x390(0x08)
	struct UWidgetAnimation* default_L_in; // 0x398(0x08)
	struct UWidgetAnimation* default_r; // 0x3a0(0x08)
	struct UWidgetAnimation* default_none; // 0x3a8(0x08)
	struct UWidgetAnimation* default_l; // 0x3b0(0x08)
	struct UImage* Base_2; // 0x3b8(0x08)
	struct UImage* Face_3; // 0x3c0(0x08)
	struct UImage* icon_new; // 0x3c8(0x08)
	struct UBorder* Mes_3_3; // 0x3d0(0x08)
	struct UREDTextBlock* Text_BrainMes_list_3; // 0x3d8(0x08)
	struct UREDTextBlock* Text_BrainMes_list_4; // 0x3e0(0x08)
	struct UREDTextBlock* Text_BrainMes_list_5; // 0x3e8(0x08)
	bool FlagReply; // 0x3f0(0x01)
	bool FlagSelf; // 0x3f1(0x01)
	bool IsSelect; // 0x3f2(0x01)
	bool IsDecide; // 0x3f3(0x01)
	bool FlagNew; // 0x3f4(0x01)
	char pad_3F5[0x3]; // 0x3f5(0x03)
	float ViewWork; // 0x3f8(0x04)

	void SetFace(struct FName CharaID); // Function WB_ui_BrainMes_Parts_3.WB_ui_BrainMes_Parts_2_C.SetFace // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Decide(); // Function WB_ui_BrainMes_Parts_3.WB_ui_BrainMes_Parts_2_C.Decide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetParameter(bool IsSelf, bool isReply, bool IsNew, struct FName Talker, struct FName text); // Function WB_ui_BrainMes_Parts_3.WB_ui_BrainMes_Parts_2_C.SetParameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSelect(bool IsSelect); // Function WB_ui_BrainMes_Parts_3.WB_ui_BrainMes_Parts_2_C.SetSelect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoopMessage(int32_t SubState); // Function WB_ui_BrainMes_Parts_3.WB_ui_BrainMes_Parts_2_C.StateLoopMessage // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_BrainMes_Parts_3.WB_ui_BrainMes_Parts_2_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_BrainMes_Parts_3.WB_ui_BrainMes_Parts_2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_BrainMes_Parts_3.WB_ui_BrainMes_Parts_2_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_BrainMes_Parts_3.WB_ui_BrainMes_Parts_2_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void Destruct(); // Function WB_ui_BrainMes_Parts_3.WB_ui_BrainMes_Parts_2_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_BrainMes_Parts_3(int32_t EntryPoint); // Function WB_ui_BrainMes_Parts_3.WB_ui_BrainMes_Parts_2_C.ExecuteUbergraph_WB_ui_BrainMes_Parts_3 // (Final|UbergraphFunction) // @ game+0x1685580
};

