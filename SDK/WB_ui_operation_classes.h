// WidgetBlueprintGeneratedClass WB_ui_operation.WB_ui_Operation_C
// Size: 0x5b8 (Inherited: 0x4d0)
struct UWB_ui_Operation_C : UUITutoOperation {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4d0(0x08)
	struct UWidgetAnimation* Out; // 0x4d8(0x08)
	struct UWidgetAnimation* In; // 0x4e0(0x08)
	struct UWidgetAnimation* default_none; // 0x4e8(0x08)
	struct UWidgetAnimation* Default; // 0x4f0(0x08)
	struct UImage* Base_2; // 0x4f8(0x08)
	struct UImage* Base_3; // 0x500(0x08)
	struct UImage* Base_4; // 0x508(0x08)
	struct UImage* Base_5; // 0x510(0x08)
	struct UImage* Base_6; // 0x518(0x08)
	struct UImage* CA_Image_Blue; // 0x520(0x08)
	struct UImage* CA_Image_Green; // 0x528(0x08)
	struct UImage* CA_Image_Red; // 0x530(0x08)
	struct UREDRetainerBox* CA_RetainerBox; // 0x538(0x08)
	struct UImage* Noise_2; // 0x540(0x08)
	struct UImage* Noise_3; // 0x548(0x08)
	struct UImage* Noise_4; // 0x550(0x08)
	struct UImage* Noise_5; // 0x558(0x08)
	struct UImage* Noise_6; // 0x560(0x08)
	struct UOverlay* Set_2; // 0x568(0x08)
	struct UOverlay* Set_3; // 0x570(0x08)
	struct UOverlay* Set_4; // 0x578(0x08)
	struct UOverlay* Set_5; // 0x580(0x08)
	struct UOverlay* Set_6; // 0x588(0x08)
	struct UWB_ui_Operation_List_Parts_1_C* WB_ui_Operation_List_Parts_1_2; // 0x590(0x08)
	struct UWB_ui_Operation_List_Parts_1_C* WB_ui_Operation_List_Parts_1_3; // 0x598(0x08)
	struct UWB_ui_Operation_List_Parts_1_C* WB_ui_Operation_List_Parts_1_4; // 0x5a0(0x08)
	struct UWB_ui_Operation_List_Parts_1_C* WB_ui_Operation_List_Parts_1_5; // 0x5a8(0x08)
	struct UWB_ui_Operation_List_Parts_1_C* WB_ui_Operation_List_Parts_1_6; // 0x5b0(0x08)

	void Construct(); // Function WB_ui_operation.WB_ui_Operation_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_operation.WB_ui_Operation_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Operation(int32_t EntryPoint); // Function WB_ui_operation.WB_ui_Operation_C.ExecuteUbergraph_WB_ui_Operation // (Final|UbergraphFunction) // @ game+0x1685580
};

