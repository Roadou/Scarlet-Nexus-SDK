// WidgetBlueprintGeneratedClass WB_ui_Item_Menu_3.WB_ui_Item_Menu_2_C
// Size: 0x431 (Inherited: 0x388)
struct UWB_ui_Item_Menu_2_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* Change_3; // 0x390(0x08)
	struct UWidgetAnimation* Change_2; // 0x398(0x08)
	struct UWidgetAnimation* full; // 0x3a0(0x08)
	struct UWidgetAnimation* full_in; // 0x3a8(0x08)
	struct UWidgetAnimation* R_decision; // 0x3b0(0x08)
	struct UWidgetAnimation* L_decision; // 0x3b8(0x08)
	struct UWidgetAnimation* decision; // 0x3c0(0x08)
	struct UWidgetAnimation* Out; // 0x3c8(0x08)
	struct UWidgetAnimation* In; // 0x3d0(0x08)
	struct UWidgetAnimation* default_none; // 0x3d8(0x08)
	struct UWidgetAnimation* Default; // 0x3e0(0x08)
	struct UImage* Arrow_L; // 0x3e8(0x08)
	struct UImage* Arrow_L_add; // 0x3f0(0x08)
	struct UImage* Arrow_R; // 0x3f8(0x08)
	struct UImage* Arrow_R_add; // 0x400(0x08)
	struct UOverlay* Arrow_set; // 0x408(0x08)
	struct UImage* arrow_u; // 0x410(0x08)
	struct UImage* arrow_u_add; // 0x418(0x08)
	struct UImage* gauge_2; // 0x420(0x08)
	struct UImage* gauge_1_add; // 0x428(0x08)
	bool FlagFrameDraw; // 0x430(0x01)

	void SetDrawFrame(bool IsDraw); // Function WB_ui_Item_Menu_3.WB_ui_Item_Menu_2_C.SetDrawFrame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayFrameAnimation(int32_t Index, float Speed, bool IsLoop); // Function WB_ui_Item_Menu_3.WB_ui_Item_Menu_2_C.PlayFrameAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetFrameColor(struct FName ItemId); // Function WB_ui_Item_Menu_3.WB_ui_Item_Menu_2_C.SetFrameColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRecastPercent(float percent); // Function WB_ui_Item_Menu_3.WB_ui_Item_Menu_2_C.SetRecastPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Item_Menu_3.WB_ui_Item_Menu_2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Item_Menu_3.WB_ui_Item_Menu_2_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Item_Menu_3.WB_ui_Item_Menu_2_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Item_Menu_3(int32_t EntryPoint); // Function WB_ui_Item_Menu_3.WB_ui_Item_Menu_2_C.ExecuteUbergraph_WB_ui_Item_Menu_3 // (Final|UbergraphFunction) // @ game+0x1685580
};

