// WidgetBlueprintGeneratedClass WB_ui_BrainMap_Bp_2.WB_ui_BrainMap_Bp_1_C
// Size: 0x3c4 (Inherited: 0x388)
struct UWB_ui_BrainMap_Bp_1_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* Out; // 0x390(0x08)
	struct UWidgetAnimation* In; // 0x398(0x08)
	struct UWidgetAnimation* Default; // 0x3a0(0x08)
	struct UImage* Base; // 0x3a8(0x08)
	struct UREDTextBlock* Text_Bmap_icon_bp_1_num; // 0x3b0(0x08)
	int32_t ConnectFlag; // 0x3b8(0x04)
	enum class EPlayerSkill SkillID; // 0x3bc(0x01)
	bool LockFlag; // 0x3bd(0x01)
	bool OpenFlag; // 0x3be(0x01)
	char pad_3BF[0x1]; // 0x3bf(0x01)
	int32_t SkillIndex; // 0x3c0(0x04)

	void GetIndex(int32_t Index); // Function WB_ui_BrainMap_Bp_2.WB_ui_BrainMap_Bp_1_C.GetIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetIndex(int32_t Index); // Function WB_ui_BrainMap_Bp_2.WB_ui_BrainMap_Bp_1_C.SetIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCost(int32_t Cost); // Function WB_ui_BrainMap_Bp_2.WB_ui_BrainMap_Bp_1_C.SetCost // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateClose(int32_t SubState); // Function WB_ui_BrainMap_Bp_2.WB_ui_BrainMap_Bp_1_C.StateClose // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_BrainMap_Bp_2.WB_ui_BrainMap_Bp_1_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateOpen(int32_t SubState); // Function WB_ui_BrainMap_Bp_2.WB_ui_BrainMap_Bp_1_C.StateOpen // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_BrainMap_Bp_2.WB_ui_BrainMap_Bp_1_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_BrainMap_Bp_2.WB_ui_BrainMap_Bp_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_BrainMap_Bp_2.WB_ui_BrainMap_Bp_1_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_BrainMap_Bp_2.WB_ui_BrainMap_Bp_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_BrainMap_Bp_2(int32_t EntryPoint); // Function WB_ui_BrainMap_Bp_2.WB_ui_BrainMap_Bp_1_C.ExecuteUbergraph_WB_ui_BrainMap_Bp_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

