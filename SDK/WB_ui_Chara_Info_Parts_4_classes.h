// WidgetBlueprintGeneratedClass WB_ui_Chara_Info_Parts_4.WB_ui_Chara_Info_Parts_3_C
// Size: 0x3f0 (Inherited: 0x3b8)
struct UWB_ui_Chara_Info_Parts_3_C : UUICharaPresentListIndex {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b8(0x08)
	struct UWidgetAnimation* select_in; // 0x3c0(0x08)
	struct UWidgetAnimation* select; // 0x3c8(0x08)
	struct UWidgetAnimation* Default; // 0x3d0(0x08)
	struct UImage* icon_category; // 0x3d8(0x08)
	struct UImage* item_icon_frame_3; // 0x3e0(0x08)
	struct UREDTextBlock* Text_Chara_name_5; // 0x3e8(0x08)

	bool SetItemInfo(struct FName ItemId); // Function WB_ui_Chara_Info_Parts_4.WB_ui_Chara_Info_Parts_3_C.SetItemInfo // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Chara_Info_Parts_4.WB_ui_Chara_Info_Parts_3_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Chara_Info_Parts_4.WB_ui_Chara_Info_Parts_3_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Chara_Info_Parts_4(int32_t EntryPoint); // Function WB_ui_Chara_Info_Parts_4.WB_ui_Chara_Info_Parts_3_C.ExecuteUbergraph_WB_ui_Chara_Info_Parts_4 // (Final|UbergraphFunction) // @ game+0x1685580
};

