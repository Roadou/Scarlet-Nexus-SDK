// BlueprintGeneratedClass BP_CaptureBG.BP_CaptureBG_C
// Size: 0x3f2 (Inherited: 0x230)
struct ABP_CaptureBG_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USkeletalMeshComponent* SM_static_pl_bg_16_10; // 0x238(0x08)
	struct USkeletalMeshComponent* SM_co0300; // 0x240(0x08)
	struct URSSceneCaptureComponent2D* RSSceneCaptureComponent2D; // 0x248(0x08)
	struct UCameraComponent* Camera; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	float AlphaTimeline_Track_73321D8346DCED1672DCDEB05B1B477A; // 0x260(0x04)
	enum class ETimelineDirection AlphaTimeline__Direction_73321D8346DCED1672DCDEB05B1B477A; // 0x264(0x01)
	char pad_265[0x3]; // 0x265(0x03)
	struct UTimelineComponent* AlphaTimeline; // 0x268(0x08)
	float CycleEffectTimeline_Track_4D9120E94EF8CCF4B59AC7B350FD61B2; // 0x270(0x04)
	enum class ETimelineDirection CycleEffectTimeline__Direction_4D9120E94EF8CCF4B59AC7B350FD61B2; // 0x274(0x01)
	char pad_275[0x3]; // 0x275(0x03)
	struct UTimelineComponent* CycleEffectTimeline; // 0x278(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> MIDList; // 0x280(0x10)
	struct UTextureRenderTarget2D* RenderTarget; // 0x290(0x08)
	struct TArray<struct FString> vecAnimNamePath; // 0x298(0x10)
	struct TArray<bool> vecIsAnimationLoop; // 0x2a8(0x10)
	int32_t CycleEffectNo; // 0x2b8(0x04)
	struct FName CycleEffectParameterName; // 0x2bc(0x08)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct UCurveFloat* BlockNoiseValueCurve; // 0x2c8(0x08)
	float BlockNoiseValueTime; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct UCurveFloat* BlockNoiseValueCurve2; // 0x2d8(0x08)
	float BlockNoiseValueTime2; // 0x2e0(0x04)
	float BlockNoiseValueMaxTime; // 0x2e4(0x04)
	float BlockNoiseValueMaxTime2; // 0x2e8(0x04)
	struct FVector BlockNoiseUVScale; // 0x2ec(0x0c)
	struct FSStaticBGEffectParameter EffectParameter; // 0x2f8(0x1c)
	bool EffectEventMode; // 0x314(0x01)
	char pad_315[0x3]; // 0x315(0x03)
	struct URSParticleSystemComponentBase* CurrentFrameParticle; // 0x318(0x08)
	struct TSoftObjectPtr<USkeletalMesh> BGMeshAsset; // 0x320(0x28)
	struct TSoftObjectPtr<UParticleSystem> BGParticleAsset; // 0x348(0x28)
	struct UParticleSystem* BGParticleObject; // 0x370(0x08)
	struct TSoftObjectPtr<UMaterialInterface> LinearToSRGBMaterialAsset; // 0x378(0x28)
	struct TSoftObjectPtr<UMaterialInterface> BGMaterialAsset; // 0x3a0(0x28)
	struct TArray<struct UMaterialInstanceDynamic*> ParticleMIDArray; // 0x3c8(0x10)
	struct ABP_EventCaptureCamera_C* EventCaptureCamera; // 0x3d8(0x08)
	struct ARSLevelSequenceActor* LevelSequenceActor; // 0x3e0(0x08)
	struct UMaterialInterface* LinearToSRGBMaterial; // 0x3e8(0x08)
	bool bCaptureScene; // 0x3f0(0x01)
	bool bWaitSequenceCaptureScene; // 0x3f1(0x01)

	void ClearEventCaptureCamera(); // Function BP_CaptureBG.BP_CaptureBG_C.ClearEventCaptureCamera // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnResetRenderTarget(enum class ERenderTargetType RenderTargetType, struct UTextureRenderTarget2D* NewTarget); // Function BP_CaptureBG.BP_CaptureBG_C.OnResetRenderTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupPPM(struct URSSceneCaptureComponent2D* SceneCapture, struct UCineCameraComponent* AddPostProcess); // Function BP_CaptureBG.BP_CaptureBG_C.SetupPPM // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SequenceCaptureBG(struct ULevelSequence* InSequence, float NewPlaybackPosition); // Function BP_CaptureBG.BP_CaptureBG_C.SequenceCaptureBG // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTicks(bool Enabled); // Function BP_CaptureBG.BP_CaptureBG_C.SetTicks // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadAsset(); // Function BP_CaptureBG.BP_CaptureBG_C.LoadAsset // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventEnd(); // Function BP_CaptureBG.BP_CaptureBG_C.EventEnd // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugEffectScanline(); // Function BP_CaptureBG.BP_CaptureBG_C.DebugEffectScanline // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugEffectNoise(); // Function BP_CaptureBG.BP_CaptureBG_C.DebugEffectNoise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugEffectGlitch(); // Function BP_CaptureBG.BP_CaptureBG_C.DebugEffectGlitch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugEffectFringe(); // Function BP_CaptureBG.BP_CaptureBG_C.DebugEffectFringe // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EffectScanline(struct UCurveFloat* Curve, bool IsLoop); // Function BP_CaptureBG.BP_CaptureBG_C.EffectScanline // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EffectNoise(struct UCurveFloat* Curve, bool IsLoop); // Function BP_CaptureBG.BP_CaptureBG_C.EffectNoise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EffectGlitch(struct UCurveFloat* Curve, bool IsLoop); // Function BP_CaptureBG.BP_CaptureBG_C.EffectGlitch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EffectFringe(struct UCurveFloat* Curve, bool IsLoop); // Function BP_CaptureBG.BP_CaptureBG_C.EffectFringe // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupEventEffect(struct UCurveFloat* Curve, bool IsLoop); // Function BP_CaptureBG.BP_CaptureBG_C.SetupEventEffect // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateBlockNoiseOne(float DeltaSeconds, float Time, float maxTime); // Function BP_CaptureBG.BP_CaptureBG_C.UpdateBlockNoiseOne // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitBlockNoise(); // Function BP_CaptureBG.BP_CaptureBG_C.InitBlockNoise // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateBlockNoise(float DeltaSeconds); // Function BP_CaptureBG.BP_CaptureBG_C.UpdateBlockNoise // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndEvent(); // Function BP_CaptureBG.BP_CaptureBG_C.EndEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartEvent(); // Function BP_CaptureBG.BP_CaptureBG_C.StartEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEndMotion(bool IsEndMotion); // Function BP_CaptureBG.BP_CaptureBG_C.IsEndMotion // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddBordBGAnimation(struct FString boardAnimationName, bool IsLoop); // Function BP_CaptureBG.BP_CaptureBG_C.AddBordBGAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct UAnimationAsset* GetAnimSequenceForAnimNamePath(struct FString Path); // Function BP_CaptureBG.BP_CaptureBG_C.GetAnimSequenceForAnimNamePath // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayBoardBGAnimation(struct FString boardAnimationName, bool IsLoop, bool isAddMotion); // Function BP_CaptureBG.BP_CaptureBG_C.PlayBoardBGAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CaptureBG(); // Function BP_CaptureBG.BP_CaptureBG_C.CaptureBG // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CycleEffectTimeline__FinishedFunc(); // Function BP_CaptureBG.BP_CaptureBG_C.CycleEffectTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1685580
	void CycleEffectTimeline__UpdateFunc(); // Function BP_CaptureBG.BP_CaptureBG_C.CycleEffectTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1685580
	void AlphaTimeline__FinishedFunc(); // Function BP_CaptureBG.BP_CaptureBG_C.AlphaTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1685580
	void AlphaTimeline__UpdateFunc(); // Function BP_CaptureBG.BP_CaptureBG_C.AlphaTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1685580
	void Private_StartEffectCycle(); // Function BP_CaptureBG.BP_CaptureBG_C.Private_StartEffectCycle // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Private_StopEffectCycle(); // Function BP_CaptureBG.BP_CaptureBG_C.Private_StopEffectCycle // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Private_StartBlockNoise(); // Function BP_CaptureBG.BP_CaptureBG_C.Private_StartBlockNoise // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Private_EndBlockNoise(); // Function BP_CaptureBG.BP_CaptureBG_C.Private_EndBlockNoise // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Private_TickBlockNoise(float Delta Seconds); // Function BP_CaptureBG.BP_CaptureBG_C.Private_TickBlockNoise // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Private_EventEffectEnd(); // Function BP_CaptureBG.BP_CaptureBG_C.Private_EventEffectEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Private_EventEffectStart(); // Function BP_CaptureBG.BP_CaptureBG_C.Private_EventEffectStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_CaptureBG.BP_CaptureBG_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_CaptureBG.BP_CaptureBG_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void StartBGAlphaCurve(struct UCurveFloat* Curve); // Function BP_CaptureBG.BP_CaptureBG_C.StartBGAlphaCurve // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateCapturePost(); // Function BP_CaptureBG.BP_CaptureBG_C.PrivateCapturePost // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopWaitSequencer(); // Function BP_CaptureBG.BP_CaptureBG_C.StopWaitSequencer // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CaptureSceneBGForLevelSequencer(struct ULevelSequence* InSequence, float NewPlaybackPosition); // Function BP_CaptureBG.BP_CaptureBG_C.CaptureSceneBGForLevelSequencer // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopWaitSequencerNoCapture(); // Function BP_CaptureBG.BP_CaptureBG_C.StopWaitSequencerNoCapture // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_CaptureBG.BP_CaptureBG_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_CaptureBG(int32_t EntryPoint); // Function BP_CaptureBG.BP_CaptureBG_C.ExecuteUbergraph_BP_CaptureBG // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

