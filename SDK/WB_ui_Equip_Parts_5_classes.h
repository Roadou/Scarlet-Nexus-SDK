// WidgetBlueprintGeneratedClass WB_ui_Equip_Parts_5.WB_ui_Equip_Parts_4_C
// Size: 0x436 (Inherited: 0x388)
struct UWB_ui_Equip_Parts_4_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* select_in_5; // 0x390(0x08)
	struct UWidgetAnimation* select_in_4; // 0x398(0x08)
	struct UWidgetAnimation* select_4; // 0x3a0(0x08)
	struct UWidgetAnimation* Default_4; // 0x3a8(0x08)
	struct UWidgetAnimation* select_in_3; // 0x3b0(0x08)
	struct UWidgetAnimation* select_in; // 0x3b8(0x08)
	struct UWidgetAnimation* select; // 0x3c0(0x08)
	struct UWidgetAnimation* Default; // 0x3c8(0x08)
	struct UImage* Base_2; // 0x3d0(0x08)
	struct UImage* Frame_2; // 0x3d8(0x08)
	struct UImage* Frame_3; // 0x3e0(0x08)
	struct UImage* icon_category; // 0x3e8(0x08)
	struct UImage* Icon_E; // 0x3f0(0x08)
	struct UImage* icon_new; // 0x3f8(0x08)
	struct UImage* item_icon_frame_3; // 0x400(0x08)
	struct UOverlay* Set; // 0x408(0x08)
	struct UREDTextBlock* Text_Equipage_list_2; // 0x410(0x08)
	struct UREDTextBlock* Text_Equipage_list_1_num; // 0x418(0x08)
	bool IsEnable; // 0x420(0x01)
	bool IsEnableWork; // 0x421(0x01)
	bool IsSelect; // 0x422(0x01)
	bool IsNew; // 0x423(0x01)
	bool IsEquip; // 0x424(0x01)
	bool isMouseOut; // 0x425(0x01)
	bool isMouseIn; // 0x426(0x01)
	bool IsFirst; // 0x427(0x01)
	bool IsStart; // 0x428(0x01)
	char pad_429[0x3]; // 0x429(0x03)
	struct FName BackupName; // 0x42c(0x08)
	bool IsSelectReset; // 0x434(0x01)
	bool IsDoneInitializeAnimation; // 0x435(0x01)

	void DoOnceInitializeAnimation(); // Function WB_ui_Equip_Parts_5.WB_ui_Equip_Parts_4_C.DoOnceInitializeAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnableFlag(bool IsEnable); // Function WB_ui_Equip_Parts_5.WB_ui_Equip_Parts_4_C.SetEnableFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAnimationIndex2(enum class enum_ui_equip_parts_4_animation Animation, int32_t Index); // Function WB_ui_Equip_Parts_5.WB_ui_Equip_Parts_4_C.GetAnimationIndex2 // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetFirstFlag(bool IsFirst); // Function WB_ui_Equip_Parts_5.WB_ui_Equip_Parts_4_C.SetFirstFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckMouse(); // Function WB_ui_Equip_Parts_5.WB_ui_Equip_Parts_4_C.CheckMouse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayMouseIn(); // Function WB_ui_Equip_Parts_5.WB_ui_Equip_Parts_4_C.PlayMouseIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayMouseOut(); // Function WB_ui_Equip_Parts_5.WB_ui_Equip_Parts_4_C.PlayMouseOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRarity(enum class EItemRarity rarity); // Function WB_ui_Equip_Parts_5.WB_ui_Equip_Parts_4_C.SetRarity // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEquipFlag(bool EquipFlag); // Function WB_ui_Equip_Parts_5.WB_ui_Equip_Parts_4_C.SetEquipFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetNewFlag(bool newFlag); // Function WB_ui_Equip_Parts_5.WB_ui_Equip_Parts_4_C.SetNewFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetElement(struct FName Name, int32_t Num, int32_t IconIndex, enum class EItemRarity rarity); // Function WB_ui_Equip_Parts_5.WB_ui_Equip_Parts_4_C.SetElement // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSelect(bool IsSelect); // Function WB_ui_Equip_Parts_5.WB_ui_Equip_Parts_4_C.SetSelect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_Equip_Parts_5.WB_ui_Equip_Parts_4_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_Equip_Parts_5.WB_ui_Equip_Parts_4_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Equip_Parts_5.WB_ui_Equip_Parts_4_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Equip_Parts_5.WB_ui_Equip_Parts_4_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Equip_Parts_5.WB_ui_Equip_Parts_4_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void Destruct(); // Function WB_ui_Equip_Parts_5.WB_ui_Equip_Parts_4_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Equip_Parts_5(int32_t EntryPoint); // Function WB_ui_Equip_Parts_5.WB_ui_Equip_Parts_4_C.ExecuteUbergraph_WB_ui_Equip_Parts_5 // (Final|UbergraphFunction) // @ game+0x1685580
};

