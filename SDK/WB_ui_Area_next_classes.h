// WidgetBlueprintGeneratedClass WB_ui_Area_next.WB_ui_Area_next_C
// Size: 0x3e8 (Inherited: 0x3a0)
struct UWB_ui_Area_next_C : UUIAreaNext {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a0(0x08)
	struct UWidgetAnimation* Out; // 0x3a8(0x08)
	struct UWidgetAnimation* In; // 0x3b0(0x08)
	struct UImage* CA_Image_Blue; // 0x3b8(0x08)
	struct UImage* CA_Image_Green; // 0x3c0(0x08)
	struct UImage* CA_Image_Red; // 0x3c8(0x08)
	struct UREDRetainerBox* CA_RetainerBox; // 0x3d0(0x08)
	struct UREDImageBase* icon_font; // 0x3d8(0x08)
	struct UREDTextBlock* Text_Area_next_2; // 0x3e0(0x08)

	bool End(); // Function WB_ui_Area_next.WB_ui_Area_next_C.End // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool Start(int32_t LocationId, int32_t areaId, int32_t PortalID, bool isWorldMap); // Function WB_ui_Area_next.WB_ui_Area_next_C.Start // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Area_next.WB_ui_Area_next_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Area_next.WB_ui_Area_next_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Area_next(int32_t EntryPoint); // Function WB_ui_Area_next.WB_ui_Area_next_C.ExecuteUbergraph_WB_ui_Area_next // (Final|UbergraphFunction) // @ game+0x1685580
};

