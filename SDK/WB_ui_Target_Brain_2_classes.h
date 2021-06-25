// WidgetBlueprintGeneratedClass WB_ui_Target_Brain_2.WB_ui_Target_Brain_1_C
// Size: 0x488 (Inherited: 0x410)
struct UWB_ui_Target_Brain_1_C : UUITargetBrain {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x410(0x08)
	struct UWidgetAnimation* change_2_2; // 0x418(0x08)
	struct UWidgetAnimation* change_1_3; // 0x420(0x08)
	struct UWidgetAnimation* Out_3; // 0x428(0x08)
	struct UWidgetAnimation* In_3; // 0x430(0x08)
	struct UWidgetAnimation* Default_3; // 0x438(0x08)
	struct UWidgetAnimation* decision; // 0x440(0x08)
	struct UWidgetAnimation* Out_2; // 0x448(0x08)
	struct UWidgetAnimation* In_2; // 0x450(0x08)
	struct UWidgetAnimation* default_none; // 0x458(0x08)
	struct UWidgetAnimation* Default_2; // 0x460(0x08)
	struct UBorder* Button_Set; // 0x468(0x08)
	struct UImage* Target_Brain_button; // 0x470(0x08)
	struct UImage* Target_Brain_Dummy; // 0x478(0x08)
	struct UImage* Target_Brain_icon_font; // 0x480(0x08)

	bool UpdateButton(); // Function WB_ui_Target_Brain_2.WB_ui_Target_Brain_1_C.UpdateButton // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Target_Brain_2.WB_ui_Target_Brain_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Target_Brain_2.WB_ui_Target_Brain_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Target_Brain_2.WB_ui_Target_Brain_1_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Target_Brain_2(int32_t EntryPoint); // Function WB_ui_Target_Brain_2.WB_ui_Target_Brain_1_C.ExecuteUbergraph_WB_ui_Target_Brain_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

