// WidgetBlueprintGeneratedClass WB_ui_Party_MemberList_Parts_2.WB_ui_Party_MemberList_Parts_1_C
// Size: 0x55a (Inherited: 0x388)
struct UWB_ui_Party_MemberList_Parts_1_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* Default_6; // 0x390(0x08)
	struct UWidgetAnimation* Cancel_2; // 0x398(0x08)
	struct UWidgetAnimation* decision_3; // 0x3a0(0x08)
	struct UWidgetAnimation* decision_2; // 0x3a8(0x08)
	struct UWidgetAnimation* change_2_6; // 0x3b0(0x08)
	struct UWidgetAnimation* change_1_4; // 0x3b8(0x08)
	struct UWidgetAnimation* Default_5; // 0x3c0(0x08)
	struct UWidgetAnimation* Default_4; // 0x3c8(0x08)
	struct UWidgetAnimation* change_2_2; // 0x3d0(0x08)
	struct UWidgetAnimation* change_1_3; // 0x3d8(0x08)
	struct UWidgetAnimation* Default_3; // 0x3e0(0x08)
	struct UWidgetAnimation* default_none; // 0x3e8(0x08)
	struct UWidgetAnimation* Default_2; // 0x3f0(0x08)
	struct UImage* Base_2_select; // 0x3f8(0x08)
	struct UImage* Base_3_select; // 0x400(0x08)
	struct UImage* Base_Category; // 0x408(0x08)
	struct UImage* Bond_Base; // 0x410(0x08)
	struct UImage* Bond_icon; // 0x418(0x08)
	struct UImage* Face_a; // 0x420(0x08)
	struct UImage* Face_Noise; // 0x428(0x08)
	struct UImage* Frame_4; // 0x430(0x08)
	struct UImage* Frame_Base_3; // 0x438(0x08)
	struct UImage* HP_gauge; // 0x440(0x08)
	struct UImage* HP_gauge_add; // 0x448(0x08)
	struct UImage* HP_Guage_base; // 0x450(0x08)
	struct UImage* Icon_Status01; // 0x458(0x08)
	struct UImage* Icon_Status02; // 0x460(0x08)
	struct UBorder* list_bond_1num_Color; // 0x468(0x08)
	struct UBorder* list_bond_1num_Color_Max; // 0x470(0x08)
	struct UBorder* list_LV_1_num_Color; // 0x478(0x08)
	struct UBorder* list_LV_1_num_Color_Max; // 0x480(0x08)
	struct UBorder* menber_category_2_num1_Color; // 0x488(0x08)
	struct UImage* neon_2; // 0x490(0x08)
	struct UImage* neon_1_add; // 0x498(0x08)
	struct UImage* neon_2_add; // 0x4a0(0x08)
	struct UImage* NEON_base; // 0x4a8(0x08)
	struct UImage* SAS_Base; // 0x4b0(0x08)
	struct UImage* sas_frame_pattern; // 0x4b8(0x08)
	struct UImage* sas_icon; // 0x4c0(0x08)
	struct UImage* sas_icon_add; // 0x4c8(0x08)
	struct UImage* SAS_icon_base; // 0x4d0(0x08)
	struct UImage* SAS_Name_base; // 0x4d8(0x08)
	struct UREDTextBlock* Text_party_list_bond_1num; // 0x4e0(0x08)
	struct UREDTextBlock* Text_party_list_bond_1num_max; // 0x4e8(0x08)
	struct UREDTextBlock* Text_party_list_category_2; // 0x4f0(0x08)
	struct UREDTextBlock* Text_party_list_category_3; // 0x4f8(0x08)
	struct UREDTextBlock* Text_party_list_LV_2; // 0x500(0x08)
	struct UREDTextBlock* Text_party_list_LV_1_num; // 0x508(0x08)
	struct UREDTextBlock* Text_party_list_LV_1_num_max; // 0x510(0x08)
	struct UREDTextBlock* Text_party_list_name_2; // 0x518(0x08)
	struct UREDTextBlock* Text_party_list_SAS_2; // 0x520(0x08)
	struct UREDTextBlock* Text_party_menber_category_1_slash; // 0x528(0x08)
	struct UREDTextBlock* Text_party_menber_category_2_num1; // 0x530(0x08)
	struct UREDTextBlock* Text_party_menber_category_2_num2; // 0x538(0x08)
	bool IsEnable; // 0x540(0x01)
	bool IsEnableChange; // 0x541(0x01)
	bool IsSelect; // 0x542(0x01)
	bool IsDecide; // 0x543(0x01)
	bool isLock; // 0x544(0x01)
	bool IsLockBack; // 0x545(0x01)
	enum class EPlayerID playerId; // 0x546(0x01)
	char pad_547[0x1]; // 0x547(0x01)
	struct TArray<struct UImage*> BadIconList; // 0x548(0x10)
	bool IsStart; // 0x558(0x01)
	bool IsResetSelect; // 0x559(0x01)

	void ResetPlayerID(); // Function WB_ui_Party_MemberList_Parts_2.WB_ui_Party_MemberList_Parts_1_C.ResetPlayerID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitAnimation(); // Function WB_ui_Party_MemberList_Parts_2.WB_ui_Party_MemberList_Parts_1_C.InitAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetAnimation(); // Function WB_ui_Party_MemberList_Parts_2.WB_ui_Party_MemberList_Parts_1_C.ResetAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBadEffect(struct TArray<bool> BadStatusList); // Function WB_ui_Party_MemberList_Parts_2.WB_ui_Party_MemberList_Parts_1_C.SetBadEffect // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPlayerID(); // Function WB_ui_Party_MemberList_Parts_2.WB_ui_Party_MemberList_Parts_1_C.SetPlayerID // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoopLock(int32_t SubState); // Function WB_ui_Party_MemberList_Parts_2.WB_ui_Party_MemberList_Parts_1_C.StateLoopLock // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoopSelect(int32_t SubState); // Function WB_ui_Party_MemberList_Parts_2.WB_ui_Party_MemberList_Parts_1_C.StateLoopSelect // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHp(int32_t HP, int32_t MaxHp); // Function WB_ui_Party_MemberList_Parts_2.WB_ui_Party_MemberList_Parts_1_C.SetHp // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBond(int32_t Bonds, int32_t BondsMax); // Function WB_ui_Party_MemberList_Parts_2.WB_ui_Party_MemberList_Parts_1_C.SetBond // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCharacterEmpty(); // Function WB_ui_Party_MemberList_Parts_2.WB_ui_Party_MemberList_Parts_1_C.SetCharacterEmpty // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBaseText(); // Function WB_ui_Party_MemberList_Parts_2.WB_ui_Party_MemberList_Parts_1_C.SetBaseText // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void setNumber(int32_t Number); // Function WB_ui_Party_MemberList_Parts_2.WB_ui_Party_MemberList_Parts_1_C.setNumber // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSasIcon(int32_t Index); // Function WB_ui_Party_MemberList_Parts_2.WB_ui_Party_MemberList_Parts_1_C.SetSasIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetFace(int32_t Index); // Function WB_ui_Party_MemberList_Parts_2.WB_ui_Party_MemberList_Parts_1_C.SetFace // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsCursorAnimation(bool IsAnimation); // Function WB_ui_Party_MemberList_Parts_2.WB_ui_Party_MemberList_Parts_1_C.IsCursorAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetName(int32_t CharaID); // Function WB_ui_Party_MemberList_Parts_2.WB_ui_Party_MemberList_Parts_1_C.SetName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLv(int32_t LV); // Function WB_ui_Party_MemberList_Parts_2.WB_ui_Party_MemberList_Parts_1_C.SetLv // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCharacterStruct(struct FPlayerInfo Param); // Function WB_ui_Party_MemberList_Parts_2.WB_ui_Party_MemberList_Parts_1_C.SetCharacterStruct // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void decision(); // Function WB_ui_Party_MemberList_Parts_2.WB_ui_Party_MemberList_Parts_1_C.decision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLock(bool isLock); // Function WB_ui_Party_MemberList_Parts_2.WB_ui_Party_MemberList_Parts_1_C.SetLock // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSelect(bool IsSelect); // Function WB_ui_Party_MemberList_Parts_2.WB_ui_Party_MemberList_Parts_1_C.SetSelect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnable(bool IsEnable); // Function WB_ui_Party_MemberList_Parts_2.WB_ui_Party_MemberList_Parts_1_C.SetEnable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_Party_MemberList_Parts_2.WB_ui_Party_MemberList_Parts_1_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_Party_MemberList_Parts_2.WB_ui_Party_MemberList_Parts_1_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Party_MemberList_Parts_2.WB_ui_Party_MemberList_Parts_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Party_MemberList_Parts_2.WB_ui_Party_MemberList_Parts_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Party_MemberList_Parts_2.WB_ui_Party_MemberList_Parts_1_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Party_MemberList_Parts_2(int32_t EntryPoint); // Function WB_ui_Party_MemberList_Parts_2.WB_ui_Party_MemberList_Parts_1_C.ExecuteUbergraph_WB_ui_Party_MemberList_Parts_2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

