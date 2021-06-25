// WidgetBlueprintGeneratedClass WB_ui_SasLink_slot_parts_3.WB_ui_SasLink_slot_parts_2_C
// Size: 0x426 (Inherited: 0x388)
struct UWB_ui_SasLink_slot_parts_2_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* decision_2; // 0x390(0x08)
	struct UWidgetAnimation* change_3_3; // 0x398(0x08)
	struct UWidgetAnimation* change_3_2; // 0x3a0(0x08)
	struct UWidgetAnimation* change_2_4; // 0x3a8(0x08)
	struct UWidgetAnimation* change_1_4; // 0x3b0(0x08)
	struct UWidgetAnimation* select_in_3; // 0x3b8(0x08)
	struct UWidgetAnimation* select_in_2; // 0x3c0(0x08)
	struct UWidgetAnimation* select_4; // 0x3c8(0x08)
	struct UWidgetAnimation* select_2_2; // 0x3d0(0x08)
	struct UWidgetAnimation* select_1_2; // 0x3d8(0x08)
	struct UWidgetAnimation* Default_3; // 0x3e0(0x08)
	struct UWidgetAnimation* Default_2; // 0x3e8(0x08)
	struct UImage* icon_cursor_2; // 0x3f0(0x08)
	struct UImage* icon_cursor_3; // 0x3f8(0x08)
	struct UImage* SAS_Base; // 0x400(0x08)
	struct UImage* sas_frame_pattern; // 0x408(0x08)
	struct UImage* sas_icon; // 0x410(0x08)
	struct UImage* sas_icon_add; // 0x418(0x08)
	enum class E_SASKindNative SkillID; // 0x420(0x01)
	enum class E_SASKindNative CurrentSkillID; // 0x421(0x01)
	bool FlagDecide; // 0x422(0x01)
	bool FlagLock; // 0x423(0x01)
	bool FlagCurrentLock; // 0x424(0x01)
	bool FlagSelect; // 0x425(0x01)

	void Lock(); // Function WB_ui_SasLink_slot_parts_3.WB_ui_SasLink_slot_parts_2_C.Lock // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSelect(bool IsSelect); // Function WB_ui_SasLink_slot_parts_3.WB_ui_SasLink_slot_parts_2_C.SetSelect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSelectOutAnimIndex(int32_t Index); // Function WB_ui_SasLink_slot_parts_3.WB_ui_SasLink_slot_parts_2_C.GetSelectOutAnimIndex // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetSelectAnimIndex(int32_t Index); // Function WB_ui_SasLink_slot_parts_3.WB_ui_SasLink_slot_parts_2_C.GetSelectAnimIndex // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetSelectInAnimIndex(int32_t Index); // Function WB_ui_SasLink_slot_parts_3.WB_ui_SasLink_slot_parts_2_C.GetSelectInAnimIndex // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetChangeLockAnimIndex(int32_t Index); // Function WB_ui_SasLink_slot_parts_3.WB_ui_SasLink_slot_parts_2_C.GetChangeLockAnimIndex // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetDefaultAnimIndex(int32_t Index); // Function WB_ui_SasLink_slot_parts_3.WB_ui_SasLink_slot_parts_2_C.GetDefaultAnimIndex // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateIcon(); // Function WB_ui_SasLink_slot_parts_3.WB_ui_SasLink_slot_parts_2_C.UpdateIcon // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Unlock(); // Function WB_ui_SasLink_slot_parts_3.WB_ui_SasLink_slot_parts_2_C.Unlock // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Decide(); // Function WB_ui_SasLink_slot_parts_3.WB_ui_SasLink_slot_parts_2_C.Decide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSkill(enum class E_SASKindNative SkillID, bool IsChange); // Function WB_ui_SasLink_slot_parts_3.WB_ui_SasLink_slot_parts_2_C.SetSkill // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoopSelect(int32_t SubState); // Function WB_ui_SasLink_slot_parts_3.WB_ui_SasLink_slot_parts_2_C.StateLoopSelect // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_SasLink_slot_parts_3.WB_ui_SasLink_slot_parts_2_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_SasLink_slot_parts_3.WB_ui_SasLink_slot_parts_2_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_SasLink_slot_parts_3.WB_ui_SasLink_slot_parts_2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_SasLink_slot_parts_3.WB_ui_SasLink_slot_parts_2_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_SasLink_slot_parts_3.WB_ui_SasLink_slot_parts_2_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_SasLink_slot_parts_3(int32_t EntryPoint); // Function WB_ui_SasLink_slot_parts_3.WB_ui_SasLink_slot_parts_2_C.ExecuteUbergraph_WB_ui_SasLink_slot_parts_3 // (Final|UbergraphFunction) // @ game+0x1685580
};

