// WidgetBlueprintGeneratedClass WB_ui_Quest_Parts_3.WB_ui_Quest_Parts_2_C
// Size: 0x420 (Inherited: 0x3c8)
struct UWB_ui_Quest_Parts_2_C : UUIQuestIcon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UWidgetAnimation* Default_7; // 0x3d0(0x08)
	struct UWidgetAnimation* Default_6; // 0x3d8(0x08)
	struct UWidgetAnimation* Default_5; // 0x3e0(0x08)
	struct UWidgetAnimation* Default_4; // 0x3e8(0x08)
	struct UWidgetAnimation* Default_3; // 0x3f0(0x08)
	struct UWidgetAnimation* default_none; // 0x3f8(0x08)
	struct UWidgetAnimation* Default; // 0x400(0x08)
	struct UImage* icon_quest_3; // 0x408(0x08)
	struct UREDImageBase* size_localize; // 0x410(0x08)
	struct UREDTextBlock* Text_quest_icon_2; // 0x418(0x08)

	void Construct(); // Function WB_ui_Quest_Parts_3.WB_ui_Quest_Parts_2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Quest_Parts_3.WB_ui_Quest_Parts_2_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void SetProgress(int32_t Progress); // Function WB_ui_Quest_Parts_3.WB_ui_Quest_Parts_2_C.SetProgress // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Quest_Parts_3(int32_t EntryPoint); // Function WB_ui_Quest_Parts_3.WB_ui_Quest_Parts_2_C.ExecuteUbergraph_WB_ui_Quest_Parts_3 // (Final|UbergraphFunction) // @ game+0x1685580
};

