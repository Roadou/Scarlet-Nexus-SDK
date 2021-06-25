// WidgetBlueprintGeneratedClass WB_ui_Sas_frame_02.WB_ui_Sas_frame_02_C
// Size: 0x468 (Inherited: 0x3d0)
struct UWB_ui_Sas_frame_02_C : UUISASFrame2 {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct UWidgetAnimation* out_full_3; // 0x3d8(0x08)
	struct UWidgetAnimation* in_full_3; // 0x3e0(0x08)
	struct UWidgetAnimation* full_3; // 0x3e8(0x08)
	struct UWidgetAnimation* full_in_3; // 0x3f0(0x08)
	struct UWidgetAnimation* out_full; // 0x3f8(0x08)
	struct UWidgetAnimation* in_full; // 0x400(0x08)
	struct UWidgetAnimation* full_out; // 0x408(0x08)
	struct UWidgetAnimation* full; // 0x410(0x08)
	struct UWidgetAnimation* full_in; // 0x418(0x08)
	struct UWidgetAnimation* Default; // 0x420(0x08)
	struct UImage* sas_frame_1; // 0x428(0x08)
	struct UImage* sas_frame_2; // 0x430(0x08)
	struct FLinearColor DefaultColor; // 0x438(0x10)
	struct FLinearColor LockColorSas; // 0x448(0x10)
	struct FLinearColor LockColorCv; // 0x458(0x10)

	void OnInitialized(); // Function WB_ui_Sas_frame_02.WB_ui_Sas_frame_02_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Sas_frame_02.WB_ui_Sas_frame_02_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Sas_frame_02(int32_t EntryPoint); // Function WB_ui_Sas_frame_02.WB_ui_Sas_frame_02_C.ExecuteUbergraph_WB_ui_Sas_frame_02 // (Final|UbergraphFunction) // @ game+0x1685580
};

