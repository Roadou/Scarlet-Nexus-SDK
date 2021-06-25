// WidgetBlueprintGeneratedClass WB_ui_Quest_PopUp_2.WB_ui_Quest_PopUp_1_C
// Size: 0x5e8 (Inherited: 0x4d0)
struct UWB_ui_Quest_PopUp_1_C : UUIQuestChoice {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4d0(0x08)
	struct UVerticalBox* Choice_Set; // 0x4d8(0x08)
	struct UHorizontalBox* Guide_Set; // 0x4e0(0x08)
	struct UImage* icon_category_5; // 0x4e8(0x08)
	struct UImage* icon_category_6; // 0x4f0(0x08)
	struct UImage* icon_category_7; // 0x4f8(0x08)
	struct UREDImageBase* icon_font_2; // 0x500(0x08)
	struct UREDImageBase* icon_font_reward1; // 0x508(0x08)
	struct UREDImageBase* icon_font_reward1_2; // 0x510(0x08)
	struct UREDImageBase* icon_font_reward2; // 0x518(0x08)
	struct UREDImageBase* icon_font_reward3; // 0x520(0x08)
	struct UImage* icon_Frame_5; // 0x528(0x08)
	struct UImage* icon_Frame_6; // 0x530(0x08)
	struct UImage* icon_Frame_7; // 0x538(0x08)
	struct UImage* item_icon_frame_5; // 0x540(0x08)
	struct UImage* item_icon_frame_7; // 0x548(0x08)
	struct UImage* item_icon_frame5; // 0x550(0x08)
	struct USpacer* PG_Spacer; // 0x558(0x08)
	struct UOverlay* reward; // 0x560(0x08)
	struct UOverlay* text_4; // 0x568(0x08)
	struct UOverlay* Text_2_ItemName; // 0x570(0x08)
	struct UImage* Text_Base_5; // 0x578(0x08)
	struct UREDTextBlock* Text_quest_popup_2; // 0x580(0x08)
	struct UREDTextBlock* Text_quest_popup_3; // 0x588(0x08)
	struct UREDTextBlock* Text_quest_popup_4; // 0x590(0x08)
	struct UREDTextBlock* Text_quest_popup_Guide_2; // 0x598(0x08)
	struct UREDTextBlock* Text_quest_sub_reward_2; // 0x5a0(0x08)
	struct UREDTextBlock* Text_quest_sub_reward_3; // 0x5a8(0x08)
	struct UREDTextBlock* Text_quest_sub_reward_4; // 0x5b0(0x08)
	struct UREDTextBlock* Text_quest_sub_reward_5; // 0x5b8(0x08)
	struct UOverlay* TextSet_reward_2; // 0x5c0(0x08)
	struct UOverlay* TextSet_reward_3; // 0x5c8(0x08)
	struct UOverlay* TextSet_reward_4; // 0x5d0(0x08)
	struct UWB_ui_Choise_parts_1_C* WB_ui_Choise_parts_1_2; // 0x5d8(0x08)
	struct UWB_ui_Choise_parts_1_C* WB_ui_Choise_parts_1_3; // 0x5e0(0x08)

	void Construct(); // Function WB_ui_Quest_PopUp_2.WB_ui_Quest_PopUp_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Quest_PopUp_2.WB_ui_Quest_PopUp_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void SetItemIcon(struct FName ItemId, struct UImage* imageCategory, struct UImage* imageItemIconFrame); // Function WB_ui_Quest_PopUp_2.WB_ui_Quest_PopUp_1_C.SetItemIcon // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Quest_PopUp_2(int32_t EntryPoint); // Function WB_ui_Quest_PopUp_2.WB_ui_Quest_PopUp_1_C.ExecuteUbergraph_WB_ui_Quest_PopUp_2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

