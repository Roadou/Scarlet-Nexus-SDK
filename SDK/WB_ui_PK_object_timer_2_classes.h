// WidgetBlueprintGeneratedClass WB_ui_PK_object_timer_2.WB_ui_PK_object_timer_1_C
// Size: 0x400 (Inherited: 0x3c8)
struct UWB_ui_PK_object_timer_1_C : UUIPkObjectTimer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UWidgetAnimation* Out; // 0x3d0(0x08)
	struct UWidgetAnimation* In; // 0x3d8(0x08)
	struct UWidgetAnimation* Default; // 0x3e0(0x08)
	struct UImage* Bar_2; // 0x3e8(0x08)
	struct UImage* Bar_1_add; // 0x3f0(0x08)
	struct UREDTextBlock* Text_Bmap_icon_bp_1_num; // 0x3f8(0x08)

	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_PK_object_timer_2.WB_ui_PK_object_timer_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_PK_object_timer_2.WB_ui_PK_object_timer_1_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_PK_object_timer_2(int32_t EntryPoint); // Function WB_ui_PK_object_timer_2.WB_ui_PK_object_timer_1_C.ExecuteUbergraph_WB_ui_PK_object_timer_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

