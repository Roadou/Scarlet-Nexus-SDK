// WidgetBlueprintGeneratedClass WB_ui_Equip_Parts_2.WB_ui_Equip_Parts_1_C
// Size: 0x459 (Inherited: 0x388)
struct UWB_ui_Equip_Parts_1_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* select_3_in_3; // 0x390(0x08)
	struct UWidgetAnimation* select_3_out; // 0x398(0x08)
	struct UWidgetAnimation* select_3_in; // 0x3a0(0x08)
	struct UWidgetAnimation* select_4; // 0x3a8(0x08)
	struct UWidgetAnimation* default_2_out; // 0x3b0(0x08)
	struct UWidgetAnimation* default_2_in; // 0x3b8(0x08)
	struct UWidgetAnimation* Cancel; // 0x3c0(0x08)
	struct UWidgetAnimation* decision; // 0x3c8(0x08)
	struct UWidgetAnimation* select_1_in; // 0x3d0(0x08)
	struct UWidgetAnimation* select_3; // 0x3d8(0x08)
	struct UWidgetAnimation* select_2; // 0x3e0(0x08)
	struct UWidgetAnimation* Default_3; // 0x3e8(0x08)
	struct UWidgetAnimation* default_none; // 0x3f0(0x08)
	struct UWidgetAnimation* Default_2; // 0x3f8(0x08)
	struct UImage* Arrow_L; // 0x400(0x08)
	struct UImage* Arrow_L_add; // 0x408(0x08)
	struct UImage* Arrow_R_2; // 0x410(0x08)
	struct UImage* Arrow_R_add_2; // 0x418(0x08)
	struct UImage* Cursor_2; // 0x420(0x08)
	struct UImage* Face_a; // 0x428(0x08)
	struct UImage* Frame; // 0x430(0x08)
	struct UImage* Icon_E; // 0x438(0x08)
	struct UImage* Noise; // 0x440(0x08)
	struct UImage* Select_Base; // 0x448(0x08)
	bool IsEnable; // 0x450(0x01)
	bool IsSelect; // 0x451(0x01)
	bool isLock; // 0x452(0x01)
	bool IsSelectReturn; // 0x453(0x01)
	bool IsInParty; // 0x454(0x01)
	bool IsLockSelect; // 0x455(0x01)
	bool IsStartLockSelect; // 0x456(0x01)
	bool IsPressLeft; // 0x457(0x01)
	bool IsPressRight; // 0x458(0x01)

	void PressRight(); // Function WB_ui_Equip_Parts_2.WB_ui_Equip_Parts_1_C.PressRight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PressLeft(); // Function WB_ui_Equip_Parts_2.WB_ui_Equip_Parts_1_C.PressLeft // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLockSelect(bool IsLockSelect, bool IsStart); // Function WB_ui_Equip_Parts_2.WB_ui_Equip_Parts_1_C.SetLockSelect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoopLockSelect(int32_t SubState); // Function WB_ui_Equip_Parts_2.WB_ui_Equip_Parts_1_C.StateLoopLockSelect // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInParty(bool InPartyFlag); // Function WB_ui_Equip_Parts_2.WB_ui_Equip_Parts_1_C.SetInParty // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCharaIndex(int32_t Index); // Function WB_ui_Equip_Parts_2.WB_ui_Equip_Parts_1_C.SetCharaIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoopDisable(int32_t SubState); // Function WB_ui_Equip_Parts_2.WB_ui_Equip_Parts_1_C.StateLoopDisable // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnable(bool IsEnable); // Function WB_ui_Equip_Parts_2.WB_ui_Equip_Parts_1_C.SetEnable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLock(bool isLock); // Function WB_ui_Equip_Parts_2.WB_ui_Equip_Parts_1_C.SetLock // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSelect(bool IsSelect); // Function WB_ui_Equip_Parts_2.WB_ui_Equip_Parts_1_C.SetSelect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoopLock(int32_t SubState); // Function WB_ui_Equip_Parts_2.WB_ui_Equip_Parts_1_C.StateLoopLock // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoopSelect(int32_t SubState); // Function WB_ui_Equip_Parts_2.WB_ui_Equip_Parts_1_C.StateLoopSelect // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_Equip_Parts_2.WB_ui_Equip_Parts_1_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_Equip_Parts_2.WB_ui_Equip_Parts_1_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Equip_Parts_2.WB_ui_Equip_Parts_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Equip_Parts_2.WB_ui_Equip_Parts_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Equip_Parts_2.WB_ui_Equip_Parts_1_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Equip_Parts_2(int32_t EntryPoint); // Function WB_ui_Equip_Parts_2.WB_ui_Equip_Parts_1_C.ExecuteUbergraph_WB_ui_Equip_Parts_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

