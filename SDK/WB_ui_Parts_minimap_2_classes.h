// WidgetBlueprintGeneratedClass WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C
// Size: 0x678 (Inherited: 0x4d8)
struct UWB_ui_Parts_minimap_1_C : UUIMiniMap {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4d8(0x08)
	struct UWidgetAnimation* out_noise; // 0x4e0(0x08)
	struct UWidgetAnimation* default_noise; // 0x4e8(0x08)
	struct UWidgetAnimation* in_noise; // 0x4f0(0x08)
	struct UWidgetAnimation* Out; // 0x4f8(0x08)
	struct UWidgetAnimation* In; // 0x500(0x08)
	struct UWidgetAnimation* default_none; // 0x508(0x08)
	struct UWidgetAnimation* Default; // 0x510(0x08)
	struct UOverlay* All; // 0x518(0x08)
	struct UOverlay* All_Set; // 0x520(0x08)
	struct UImage* Base; // 0x528(0x08)
	struct UOverlay* different_location; // 0x530(0x08)
	struct UImage* different_location_base; // 0x538(0x08)
	struct UOverlay* different_location_set; // 0x540(0x08)
	struct UImage* Frame; // 0x548(0x08)
	struct UImage* Icon_2; // 0x550(0x08)
	struct UREDImageBase* icon_font_2; // 0x558(0x08)
	struct UImage* icon_kizuna; // 0x560(0x08)
	struct UImage* icon_main; // 0x568(0x08)
	struct UOverlay* icon_set; // 0x570(0x08)
	struct UREDTextBlock* icon_text; // 0x578(0x08)
	struct UImage* Noise; // 0x580(0x08)
	struct UImage* Noise_2; // 0x588(0x08)
	struct UOverlay* RT; // 0x590(0x08)
	struct UImage* RT_map; // 0x598(0x08)
	struct UImage* subQuest_base_2; // 0x5a0(0x08)
	struct UOverlay* subQuest_set; // 0x5a8(0x08)
	struct UREDTextBlock* Text_Different_location_2; // 0x5b0(0x08)
	struct UREDTextBlock* Text_minimap_SubQuest_2; // 0x5b8(0x08)
	struct UWB_ui_Parts_minimap_distance_1_C* WB_ui_Parts_minimap_distance_2; // 0x5c0(0x08)
	struct UWB_ui_Parts_minimap_distance_1_C* WB_ui_Parts_minimap_distance_3; // 0x5c8(0x08)
	struct UWB_ui_Parts_minimap_icon_camera_1_C* WB_ui_Parts_minimap_icon_camera_2; // 0x5d0(0x08)
	struct UWB_ui_Parts_minimap_icon_north_1_C* WB_ui_Parts_minimap_icon_north_2; // 0x5d8(0x08)
	struct UWB_ui_Parts_minimap_icon_north_3_C* WB_ui_Parts_minimap_icon_north_4; // 0x5e0(0x08)
	struct UWB_ui_Parts_minimap_icon_player_1_C* WB_ui_Parts_minimap_icon_player_2; // 0x5e8(0x08)
	struct FVector2D CameraScale; // 0x5f0(0x08)
	float CameraHeight; // 0x5f8(0x04)
	bool isperspective; // 0x5fc(0x01)
	char pad_5FD[0x3]; // 0x5fd(0x03)
	struct ABP_ui_Scene_Minimap_C* SceneMap; // 0x600(0x08)
	float limit; // 0x608(0x04)
	float Limit_Default; // 0x60c(0x04)
	float CameraHeightDefault; // 0x610(0x04)
	char pad_614[0x4]; // 0x614(0x04)
	struct FString DebugAreaName; // 0x618(0x10)
	bool DebugFlag; // 0x628(0x01)
	char pad_629[0x7]; // 0x629(0x07)
	struct UWB_ui_Parts_minimap_icon_player_1_C* 2DPlayer; // 0x630(0x08)
	struct UWB_ui_Parts_minimap_icon_camera_1_C* 2dCameraIcon; // 0x638(0x08)
	struct UWB_ui_Parts_minimap_icon_north_1_C* direction1; // 0x640(0x08)
	struct UWB_ui_Parts_minimap_icon_north_2_C* direction2; // 0x648(0x08)
	struct UWB_ui_Parts_minimap_icon_north_3_C* direction3; // 0x650(0x08)
	struct TArray<struct FWorldmapOpenLCParam> AllLocationList; // 0x658(0x10)
	int32_t LCNO; // 0x668(0x04)
	float DepthDivideBefore; // 0x66c(0x04)
	float CameraOrthoWidth; // 0x670(0x04)
	float CameraOrthoWidthDefault; // 0x674(0x04)

	float ActionManagerGetEditableAngle(); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.ActionManagerGetEditableAngle // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	struct AActor* ActionManagerGetPairActor(); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.ActionManagerGetPairActor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ActionManagerCheck(int32_t Handle); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.ActionManagerCheck // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool ActionManagerExecute(int32_t Handle); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.ActionManagerExecute // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RenderModelDelete(); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.RenderModelDelete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetDirectionDestSubQuest(struct FName subquestTitle, struct FName SubQuestID, bool Flag); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.SetDirectionDestSubQuest // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool MinimapMaterialBrainfield(bool Flag); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.MinimapMaterialBrainfield // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool MapOpenListSetting(int32_t AreaNo); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.MapOpenListSetting // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ReleaseMapSetting(); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.ReleaseMapSetting // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetDirectionDest(); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.SetDirectionDest // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool InitIcon_Etc_Native(); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.InitIcon_Etc_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDestination(); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.SetDestination // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitIconBoundsGoal(); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.InitIconBoundsGoal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void initDirection(); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.initDirection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetWidgetCameraThumbnail(struct UObject* WorldContextObject, struct UImage* Image, int32_t Index); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.SetWidgetCameraThumbnail // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetWidgetPlayerThumbnail(struct UObject* WorldContextObject, struct UImage* Image, int32_t Index); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.SetWidgetPlayerThumbnail // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitIconPlayer(); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.InitIconPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CreateMapSetting(); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.CreateMapSetting // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool UpdateConfigSetting(); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.UpdateConfigSetting // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitIconSubquestGoal(); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.InitIconSubquestGoal // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitIcon_Etc(); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.InitIcon_Etc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUpConfigData(); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.SetUpConfigData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitIconGoal(); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.InitIconGoal // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMaterialParamDivide(float Divide); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.SetMaterialParamDivide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCameraScale(float Scale); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.SetCameraScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitIcon(); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.InitIcon // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RenderCameraUpdate(); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.RenderCameraUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RenderCameraDelete(); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.RenderCameraDelete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RenderCameraCreate(); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.RenderCameraCreate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void  rrangeItemイ (enum class EChangeMinimapStateType changeType, struct FName ID); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C. rrangeItemイ  // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Destruct(); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ActionManagerSetIconMode(int32_t Handle, enum class EActionIconMode Mode); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.ActionManagerSetIconMode // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ActionManagerSetBattleFlag(bool bBattle); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.ActionManagerSetBattleFlag // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void Event_UpdateTargetPoint(bool DestinationDispFlag); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.Event_UpdateTargetPoint // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetThumbnail(int32_t Icon); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.SetThumbnail // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateChangeNotice(enum class EUINoticeMessageCallType senderType, struct FName datatableId); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.UpdateChangeNotice // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateChangeQuestActive(struct FName datatableId); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.UpdateChangeQuestActive // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void QuestIconDest(); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.QuestIconDest // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventProgress(); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.EventProgress // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Parts_minimap_2(int32_t EntryPoint); // Function WB_ui_Parts_minimap_2.WB_ui_Parts_minimap_1_C.ExecuteUbergraph_WB_ui_Parts_minimap_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

