// WidgetBlueprintGeneratedClass WB_ui_Start_Logo_2.WB_ui_Start_Logo_1_C
// Size: 0x420 (Inherited: 0x3e0)
struct UWB_ui_Start_Logo_1_C : UUIScarletLogo {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* out_title; // 0x3e8(0x08)
	struct UWidgetAnimation* default_title; // 0x3f0(0x08)
	struct UWidgetAnimation* in_title; // 0x3f8(0x08)
	struct UWidgetAnimation* Out; // 0x400(0x08)
	struct UWidgetAnimation* Default; // 0x408(0x08)
	struct UWidgetAnimation* In; // 0x410(0x08)
	struct UImage* Logo_2; // 0x418(0x08)

	void Construct(); // Function WB_ui_Start_Logo_2.WB_ui_Start_Logo_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Start_Logo_2.WB_ui_Start_Logo_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Start_Logo_2(int32_t EntryPoint); // Function WB_ui_Start_Logo_2.WB_ui_Start_Logo_1_C.ExecuteUbergraph_WB_ui_Start_Logo_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

