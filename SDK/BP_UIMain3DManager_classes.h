// BlueprintGeneratedClass BP_UIMain3DManager.BP_UIMain3DManager_C
// Size: 0x464 (Inherited: 0x260)
struct ABP_UIMain3DManager_C : AUIMain3DManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UDirectionalLightComponent* PlayerLight; // 0x268(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x270(0x08)
	struct TArray<struct ABP_UIMain3DPlayerCapture_C*> PlayerCapture; // 0x278(0x10)
	struct TMap<struct FName, struct ABP_MenuPlayerBase_C*> MenuPlayer; // 0x288(0x50)
	struct TMap<struct FName, struct TSoftClassPtr<UObject>> MenuPlayerAsset; // 0x2d8(0x50)
	struct ABP_UIMain3DBG_C* MenuBG; // 0x328(0x08)
	struct TArray<struct APostProcessVolume*> RestorePPV; // 0x330(0x10)
	struct TArray<bool> RestorePPVEnabled; // 0x340(0x10)
	struct TArray<struct FUIMain3DManagerEquipData> EquipData; // 0x350(0x10)
	int32_t SelectPlayerUniqueID; // 0x360(0x04)
	int32_t ChangeTargetPlayerUniqueID; // 0x364(0x04)
	enum class EUIMain3DEquipCameraID EquipCameraID; // 0x368(0x01)
	enum class EUIMain3DEquipSelectID EquipSelectID; // 0x369(0x01)
	enum class EUIMain3DCharacterSceneID SelectSceneID; // 0x36a(0x01)
	char pad_36B[0x1]; // 0x36b(0x01)
	struct FRotator GeneralPlayerLightRotation; // 0x36c(0x0c)
	bool InViewMode; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct FTransform ViewModeRestoreCameraTransform; // 0x380(0x30)
	bool ViewModeRestoreOverrideViewRect; // 0x3b0(0x01)
	char pad_3B1[0x3]; // 0x3b1(0x03)
	struct FVector ViewModeViewLocation; // 0x3b4(0x0c)
	struct FVector ViewModeViewLocationDefault; // 0x3c0(0x0c)
	struct FVector ViewModeCameraLocation; // 0x3cc(0x0c)
	float ViewModeZoom; // 0x3d8(0x04)
	float ViewModeScreenLocationX; // 0x3dc(0x04)
	float ViewModeScreenLocationY; // 0x3e0(0x04)
	struct FUIMain3DViewModeSetting ViewModeSetting; // 0x3e4(0x24)
	struct FMulticastInlineDelegate ED_OpenMenu; // 0x408(0x10)
	struct FVector PlayerDTOffsetLocation; // 0x418(0x0c)
	struct FRotator PlayerDTOffsetRotation; // 0x424(0x0c)
	bool IsVaridCharaMove; // 0x430(0x01)
	char pad_431[0x3]; // 0x431(0x03)
	struct FVector2D MouseRotation; // 0x434(0x08)
	struct FVector2D MouseLocation; // 0x43c(0x08)
	struct FBox2D RectAngle; // 0x444(0x14)
	enum class EOptionCameraYaw cameraYaw; // 0x458(0x01)
	enum class EOptionCameraPitch cameraPitch; // 0x459(0x01)
	bool beforeAttachVisibility; // 0x45a(0x01)
	bool beforeCharaVisibility; // 0x45b(0x01)
	float ParamReverseRStickPitch; // 0x45c(0x04)
	float ParamReverseRStickYaw; // 0x460(0x04)

	void ControlGenmaWeponVisibility(struct ABP_MenuPlayerBase_C* MenuPlayer); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.ControlGenmaWeponVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ControlVisibilityAtTextureMip(); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.ControlVisibilityAtTextureMip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupEquipALL_SelectItemAttachmentAll(int32_t SelectAttachment0, int32_t SelectAttachment1, int32_t SelectAttachment2, int32_t CameraTargetAttachmentNo); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.SetupEquipALL_SelectItemAttachmentAll // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateResetRenderTarget(enum class ERenderTargetType RenderTargetType, struct UTextureRenderTarget2D* NewTarget); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.PrivateResetRenderTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugGetSelectPlayerCapture(struct ABP_UIMain3DPlayerCapture_C* Capture); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.DebugGetSelectPlayerCapture // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupEquipALL_SelectWeapon(int32_t CursorCategory, int32_t SelectID); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.SetupEquipALL_SelectWeapon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupCamera(enum class EUIMain3DEquipSelectID InSelectID, int32_t AttachmentIndex); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.PrivateSetupCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupEquipALL_SelectItem(int32_t CursorCategory, int32_t SelectID); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.SetupEquipALL_SelectItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdateDispEquipAll(struct FPlayerInfo PlayerInfo); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.PrivateUpdateDispEquipAll // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateGetCurrentPlayerID(enum class EPlayerID Result); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.PrivateGetCurrentPlayerID // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupEquipALL(); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.SetupEquipALL // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEquipAttachmentFromID(int32_t AttachmentIndex, int32_t ItemId); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.SetEquipAttachmentFromID // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEquipCostumeFromID(int32_t ItemId); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.SetEquipCostumeFromID // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEquipWeaponFromID(int32_t ItemId); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.SetEquipWeaponFromID // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OptionParamUpdate(); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.OptionParamUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdateMouseInputZoom(float DeltaSeconds); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.PrivateUpdateMouseInputZoom // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdateMouseInputLocation(float DeltaSeconds); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.PrivateUpdateMouseInputLocation // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdateMouseInputRotation(float DeltaSeconds); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.PrivateUpdateMouseInputRotation // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRect(struct FBox2D RectAngle); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.SetRect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPlayerLocationAndRotationFromDataTable(); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.SetPlayerLocationAndRotationFromDataTable // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetDTOffset(); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.ResetDTOffset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCharaMoveMode(bool CharaMoveFlag); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.SetCharaMoveMode // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdateInputRotation(float DeltaSeconds); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.PrivateUpdateInputRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPlayerLocationAndRotation(struct FVector OuterOffsetLocation, struct FRotator OuterOffsetRotation); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.SetPlayerLocationAndRotation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventOpenMenu(); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.EventOpenMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void HideScene(); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.HideScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateResetViewModeDataTable(); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.PrivateResetViewModeDataTable // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateResetViewModeCamera(bool IsCamera, bool IsCharaPosition, bool IsCharaRotation); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.PrivateResetViewModeCamera // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdateViewModeZoom(float DeltaSeconds, float inputIn, float InputOut); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.PrivateUpdateViewModeZoom // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsInViewMode(bool IsViewMode); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.IsInViewMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void PrivateUpdateViewModeLocation(float DeltaSeconds, float InputX, float InputY); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.PrivateUpdateViewModeLocation // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdateViewModeRotation(float DeltaSeconds, float InputX, float InputY); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.PrivateUpdateViewModeRotation // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdateViewMode(float DeltaSeconds); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.PrivateUpdateViewMode // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivatePlayAnimationCheckChange(struct ABP_MenuPlayerBase_C* InMenuPlayer, enum class EUIMain3DCharacterSceneID LastSceneID, enum class EUIMain3DCharacterSceneID NowSceneID, enum class EUIMain3DEquipSelectID LastEquipSelectID, enum class EUIMain3DEquipSelectID NowEquipSelectID); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.PrivatePlayAnimationCheckChange // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivatePlayAnimationFromNo(struct ABP_MenuPlayerBase_C* InMenuPlayer, enum class EUIMain3DPlayerAnimationType AnimType); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.PrivatePlayAnimationFromNo // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateGetAnimationNo(enum class EUIMain3DCharacterSceneID InSceneID, enum class EUIMain3DEquipSelectID InEquipSelectID, enum class EUIMain3DPlayerAnimationType AnimType); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.PrivateGetAnimationNo // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivatePlayAnimation(struct ABP_MenuPlayerBase_C* InMenuPlayer); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.PrivatePlayAnimation // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdatePlayerLightRotation(struct FRotator Rotation); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.PrivateUpdatePlayerLightRotation // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupEquipData(bool IsPosition, bool IsRotation); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.PrivateSetupEquipData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugSetEquipCameraID(enum class EUIMain3DEquipCameraID CameraID); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.DebugSetEquipCameraID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetEquipCameraID(enum class EUIMain3DEquipCameraID CameraID, bool ResetRotation); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.PrivateSetEquipCameraID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateGetEquipMenuPlayer(struct ABP_MenuPlayerBase_C* MenuPlayer, bool IsFind, int32_t Index); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.PrivateGetEquipMenuPlayer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndViewMode(); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.EndViewMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartViewMode(); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.StartViewMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEquipSelected(enum class EUIMain3DEquipSelectID InSelect, int32_t AttachmentIndex); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.SetEquipSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEquipAttachment(int32_t AttachmentIndex, struct FItemDataCell ItemData); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.SetEquipAttachment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEquipCostume(struct FItemDataCell ItemData); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.SetEquipCostume // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEquipWeapon(struct FItemDataCell ItemData); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.SetEquipWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReloadGeneralSetting(); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.ReloadGeneralSetting // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartChangeTargetPlayerNoise(); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.StartChangeTargetPlayerNoise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartSelectPlayerNoise(bool Reverse); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.StartSelectPlayerNoise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateRestoreScenePP(); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.PrivateRestoreScenePP // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupMenuPP(); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.PrivateSetupMenuPP // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetChangeTargetNoiseRate(float NoiseRate); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.GetChangeTargetNoiseRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetSelectNoiseRate(float NoiseRate); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.GetSelectNoiseRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ResetBGCameraParameter(); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.ResetBGCameraParameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeBG(); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.InitializeBG // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializePlayer(); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.InitializePlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetChangeTargetPlayer(int32_t PlayerUniqueID); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.SetChangeTargetPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSelectPlayer(int32_t PlayerUniqueID); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.SetSelectPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void End(); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Start(); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.Start // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetChangeTargetTexture(struct UTextureRenderTarget2D* RenderTarget, struct UTextureRenderTarget2D* RenderTargetAlpha); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.GetChangeTargetTexture // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSelectTexture(struct UTextureRenderTarget2D* RenderTarget, struct UTextureRenderTarget2D* RenderTargetAlpha); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.GetSelectTexture // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetScene(enum class EUIMain3DCharacterSceneID SceneID); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.SetScene // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateGetChangeTargetCapture(struct ABP_UIMain3DPlayerCapture_C* Capture); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.PrivateGetChangeTargetCapture // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateGetSelectCapture(struct ABP_UIMain3DPlayerCapture_C* Capture); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.PrivateGetSelectCapture // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetPlayer(int32_t PlayerUniqueID, struct ABP_UIMain3DPlayerCapture_C* TargetCapture); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.PrivateSetPlayer // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMenuPlayer(int32_t PlayerUniqueID, struct ABP_MenuPlayerBase_C* MenuPlayer, bool IsFind, int32_t Index); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.GetMenuPlayer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadAsset(); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.LoadAsset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_UIMain3DManager(int32_t EntryPoint); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.ExecuteUbergraph_BP_UIMain3DManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
	void ED_OpenMenu__DelegateSignature(); // Function BP_UIMain3DManager.BP_UIMain3DManager_C.ED_OpenMenu__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

