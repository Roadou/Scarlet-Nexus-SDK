// WidgetBlueprintGeneratedClass WB_ui_SasLink_chara_parts_2.WB_ui_SasLink_chara_parts_1_C
// Size: 0x43a (Inherited: 0x388)
struct UWB_ui_SasLink_chara_parts_1_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* default_out_max; // 0x390(0x08)
	struct UWidgetAnimation* default_in_max; // 0x398(0x08)
	struct UWidgetAnimation* default_out; // 0x3a0(0x08)
	struct UWidgetAnimation* default_in; // 0x3a8(0x08)
	struct UWidgetAnimation* select_in_max_3; // 0x3b0(0x08)
	struct UWidgetAnimation* select_in_3; // 0x3b8(0x08)
	struct UWidgetAnimation* decision_max; // 0x3c0(0x08)
	struct UWidgetAnimation* select_in_max; // 0x3c8(0x08)
	struct UWidgetAnimation* select_max; // 0x3d0(0x08)
	struct UWidgetAnimation* unselect_max; // 0x3d8(0x08)
	struct UWidgetAnimation* default_max; // 0x3e0(0x08)
	struct UWidgetAnimation* decision; // 0x3e8(0x08)
	struct UWidgetAnimation* select_in; // 0x3f0(0x08)
	struct UWidgetAnimation* select; // 0x3f8(0x08)
	struct UWidgetAnimation* unselect; // 0x400(0x08)
	struct UWidgetAnimation* Default; // 0x408(0x08)
	struct UImage* Face_a2; // 0x410(0x08)
	struct UImage* Frame; // 0x418(0x08)
	struct UImage* Select_Base; // 0x420(0x08)
	struct UREDTextBlock* Text_saslink_bond_3_num; // 0x428(0x08)
	int32_t BondLv; // 0x430(0x04)
	bool FlagSelect; // 0x434(0x01)
	bool FlagDecision; // 0x435(0x01)
	bool FlagAnimation; // 0x436(0x01)
	enum class EPlayerID CharaID; // 0x437(0x01)
	bool FlagFirst; // 0x438(0x01)
	bool enableFlag; // 0x439(0x01)

	void SetEnableFlag(bool IsEnable); // Function WB_ui_SasLink_chara_parts_2.WB_ui_SasLink_chara_parts_1_C.SetEnableFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoopUnSelect(int32_t SubState); // Function WB_ui_SasLink_chara_parts_2.WB_ui_SasLink_chara_parts_1_C.StateLoopUnSelect // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlaySasLinkAnimation(int32_t BaseIndex, float Speed, bool IsLoop); // Function WB_ui_SasLink_chara_parts_2.WB_ui_SasLink_chara_parts_1_C.PlaySasLinkAnimation // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetFirstFlag(bool IsFirst); // Function WB_ui_SasLink_chara_parts_2.WB_ui_SasLink_chara_parts_1_C.SetFirstFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDecideAnimation(bool IsAnimation); // Function WB_ui_SasLink_chara_parts_2.WB_ui_SasLink_chara_parts_1_C.IsDecideAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void Decide(); // Function WB_ui_SasLink_chara_parts_2.WB_ui_SasLink_chara_parts_1_C.Decide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSelectFlag(bool IsSelect); // Function WB_ui_SasLink_chara_parts_2.WB_ui_SasLink_chara_parts_1_C.SetSelectFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentAnimationIndex(enum class enum_ui_saslink_chara_parts_1_animation Animation, int32_t Index); // Function WB_ui_SasLink_chara_parts_2.WB_ui_SasLink_chara_parts_1_C.GetCurrentAnimationIndex // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void setParam(enum class EPlayerID CharaID, int32_t BondLv); // Function WB_ui_SasLink_chara_parts_2.WB_ui_SasLink_chara_parts_1_C.setParam // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoopSelect(int32_t SubState); // Function WB_ui_SasLink_chara_parts_2.WB_ui_SasLink_chara_parts_1_C.StateLoopSelect // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_SasLink_chara_parts_2.WB_ui_SasLink_chara_parts_1_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_SasLink_chara_parts_2.WB_ui_SasLink_chara_parts_1_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_SasLink_chara_parts_2.WB_ui_SasLink_chara_parts_1_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_SasLink_chara_parts_2.WB_ui_SasLink_chara_parts_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_SasLink_chara_parts_2(int32_t EntryPoint); // Function WB_ui_SasLink_chara_parts_2.WB_ui_SasLink_chara_parts_1_C.ExecuteUbergraph_WB_ui_SasLink_chara_parts_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

