// WidgetBlueprintGeneratedClass WB_ui_Loading_chapter.WB_ui_Loading_chapter_C
// Size: 0x5b8 (Inherited: 0x3e0)
struct UWB_ui_Loading_chapter_C : UUILoadingChapter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* Out; // 0x3e8(0x08)
	struct UWidgetAnimation* In; // 0x3f0(0x08)
	struct UWidgetAnimation* default_none; // 0x3f8(0x08)
	struct UWidgetAnimation* Default; // 0x400(0x08)
	struct UImage* all_noise_2; // 0x408(0x08)
	struct UImage* Base_all; // 0x410(0x08)
	struct UImage* Base_Gradation_B; // 0x418(0x08)
	struct UImage* Base_Gradation_light; // 0x420(0x08)
	struct UImage* Base_Gradation_R; // 0x428(0x08)
	struct UImage* Base_Line_2; // 0x430(0x08)
	struct UImage* Base_Line_3; // 0x438(0x08)
	struct UImage* Base_Line_4; // 0x440(0x08)
	struct UImage* Base_Line_1_particle; // 0x448(0x08)
	struct UImage* Base_Line_2_particle; // 0x450(0x08)
	struct UImage* Base_Line_3_particle; // 0x458(0x08)
	struct UImage* Base_particle_2; // 0x460(0x08)
	struct UImage* BG_Shadow; // 0x468(0x08)
	struct UImage* BlackBand_L; // 0x470(0x08)
	struct UImage* BlackBand_R; // 0x478(0x08)
	struct UImage* BlackBand_Un; // 0x480(0x08)
	struct UImage* BlackBand_Up; // 0x488(0x08)
	struct UImage* eff_2; // 0x490(0x08)
	struct UImage* eff_3; // 0x498(0x08)
	struct UImage* font_base_2; // 0x4a0(0x08)
	struct UImage* Ghost_2; // 0x4a8(0x08)
	struct UImage* Ghost_3; // 0x4b0(0x08)
	struct UInvalidationBox* InvalidationBox_3; // 0x4b8(0x08)
	struct UInvalidationBox* InvalidationBox_4; // 0x4c0(0x08)
	struct UInvalidationBox* InvalidationBox_6; // 0x4c8(0x08)
	struct UImage* line_chara_2; // 0x4d0(0x08)
	struct UImage* line_chara_3; // 0x4d8(0x08)
	struct UImage* line_chara_4; // 0x4e0(0x08)
	struct UImage* line_chara_5; // 0x4e8(0x08)
	struct UImage* line_chara_1_particle; // 0x4f0(0x08)
	struct UImage* line_chara_2_particle; // 0x4f8(0x08)
	struct UImage* line_chara_3_particle; // 0x500(0x08)
	struct UImage* line_chara_4_particle; // 0x508(0x08)
	struct UImage* location_image; // 0x510(0x08)
	struct UImage* Logo_Base; // 0x518(0x08)
	struct UImage* Logo_line_3; // 0x520(0x08)
	struct UImage* Logo_line_4; // 0x528(0x08)
	struct UImage* Logo_line_5; // 0x530(0x08)
	struct UImage* Logo_line_6; // 0x538(0x08)
	struct UImage* Logo_line_2_particle; // 0x540(0x08)
	struct UImage* Logo_line_3_particle; // 0x548(0x08)
	struct UImage* Logo_line_4_particle; // 0x550(0x08)
	struct UImage* Logo_line_5_particle; // 0x558(0x08)
	struct UImage* noise_line; // 0x560(0x08)
	struct UImage* noise_line_3; // 0x568(0x08)
	struct UImage* noise_TV; // 0x570(0x08)
	struct UImage* noise_TV_3; // 0x578(0x08)
	struct UOverlay* Overlay_8; // 0x580(0x08)
	struct UREDRetainerBox* REDRetainerBox_Menu; // 0x588(0x08)
	struct UREDRetainerBox* REDRetainerBox_noise_2; // 0x590(0x08)
	struct UREDRetainerBox* REDRetainerBox_noise_3; // 0x598(0x08)
	struct UREDTextBlock* Text_chapter_info; // 0x5a0(0x08)
	struct UREDTextBlock* Text_chapter_num; // 0x5a8(0x08)
	struct UREDTextBlock* Text_chapter_title; // 0x5b0(0x08)

	void Construct(); // Function WB_ui_Loading_chapter.WB_ui_Loading_chapter_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Loading_chapter.WB_ui_Loading_chapter_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Loading_chapter(int32_t EntryPoint); // Function WB_ui_Loading_chapter.WB_ui_Loading_chapter_C.ExecuteUbergraph_WB_ui_Loading_chapter // (Final|UbergraphFunction) // @ game+0x1685580
};
