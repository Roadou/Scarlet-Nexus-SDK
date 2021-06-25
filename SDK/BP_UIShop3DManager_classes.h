// BlueprintGeneratedClass BP_UIShop3DManager.BP_UIShop3DManager_C
// Size: 0x308 (Inherited: 0x230)
struct ABP_UIShop3DManager_C : AUIShop3DManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UDirectionalLightComponent* PlayerLight; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	struct ABP_UIShop3DBG_C* MenuBG; // 0x248(0x08)
	struct TArray<struct APostProcessVolume*> RestorePPV; // 0x250(0x10)
	struct TArray<bool> RestorePPVEnabled; // 0x260(0x10)
	bool InViewMode; // 0x270(0x01)
	char pad_271[0xf]; // 0x271(0x0f)
	struct FTransform ViewModeRestoreCameraTransform; // 0x280(0x30)
	bool ViewModeRestoreOverrideViewRect; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	struct FVector ViewModeViewLocation; // 0x2b4(0x0c)
	struct FVector ViewModeViewLocationDefault; // 0x2c0(0x0c)
	struct FVector ViewModeCameraLocation; // 0x2cc(0x0c)
	float ViewModeZoom; // 0x2d8(0x04)
	float ViewModeScreenLocationX; // 0x2dc(0x04)
	float ViewModeScreenLocationY; // 0x2e0(0x04)
	struct FUIMain3DViewModeSetting ViewModeSetting; // 0x2e4(0x24)

	void ResetBGCameraParameter(); // Function BP_UIShop3DManager.BP_UIShop3DManager_C.ResetBGCameraParameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool End(); // Function BP_UIShop3DManager.BP_UIShop3DManager_C.End // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool Start(); // Function BP_UIShop3DManager.BP_UIShop3DManager_C.Start // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateResetViewModeCamera(); // Function BP_UIShop3DManager.BP_UIShop3DManager_C.PrivateResetViewModeCamera // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdateViewModeZoom(float DeltaSeconds, float inputIn, float InputOut); // Function BP_UIShop3DManager.BP_UIShop3DManager_C.PrivateUpdateViewModeZoom // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsInViewMode(bool IsViewMode); // Function BP_UIShop3DManager.BP_UIShop3DManager_C.IsInViewMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void PrivateUpdateViewModeRotation(float DeltaSeconds, float InputX, float InputY); // Function BP_UIShop3DManager.BP_UIShop3DManager_C.PrivateUpdateViewModeRotation // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndViewMode(); // Function BP_UIShop3DManager.BP_UIShop3DManager_C.EndViewMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartViewMode(); // Function BP_UIShop3DManager.BP_UIShop3DManager_C.StartViewMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateRestoreScenePP(); // Function BP_UIShop3DManager.BP_UIShop3DManager_C.PrivateRestoreScenePP // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupMenuPP(); // Function BP_UIShop3DManager.BP_UIShop3DManager_C.PrivateSetupMenuPP // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeBG(); // Function BP_UIShop3DManager.BP_UIShop3DManager_C.InitializeBG // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_UIShop3DManager.BP_UIShop3DManager_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_UIShop3DManager.BP_UIShop3DManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_UIShop3DManager.BP_UIShop3DManager_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_UIShop3DManager.BP_UIShop3DManager_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_UIShop3DManager(int32_t EntryPoint); // Function BP_UIShop3DManager.BP_UIShop3DManager_C.ExecuteUbergraph_BP_UIShop3DManager // (Final|UbergraphFunction) // @ game+0x1685580
};

