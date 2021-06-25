// BlueprintGeneratedClass BP_ui_SceneMap.BP_ui_SceneMap_C
// Size: 0x7b0 (Inherited: 0x520)
struct ABP_ui_SceneMap_C : ABP_UI_SceneMap {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct UInstancedStaticMeshComponent* iconNPCPlayer; // 0x528(0x08)
	struct UInstancedStaticMeshComponent* iconWorldPortal; // 0x530(0x08)
	struct UInstancedStaticMeshComponent* iconAreaPortalBefore; // 0x538(0x08)
	struct UInstancedStaticMeshComponent* iconAreaPortal; // 0x540(0x08)
	struct UInstancedStaticMeshComponent* iconBouds; // 0x548(0x08)
	struct UInstancedStaticMeshComponent* iconEnemy0630; // 0x550(0x08)
	struct UInstancedStaticMeshComponent* IconShop; // 0x558(0x08)
	struct UInstancedStaticMeshComponent* IconAreaChangeBar; // 0x560(0x08)
	struct UInstancedStaticMeshComponent* IconSubquestCompleteActive; // 0x568(0x08)
	struct UInstancedStaticMeshComponent* IconTownNpc; // 0x570(0x08)
	struct USceneCaptureComponent2D* Camera; // 0x578(0x08)
	struct UInstancedStaticMeshComponent* IconSavePoint; // 0x580(0x08)
	struct UInstancedStaticMeshComponent* IconPickDisable; // 0x588(0x08)
	struct UInstancedStaticMeshComponent* IconPickActive; // 0x590(0x08)
	struct UStaticMeshComponent* IconLastAreaPosition; // 0x598(0x08)
	struct UInstancedStaticMeshComponent* IconSas; // 0x5a0(0x08)
	struct UInstancedStaticMeshComponent* IconObject; // 0x5a8(0x08)
	struct UStaticMeshComponent* IconPlayerDirection; // 0x5b0(0x08)
	struct UStaticMeshComponent* IconCameraDirection; // 0x5b8(0x08)
	struct UInstancedStaticMeshComponent* IconSubQuestComplete; // 0x5c0(0x08)
	struct UInstancedStaticMeshComponent* IconSubQuestActive; // 0x5c8(0x08)
	struct UInstancedStaticMeshComponent* IconSubQuest; // 0x5d0(0x08)
	struct UInstancedStaticMeshComponent* IconMainQuest; // 0x5d8(0x08)
	struct UInstancedStaticMeshComponent* IconAreaChange; // 0x5e0(0x08)
	struct UInstancedStaticMeshComponent* IconTreasureOpen; // 0x5e8(0x08)
	struct UInstancedStaticMeshComponent* IconTreasureClose; // 0x5f0(0x08)
	struct UInstancedStaticMeshComponent* IconFootprint; // 0x5f8(0x08)
	struct UInstancedStaticMeshComponent* IconEnemy; // 0x600(0x08)
	struct UStaticMeshComponent* IconPlayer; // 0x608(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x610(0x08)
	bool Camera_IsPerspective; // 0x618(0x01)
	char pad_619[0x7]; // 0x619(0x07)
	struct FTransform UnvisibleTransform; // 0x620(0x30)
	struct FString CurrentAreaName; // 0x650(0x10)
	struct Ubp_ui_map_icon_manager_C* IconManager; // 0x660(0x08)
	struct FUIMain3DViewModeSetting CameraVIewSetting; // 0x668(0x24)
	float CameraLocationSpdY; // 0x68c(0x04)
	float CameraLocationSpdX; // 0x690(0x04)
	char pad_694[0x4]; // 0x694(0x04)
	struct TArray<struct FMapArrangeItemNode> IconArrangeItemMaterial; // 0x698(0x10)
	struct FString BP_Name; // 0x6a8(0x10)
	struct TArray<struct UMaterialInterface*> MaterialIconArray; // 0x6b8(0x10)
	struct TArray<struct FMapArrangeItemNode> IconArrangeItemTreasure; // 0x6c8(0x10)
	float PlayerDirectionOffset; // 0x6d8(0x04)
	char pad_6DC[0x4]; // 0x6dc(0x04)
	struct UCapsuleComponent* CollisionData; // 0x6e0(0x08)
	bool DebugFlag; // 0x6e8(0x01)
	char pad_6E9[0x7]; // 0x6e9(0x07)
	struct TArray<struct ANpcTownPeople*> TownNpcList; // 0x6f0(0x10)
	struct FName ActiveQuest; // 0x700(0x08)
	struct FVector detaileMapIconOffset; // 0x708(0x0c)
	char pad_714[0x4]; // 0x714(0x04)
	struct TArray<enum class enum_ui_help_window_type> HelpWindowIconList; // 0x718(0x10)
	bool IsCameraControl; // 0x728(0x01)
	char pad_729[0x3]; // 0x729(0x03)
	struct FVector AfterViewModeCamera; // 0x72c(0x0c)
	struct FVector AfterViewModeView; // 0x738(0x0c)
	struct FRotator CameraRotate; // 0x744(0x0c)
	struct FVector AfterViewModeMoveCamera; // 0x750(0x0c)
	struct FUIMain3DViewModeSetting CameraVIewSettingMouse; // 0x75c(0x24)
	float PortalOffset; // 0x780(0x04)
	struct FVector PortalScale; // 0x784(0x0c)
	float EnemyLenght; // 0x790(0x04)
	float AfterViewModeCameraZ; // 0x794(0x04)
	float AfterViewModeViewZ; // 0x798(0x04)
	bool isleap; // 0x79c(0x01)
	bool isInitResetCamra; // 0x79d(0x01)
	char pad_79E[0x2]; // 0x79e(0x02)
	struct FMulticastInlineDelegate QuestIconDestination; // 0x7a0(0x10)

	bool CameraSetPerspectiveNative(bool isperspective); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.CameraSetPerspectiveNative // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GimmickUseCheck(struct FName ActorName, bool IsUse); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.GimmickUseCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Camera_SubAreaOffset(); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.Camera_SubAreaOffset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool DebugUpdateIcon(); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.DebugUpdateIcon // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetSaveIconAdjust(struct FName ActorName, int32_t OffsetType, struct FVector vectordata, struct FVector retVector); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.GetSaveIconAdjust // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetShopIconAdjust(struct FName ActorName, int32_t OffsetType, struct FVector vectordata, struct FVector retVector); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.GetShopIconAdjust // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	struct AActor* GetIconAdjustVector(struct AActor* ActorClass, struct FName findName); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.GetIconAdjustVector // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void icon_TownNpc(); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.icon_TownNpc // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool Camera_UpdateDetailMap(); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.Camera_UpdateDetailMap // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetFloorIndex(struct FVector inputpos, int32_t floorindex); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.GetFloorIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Camera_Capture(); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.Camera_Capture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Camera_Detail_Leap(); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.Camera_Detail_Leap // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHelpWindowList(enum class enum_ui_help_window_type helpwindowIcon); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.SetHelpWindowList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void QuestIcon_Active(struct FName Name); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.QuestIcon_Active // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void QuestIcon_Update(enum class EUINoticeMessageCallType Type, struct FName Name); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.QuestIcon_Update // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void QuestIcon_Event(); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.QuestIcon_Event // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void QuestIcon_Init(); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.QuestIcon_Init // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Camera_Reset_Floor(); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.Camera_Reset_Floor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Icon_Minimap_Init(); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.Icon_Minimap_Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Icon_All_Init(); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.Icon_All_Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAssetFilePath(struct FName CurrentArea, struct FString FilePath); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.GetAssetFilePath // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitMaterial(); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.InitMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Camera_SetScaleConfig(bool ScaleFlag); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.Camera_SetScaleConfig // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentAreaCheck(bool Flag); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.GetCurrentAreaCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BgModel_ChangeFloor(bool isleap); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.BgModel_ChangeFloor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LastAreaInit(int32_t infoBeforeIndex); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.LastAreaInit // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TreasureItem_Init(); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.TreasureItem_Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Camera_Detail_Init(); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.Camera_Detail_Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Camera_Detail_Zoom(float Delta, float inputIn, float Speed, bool Mouse, bool Update); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.Camera_Detail_Zoom // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Camera_Detail_Rotation(struct FVector2D Stickr, float Delta, float Speed, bool Mouse, bool Update); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.Camera_Detail_Rotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Camera_Detail_Location(struct FVector2D StickL, float Delta, float Speed, bool Mouse, bool Update); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.Camera_Detail_Location // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SavePoint_Init(); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.SavePoint_Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Shop_Init(); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.Shop_Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SasWall_Init(bool reuse, struct FName gimmickname); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.SasWall_Init // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentAreaName(struct FString Name); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.GetCurrentAreaName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void QuestIcon_Destination(); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.QuestIcon_Destination // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Camera_Reset(bool TakeOverRotate); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.Camera_Reset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BgModel_LoadPreviousArea(); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.BgModel_LoadPreviousArea // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BgModel_LoadNextArea(); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.BgModel_LoadNextArea // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentArea(int32_t Area); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.GetCurrentArea // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetCurrentLevel(int32_t Level); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.GetCurrentLevel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetAreaNum(int32_t Num); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.GetAreaNum // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void BgModel_SetMaterialParamDivide(float Param); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.BgModel_SetMaterialParamDivide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BgModel_SetUp(); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.BgModel_SetUp // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Icon_SetVisible(int32_t visibleflag); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.Icon_SetVisible // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Icon_SetRenderLayer(char Layer); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.Icon_SetRenderLayer // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IconManager_Init(); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.IconManager_Init // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BgModel_Release(); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.BgModel_Release // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BgModel_Create(bool IsDetailMap, struct FName CurrentName); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.BgModel_Create // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AreaChange_Init(); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.AreaChange_Init // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Icon_Init(); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.Icon_Init // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupDetailMap(struct FName CurrentName); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.SetupDetailMap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupMinimap(struct FName CurrentName); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.SetupMinimap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PickUpPoint_Init(); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.PickUpPoint_Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Camera_SetRotate(bool IsRotate); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.Camera_SetRotate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Camera_SetPerspective(bool isperspective, bool Force); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.Camera_SetPerspective // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Camera_SetScale(float Scale); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.Camera_SetScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Camera_SetHeight(float Height); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.Camera_SetHeight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Player Detaile(); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.Player Detaile // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Player_Init(); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.Player_Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Camera_UpdateMinimapOrthographic(); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.Camera_UpdateMinimapOrthographic // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Camera_UpdateMinimapPerspective(); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.Camera_UpdateMinimapPerspective // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Camera_UpdateMinimap(); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.Camera_UpdateMinimap // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Camera_InitOrthographic(); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.Camera_InitOrthographic // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Camera_InitPerspective(); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.Camera_InitPerspective // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Camera_Init(); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.Camera_Init // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void Event_UpdateTargetPoint(bool DestinationDispFlag); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.Event_UpdateTargetPoint // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeMinimapFloor(int32_t floor); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.ChangeMinimapFloor // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateMapGimmick(struct AMapGimmickObject* gimmick); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.UpdateMapGimmick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateMapGimmickReuse(struct AMapGimmickObject* gimmick); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.UpdateMapGimmickReuse // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_ui_SceneMap(int32_t EntryPoint); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.ExecuteUbergraph_BP_ui_SceneMap // (Final|UbergraphFunction) // @ game+0x1685580
	void QuestIconDestination__DelegateSignature(); // Function BP_ui_SceneMap.BP_ui_SceneMap_C.QuestIconDestination__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

