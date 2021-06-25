// BlueprintGeneratedClass bp_ui_map_icon_manager.bp_ui_map_icon_manager_C
// Size: 0x40 (Inherited: 0x28)
struct Ubp_ui_map_icon_manager_C : UObject {
	struct TArray<struct UDataTable*> IconTable; // 0x28(0x10)
	struct UDataTable* ArrangePoint; // 0x38(0x08)

	void GetArrangeIconType(struct FName PointIDName, enum class EMapIconType retIconType); // Function bp_ui_map_icon_manager.bp_ui_map_icon_manager_C.GetArrangeIconType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetArrangeElementList(int32_t Location, int32_t Area, struct TArray<struct FMapArrangeItemNode> resultList, enum class EMapIconType MapIconType); // Function bp_ui_map_icon_manager.bp_ui_map_icon_manager_C.GetArrangeElementList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetElementList(enum class EUiSceneMapIconType Type, int32_t Locate, int32_t Area, struct TArray<struct FUiSceneMapIconNode> resultList); // Function bp_ui_map_icon_manager.bp_ui_map_icon_manager_C.GetElementList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetElement(int32_t TableIndex, int32_t Index, struct FUiSceneMapIconDataCell Param); // Function bp_ui_map_icon_manager.bp_ui_map_icon_manager_C.GetElement // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetElementNum(int32_t TableIndex, int32_t Num); // Function bp_ui_map_icon_manager.bp_ui_map_icon_manager_C.GetElementNum // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
};

