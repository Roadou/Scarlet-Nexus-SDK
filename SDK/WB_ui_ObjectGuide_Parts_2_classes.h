// WidgetBlueprintGeneratedClass WB_ui_ObjectGuide_Parts_2.WB_ui_ObjectGuide_Parts_1_C
// Size: 0x3d0 (Inherited: 0x388)
struct UWB_ui_ObjectGuide_Parts_1_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* Out; // 0x390(0x08)
	struct UWidgetAnimation* In; // 0x398(0x08)
	struct UWidgetAnimation* Default; // 0x3a0(0x08)
	struct UBorder* All_Color; // 0x3a8(0x08)
	struct UImage* Base; // 0x3b0(0x08)
	struct UREDImageBase* icon_font_2; // 0x3b8(0x08)
	struct USpacer* Spacer_66; // 0x3c0(0x08)
	struct UREDTextBlock* Text_ObjGuide_IconInfo_2; // 0x3c8(0x08)

	void IsPlayingCloseAnimation(bool IsPlaying); // Function WB_ui_ObjectGuide_Parts_2.WB_ui_ObjectGuide_Parts_1_C.IsPlayingCloseAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsPlayingOpenAnimation(bool IsPlaying); // Function WB_ui_ObjectGuide_Parts_2.WB_ui_ObjectGuide_Parts_1_C.IsPlayingOpenAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void setMessage(struct FString Message); // Function WB_ui_ObjectGuide_Parts_2.WB_ui_ObjectGuide_Parts_1_C.setMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_ObjectGuide_Parts_2.WB_ui_ObjectGuide_Parts_1_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_ObjectGuide_Parts_2.WB_ui_ObjectGuide_Parts_1_C.StateNone // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_ObjectGuide_Parts_2.WB_ui_ObjectGuide_Parts_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_ObjectGuide_Parts_2.WB_ui_ObjectGuide_Parts_1_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_ObjectGuide_Parts_2.WB_ui_ObjectGuide_Parts_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_ObjectGuide_Parts_2(int32_t EntryPoint); // Function WB_ui_ObjectGuide_Parts_2.WB_ui_ObjectGuide_Parts_1_C.ExecuteUbergraph_WB_ui_ObjectGuide_Parts_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

