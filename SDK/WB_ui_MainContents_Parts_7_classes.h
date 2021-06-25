// WidgetBlueprintGeneratedClass WB_ui_MainContents_Parts_7.WB_ui_MainContents_Parts_6_C
// Size: 0x420 (Inherited: 0x3d8)
struct UWB_ui_MainContents_Parts_6_C : UUIMainContentsSubTab {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UWidgetAnimation* unselect; // 0x3e0(0x08)
	struct UWidgetAnimation* decision; // 0x3e8(0x08)
	struct UWidgetAnimation* select_out; // 0x3f0(0x08)
	struct UWidgetAnimation* select_in; // 0x3f8(0x08)
	struct UWidgetAnimation* select; // 0x400(0x08)
	struct UWidgetAnimation* default_none; // 0x408(0x08)
	struct UWidgetAnimation* Default; // 0x410(0x08)
	struct UREDTextBlock* Text_main_category_sub_2; // 0x418(0x08)

	void Construct(); // Function WB_ui_MainContents_Parts_7.WB_ui_MainContents_Parts_6_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_MainContents_Parts_7.WB_ui_MainContents_Parts_6_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void PreConstruct(bool IsDesignTime); // Function WB_ui_MainContents_Parts_7.WB_ui_MainContents_Parts_6_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_MainContents_Parts_7.WB_ui_MainContents_Parts_6_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_MainContents_Parts_7(int32_t EntryPoint); // Function WB_ui_MainContents_Parts_7.WB_ui_MainContents_Parts_6_C.ExecuteUbergraph_WB_ui_MainContents_Parts_7 // (Final|UbergraphFunction) // @ game+0x1685580
};

