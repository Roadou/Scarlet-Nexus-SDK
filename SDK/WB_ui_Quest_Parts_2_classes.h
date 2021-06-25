// WidgetBlueprintGeneratedClass WB_ui_Quest_Parts_2.WB_ui_Quest_Parts_1_C
// Size: 0x580 (Inherited: 0x4e0)
struct UWB_ui_Quest_Parts_1_C : UUIQuestListIndex {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* select_lock_in; // 0x4e8(0x08)
	struct UWidgetAnimation* select_lock; // 0x4f0(0x08)
	struct UWidgetAnimation* default_lock; // 0x4f8(0x08)
	struct UWidgetAnimation* select_in; // 0x500(0x08)
	struct UWidgetAnimation* select; // 0x508(0x08)
	struct UWidgetAnimation* Default; // 0x510(0x08)
	struct UImage* Base_2; // 0x518(0x08)
	struct UImage* black_pattern_2; // 0x520(0x08)
	struct UImage* black_pattern_3; // 0x528(0x08)
	struct UImage* Face_a_2; // 0x530(0x08)
	struct UImage* Face_a_3; // 0x538(0x08)
	struct UImage* Frame_2; // 0x540(0x08)
	struct UImage* icon_new; // 0x548(0x08)
	struct UImage* icon_quest; // 0x550(0x08)
	struct UImage* Image_2; // 0x558(0x08)
	struct UImage* Image_3; // 0x560(0x08)
	struct UOverlay* kasane; // 0x568(0x08)
	struct UREDTextBlock* Text_quest_list_2; // 0x570(0x08)
	struct UOverlay* yuito; // 0x578(0x08)

	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Quest_Parts_2.WB_ui_Quest_Parts_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void SetInfo(enum class EQuestDataType QuestType, struct FName ID, int32_t Progress, int32_t Index, bool IsActive); // Function WB_ui_Quest_Parts_2.WB_ui_Quest_Parts_1_C.SetInfo // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Quest_Parts_2.WB_ui_Quest_Parts_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Quest_Parts_2(int32_t EntryPoint); // Function WB_ui_Quest_Parts_2.WB_ui_Quest_Parts_1_C.ExecuteUbergraph_WB_ui_Quest_Parts_2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

