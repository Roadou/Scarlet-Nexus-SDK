// WidgetBlueprintGeneratedClass WB_ui_BossName.WB_ui_BossName_C
// Size: 0x5e8 (Inherited: 0x508)
struct UWB_ui_BossName_C : UUIBossName {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x508(0x08)
	struct UWidgetAnimation* Out; // 0x510(0x08)
	struct UWidgetAnimation* In; // 0x518(0x08)
	struct UWidgetAnimation* default_none; // 0x520(0x08)
	struct UWidgetAnimation* Default; // 0x528(0x08)
	struct UImage* base01; // 0x530(0x08)
	struct UImage* block_noise01_02; // 0x538(0x08)
	struct UImage* block_noise02_blue01; // 0x540(0x08)
	struct UImage* block_noise02_green01; // 0x548(0x08)
	struct UImage* block_noise02_red01; // 0x550(0x08)
	struct UImage* block_noise03_02; // 0x558(0x08)
	struct UImage* block_noise03_03; // 0x560(0x08)
	struct UImage* bug_grid; // 0x568(0x08)
	struct UImage* CA_Image_Blue_3; // 0x570(0x08)
	struct UImage* CA_Image_Green_3; // 0x578(0x08)
	struct UImage* CA_Image_Red_3; // 0x580(0x08)
	struct UREDRetainerBox* CA_RetainerBox_3; // 0x588(0x08)
	struct UImage* frame_1_add; // 0x590(0x08)
	struct UImage* Ghost1; // 0x598(0x08)
	struct UImage* grid_parts01; // 0x5a0(0x08)
	struct UImage* grid_parts02; // 0x5a8(0x08)
	struct UImage* grid_parts03; // 0x5b0(0x08)
	struct UImage* grid_parts04; // 0x5b8(0x08)
	struct UImage* image_fade1; // 0x5c0(0x08)
	struct UImage* image_fade2; // 0x5c8(0x08)
	struct UImage* nomal_grid; // 0x5d0(0x08)
	struct UImage* nomal_grid_b_01; // 0x5d8(0x08)
	struct UREDTextBlock* Text_EnemyName_01; // 0x5e0(0x08)

	void image_fade(); // Function WB_ui_BossName.WB_ui_BossName_C.image_fade // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_BossName.WB_ui_BossName_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_BossName.WB_ui_BossName_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WB_ui_BossName.WB_ui_BossName_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_BossName(int32_t EntryPoint); // Function WB_ui_BossName.WB_ui_BossName_C.ExecuteUbergraph_WB_ui_BossName // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

