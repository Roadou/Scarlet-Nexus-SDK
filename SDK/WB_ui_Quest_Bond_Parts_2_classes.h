// WidgetBlueprintGeneratedClass WB_ui_Quest_Bond_Parts_2.WB_ui_Quest_Bond_Parts_1_C
// Size: 0x448 (Inherited: 0x3d0)
struct UWB_ui_Quest_Bond_Parts_1_C : UUIQuestDetailsBonds {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct UWidgetAnimation* default_none; // 0x3d8(0x08)
	struct UWidgetAnimation* Default; // 0x3e0(0x08)
	struct UBorder* All_Color; // 0x3e8(0x08)
	struct UCanvasPanel* CanvasPanel_ViewRange; // 0x3f0(0x08)
	struct UOverlay* List_Set; // 0x3f8(0x08)
	struct UImage* Quest_Bond_Image_2; // 0x400(0x08)
	struct UImage* Quest_Bond_Image_1_noise; // 0x408(0x08)
	struct UOverlay* Quest_Bond_Image_1_set; // 0x410(0x08)
	struct UREDScrollBoxSimple* ScrollBox_0Bond; // 0x418(0x08)
	struct UREDTextBlock* Text_quest_bond_synopsis_2; // 0x420(0x08)
	struct UREDTextBlock* Text_quest_bond_title_2; // 0x428(0x08)
	struct UREDTextBlock* Text_quest_main_bond_3; // 0x430(0x08)
	struct UWB_ui_Quest_Parts_2_C* WB_ui_Quest_icon_2; // 0x438(0x08)
	struct UWB_ui_Quest_Parts_3_C* WB_ui_Quest_Parts_4; // 0x440(0x08)

	void Construct(); // Function WB_ui_Quest_Bond_Parts_2.WB_ui_Quest_Bond_Parts_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Quest_Bond_Parts_2.WB_ui_Quest_Bond_Parts_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Quest_Bond_Parts_2.WB_ui_Quest_Bond_Parts_1_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Quest_Bond_Parts_2(int32_t EntryPoint); // Function WB_ui_Quest_Bond_Parts_2.WB_ui_Quest_Bond_Parts_1_C.ExecuteUbergraph_WB_ui_Quest_Bond_Parts_2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

