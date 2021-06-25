// WidgetBlueprintGeneratedClass WB_ui_Discover_2.WB_ui_Discover_1_C
// Size: 0x4f8 (Inherited: 0x438)
struct UWB_ui_Discover_1_C : UUIDiscover {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x438(0x08)
	struct UWidgetAnimation* Out_4; // 0x440(0x08)
	struct UWidgetAnimation* Default_4; // 0x448(0x08)
	struct UWidgetAnimation* Out_3; // 0x450(0x08)
	struct UWidgetAnimation* Out_2; // 0x458(0x08)
	struct UWidgetAnimation* In_3; // 0x460(0x08)
	struct UWidgetAnimation* In_2; // 0x468(0x08)
	struct UWidgetAnimation* default_none; // 0x470(0x08)
	struct UWidgetAnimation* Default_3; // 0x478(0x08)
	struct UWidgetAnimation* Default_2; // 0x480(0x08)
	struct UOverlay* allset; // 0x488(0x08)
	struct UImage* Frame_4; // 0x490(0x08)
	struct UImage* frame_0_2; // 0x498(0x08)
	struct UImage* frame_0_3; // 0x4a0(0x08)
	struct UImage* frame_0_add_1_2; // 0x4a8(0x08)
	struct UImage* frame_0_add_1_3; // 0x4b0(0x08)
	struct UImage* frame_1_2; // 0x4b8(0x08)
	struct UImage* frame_1_3; // 0x4c0(0x08)
	struct UImage* frame_1_4; // 0x4c8(0x08)
	struct UImage* frame_1_add; // 0x4d0(0x08)
	struct UImage* frame_1_add_2; // 0x4d8(0x08)
	struct UImage* frame_2_2; // 0x4e0(0x08)
	struct UImage* frame_2_3; // 0x4e8(0x08)
	struct UImage* ghost_frame; // 0x4f0(0x08)

	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Discover_2.WB_ui_Discover_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void SetDiscoverIcon(enum class EDiscoverIconType Type); // Function WB_ui_Discover_2.WB_ui_Discover_1_C.SetDiscoverIcon // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Discover_2.WB_ui_Discover_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Discover_2(int32_t EntryPoint); // Function WB_ui_Discover_2.WB_ui_Discover_1_C.ExecuteUbergraph_WB_ui_Discover_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

