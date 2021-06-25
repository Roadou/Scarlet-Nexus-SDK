// WidgetBlueprintGeneratedClass WB_ui_Loading_interlude.WB_ui_Loading_interlude_C
// Size: 0x54c (Inherited: 0x388)
struct UWB_ui_Loading_interlude_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* Out; // 0x390(0x08)
	struct UWidgetAnimation* In; // 0x398(0x08)
	struct UWidgetAnimation* default_none; // 0x3a0(0x08)
	struct UWidgetAnimation* Default; // 0x3a8(0x08)
	struct UImage* all_noise_2; // 0x3b0(0x08)
	struct UImage* Base_all; // 0x3b8(0x08)
	struct UImage* Base_Gradation_B; // 0x3c0(0x08)
	struct UImage* Base_Gradation_light; // 0x3c8(0x08)
	struct UImage* Base_Gradation_R; // 0x3d0(0x08)
	struct UImage* Base_Line_2; // 0x3d8(0x08)
	struct UImage* Base_Line_3; // 0x3e0(0x08)
	struct UImage* Base_Line_4; // 0x3e8(0x08)
	struct UImage* Base_Line_1_particle; // 0x3f0(0x08)
	struct UImage* Base_Line_2_particle; // 0x3f8(0x08)
	struct UImage* Base_Line_3_particle; // 0x400(0x08)
	struct UImage* Base_particle_2; // 0x408(0x08)
	struct UImage* BG_Shadow; // 0x410(0x08)
	struct UImage* BlackBand_L; // 0x418(0x08)
	struct UImage* BlackBand_R; // 0x420(0x08)
	struct UImage* BlackBand_Un; // 0x428(0x08)
	struct UImage* BlackBand_Up; // 0x430(0x08)
	struct UImage* chara; // 0x438(0x08)
	struct UImage* eff_2; // 0x440(0x08)
	struct UImage* eff_3; // 0x448(0x08)
	struct UImage* font_base_2; // 0x450(0x08)
	struct UImage* Ghost_2; // 0x458(0x08)
	struct UImage* Ghost_3; // 0x460(0x08)
	struct UInvalidationBox* InvalidationBox_3; // 0x468(0x08)
	struct UInvalidationBox* InvalidationBox_4; // 0x470(0x08)
	struct UInvalidationBox* InvalidationBox_5; // 0x478(0x08)
	struct UImage* line_chara_2; // 0x480(0x08)
	struct UImage* line_chara_3; // 0x488(0x08)
	struct UImage* line_chara_4; // 0x490(0x08)
	struct UImage* line_chara_5; // 0x498(0x08)
	struct UImage* line_chara_1_particle; // 0x4a0(0x08)
	struct UImage* line_chara_2_particle; // 0x4a8(0x08)
	struct UImage* line_chara_3_particle; // 0x4b0(0x08)
	struct UImage* line_chara_4_particle; // 0x4b8(0x08)
	struct UImage* Logo; // 0x4c0(0x08)
	struct UImage* Logo_line_3; // 0x4c8(0x08)
	struct UImage* Logo_line_4; // 0x4d0(0x08)
	struct UImage* Logo_line_5; // 0x4d8(0x08)
	struct UImage* Logo_line_6; // 0x4e0(0x08)
	struct UImage* Logo_line_2_particle; // 0x4e8(0x08)
	struct UImage* Logo_line_3_particle; // 0x4f0(0x08)
	struct UImage* Logo_line_4_particle; // 0x4f8(0x08)
	struct UImage* Logo_line_5_particle; // 0x500(0x08)
	struct UImage* noise_line; // 0x508(0x08)
	struct UImage* noise_line_3; // 0x510(0x08)
	struct UImage* noise_TV; // 0x518(0x08)
	struct UImage* noise_TV_3; // 0x520(0x08)
	struct UREDRetainerBox* REDRetainerBox_Menu; // 0x528(0x08)
	struct UREDRetainerBox* REDRetainerBox_noise_2; // 0x530(0x08)
	struct UREDRetainerBox* REDRetainerBox_noise_3; // 0x538(0x08)
	struct UREDTextBlock* text_load_interlude_info; // 0x540(0x08)
	int32_t ID; // 0x548(0x04)

	void SetText(); // Function WB_ui_Loading_interlude.WB_ui_Loading_interlude_C.SetText // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetId(int32_t ID); // Function WB_ui_Loading_interlude.WB_ui_Loading_interlude_C.SetId // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateClose(int32_t SubState); // Function WB_ui_Loading_interlude.WB_ui_Loading_interlude_C.StateClose // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_Loading_interlude.WB_ui_Loading_interlude_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateOpen(int32_t SubState); // Function WB_ui_Loading_interlude.WB_ui_Loading_interlude_C.StateOpen // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_Loading_interlude.WB_ui_Loading_interlude_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Loading_interlude.WB_ui_Loading_interlude_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Loading_interlude.WB_ui_Loading_interlude_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Loading_interlude(int32_t EntryPoint); // Function WB_ui_Loading_interlude.WB_ui_Loading_interlude_C.ExecuteUbergraph_WB_ui_Loading_interlude // (Final|UbergraphFunction) // @ game+0x1685580
};

