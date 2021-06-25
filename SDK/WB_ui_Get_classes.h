// WidgetBlueprintGeneratedClass WB_ui_Get.WB_ui_Get_C
// Size: 0x4c8 (Inherited: 0x440)
struct UWB_ui_Get_C : UUIShopGetContents {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x440(0x08)
	struct UBorder* All_Color; // 0x448(0x08)
	struct UOverlay* All_Set; // 0x450(0x08)
	struct UImage* Base_Line_2; // 0x458(0x08)
	struct UImage* Base_List; // 0x460(0x08)
	struct UCanvasPanel* CanvasPanel_ViewRange; // 0x468(0x08)
	struct UCanvasPanel* CanvasPanel_ViewRange_2; // 0x470(0x08)
	struct UImage* Frame_List; // 0x478(0x08)
	struct UREDScrollBox* ScrollBox_GetList_2; // 0x480(0x08)
	struct UREDScrollBoxSimple* ScrollBox_GetList_3; // 0x488(0x08)
	struct USpacer* Spacer_Desc; // 0x490(0x08)
	struct UREDTextBlock* Text_get_contents_2; // 0x498(0x08)
	struct UREDTextBlock* Text_get_contents_3; // 0x4a0(0x08)
	struct UREDTextBlock* Text_get_contents_4; // 0x4a8(0x08)
	struct UOverlay* Tips_BaseSet; // 0x4b0(0x08)
	struct UWB_ui_Get_List_Parts_1_C* WB_ui_Get_List_Parts_1_2; // 0x4b8(0x08)
	struct UWB_ui_Get_List_Parts_2_C* WB_ui_Get_List_Parts_2_2; // 0x4c0(0x08)

	void Construct(); // Function WB_ui_Get.WB_ui_Get_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Get.WB_ui_Get_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ListUpdateElement(int32_t Index, struct UUserWidget* Widget); // Function WB_ui_Get.WB_ui_Get_C.ListUpdateElement // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListFocus(struct UUserWidget* Widget); // Function WB_ui_Get.WB_ui_Get_C.ListFocus // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListUnFocus(struct UUserWidget* Widget); // Function WB_ui_Get.WB_ui_Get_C.ListUnFocus // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListFocusMouse(int32_t isMouseScroll, int32_t Index, struct UUserWidget* Widget); // Function WB_ui_Get.WB_ui_Get_C.ListFocusMouse // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListUnFocusMouse(int32_t isMouseScroll, int32_t Index, struct UUserWidget* Widget); // Function WB_ui_Get.WB_ui_Get_C.ListUnFocusMouse // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Get.WB_ui_Get_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Get(int32_t EntryPoint); // Function WB_ui_Get.WB_ui_Get_C.ExecuteUbergraph_WB_ui_Get // (Final|UbergraphFunction) // @ game+0x1685580
};

