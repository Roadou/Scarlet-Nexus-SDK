// WidgetBlueprintGeneratedClass WB_ui_Item_Menu_2.WB_ui_Item_Menu_1_C
// Size: 0x526 (Inherited: 0x388)
struct UWB_ui_Item_Menu_1_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* change_L_R; // 0x390(0x08)
	struct UWidgetAnimation* Out_3; // 0x398(0x08)
	struct UWidgetAnimation* In_3; // 0x3a0(0x08)
	struct UWidgetAnimation* Default_3; // 0x3a8(0x08)
	struct UWidgetAnimation* change_all_3; // 0x3b0(0x08)
	struct UWidgetAnimation* change_all_2; // 0x3b8(0x08)
	struct UWidgetAnimation* R_decision_3; // 0x3c0(0x08)
	struct UWidgetAnimation* L_decision_3; // 0x3c8(0x08)
	struct UWidgetAnimation* change_l; // 0x3d0(0x08)
	struct UWidgetAnimation* change_r; // 0x3d8(0x08)
	struct UWidgetAnimation* delete_change_l_c_3; // 0x3e0(0x08)
	struct UWidgetAnimation* change_l_c; // 0x3e8(0x08)
	struct UWidgetAnimation* delete_change_c_r_3; // 0x3f0(0x08)
	struct UWidgetAnimation* change_c_r; // 0x3f8(0x08)
	struct UWidgetAnimation* full; // 0x400(0x08)
	struct UWidgetAnimation* full_in; // 0x408(0x08)
	struct UWidgetAnimation* R_decision; // 0x410(0x08)
	struct UWidgetAnimation* L_decision; // 0x418(0x08)
	struct UWidgetAnimation* decision; // 0x420(0x08)
	struct UWidgetAnimation* Out; // 0x428(0x08)
	struct UWidgetAnimation* In; // 0x430(0x08)
	struct UWidgetAnimation* default_none; // 0x438(0x08)
	struct UWidgetAnimation* Default; // 0x440(0x08)
	struct UImage* Frame_center_base; // 0x448(0x08)
	struct UImage* Frame_center_cover; // 0x450(0x08)
	struct UImage* Frame_item_base; // 0x458(0x08)
	struct UImage* icon_add; // 0x460(0x08)
	struct UImage* Item_center; // 0x468(0x08)
	struct UImage* Item_center_change; // 0x470(0x08)
	struct UImage* Item_center_grow; // 0x478(0x08)
	struct UImage* Item_left; // 0x480(0x08)
	struct UImage* Item_left_change; // 0x488(0x08)
	struct UImage* Item_right; // 0x490(0x08)
	struct UImage* Item_right_change; // 0x498(0x08)
	struct UImage* Line_2; // 0x4a0(0x08)
	struct UImage* Line_3; // 0x4a8(0x08)
	struct UImage* Noise_2; // 0x4b0(0x08)
	struct UImage* Noise_3; // 0x4b8(0x08)
	struct UREDTextBlock* text_item_name_2; // 0x4c0(0x08)
	struct UREDTextBlock* text_item_number_center_2; // 0x4c8(0x08)
	struct UREDTextBlock* text_item_number_left_2; // 0x4d0(0x08)
	struct UREDTextBlock* text_item_number_right_2; // 0x4d8(0x08)
	bool FlagEnable; // 0x4e0(0x01)
	bool FlagDecide; // 0x4e1(0x01)
	char pad_4E2[0x2]; // 0x4e2(0x02)
	int32_t Index; // 0x4e4(0x04)
	struct UWB_ui_Item_Menu_2_C* frameObject; // 0x4e8(0x08)
	int32_t ShiftCount; // 0x4f0(0x04)
	int32_t CurrentItemNum; // 0x4f4(0x04)
	bool FlagItemEmpty; // 0x4f8(0x01)
	char pad_4F9[0x3]; // 0x4f9(0x03)
	struct FName CurrentItemID; // 0x4fc(0x08)
	int32_t itemTypeNum; // 0x504(0x04)
	int32_t ItemTypeNumOld; // 0x508(0x04)
	struct FName CurrentItemIdCenter; // 0x50c(0x08)
	struct FName CurrentItemIdLeft; // 0x514(0x08)
	struct FName CurrentItemIdRight; // 0x51c(0x08)
	bool FlagNoMotion; // 0x524(0x01)
	bool ItemTypeChangeFlag; // 0x525(0x01)

	void ItemCheck8297(); // Function WB_ui_Item_Menu_2.WB_ui_Item_Menu_1_C.ItemCheck8297 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RestoreSelectedItem(); // Function WB_ui_Item_Menu_2.WB_ui_Item_Menu_1_C.RestoreSelectedItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetNoMotionUse(bool IsNoMotion); // Function WB_ui_Item_Menu_2.WB_ui_Item_Menu_1_C.SetNoMotionUse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentItemID(struct FName ID); // Function WB_ui_Item_Menu_2.WB_ui_Item_Menu_1_C.GetCurrentItemID // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CorrectCurrentItemID(); // Function WB_ui_Item_Menu_2.WB_ui_Item_Menu_1_C.CorrectCurrentItemID // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCurrentItemID(); // Function WB_ui_Item_Menu_2.WB_ui_Item_Menu_1_C.UpdateCurrentItemID // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckItemTypeNum(bool IsChange); // Function WB_ui_Item_Menu_2.WB_ui_Item_Menu_1_C.CheckItemTypeNum // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ItemSelect(bool IsSelect); // Function WB_ui_Item_Menu_2.WB_ui_Item_Menu_1_C.ItemSelect // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EmptyCurrentItem(); // Function WB_ui_Item_Menu_2.WB_ui_Item_Menu_1_C.EmptyCurrentItem // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetFrameColor(struct FName ItemId); // Function WB_ui_Item_Menu_2.WB_ui_Item_Menu_1_C.SetFrameColor // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ShiftRight(); // Function WB_ui_Item_Menu_2.WB_ui_Item_Menu_1_C.ShiftRight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ShiftLeft(); // Function WB_ui_Item_Menu_2.WB_ui_Item_Menu_1_C.ShiftLeft // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRecastPercent(float percent); // Function WB_ui_Item_Menu_2.WB_ui_Item_Menu_1_C.SetRecastPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnableUse(bool IsEnable); // Function WB_ui_Item_Menu_2.WB_ui_Item_Menu_1_C.SetEnableUse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoopDisable(int32_t SubState); // Function WB_ui_Item_Menu_2.WB_ui_Item_Menu_1_C.StateLoopDisable // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopItemCurrentAnimation(); // Function WB_ui_Item_Menu_2.WB_ui_Item_Menu_1_C.StopItemCurrentAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayItemAnimation(int32_t Index, bool IsLoop); // Function WB_ui_Item_Menu_2.WB_ui_Item_Menu_1_C.PlayItemAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetFrameObject(struct UWB_ui_Item_Menu_2_C* Object); // Function WB_ui_Item_Menu_2.WB_ui_Item_Menu_1_C.SetFrameObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetItemText(struct FName ItemId); // Function WB_ui_Item_Menu_2.WB_ui_Item_Menu_1_C.SetItemText // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetItemNum(struct UImage* Image_11, struct UImage* Image_01, int32_t Num); // Function WB_ui_Item_Menu_2.WB_ui_Item_Menu_1_C.SetItemNum // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetItemID(struct UImage* Image, struct FName ID); // Function WB_ui_Item_Menu_2.WB_ui_Item_Menu_1_C.SetItemID // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UseCurrentItem(bool IsUse); // Function WB_ui_Item_Menu_2.WB_ui_Item_Menu_1_C.UseCurrentItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetItemRight(int32_t CurrentIndex, int32_t nextindex); // Function WB_ui_Item_Menu_2.WB_ui_Item_Menu_1_C.SetItemRight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetItemLeft(int32_t CurrentIndex, int32_t nextindex); // Function WB_ui_Item_Menu_2.WB_ui_Item_Menu_1_C.SetItemLeft // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Set Item Center(int32_t CurrentIndex, int32_t nextindex); // Function WB_ui_Item_Menu_2.WB_ui_Item_Menu_1_C.Set Item Center // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetItem(bool FlagChangeLeft, bool FlagChangeRight); // Function WB_ui_Item_Menu_2.WB_ui_Item_Menu_1_C.SetItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void State Add Item(int32_t SubState); // Function WB_ui_Item_Menu_2.WB_ui_Item_Menu_1_C.State Add Item // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateClose(int32_t SubState); // Function WB_ui_Item_Menu_2.WB_ui_Item_Menu_1_C.StateClose // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void State Loop Enable(int32_t SubState); // Function WB_ui_Item_Menu_2.WB_ui_Item_Menu_1_C.State Loop Enable // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateOpen(int32_t SubState); // Function WB_ui_Item_Menu_2.WB_ui_Item_Menu_1_C.StateOpen // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_Item_Menu_2.WB_ui_Item_Menu_1_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Item_Menu_2.WB_ui_Item_Menu_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Item_Menu_2.WB_ui_Item_Menu_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Item_Menu_2.WB_ui_Item_Menu_1_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Item_Menu_2(int32_t EntryPoint); // Function WB_ui_Item_Menu_2.WB_ui_Item_Menu_1_C.ExecuteUbergraph_WB_ui_Item_Menu_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

