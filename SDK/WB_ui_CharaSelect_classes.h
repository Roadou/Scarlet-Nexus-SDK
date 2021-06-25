// WidgetBlueprintGeneratedClass WB_ui_CharaSelect.WB_ui_CharaSelect_C
// Size: 0x5a0 (Inherited: 0x488)
struct UWB_ui_CharaSelect_C : UUICharaSelectMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x488(0x08)
	struct UWidgetAnimation* out_kasane; // 0x490(0x08)
	struct UWidgetAnimation* out_yuito; // 0x498(0x08)
	struct UWidgetAnimation* Out; // 0x4a0(0x08)
	struct UWidgetAnimation* Default; // 0x4a8(0x08)
	struct UWidgetAnimation* In; // 0x4b0(0x08)
	struct UWidgetAnimation* default_none; // 0x4b8(0x08)
	struct UWidgetAnimation* decision_kasane; // 0x4c0(0x08)
	struct UWidgetAnimation* default_kasane; // 0x4c8(0x08)
	struct UWidgetAnimation* in_kasane; // 0x4d0(0x08)
	struct UWidgetAnimation* decision_yuito; // 0x4d8(0x08)
	struct UWidgetAnimation* default_yuito; // 0x4e0(0x08)
	struct UWidgetAnimation* in_yuito; // 0x4e8(0x08)
	struct UImage* clear_base; // 0x4f0(0x08)
	struct UImage* clear_glow; // 0x4f8(0x08)
	struct UBorder* Clear_Set; // 0x500(0x08)
	struct UImage* help_glow; // 0x508(0x08)
	struct UOverlay* Overlay_2; // 0x510(0x08)
	struct UREDImage* Pc_Pg_chara_kasane1; // 0x518(0x08)
	struct UREDImage* Pc_Pg_chara_kasane2; // 0x520(0x08)
	struct UREDImage* Pc_Pg_chara_yuito1; // 0x528(0x08)
	struct UREDImage* Pc_Pg_chara_yuito2; // 0x530(0x08)
	struct UREDRetainerBox* REDRetainerBox_Menu; // 0x538(0x08)
	struct UImage* Size; // 0x540(0x08)
	struct UREDTextBlock* Text_CharaSelect_2; // 0x548(0x08)
	struct UREDTextBlock* Text_CharaSelect_3; // 0x550(0x08)
	struct UREDTextBlock* Text_CharaSelect_clear; // 0x558(0x08)
	struct UREDTextBlock* Text_CharaSelect_help; // 0x560(0x08)
	struct UWB_ui_CharaSelect_Parts_1_C* WB_ui_CharaSelect_Parts_2; // 0x568(0x08)
	struct UWB_ui_CharaSelect_Parts_1_C* WB_ui_CharaSelect_Parts_16; // 0x570(0x08)
	struct UWB_ui_Guide_C* WB_ui_Guide; // 0x578(0x08)
	struct UImage* Window_2; // 0x580(0x08)
	struct UImage* window_glow; // 0x588(0x08)
	struct FLinearColor DefaultCursor; // 0x590(0x10)

	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_CharaSelect.WB_ui_CharaSelect_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void SetCharacterOutLine(int32_t cursorIndex); // Function WB_ui_CharaSelect.WB_ui_CharaSelect_C.SetCharacterOutLine // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_CharaSelect.WB_ui_CharaSelect_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_CharaSelect(int32_t EntryPoint); // Function WB_ui_CharaSelect.WB_ui_CharaSelect_C.ExecuteUbergraph_WB_ui_CharaSelect // (Final|UbergraphFunction) // @ game+0x1685580
};

