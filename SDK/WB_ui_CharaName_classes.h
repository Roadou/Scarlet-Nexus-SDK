// WidgetBlueprintGeneratedClass WB_ui_CharaName.WB_ui_CharaName_C
// Size: 0x428 (Inherited: 0x3c8)
struct UWB_ui_CharaName_C : UUICharaName {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UWidgetAnimation* Out; // 0x3d0(0x08)
	struct UWidgetAnimation* In; // 0x3d8(0x08)
	struct UWidgetAnimation* Default; // 0x3e0(0x08)
	struct UImage* CA_Image_Blue_3; // 0x3e8(0x08)
	struct UImage* CA_Image_Green_3; // 0x3f0(0x08)
	struct UImage* CA_Image_Red_3; // 0x3f8(0x08)
	struct UREDRetainerBox* CA_RetainerBox; // 0x400(0x08)
	struct UImage* Ghost; // 0x408(0x08)
	struct UREDRetainerBox* mask_RetainerBox; // 0x410(0x08)
	struct UREDTextBlock* Text_CharaName_01; // 0x418(0x08)
	struct UREDTextBlock* Text_CharaName_02; // 0x420(0x08)

	void UpdateCharaNameMaterial(); // Function WB_ui_CharaName.WB_ui_CharaName_C.UpdateCharaNameMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_CharaName.WB_ui_CharaName_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_CharaName.WB_ui_CharaName_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void InitUICharaName(); // Function WB_ui_CharaName.WB_ui_CharaName_C.InitUICharaName // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_CharaName(int32_t EntryPoint); // Function WB_ui_CharaName.WB_ui_CharaName_C.ExecuteUbergraph_WB_ui_CharaName // (Final|UbergraphFunction) // @ game+0x1685580
};

