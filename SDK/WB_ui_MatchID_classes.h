// WidgetBlueprintGeneratedClass WB_ui_MatchID.WB_ui_MatchID_C
// Size: 0x440 (Inherited: 0x400)
struct UWB_ui_MatchID_C : UUIMatchID {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UWidgetAnimation* Out; // 0x408(0x08)
	struct UWidgetAnimation* In; // 0x410(0x08)
	struct UWidgetAnimation* Default; // 0x418(0x08)
	struct UBorder* MatchID_Set; // 0x420(0x08)
	struct UBorder* MatchName_Set; // 0x428(0x08)
	struct UREDTextBlock* Text_MatchID_ID_2; // 0x430(0x08)
	struct UREDTextBlock* Text_MatchID_Name_2; // 0x438(0x08)

	void Construct(); // Function WB_ui_MatchID.WB_ui_MatchID_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_MatchID.WB_ui_MatchID_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_MatchID(int32_t EntryPoint); // Function WB_ui_MatchID.WB_ui_MatchID_C.ExecuteUbergraph_WB_ui_MatchID // (Final|UbergraphFunction) // @ game+0x1685580
};

