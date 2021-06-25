// WidgetBlueprintGeneratedClass WB_ui_DetailMap_Parts_3.WB_ui_DetailMap_Parts_2_C
// Size: 0x3e1 (Inherited: 0x388)
struct UWB_ui_DetailMap_Parts_2_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* default_icon_none; // 0x390(0x08)
	struct UWidgetAnimation* default_none; // 0x398(0x08)
	struct UWidgetAnimation* Default; // 0x3a0(0x08)
	struct UBorder* All_Color; // 0x3a8(0x08)
	struct UImage* icon_font; // 0x3b0(0x08)
	struct UImage* iconinfo_Line; // 0x3b8(0x08)
	struct UOverlay* IconInfo_Set; // 0x3c0(0x08)
	struct UInvalidationBox* InvalidationBox_1; // 0x3c8(0x08)
	struct UREDTextBlock* Text_DetailMap_IconInfo_2; // 0x3d0(0x08)
	struct UREDTextBlock* Text_DetailMap_IconInfo_3; // 0x3d8(0x08)
	enum class enum_ui_detail_map_parts_2_animation defaultanime; // 0x3e0(0x01)

	void SetAnime(enum class enum_ui_detail_map_parts_2_animation Anime); // Function WB_ui_DetailMap_Parts_3.WB_ui_DetailMap_Parts_2_C.SetAnime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Setup(bool IsDraw, bool isCheck, struct FString MessageIcon, struct FString Message); // Function WB_ui_DetailMap_Parts_3.WB_ui_DetailMap_Parts_2_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateUpdate(int32_t SubState); // Function WB_ui_DetailMap_Parts_3.WB_ui_DetailMap_Parts_2_C.StateUpdate // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_DetailMap_Parts_3.WB_ui_DetailMap_Parts_2_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_DetailMap_Parts_3.WB_ui_DetailMap_Parts_2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_DetailMap_Parts_3.WB_ui_DetailMap_Parts_2_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_DetailMap_Parts_3(int32_t EntryPoint); // Function WB_ui_DetailMap_Parts_3.WB_ui_DetailMap_Parts_2_C.ExecuteUbergraph_WB_ui_DetailMap_Parts_3 // (Final|UbergraphFunction) // @ game+0x1685580
};

