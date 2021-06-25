// WidgetBlueprintGeneratedClass WB_ui_Notice_Quest_reward.WB_ui_Notice_Quest_reward_C
// Size: 0x551 (Inherited: 0x478)
struct UWB_ui_Notice_Quest_reward_C : UUINoticeQuestReward {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x478(0x08)
	struct UWidgetAnimation* Out; // 0x480(0x08)
	struct UWidgetAnimation* In; // 0x488(0x08)
	struct UWidgetAnimation* default_none; // 0x490(0x08)
	struct UWidgetAnimation* Default; // 0x498(0x08)
	struct UVerticalBox* Choise_list; // 0x4a0(0x08)
	struct UImage* icon_category_2; // 0x4a8(0x08)
	struct UImage* icon_category_3; // 0x4b0(0x08)
	struct UImage* icon_category_4; // 0x4b8(0x08)
	struct UImage* item_icon_base_2; // 0x4c0(0x08)
	struct UImage* item_icon_base_3; // 0x4c8(0x08)
	struct UImage* item_icon_base_4; // 0x4d0(0x08)
	struct UImage* item_icon_frame_2; // 0x4d8(0x08)
	struct UImage* item_icon_frame_3; // 0x4e0(0x08)
	struct UImage* item_icon_frame_4; // 0x4e8(0x08)
	struct UREDTextBlock* Text_notice_quest_reward_2; // 0x4f0(0x08)
	struct UREDTextBlock* Text_notice_quest_reward_3; // 0x4f8(0x08)
	struct UREDTextBlock* Text_notice_quest_reward_4; // 0x500(0x08)
	struct UREDTextBlock* Text_notice_quest_reward_mes; // 0x508(0x08)
	struct UREDTextBlock* Text_notice_quest_reward_title; // 0x510(0x08)
	struct UOverlay* TextSet_reward_2; // 0x518(0x08)
	struct UOverlay* TextSet_reward_3; // 0x520(0x08)
	struct UOverlay* TextSet_reward_4; // 0x528(0x08)
	struct UImage* Title_base; // 0x530(0x08)
	struct UWB_ui_Choise_parts_1_C* WB_ui_Choise_parts_1_2; // 0x538(0x08)
	struct UWB_ui_Choise_parts_1_C* WB_ui_Choise_parts_1_3; // 0x540(0x08)
	struct FName questId; // 0x548(0x08)
	enum class ERSGamepadLayoutType OldLayout; // 0x550(0x01)

	void StateClose(int32_t SubState); // Function WB_ui_Notice_Quest_reward.WB_ui_Notice_Quest_reward_C.StateClose // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_Notice_Quest_reward.WB_ui_Notice_Quest_reward_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateOpen(int32_t SubState); // Function WB_ui_Notice_Quest_reward.WB_ui_Notice_Quest_reward_C.StateOpen // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OpenStartReward(struct FName questId); // Function WB_ui_Notice_Quest_reward.WB_ui_Notice_Quest_reward_C.OpenStartReward // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_Notice_Quest_reward.WB_ui_Notice_Quest_reward_C.StateNone // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Notice_Quest_reward.WB_ui_Notice_Quest_reward_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Notice_Quest_reward.WB_ui_Notice_Quest_reward_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void SetItemRarity(struct UImage* imageRarity, enum class EItemRarity rarity); // Function WB_ui_Notice_Quest_reward.WB_ui_Notice_Quest_reward_C.SetItemRarity // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void SetItemCategoryIcon(struct UImage* imageCategory, enum class EItemIcon Category); // Function WB_ui_Notice_Quest_reward.WB_ui_Notice_Quest_reward_C.SetItemCategoryIcon // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void WidgetAnimationEvt_in_K2Node_WidgetAnimationEvent_1(); // Function WB_ui_Notice_Quest_reward.WB_ui_Notice_Quest_reward_C.WidgetAnimationEvt_in_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x1685580
	void WidgetAnimationEvt_out_K2Node_WidgetAnimationEvent_2(); // Function WB_ui_Notice_Quest_reward.WB_ui_Notice_Quest_reward_C.WidgetAnimationEvt_out_K2Node_WidgetAnimationEvent_2 // (BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Notice_Quest_reward(int32_t EntryPoint); // Function WB_ui_Notice_Quest_reward.WB_ui_Notice_Quest_reward_C.ExecuteUbergraph_WB_ui_Notice_Quest_reward // (Final|UbergraphFunction) // @ game+0x1685580
};

