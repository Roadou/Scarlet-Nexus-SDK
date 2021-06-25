// WidgetBlueprintGeneratedClass WB_ui_Loading_2.WB_ui_Loading_1_C
// Size: 0x448 (Inherited: 0x388)
struct UWB_ui_Loading_1_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* Out; // 0x390(0x08)
	struct UWidgetAnimation* In; // 0x398(0x08)
	struct UWidgetAnimation* default_none; // 0x3a0(0x08)
	struct UWidgetAnimation* Default; // 0x3a8(0x08)
	struct UImage* Ghost; // 0x3b0(0x08)
	struct UImage* Line_2; // 0x3b8(0x08)
	struct UImage* Line_3; // 0x3c0(0x08)
	struct UImage* Line_4; // 0x3c8(0x08)
	struct UImage* Mark_2; // 0x3d0(0x08)
	struct UImage* Mark_3; // 0x3d8(0x08)
	struct UImage* Mark_4; // 0x3e0(0x08)
	struct UImage* Mark_5; // 0x3e8(0x08)
	struct UImage* Mark_8; // 0x3f0(0x08)
	struct UImage* Mark_9; // 0x3f8(0x08)
	struct UImage* Mark_10; // 0x400(0x08)
	struct UImage* Mark_5_2; // 0x408(0x08)
	struct UImage* Mark_5_3; // 0x410(0x08)
	struct UImage* Mark_6_2; // 0x418(0x08)
	struct UImage* Mark_6_3; // 0x420(0x08)
	struct URetainerBox* RetainerBox_2; // 0x428(0x08)
	struct UImage* NewVar_1; // 0x430(0x08)
	struct TArray<struct UImage*> ImageList; // 0x438(0x10)

	void SetLoadingColor(struct FLinearColor Color); // Function WB_ui_Loading_2.WB_ui_Loading_1_C.SetLoadingColor // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLoadingBlack(); // Function WB_ui_Loading_2.WB_ui_Loading_1_C.SetLoadingBlack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLoadingWhite(); // Function WB_ui_Loading_2.WB_ui_Loading_1_C.SetLoadingWhite // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateLoadingMaterial(); // Function WB_ui_Loading_2.WB_ui_Loading_1_C.UpdateLoadingMaterial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateClose(int32_t SubState); // Function WB_ui_Loading_2.WB_ui_Loading_1_C.StateClose // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_Loading_2.WB_ui_Loading_1_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateOpen(int32_t SubState); // Function WB_ui_Loading_2.WB_ui_Loading_1_C.StateOpen // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_Loading_2.WB_ui_Loading_1_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Loading_2.WB_ui_Loading_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Loading_2.WB_ui_Loading_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Loading_2(int32_t EntryPoint); // Function WB_ui_Loading_2.WB_ui_Loading_1_C.ExecuteUbergraph_WB_ui_Loading_2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

