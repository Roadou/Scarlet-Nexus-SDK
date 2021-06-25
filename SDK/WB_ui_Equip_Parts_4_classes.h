// WidgetBlueprintGeneratedClass WB_ui_Equip_Parts_4.WB_ui_Equip_Parts_3_C
// Size: 0x4a4 (Inherited: 0x388)
struct UWB_ui_Equip_Parts_3_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* out_notset_3; // 0x390(0x08)
	struct UWidgetAnimation* out_max_3; // 0x398(0x08)
	struct UWidgetAnimation* Out_3; // 0x3a0(0x08)
	struct UWidgetAnimation* out_notset; // 0x3a8(0x08)
	struct UWidgetAnimation* in_notset; // 0x3b0(0x08)
	struct UWidgetAnimation* default_notset; // 0x3b8(0x08)
	struct UWidgetAnimation* out_max; // 0x3c0(0x08)
	struct UWidgetAnimation* in_max; // 0x3c8(0x08)
	struct UWidgetAnimation* default_max; // 0x3d0(0x08)
	struct UWidgetAnimation* Out; // 0x3d8(0x08)
	struct UWidgetAnimation* In; // 0x3e0(0x08)
	struct UWidgetAnimation* default_none; // 0x3e8(0x08)
	struct UWidgetAnimation* Default; // 0x3f0(0x08)
	struct UImage* Base_2; // 0x3f8(0x08)
	struct UImage* Frame_2; // 0x400(0x08)
	struct UREDImageBase* icon_font_3; // 0x408(0x08)
	struct UREDImageBase* icon_font_4; // 0x410(0x08)
	struct UREDImageBase* icon_font_5; // 0x418(0x08)
	struct UImage* icon_item; // 0x420(0x08)
	struct UImage* icon_new; // 0x428(0x08)
	struct UImage* icon_rarity; // 0x430(0x08)
	struct UImage* item_icon_frame_2; // 0x438(0x08)
	struct UImage* Noise_2; // 0x440(0x08)
	struct UImage* Noise_1_2; // 0x448(0x08)
	struct UOverlay* Set_2; // 0x450(0x08)
	struct UREDTextBlock* Text_equipage_iteminfo_2; // 0x458(0x08)
	struct UREDTextBlock* Text_equipage_iteminfo_3; // 0x460(0x08)
	struct UREDTextBlock* Text_equipage_iteminfo_4; // 0x468(0x08)
	struct UREDTextBlock* Text_equipage_iteminfo_1_num; // 0x470(0x08)
	struct UREDTextBlock* Text_equipage_iteminfo_2_num; // 0x478(0x08)
	struct UREDTextBlock* Text_equipage_iteminfo_slash_2; // 0x480(0x08)
	struct UREDTextBlock* Text_equipage_parameter_2; // 0x488(0x08)
	struct UREDTextBlock* Text_equipage_parameter_3; // 0x490(0x08)
	bool FlagMax; // 0x498(0x01)
	bool FlagMaxCurrent; // 0x499(0x01)
	bool FlagNew; // 0x49a(0x01)
	bool FlagEmpty; // 0x49b(0x01)
	bool FlagChange; // 0x49c(0x01)
	char pad_49D[0x3]; // 0x49d(0x03)
	int32_t CurrentType; // 0x4a0(0x04)

	void SetChangeFlag(bool IsChange); // Function WB_ui_Equip_Parts_4.WB_ui_Equip_Parts_3_C.SetChangeFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEquip(int32_t Type, int32_t ID, int32_t NumCurrent, int32_t NumMax); // Function WB_ui_Equip_Parts_4.WB_ui_Equip_Parts_3_C.SetEquip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDefaultText(); // Function WB_ui_Equip_Parts_4.WB_ui_Equip_Parts_3_C.SetDefaultText // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCalcParamCore(int32_t NewData, int32_t NowData, struct FName appendTextID, struct FString Output_Get); // Function WB_ui_Equip_Parts_4.WB_ui_Equip_Parts_3_C.GetCalcParamCore // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCalcComparison(int32_t NEW, int32_t Now, struct FString Tag, struct FString Color); // Function WB_ui_Equip_Parts_4.WB_ui_Equip_Parts_3_C.GetCalcComparison // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetCalcParamString(struct FName NowItemID, struct FName NewItemID, struct TArray<struct FString> ParamString); // Function WB_ui_Equip_Parts_4.WB_ui_Equip_Parts_3_C.GetCalcParamString // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetType(int32_t Type); // Function WB_ui_Equip_Parts_4.WB_ui_Equip_Parts_3_C.GetType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetNewFlag(bool newFlag); // Function WB_ui_Equip_Parts_4.WB_ui_Equip_Parts_3_C.SetNewFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRarity(enum class EItemRarity rarity); // Function WB_ui_Equip_Parts_4.WB_ui_Equip_Parts_3_C.SetRarity // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttachment(int32_t ID, int32_t NumCurrent, int32_t NumMax); // Function WB_ui_Equip_Parts_4.WB_ui_Equip_Parts_3_C.SetAttachment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCostume(int32_t ID, int32_t NumCurrent, int32_t NumMax); // Function WB_ui_Equip_Parts_4.WB_ui_Equip_Parts_3_C.SetCostume // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearItem(); // Function WB_ui_Equip_Parts_4.WB_ui_Equip_Parts_3_C.ClearItem // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetItem(struct FName ID, int32_t NumCurrent, int32_t NumMax, bool IsEmpty, struct FName NowID); // Function WB_ui_Equip_Parts_4.WB_ui_Equip_Parts_3_C.SetItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAccessory(int32_t ID, int32_t NumCurrent, int32_t NumMax); // Function WB_ui_Equip_Parts_4.WB_ui_Equip_Parts_3_C.SetAccessory // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWeapon(int32_t ID, int32_t NumCurrent, int32_t NumMax); // Function WB_ui_Equip_Parts_4.WB_ui_Equip_Parts_3_C.SetWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateClose(int32_t SubState); // Function WB_ui_Equip_Parts_4.WB_ui_Equip_Parts_3_C.StateClose // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_Equip_Parts_4.WB_ui_Equip_Parts_3_C.StateLoop // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateOpen(int32_t SubState); // Function WB_ui_Equip_Parts_4.WB_ui_Equip_Parts_3_C.StateOpen // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_Equip_Parts_4.WB_ui_Equip_Parts_3_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Equip_Parts_4.WB_ui_Equip_Parts_3_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Equip_Parts_4.WB_ui_Equip_Parts_3_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Equip_Parts_4.WB_ui_Equip_Parts_3_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Equip_Parts_4(int32_t EntryPoint); // Function WB_ui_Equip_Parts_4.WB_ui_Equip_Parts_3_C.ExecuteUbergraph_WB_ui_Equip_Parts_4 // (Final|UbergraphFunction) // @ game+0x1685580
};

