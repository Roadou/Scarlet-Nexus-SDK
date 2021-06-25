// BlueprintGeneratedClass BP_UILoading3D.BP_UILoading3D_C
// Size: 0x408 (Inherited: 0x230)
struct ABP_UILoading3D_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UStaticMeshComponent* Ground; // 0x238(0x08)
	struct URSSceneCaptureComponent2D* RSSceneCaptureComponent2D; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	struct TArray<struct TSoftClassPtr<UObject>> CharacterClass; // 0x250(0x10)
	struct TArray<struct AActor*> characterList; // 0x260(0x10)
	char RenderLayer; // 0x270(0x01)
	char pad_271[0x7]; // 0x271(0x07)
	struct TSoftObjectPtr<UMaterialInterface> RenderMaterialAsset; // 0x278(0x28)
	struct TSoftObjectPtr<UMaterialInterface> RenderLineMaterialAsset; // 0x2a0(0x28)
	struct TSoftObjectPtr<UMaterialInterface> PPSilhouetteMaterialAsset; // 0x2c8(0x28)
	struct UMaterialInterface* RenderMaterial; // 0x2f0(0x08)
	struct TSoftObjectPtr<UDataTable> SceneDataTableAsset; // 0x2f8(0x28)
	struct TSoftObjectPtr<UDataTable> GeneralDataTableAsset; // 0x320(0x28)
	struct FVector CameraOffset; // 0x348(0x0c)
	char pad_354[0x4]; // 0x354(0x04)
	struct TArray<struct UStaticMeshComponent*> Lines; // 0x358(0x10)
	struct UMaterialInterface* RenderLineMaterial; // 0x368(0x08)
	struct UDataTable* GeneralTable; // 0x370(0x08)
	struct TArray<int32_t> LineDataIndex; // 0x378(0x10)
	int32_t NowSceneID; // 0x388(0x04)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct TArray<float> DefaultCharacterLocationX; // 0x390(0x10)
	struct FUILoading3DGeneral GeneralSetting; // 0x3a0(0x40)
	struct TArray<float> CharacterMoveSpeedScale; // 0x3e0(0x10)
	struct UMaterialInstanceDynamic* PPLoadingMaterialInstance; // 0x3f0(0x08)
	struct TArray<float> CharacterDepthList; // 0x3f8(0x10)

	void PrivateResetRenderTarget(enum class ERenderTargetType RenderTargetType, struct UTextureRenderTarget2D* NewTarget); // Function BP_UILoading3D.BP_UILoading3D_C.PrivateResetRenderTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAttachmentLoadComplete_10(); // Function BP_UILoading3D.BP_UILoading3D_C.OnAttachmentLoadComplete_10 // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAttachmentLoadComplete_9(); // Function BP_UILoading3D.BP_UILoading3D_C.OnAttachmentLoadComplete_9 // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAttachmentLoadComplete_8(); // Function BP_UILoading3D.BP_UILoading3D_C.OnAttachmentLoadComplete_8 // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAttachmentLoadComplete_7(); // Function BP_UILoading3D.BP_UILoading3D_C.OnAttachmentLoadComplete_7 // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAttachmentLoadComplete_6(); // Function BP_UILoading3D.BP_UILoading3D_C.OnAttachmentLoadComplete_6 // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAttachmentLoadComplete_5(); // Function BP_UILoading3D.BP_UILoading3D_C.OnAttachmentLoadComplete_5 // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAttachmentLoadComplete_4(); // Function BP_UILoading3D.BP_UILoading3D_C.OnAttachmentLoadComplete_4 // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAttachmentLoadComplete_3(); // Function BP_UILoading3D.BP_UILoading3D_C.OnAttachmentLoadComplete_3 // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAttachmentLoadComplete_2(); // Function BP_UILoading3D.BP_UILoading3D_C.OnAttachmentLoadComplete_2 // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAttachmentLoadComplete_1(); // Function BP_UILoading3D.BP_UILoading3D_C.OnAttachmentLoadComplete_1 // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAttachmentLoadCompleteInternal(int32_t CharaIndex); // Function BP_UILoading3D.BP_UILoading3D_C.OnAttachmentLoadCompleteInternal // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugUpdateInput(float InputRate); // Function BP_UILoading3D.BP_UILoading3D_C.DebugUpdateInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdateInput(float DeltaSeconds, float InputRate); // Function BP_UILoading3D.BP_UILoading3D_C.PrivateUpdateInput // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdate(float DeltaSeconds); // Function BP_UILoading3D.BP_UILoading3D_C.PrivateUpdate // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateGetTransformFromCharacterData(struct FUILoading3DSceneCharacterData CharacterData, struct FTransform Transform); // Function BP_UILoading3D.BP_UILoading3D_C.PrivateGetTransformFromCharacterData // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void DebugResetSceneTransform(); // Function BP_UILoading3D.BP_UILoading3D_C.DebugResetSceneTransform // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsVisibleMaterial(struct USkeletalMeshComponent* SkeletalMesh, int32_t MaterialID, bool IsVisible); // Function BP_UILoading3D.BP_UILoading3D_C.IsVisibleMaterial // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void PrivateSetupLine(struct UStaticMeshComponent* Line, int32_t Index); // Function BP_UILoading3D.BP_UILoading3D_C.PrivateSetupLine // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugResetLineData(); // Function BP_UILoading3D.BP_UILoading3D_C.DebugResetLineData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReloadGeneralTable(); // Function BP_UILoading3D.BP_UILoading3D_C.ReloadGeneralTable // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateCreateLines(int32_t Num); // Function BP_UILoading3D.BP_UILoading3D_C.PrivateCreateLines // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugReloadCameraOffset(int32_t LoadingID); // Function BP_UILoading3D.BP_UILoading3D_C.DebugReloadCameraOffset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCameraSetting(float CaptureSize, float CameraHeight); // Function BP_UILoading3D.BP_UILoading3D_C.GetCameraSetting // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetupCameraFromParam(float InCameraSize, float InCameraOffsetZ); // Function BP_UILoading3D.BP_UILoading3D_C.SetupCameraFromParam // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReleaseScene(); // Function BP_UILoading3D.BP_UILoading3D_C.ReleaseScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupCamera(); // Function BP_UILoading3D.BP_UILoading3D_C.SetupCamera // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function BP_UILoading3D.BP_UILoading3D_C.Initialize // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupRenderTarget(struct UTextureRenderTarget2D* Target); // Function BP_UILoading3D.BP_UILoading3D_C.PrivateSetupRenderTarget // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupScene(); // Function BP_UILoading3D.BP_UILoading3D_C.SetupScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetTexture(struct UTexture* Texture); // Function BP_UILoading3D.BP_UILoading3D_C.GetTexture // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupSceneFromID(int32_t LoadingID); // Function BP_UILoading3D.BP_UILoading3D_C.SetupSceneFromID // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_UILoading3D.BP_UILoading3D_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_UILoading3D.BP_UILoading3D_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_UILoading3D.BP_UILoading3D_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_UILoading3D.BP_UILoading3D_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_UILoading3D(int32_t EntryPoint); // Function BP_UILoading3D.BP_UILoading3D_C.ExecuteUbergraph_BP_UILoading3D // (Final|UbergraphFunction) // @ game+0x1685580
};

