// WidgetBlueprintGeneratedClass WB_ui_Equip_Parts_3.WB_ui_Equip_Parts_2_C
// Size: 0x451 (Inherited: 0x388)
struct UWB_ui_Equip_Parts_2_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* change_s1_lock; // 0x390(0x08)
	struct UWidgetAnimation* change_lock_s1; // 0x398(0x08)
	struct UWidgetAnimation* default_lock; // 0x3a0(0x08)
	struct UWidgetAnimation* Cancel; // 0x3a8(0x08)
	struct UWidgetAnimation* decision; // 0x3b0(0x08)
	struct UWidgetAnimation* select_in; // 0x3b8(0x08)
	struct UWidgetAnimation* select_3; // 0x3c0(0x08)
	struct UWidgetAnimation* select_2; // 0x3c8(0x08)
	struct UWidgetAnimation* default_none; // 0x3d0(0x08)
	struct UWidgetAnimation* Default; // 0x3d8(0x08)
	struct UImage* Base_2_select; // 0x3e0(0x08)
	struct UImage* Base_3_select; // 0x3e8(0x08)
	struct UImage* Base_Category; // 0x3f0(0x08)
	struct UImage* Equip_icon_frame; // 0x3f8(0x08)
	struct UImage* Frame_3; // 0x400(0x08)
	struct UImage* Frame_3_base; // 0x408(0x08)
	struct UImage* Frame_Base_3; // 0x410(0x08)
	struct UImage* icon_category; // 0x418(0x08)
	struct UImage* neon_2; // 0x420(0x08)
	struct UImage* neon_1_add; // 0x428(0x08)
	struct UImage* neon_2_add; // 0x430(0x08)
	struct UImage* NEON_base; // 0x438(0x08)
	struct UREDTextBlock* Text_equipage_slot_2; // 0x440(0x08)
	bool IsSelect; // 0x448(0x01)
	bool isLock; // 0x449(0x01)
	bool IsReturn; // 0x44a(0x01)
	bool isDisable; // 0x44b(0x01)
	bool IsCurrentDisable; // 0x44c(0x01)
	bool IsEmpty; // 0x44d(0x01)
	bool IsCurrentEmpty; // 0x44e(0x01)
	bool IsChangeDirect; // 0x44f(0x01)
	bool IsCancelSelect; // 0x450(0x01)

	void ChangeDirect(); // Function WB_ui_Equip_Parts_3.WB_ui_Equip_Parts_2_C.ChangeDirect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetItemName(struct FName ItemId); // Function WB_ui_Equip_Parts_3.WB_ui_Equip_Parts_2_C.SetItemName // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetNone(); // Function WB_ui_Equip_Parts_3.WB_ui_Equip_Parts_2_C.SetNone // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetItemIcon(struct FName ItemId); // Function WB_ui_Equip_Parts_3.WB_ui_Equip_Parts_2_C.SetItemIcon // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttachment(int32_t Index, int32_t ID); // Function WB_ui_Equip_Parts_3.WB_ui_Equip_Parts_2_C.SetAttachment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCostume(int32_t ID); // Function WB_ui_Equip_Parts_3.WB_ui_Equip_Parts_2_C.SetCostume // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDisable(bool isDisable); // Function WB_ui_Equip_Parts_3.WB_ui_Equip_Parts_2_C.SetDisable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAccessory(int32_t Index, int32_t ID); // Function WB_ui_Equip_Parts_3.WB_ui_Equip_Parts_2_C.SetAccessory // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWeapon(int32_t ID); // Function WB_ui_Equip_Parts_3.WB_ui_Equip_Parts_2_C.SetWeapon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLock(bool isLock); // Function WB_ui_Equip_Parts_3.WB_ui_Equip_Parts_2_C.SetLock // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSelect(bool IsSelect); // Function WB_ui_Equip_Parts_3.WB_ui_Equip_Parts_2_C.SetSelect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoopLock(int32_t SubState); // Function WB_ui_Equip_Parts_3.WB_ui_Equip_Parts_2_C.StateLoopLock // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoopSelect(int32_t SubState); // Function WB_ui_Equip_Parts_3.WB_ui_Equip_Parts_2_C.StateLoopSelect // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_Equip_Parts_3.WB_ui_Equip_Parts_2_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_Equip_Parts_3.WB_ui_Equip_Parts_2_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Equip_Parts_3.WB_ui_Equip_Parts_2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Equip_Parts_3.WB_ui_Equip_Parts_2_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void Destruct(); // Function WB_ui_Equip_Parts_3.WB_ui_Equip_Parts_2_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Equip_Parts_3.WB_ui_Equip_Parts_2_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Equip_Parts_3(int32_t EntryPoint); // Function WB_ui_Equip_Parts_3.WB_ui_Equip_Parts_2_C.ExecuteUbergraph_WB_ui_Equip_Parts_3 // (Final|UbergraphFunction) // @ game+0x1685580
};

