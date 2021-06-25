// WidgetBlueprintGeneratedClass WB_ui_TownName.WB_ui_TownName_C
// Size: 0x4a8 (Inherited: 0x3e0)
struct UWB_ui_TownName_C : UUITownName {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* Out; // 0x3e8(0x08)
	struct UWidgetAnimation* In; // 0x3f0(0x08)
	struct UWidgetAnimation* default_none; // 0x3f8(0x08)
	struct UWidgetAnimation* Default; // 0x400(0x08)
	struct UImage* bg_grid01_mask; // 0x408(0x08)
	struct UImage* bg_grid02; // 0x410(0x08)
	struct UImage* bg_grid_add_line01; // 0x418(0x08)
	struct UImage* bg_grid_add_line02; // 0x420(0x08)
	struct UImage* bg_grid_waku01; // 0x428(0x08)
	struct UImage* bg_grid_waku02; // 0x430(0x08)
	struct UImage* bg_grid_waku03; // 0x438(0x08)
	struct UImage* CA_Image_Blue; // 0x440(0x08)
	struct UImage* CA_Image_Green; // 0x448(0x08)
	struct UImage* CA_Image_Red; // 0x450(0x08)
	struct UREDRetainerBox* CA_RetainerBox_2; // 0x458(0x08)
	struct UImage* Ghost1; // 0x460(0x08)
	struct UImage* NameDot01; // 0x468(0x08)
	struct UImage* NameDot02; // 0x470(0x08)
	struct UImage* NameLine; // 0x478(0x08)
	struct UImage* NameLine_glow; // 0x480(0x08)
	struct UREDTextBlock* Text_Town_location_01; // 0x488(0x08)
	struct UREDTextBlock* Text_Town_location_02; // 0x490(0x08)
	struct UREDTextBlock* Text_Town_location_03; // 0x498(0x08)
	struct UREDTextBlock* Text_Town_location_04; // 0x4a0(0x08)

	void UpdateTownNameOutlineMaterial(); // Function WB_ui_TownName.WB_ui_TownName_C.UpdateTownNameOutlineMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateTownNameGridMaterial(); // Function WB_ui_TownName.WB_ui_TownName_C.UpdateTownNameGridMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_TownName.WB_ui_TownName_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_TownName.WB_ui_TownName_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_TownName(int32_t EntryPoint); // Function WB_ui_TownName.WB_ui_TownName_C.ExecuteUbergraph_WB_ui_TownName // (Final|UbergraphFunction) // @ game+0x1685580
};

