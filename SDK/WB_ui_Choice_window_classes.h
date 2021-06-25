// WidgetBlueprintGeneratedClass WB_ui_Choice_window.WB_ui_Choice_window_C
// Size: 0x5e0 (Inherited: 0x528)
struct UWB_ui_Choice_window_C : UUIGeneralChoice {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	struct UWidgetAnimation* Out; // 0x530(0x08)
	struct UWidgetAnimation* In; // 0x538(0x08)
	struct UWidgetAnimation* Default; // 0x540(0x08)
	struct UBorder* All_Color; // 0x548(0x08)
	struct UImage* CA_Image_Blue; // 0x550(0x08)
	struct UImage* CA_Image_Green; // 0x558(0x08)
	struct UImage* CA_Image_Red; // 0x560(0x08)
	struct UREDRetainerBox* CA_RetainerBox; // 0x568(0x08)
	struct UVerticalBox* Choise_list; // 0x570(0x08)
	struct UImage* Frame_Base; // 0x578(0x08)
	struct UImage* Frame_Grow; // 0x580(0x08)
	struct UImage* Frame_pattern; // 0x588(0x08)
	struct UImage* Ghost_size; // 0x590(0x08)
	struct UREDImageBase* icon_font; // 0x598(0x08)
	struct UImage* Line; // 0x5a0(0x08)
	struct UImage* Noise; // 0x5a8(0x08)
	struct UImage* PG_Cover_Black; // 0x5b0(0x08)
	struct UREDTextBlock* Text_choice_text_2; // 0x5b8(0x08)
	struct UWB_ui_Choise_parts_1_C* WB_ui_Choise_parts_1_2; // 0x5c0(0x08)
	struct UWB_ui_Choise_parts_1_C* WB_ui_Choise_parts_1_3; // 0x5c8(0x08)
	struct UWB_ui_Choise_parts_1_C* WB_ui_Choise_parts_1_4; // 0x5d0(0x08)
	struct UWB_ui_Choise_parts_1_C* WB_ui_Choise_parts_1_5; // 0x5d8(0x08)

	void Construct(); // Function WB_ui_Choice_window.WB_ui_Choice_window_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Choice_window.WB_ui_Choice_window_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Choice_window.WB_ui_Choice_window_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Choice_window(int32_t EntryPoint); // Function WB_ui_Choice_window.WB_ui_Choice_window_C.ExecuteUbergraph_WB_ui_Choice_window // (Final|UbergraphFunction) // @ game+0x1685580
};

