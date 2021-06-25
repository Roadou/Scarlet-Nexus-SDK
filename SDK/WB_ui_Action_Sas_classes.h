// WidgetBlueprintGeneratedClass WB_ui_Action_Sas.WB_ui_Action_Sas_C
// Size: 0x432 (Inherited: 0x3d8)
struct UWB_ui_Action_Sas_C : UUISASActionIcon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UWidgetAnimation* Out_3; // 0x3e0(0x08)
	struct UWidgetAnimation* In_3; // 0x3e8(0x08)
	struct UWidgetAnimation* select; // 0x3f0(0x08)
	struct UWidgetAnimation* default_none; // 0x3f8(0x08)
	struct UImage* Frame_2; // 0x400(0x08)
	struct UImage* Frame_3; // 0x408(0x08)
	struct UImage* Frame_4; // 0x410(0x08)
	struct UImage* frame_6_add; // 0x418(0x08)
	struct UImage* Icon_2; // 0x420(0x08)
	struct UImage* Noise; // 0x428(0x08)
	enum class ESASActionIconType IconColor; // 0x430(0x01)
	enum class ESASActionIconType icontype; // 0x431(0x01)

	void SetIconMaterial(enum class ESASActionIconType icontype, bool isUsable); // Function WB_ui_Action_Sas.WB_ui_Action_Sas_C.SetIconMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Action_Sas.WB_ui_Action_Sas_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Action_Sas.WB_ui_Action_Sas_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void setIconType(enum class ESASActionIconType icontype, bool isUsable); // Function WB_ui_Action_Sas.WB_ui_Action_Sas_C.setIconType // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void setUsable(bool isUsable); // Function WB_ui_Action_Sas.WB_ui_Action_Sas_C.setUsable // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Action_Sas(int32_t EntryPoint); // Function WB_ui_Action_Sas.WB_ui_Action_Sas_C.ExecuteUbergraph_WB_ui_Action_Sas // (Final|UbergraphFunction) // @ game+0x1685580
};

