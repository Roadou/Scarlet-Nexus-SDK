// Class MagicLeap.InAppPurchaseComponent
// Size: 0x138 (Inherited: 0xc0)
struct UInAppPurchaseComponent : UActorComponent {
	struct FMulticastInlineDelegate InAppPurchaseLogMessage; // 0xc0(0x10)
	struct FMulticastInlineDelegate GetItemsDetailsSuccess; // 0xd0(0x10)
	struct FMulticastInlineDelegate GetItemsDetailsFailure; // 0xe0(0x10)
	struct FMulticastInlineDelegate PurchaseConfirmationSuccess; // 0xf0(0x10)
	struct FMulticastInlineDelegate PurchaseConfirmationFailure; // 0x100(0x10)
	struct FMulticastInlineDelegate GetPurchaseHistorySuccess; // 0x110(0x10)
	struct FMulticastInlineDelegate GetPurchaseHistoryFailure; // 0x120(0x10)
	char pad_130[0x8]; // 0x130(0x08)

	bool TryPurchaseItemAsync(struct FPurchaseItemDetails ItemDetails); // Function MagicLeap.InAppPurchaseComponent.TryPurchaseItemAsync // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7af800
	bool TryGetPurchaseHistoryAsync(int32_t InNumPages); // Function MagicLeap.InAppPurchaseComponent.TryGetPurchaseHistoryAsync // (Final|Native|Public|BlueprintCallable) // @ game+0x7af770
	bool TryGetItemsDetailsAsync(struct TArray<struct FString> ItemIDs); // Function MagicLeap.InAppPurchaseComponent.TryGetItemsDetailsAsync // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7af690
	void PurchaseConfirmationSuccess__DelegateSignature(struct FPurchaseConfirmation PurchaseConfirmations); // DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationSuccess__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x1685580
	void PurchaseConfirmationFailure__DelegateSignature(); // DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationFailure__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1685580
	void InAppPurchaseLogMessage__DelegateSignature(struct FString LogMessage); // DelegateFunction MagicLeap.InAppPurchaseComponent.InAppPurchaseLogMessage__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1685580
	void GetPurchaseHistorySuccess__DelegateSignature(struct TArray<struct FPurchaseConfirmation> PurchaseHistory); // DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistorySuccess__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x1685580
	void GetPurchaseHistoryFailure__DelegateSignature(); // DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistoryFailure__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1685580
	void GetItemsDetailsSuccess__DelegateSignature(struct TArray<struct FPurchaseItemDetails> ItemsDetails); // DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsSuccess__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x1685580
	void GetItemsDetailsFailure__DelegateSignature(); // DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsFailure__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1685580
};

// Class MagicLeap.LuminApplicationLifecycleComponent
// Size: 0x1a0 (Inherited: 0x150)
struct ULuminApplicationLifecycleComponent : UApplicationLifecycleComponent {
	struct FMulticastInlineDelegate DeviceHasReactivatedDelegate; // 0x150(0x10)
	struct FMulticastInlineDelegate DeviceWillEnterRealityModeDelegate; // 0x160(0x10)
	struct FMulticastInlineDelegate DeviceWillGoInStandbyDelegate; // 0x170(0x10)
	struct FMulticastInlineDelegate FocusLostDelegate; // 0x180(0x10)
	struct FMulticastInlineDelegate FocusGainedDelegate; // 0x190(0x10)
};

// Class MagicLeap.MagicLeapHeadTrackingNotificationsComponent
// Size: 0x1e0 (Inherited: 0x150)
struct UMagicLeapHeadTrackingNotificationsComponent : UVRNotificationsComponent {
	struct FMulticastInlineDelegate OnHeadTrackingLost; // 0x150(0x10)
	struct FMulticastInlineDelegate OnHeadTrackingRecovered; // 0x160(0x10)
	struct FMulticastInlineDelegate OnHeadTrackingRecoveryFailed; // 0x170(0x10)
	struct FMulticastInlineDelegate OnHeadTrackingNewSessionStarted; // 0x180(0x10)
	char pad_190[0x50]; // 0x190(0x50)
};

// Class MagicLeap.MagicLeapHMDFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapHMDFunctionLibrary : UBlueprintFunctionLibrary {

	void SetStabilizationDepthActor(struct AActor* InStabilizationDepthActor, bool bSetFocusActor); // Function MagicLeap.MagicLeapHMDFunctionLibrary.SetStabilizationDepthActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7af5d0
	void SetFocusActor(struct AActor* InFocusActor, bool bSetStabilizationActor); // Function MagicLeap.MagicLeapHMDFunctionLibrary.SetFocusActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7af510
	void SetBaseRotation(struct FRotator InBaseRotation); // Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseRotation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7af490
	void SetBasePosition(struct FVector InBasePosition); // Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBasePosition // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7af490
	void SetBaseOrientation(struct FQuat InBaseOrientation); // Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseOrientation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7af490
	bool SetAppReady(); // Function MagicLeap.MagicLeapHMDFunctionLibrary.SetAppReady // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7af460
	bool IsRunningOnMagicLeapHMD(); // Function MagicLeap.MagicLeapHMDFunctionLibrary.IsRunningOnMagicLeapHMD // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x7aee20
	int32_t GetPlatformAPILevel(); // Function MagicLeap.MagicLeapHMDFunctionLibrary.GetPlatformAPILevel // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x7aed90
	int32_t GetMLSDKVersionRevision(); // Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionRevision // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x7aed90
	int32_t GetMLSDKVersionMinor(); // Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMinor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x7aed90
	int32_t GetMLSDKVersionMajor(); // Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMajor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x7aed90
	struct FString GetMLSDKVersion(); // Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersion // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x7aed10
	int32_t GetMinimumAPILevel(); // Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMinimumAPILevel // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x7aedc0
	bool GetHeadTrackingState(struct FMagicLeapHeadTrackingState State); // Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x7aec80
	bool GetHeadTrackingMapEvents(struct TSet<enum class EMagicLeapHeadTrackingMapEvent> MapEvents); // Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingMapEvents // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x7aeb50
	bool GetGraphicsClientPerformanceInfo(struct FMagicLeapGraphicsClientPerformanceInfo PerformanceInfo); // Function MagicLeap.MagicLeapHMDFunctionLibrary.GetGraphicsClientPerformanceInfo // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7aeaa0
};

// Class MagicLeap.MagicLeapMeshTrackerComponent
// Size: 0x290 (Inherited: 0x200)
struct UMagicLeapMeshTrackerComponent : USceneComponent {
	char pad_200[0x8]; // 0x200(0x08)
	struct FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x208(0x10)
	bool ScanWorld; // 0x218(0x01)
	enum class EMagicLeapMeshType MeshType; // 0x219(0x01)
	char pad_21A[0x6]; // 0x21a(0x06)
	struct UBoxComponent* BoundingVolume; // 0x220(0x08)
	enum class EMagicLeapMeshLOD LevelOfDetail; // 0x228(0x01)
	char pad_229[0x3]; // 0x229(0x03)
	float PerimeterOfGapsToFill; // 0x22c(0x04)
	bool Planarize; // 0x230(0x01)
	char pad_231[0x3]; // 0x231(0x03)
	float DisconnectedSectionArea; // 0x234(0x04)
	bool RequestNormals; // 0x238(0x01)
	bool RequestVertexConfidence; // 0x239(0x01)
	enum class EMagicLeapMeshVertexColorMode VertexColorMode; // 0x23a(0x01)
	char pad_23B[0x5]; // 0x23b(0x05)
	struct TArray<struct FColor> BlockVertexColors; // 0x240(0x10)
	struct FLinearColor VertexColorFromConfidenceZero; // 0x250(0x10)
	struct FLinearColor VertexColorFromConfidenceOne; // 0x260(0x10)
	bool RemoveOverlappingTriangles; // 0x270(0x01)
	char pad_271[0x7]; // 0x271(0x07)
	struct UMRMeshComponent* MRMesh; // 0x278(0x08)
	int32_t BricksPerFrame; // 0x280(0x04)
	char pad_284[0xc]; // 0x284(0x0c)

	void SelectMeshBlocks(struct FMagicLeapTrackingMeshInfo NewMeshInfo, struct TArray<struct FMagicLeapMeshBlockRequest> RequestedMesh); // Function MagicLeap.MagicLeapMeshTrackerComponent.SelectMeshBlocks // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x7af340
	void OnMeshTrackerUpdated__DelegateSignature(struct FGuid ID, struct TArray<struct FVector> Vertices, struct TArray<int32_t> Triangles, struct TArray<struct FVector> Normals, struct TArray<float> Confidence); // DelegateFunction MagicLeap.MagicLeapMeshTrackerComponent.OnMeshTrackerUpdated__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults) // @ game+0x1685580
	int32_t GetNumQueuedBlockUpdates(); // Function MagicLeap.MagicLeapMeshTrackerComponent.GetNumQueuedBlockUpdates // (Final|Native|Public|BlueprintCallable) // @ game+0x7aedf0
	void DisconnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectMRMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x7aea20
	void DisconnectBlockSelector(); // Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectBlockSelector // (Final|Native|Public|BlueprintCallable) // @ game+0x7aea00
	void ConnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectMRMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x7ae980
	void ConnectBlockSelector(struct TScriptInterface<IMagicLeapMeshBlockSelectorInterface> Selector); // Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectBlockSelector // (Final|Native|Public|BlueprintCallable) // @ game+0x7ae8e0
};

// Class MagicLeap.MagicLeapSettings
// Size: 0x30 (Inherited: 0x28)
struct UMagicLeapSettings : UObject {
	bool bEnableZI; // 0x28(0x01)
	bool bUseVulkanForZI; // 0x29(0x01)
	bool bUseMLAudioForZI; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
};

// Class MagicLeap.MagicLeapMeshBlockSelectorInterface
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapMeshBlockSelectorInterface : UInterface {

	void SelectMeshBlocks(struct FMagicLeapTrackingMeshInfo NewMeshInfo, struct TArray<struct FMagicLeapMeshBlockRequest> RequestedMesh); // Function MagicLeap.MagicLeapMeshBlockSelectorInterface.SelectMeshBlocks // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x7af220
};

// Class MagicLeap.MagicLeapRaycastComponent
// Size: 0x128 (Inherited: 0xc0)
struct UMagicLeapRaycastComponent : UActorComponent {
	char pad_C0[0x68]; // 0xc0(0x68)

	bool RequestRaycast(struct FMagicLeapRaycastQueryParams RequestParams, struct FDelegate ResultDelegate); // Function MagicLeap.MagicLeapRaycastComponent.RequestRaycast // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7af0d0
	void RaycastResultDelegate__DelegateSignature(struct FMagicLeapRaycastHitResult HitResult); // DelegateFunction MagicLeap.MagicLeapRaycastComponent.RaycastResultDelegate__DelegateSignature // (Public|Delegate) // @ game+0x1685580
};

// Class MagicLeap.MagicLeapRaycastFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapRaycastFunctionLibrary : UBlueprintFunctionLibrary {

	struct FMagicLeapRaycastQueryParams MakeRaycastQueryParams(struct FVector Position, struct FVector Direction, struct FVector UpVector, int32_t Width, int32_t Height, float HorizontalFovDegrees, bool CollideWithUnobserved, int32_t UserData); // Function MagicLeap.MagicLeapRaycastFunctionLibrary.MakeRaycastQueryParams // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x7aee50
};

