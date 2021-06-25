// WidgetBlueprintGeneratedClass WB_ui_Books.WB_ui_Books_C
// Size: 0x768 (Inherited: 0x650)
struct UWB_ui_Books_C : UUIBooksTop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x650(0x08)
	struct UWidgetAnimation* chanege_default; // 0x658(0x08)
	struct UWidgetAnimation* change_view; // 0x660(0x08)
	struct UWidgetAnimation* default_view; // 0x668(0x08)
	struct UWidgetAnimation* contents_out; // 0x670(0x08)
	struct UWidgetAnimation* contents_in; // 0x678(0x08)
	struct UWidgetAnimation* Out; // 0x680(0x08)
	struct UWidgetAnimation* In; // 0x688(0x08)
	struct UWidgetAnimation* Default; // 0x690(0x08)
	struct UCanvasPanel* CanvasPanel_2; // 0x698(0x08)
	struct UImage* Line_2; // 0x6a0(0x08)
	struct UImage* Line_3; // 0x6a8(0x08)
	struct UImage* Line_4; // 0x6b0(0x08)
	struct UImage* Line_5; // 0x6b8(0x08)
	struct UOverlay* Overlay_1; // 0x6c0(0x08)
	struct UOverlay* Overlay_3; // 0x6c8(0x08)
	struct UBorder* PG_All_Color; // 0x6d0(0x08)
	struct UImage* PG_Ghost_Viewer; // 0x6d8(0x08)
	struct UBorder* PG_Picture_set; // 0x6e0(0x08)
	struct UREDRetainerBox* PG_REDRetainerBox_Menu; // 0x6e8(0x08)
	struct UImage* PG_viewer_noise; // 0x6f0(0x08)
	struct UImage* Picture; // 0x6f8(0x08)
	struct UOverlay* SubContents_Set; // 0x700(0x08)
	struct UWB_ui_BrainMes_C* WB_ui_BrainMes; // 0x708(0x08)
	struct UWB_ui_Chara_C* WB_ui_Chara; // 0x710(0x08)
	struct UWB_ui_Enemy_C* WB_ui_Enemy; // 0x718(0x08)
	struct UWB_ui_Help_C* WB_ui_Help; // 0x720(0x08)
	struct UWB_ui_MainContents_Parts_4_C* WB_ui_MainContents_Parts_5; // 0x728(0x08)
	struct UWB_ui_MainContents_Parts_5_C* WB_ui_MainContents_Parts_6; // 0x730(0x08)
	struct UWB_ui_MainContents_Parts_6_C* WB_ui_MainContents_Parts_6_2; // 0x738(0x08)
	struct UWB_ui_MainContents_Parts_6_C* WB_ui_MainContents_Parts_6_3; // 0x740(0x08)
	struct UWB_ui_MainContents_Parts_6_C* WB_ui_MainContents_Parts_6_4; // 0x748(0x08)
	struct UWB_ui_MainContents_Parts_6_C* WB_ui_MainContents_Parts_6_5; // 0x750(0x08)
	struct UWB_ui_MainContents_Parts_6_C* WB_ui_MainContents_Parts_6_6; // 0x758(0x08)
	struct UWB_ui_Wish_C* WB_ui_Wish; // 0x760(0x08)

	void UpdateBooksViewerMaterial(); // Function WB_ui_Books.WB_ui_Books_C.UpdateBooksViewerMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Books.WB_ui_Books_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Books.WB_ui_Books_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void PreConstruct(bool IsDesignTime); // Function WB_ui_Books.WB_ui_Books_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Books(int32_t EntryPoint); // Function WB_ui_Books.WB_ui_Books_C.ExecuteUbergraph_WB_ui_Books // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

