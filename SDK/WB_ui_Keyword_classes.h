// WidgetBlueprintGeneratedClass WB_ui_Keyword.WB_ui_Keyword_C
// Size: 0x458 (Inherited: 0x418)
struct UWB_ui_Keyword_C : UUIKeyword {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x418(0x08)
	struct UWidgetAnimation* Out; // 0x420(0x08)
	struct UWidgetAnimation* Default; // 0x428(0x08)
	struct UWidgetAnimation* In; // 0x430(0x08)
	struct UREDTextBlock* Delete_Text_Keyword_3; // 0x438(0x08)
	struct UEditableText* EditableText_518; // 0x440(0x08)
	struct UREDTextBlock* Text_Keyword_2; // 0x448(0x08)
	struct UREDTextBlock* Text_Keyword_4; // 0x450(0x08)

	bool isWindows(); // Function WB_ui_Keyword.WB_ui_Keyword_C.isWindows // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Keyword.WB_ui_Keyword_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Keyword.WB_ui_Keyword_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void Event_OnTextChanged(struct FText text); // Function WB_ui_Keyword.WB_ui_Keyword_C.Event_OnTextChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_OnTextCommitted(struct FText text, enum class ETextCommit CommitMethod); // Function WB_ui_Keyword.WB_ui_Keyword_C.Event_OnTextCommitted // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Keyword(int32_t EntryPoint); // Function WB_ui_Keyword.WB_ui_Keyword_C.ExecuteUbergraph_WB_ui_Keyword // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

