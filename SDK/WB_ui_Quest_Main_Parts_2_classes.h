// WidgetBlueprintGeneratedClass WB_ui_Quest_Main_Parts_2.WB_ui_Quest_Main_Parts_1_C
// Size: 0x4f0 (Inherited: 0x3e8)
struct UWB_ui_Quest_Main_Parts_1_C : UUIQuestDetailsMain {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e8(0x08)
	struct UWidgetAnimation* default_none; // 0x3f0(0x08)
	struct UWidgetAnimation* Default; // 0x3f8(0x08)
	struct UBorder* All_Color; // 0x400(0x08)
	struct UCanvasPanel* CanvasPanel_ViewRange; // 0x408(0x08)
	struct UOverlay* List_Set; // 0x410(0x08)
	struct UImage* Quest_icon; // 0x418(0x08)
	struct UImage* Quest_Main_Image_2; // 0x420(0x08)
	struct UImage* Quest_Main_Image_3; // 0x428(0x08)
	struct UImage* Quest_Main_Image_4; // 0x430(0x08)
	struct UImage* Quest_Main_Image_5; // 0x438(0x08)
	struct UImage* Quest_Main_Image_6; // 0x440(0x08)
	struct UOverlay* Quest_Main_Image_1_set; // 0x448(0x08)
	struct UOverlay* Quest_Main_Image_2_set; // 0x450(0x08)
	struct UOverlay* Quest_Main_Image_3_set; // 0x458(0x08)
	struct UOverlay* Quest_Main_Image_4_set; // 0x460(0x08)
	struct UOverlay* Quest_Main_Image_5_set; // 0x468(0x08)
	struct UREDScrollBoxSimple* ScrollBox_1; // 0x470(0x08)
	struct UREDTextBlock* Text_quest_main_synopsis_2; // 0x478(0x08)
	struct UREDTextBlock* Text_quest_main_synopsis_3; // 0x480(0x08)
	struct UREDTextBlock* Text_quest_main_synopsis_4; // 0x488(0x08)
	struct UREDTextBlock* Text_quest_main_synopsis_5; // 0x490(0x08)
	struct UREDTextBlock* Text_quest_main_synopsis_6; // 0x498(0x08)
	struct UREDTextBlock* Text_quest_main_synopsis_7; // 0x4a0(0x08)
	struct UREDTextBlock* Text_quest_main_title_2; // 0x4a8(0x08)
	struct UOverlay* TextSet_briefing_2; // 0x4b0(0x08)
	struct UOverlay* TextSet_briefing_3; // 0x4b8(0x08)
	struct UOverlay* TextSet_briefing_4; // 0x4c0(0x08)
	struct UOverlay* TextSet_briefing_5; // 0x4c8(0x08)
	struct UOverlay* TextSet_briefing_6; // 0x4d0(0x08)
	struct UOverlay* TextSet_briefing_7; // 0x4d8(0x08)
	struct UWB_ui_Quest_Parts_2_C* WB_ui_Quest_icon_2; // 0x4e0(0x08)
	struct UWB_ui_Quest_Parts_3_C* WB_ui_Quest_Parts_4; // 0x4e8(0x08)

	void Construct(); // Function WB_ui_Quest_Main_Parts_2.WB_ui_Quest_Main_Parts_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Quest_Main_Parts_2.WB_ui_Quest_Main_Parts_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void SetProgressIcon(int32_t progressIndex); // Function WB_ui_Quest_Main_Parts_2.WB_ui_Quest_Main_Parts_1_C.SetProgressIcon // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void PreConstruct(bool IsDesignTime); // Function WB_ui_Quest_Main_Parts_2.WB_ui_Quest_Main_Parts_1_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Quest_Main_Parts_2.WB_ui_Quest_Main_Parts_1_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Quest_Main_Parts_2(int32_t EntryPoint); // Function WB_ui_Quest_Main_Parts_2.WB_ui_Quest_Main_Parts_1_C.ExecuteUbergraph_WB_ui_Quest_Main_Parts_2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

