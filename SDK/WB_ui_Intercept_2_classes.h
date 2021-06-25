// WidgetBlueprintGeneratedClass WB_ui_Intercept_2.WB_ui_Intercept_1_C
// Size: 0x450 (Inherited: 0x388)
struct UWB_ui_Intercept_1_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* default_none; // 0x390(0x08)
	struct UWidgetAnimation* Default; // 0x398(0x08)
	struct UImage* Button_base_2; // 0x3a0(0x08)
	struct UImage* CA_Image_Blue; // 0x3a8(0x08)
	struct UImage* CA_Image_Green; // 0x3b0(0x08)
	struct UImage* CA_Image_Red; // 0x3b8(0x08)
	struct UREDRetainerBox* CA_RetainerBox; // 0x3c0(0x08)
	struct UImage* dot_2; // 0x3c8(0x08)
	struct UImage* eff; // 0x3d0(0x08)
	struct UOverlay* Frame; // 0x3d8(0x08)
	struct UImage* Frame_; // 0x3e0(0x08)
	struct UImage* Frame_Base; // 0x3e8(0x08)
	struct UImage* Frame_Grow_2; // 0x3f0(0x08)
	struct UImage* intercept_icon_font; // 0x3f8(0x08)
	struct UImage* Line_2; // 0x400(0x08)
	struct UImage* Line_3; // 0x408(0x08)
	struct UImage* Name_grow_2; // 0x410(0x08)
	struct UImage* Noise; // 0x418(0x08)
	struct UImage* size_add; // 0x420(0x08)
	struct USizeBox* SizeBox_add; // 0x428(0x08)
	struct UImage* Symbol_Battle_intercept; // 0x430(0x08)
	struct UREDTextBlock* Text_Battle_Intercept_2; // 0x438(0x08)
	int32_t ButtonIndex; // 0x440(0x04)
	enum class EPsychicObjectUniqueInputButton Button; // 0x444(0x01)
	char pad_445[0x3]; // 0x445(0x03)
	struct FVector2D baseOffset; // 0x448(0x08)

	void UpdateButton(); // Function WB_ui_Intercept_2.WB_ui_Intercept_1_C.UpdateButton // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetButton(enum class EPsychicObjectUniqueInputButton Button); // Function WB_ui_Intercept_2.WB_ui_Intercept_1_C.SetButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_Intercept_2.WB_ui_Intercept_1_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_Intercept_2.WB_ui_Intercept_1_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Intercept_2.WB_ui_Intercept_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Intercept_2.WB_ui_Intercept_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Intercept_2.WB_ui_Intercept_1_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Intercept_2(int32_t EntryPoint); // Function WB_ui_Intercept_2.WB_ui_Intercept_1_C.ExecuteUbergraph_WB_ui_Intercept_2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

