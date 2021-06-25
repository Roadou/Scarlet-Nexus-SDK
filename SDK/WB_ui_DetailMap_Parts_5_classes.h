// WidgetBlueprintGeneratedClass WB_ui_DetailMap_Parts_5.WB_ui_DetailMap_Parts_4_C
// Size: 0x420 (Inherited: 0x388)
struct UWB_ui_DetailMap_Parts_4_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* R_decision; // 0x390(0x08)
	struct UWidgetAnimation* L_decision; // 0x398(0x08)
	struct UWidgetAnimation* default_none; // 0x3a0(0x08)
	struct UWidgetAnimation* Default; // 0x3a8(0x08)
	struct UBorder* All_Color; // 0x3b0(0x08)
	struct UImage* Arrow_L_base_add; // 0x3b8(0x08)
	struct UImage* Arrow_R_base_add; // 0x3c0(0x08)
	struct UImage* icon_font_L1; // 0x3c8(0x08)
	struct UImage* icon_font_R1; // 0x3d0(0x08)
	struct UImage* Line_2; // 0x3d8(0x08)
	struct UImage* Line_3; // 0x3e0(0x08)
	struct UOverlay* Overlay_1; // 0x3e8(0x08)
	struct UOverlay* Overlay_2; // 0x3f0(0x08)
	struct UREDOverlay* pc_pg1; // 0x3f8(0x08)
	struct UREDOverlay* pc_pg2; // 0x400(0x08)
	struct USpacer* Spacer_84; // 0x408(0x08)
	struct USpacer* Spacer_96; // 0x410(0x08)
	struct UREDTextBlock* Text_DetailMap_AreaName_3; // 0x418(0x08)

	void setGuide(bool setGuide); // Function WB_ui_DetailMap_Parts_5.WB_ui_DetailMap_Parts_4_C.setGuide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeBlockFixString(); // Function WB_ui_DetailMap_Parts_5.WB_ui_DetailMap_Parts_4_C.InitializeBlockFixString // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeAreaFixString(); // Function WB_ui_DetailMap_Parts_5.WB_ui_DetailMap_Parts_4_C.InitializeAreaFixString // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetStringName(struct FText Name); // Function WB_ui_DetailMap_Parts_5.WB_ui_DetailMap_Parts_4_C.SetStringName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayDetailAnimeL(); // Function WB_ui_DetailMap_Parts_5.WB_ui_DetailMap_Parts_4_C.PlayDetailAnimeL // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayDetailAnimeR(); // Function WB_ui_DetailMap_Parts_5.WB_ui_DetailMap_Parts_4_C.PlayDetailAnimeR // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_DetailMap_Parts_5.WB_ui_DetailMap_Parts_4_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_DetailMap_Parts_5.WB_ui_DetailMap_Parts_4_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_DetailMap_Parts_5(int32_t EntryPoint); // Function WB_ui_DetailMap_Parts_5.WB_ui_DetailMap_Parts_4_C.ExecuteUbergraph_WB_ui_DetailMap_Parts_5 // (Final|UbergraphFunction) // @ game+0x1685580
};

