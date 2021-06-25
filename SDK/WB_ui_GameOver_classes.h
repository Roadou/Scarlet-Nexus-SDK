// WidgetBlueprintGeneratedClass WB_ui_GameOver.WB_ui_GameOver_C
// Size: 0x498 (Inherited: 0x458)
struct UWB_ui_GameOver_C : UUIGameOver {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x458(0x08)
	struct UWidgetAnimation* out_title; // 0x460(0x08)
	struct UWidgetAnimation* out_retry; // 0x468(0x08)
	struct UWidgetAnimation* In; // 0x470(0x08)
	struct UWidgetAnimation* Default; // 0x478(0x08)
	struct UREDRetainerBox* REDRetainerBox_Menu_base; // 0x480(0x08)
	struct UWB_ui_GameOver_Parts_1_C* WB_ui_GameOver_Parts_2; // 0x488(0x08)
	struct UWB_ui_Guide_C* WB_ui_Guide; // 0x490(0x08)

	struct FName getTargetBossID(); // Function WB_ui_GameOver.WB_ui_GameOver_C.getTargetBossID // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_GameOver.WB_ui_GameOver_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_GameOver.WB_ui_GameOver_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_GameOver(int32_t EntryPoint); // Function WB_ui_GameOver.WB_ui_GameOver_C.ExecuteUbergraph_WB_ui_GameOver // (Final|UbergraphFunction) // @ game+0x1685580
};

