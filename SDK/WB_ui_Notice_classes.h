// WidgetBlueprintGeneratedClass WB_ui_Notice.WB_ui_Notice_C
// Size: 0x488 (Inherited: 0x428)
struct UWB_ui_Notice_C : UUINoticeMessage {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x428(0x08)
	struct UWidgetAnimation* Out; // 0x430(0x08)
	struct UWidgetAnimation* In; // 0x438(0x08)
	struct UWidgetAnimation* default_none; // 0x440(0x08)
	struct UWidgetAnimation* Default; // 0x448(0x08)
	struct UOverlay* Bm_Set; // 0x450(0x08)
	struct UImage* icon_bn; // 0x458(0x08)
	struct UREDImageBase* icon_kizuna; // 0x460(0x08)
	struct UImage* Icon_Notice_2; // 0x468(0x08)
	struct UREDTextBlock* Text_notice_2; // 0x470(0x08)
	struct UREDTextBlock* Text_notice_3; // 0x478(0x08)
	struct UTextBlock* Text_notice_4; // 0x480(0x08)

	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Notice.WB_ui_Notice_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void BrainMessage(enum class EUINoticeMessageCallType senderType, struct FName datatableId); // Function WB_ui_Notice.WB_ui_Notice_C.BrainMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Notice.WB_ui_Notice_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void SubQuest(enum class EUINoticeMessageCallType senderType, struct FName datatableId); // Function WB_ui_Notice.WB_ui_Notice_C.SubQuest // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void kasutamu(enum class EUINoticeMessageCallType senderType, struct FName datatableId); // Function WB_ui_Notice.WB_ui_Notice_C.kasutamu // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetNoticeIcon(int32_t Type); // Function WB_ui_Notice.WB_ui_Notice_C.SetNoticeIcon // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void WishListRemove(enum class EUINoticeMessageCallType senderType, struct FName datatableId); // Function WB_ui_Notice.WB_ui_Notice_C.WishListRemove // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Notice(int32_t EntryPoint); // Function WB_ui_Notice.WB_ui_Notice_C.ExecuteUbergraph_WB_ui_Notice // (Final|UbergraphFunction) // @ game+0x1685580
};

