// BlueprintGeneratedClass BP_PostProcessManager.BP_PostProcessManager_C
// Size: 0x980 (Inherited: 0x238)
struct ABP_PostProcessManager_C : APostProcessManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UPostProcessComponent* DamagePostProcess; // 0x240(0x08)
	struct UPostProcessComponent* PerformPostProcess; // 0x248(0x08)
	struct UChildActorComponent* OverraySystem; // 0x250(0x08)
	struct UPostProcessComponent* SequencerPostProcess; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	struct TArray<struct UPostProcessComponent*> DirectionPPComponents; // 0x268(0x10)
	int32_t DirectionMax; // 0x278(0x04)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct TArray<float> LerpSpeed; // 0x280(0x10)
	struct TArray<bool> UsePPComponents; // 0x290(0x10)
	float PriorityOffset; // 0x2a0(0x04)
	float BasePriority; // 0x2a4(0x04)
	struct UMaterialInstanceDynamic* DamagePostProcessMaterial; // 0x2a8(0x08)
	struct UMaterialInterface* OutlineMaterial; // 0x2b0(0x08)
	struct UMaterialInterface* OutlineNoEmissionMaterial; // 0x2b8(0x08)
	struct UMaterialInterface* OutlineNoCustomDepthMaterial; // 0x2c0(0x08)
	struct UMaterialInterface* OutlineAfterFogMaterial; // 0x2c8(0x08)
	struct UMaterialInterface* OutlineAfterFogNoCustomDepthMaterial; // 0x2d0(0x08)
	struct UMaterialInterface* OutlineFrontMaterial; // 0x2d8(0x08)
	struct UMaterialInstanceDynamic* AcceleratorMaterial; // 0x2e0(0x08)
	struct TSoftObjectPtr<UMaterialInterface> OutlineMaterialAsset; // 0x2e8(0x28)
	struct TSoftObjectPtr<UMaterialInterface> OutlineNoEmissionMaterialAsset; // 0x310(0x28)
	struct TSoftObjectPtr<UMaterialInterface> OutlineNoCustomDepthMaterialAsset; // 0x338(0x28)
	struct TSoftObjectPtr<UMaterialInterface> OutlineFrontMaterialAsset; // 0x360(0x28)
	struct TSoftObjectPtr<UMaterialInterface> OutlineFrontNoEmissionMaterialAsset; // 0x388(0x28)
	struct TSoftObjectPtr<UMaterialInterface> OutlineFrontNoCustomDepthMaterialAsset; // 0x3b0(0x28)
	struct TSoftObjectPtr<UMaterialInterface> OutlineAfterFogMaterialAsset; // 0x3d8(0x28)
	struct TSoftObjectPtr<UMaterialInterface> OutlineAfterFogNoCustomDepthMaterialAsset; // 0x400(0x28)
	struct TSoftObjectPtr<UMaterialInterface> RadialBlurMaterialAsset; // 0x428(0x28)
	struct UMaterialInterface* RadialBlurMaterial; // 0x450(0x08)
	struct UMaterialInterface* HyperSpeedMaterial; // 0x458(0x08)
	struct TSoftObjectPtr<UMaterialInterface> HyperSpeedMaterialAsset; // 0x460(0x28)
	struct TSoftObjectPtr<UMaterialInterface> DamageMaterialAsset; // 0x488(0x28)
	struct UMaterialInterface* ScreenLightMaterialObject; // 0x4b0(0x08)
	struct UMaterialInterface* DamageMaterial; // 0x4b8(0x08)
	struct TSoftObjectPtr<UMaterialInterface> SeeThroughMaterialAsset; // 0x4c0(0x28)
	struct UMaterialInterface* SeeThroughMaterialObject; // 0x4e8(0x08)
	struct UMaterialInstanceDynamic* SeeThroughMaterial; // 0x4f0(0x08)
	float SeeThroughRate; // 0x4f8(0x04)
	float AcceleratorRate; // 0x4fc(0x04)
	bool AcceleratorStart; // 0x500(0x01)
	char pad_501[0x7]; // 0x501(0x07)
	struct TArray<struct FWeightedBlendable> RestorePerformPPM; // 0x508(0x10)
	struct TArray<struct FWeightedBlendable> RestoreDamagePPM; // 0x518(0x10)
	struct TArray<struct APostProcessVolume*> RestoreScenePPV; // 0x528(0x10)
	struct TSoftObjectPtr<UMaterialInterface> ScreenLightMaterialAsset; // 0x538(0x28)
	struct TArray<struct TSoftObjectPtr<UMaterialInterface>> VisionFogMaterialAsset; // 0x560(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> VisionFogMaterial; // 0x570(0x10)
	struct TArray<struct UMaterialInterface*> VisionFogMaterialObject; // 0x580(0x10)
	struct TArray<float> VisionFogRate; // 0x590(0x10)
	struct UMaterialInstanceDynamic* VisionFogActiveMaterial; // 0x5a0(0x08)
	enum class EVisionFogID VisionFogActiveID; // 0x5a8(0x01)
	char pad_5A9[0x3]; // 0x5a9(0x03)
	float VisionFogActiveRate; // 0x5ac(0x04)
	float VisionFogSeeThroughRate; // 0x5b0(0x04)
	float VisionFogVelocity; // 0x5b4(0x04)
	float VisionFogDefaultFogNear; // 0x5b8(0x04)
	float VisionFogDefaultFogFar; // 0x5bc(0x04)
	float SeeThroughDefaultBlurPower; // 0x5c0(0x04)
	struct FVector VisionFogVelocityVector; // 0x5c4(0x0c)
	struct FVector VisionFogLastPlayerLocation; // 0x5d0(0x0c)
	int32_t DefaultPicturizeQuality; // 0x5dc(0x04)
	struct UMaterialInterface* SimpleFadeMaterialObject; // 0x5e0(0x08)
	struct UMaterialInterface* OutlineFrontNoEmissionMaterial; // 0x5e8(0x08)
	struct UMaterialInterface* OutlineFrontNoCustomDepthMaterial; // 0x5f0(0x08)
	struct UMaterialInterface* OutlineVisionFogCounterMaterial; // 0x5f8(0x08)
	bool OutlinePriorityFront; // 0x600(0x01)
	char pad_601[0x7]; // 0x601(0x07)
	struct TSoftObjectPtr<UMaterialInterface> SimpleFadeMaterialAsset; // 0x608(0x28)
	struct UMaterialInstanceDynamic* SimpleFadeMaterial; // 0x630(0x08)
	struct TArray<struct UPostProcessComponent*> PerformShotPostProcessList; // 0x638(0x10)
	struct TSoftObjectPtr<UDataTable> PerformShotDataTableAsset; // 0x648(0x28)
	struct TArray<struct FPerformShotData> PerformShotData; // 0x670(0x10)
	struct TArray<float> PerformShotTime; // 0x680(0x10)
	struct TArray<enum class EPerformShotState> PerformShotState; // 0x690(0x10)
	struct UMaterialInstanceDynamic* ScreenLightMaterial; // 0x6a0(0x08)
	struct TSoftObjectPtr<UMaterialInterface> LevelupMaterialAsset; // 0x6a8(0x28)
	struct UMaterialInterface* LevelupMaterialObject; // 0x6d0(0x08)
	struct UMaterialInstanceDynamic* LevelupMaterial; // 0x6d8(0x08)
	struct TArray<float> LevelupTimer; // 0x6e0(0x10)
	struct TArray<bool> ActiveLevelup; // 0x6f0(0x10)
	float LevelupMaxTimer; // 0x700(0x04)
	float PreviousGameTime; // 0x704(0x04)
	bool SeeThroughStart; // 0x708(0x01)
	char pad_709[0x7]; // 0x709(0x07)
	struct UMaterialInterface* FishEyeMaterialObject; // 0x710(0x08)
	struct UMaterialInstanceDynamic* FishEyeMaterial; // 0x718(0x08)
	struct TSoftObjectPtr<UMaterialInterface> FishEyeMaterialAsset; // 0x720(0x28)
	struct TArray<struct FArrayOfFloat> VisionFogMaterialDefaultParam; // 0x748(0x10)
	struct TArray<struct FName> VisionFogMaterialDefaultParamName; // 0x758(0x10)
	enum class RSPartyPlayerKind RecoverNPCKind; // 0x768(0x01)
	char pad_769[0x3]; // 0x769(0x03)
	float RecoverNPCTimer; // 0x76c(0x04)
	bool RecoverNPCActive; // 0x770(0x01)
	char pad_771[0x7]; // 0x771(0x07)
	struct UCurveVector* RecoverNPCCurve; // 0x778(0x08)
	struct TSoftObjectPtr<UMaterialInterface> RecoverNPCMaterialAsset; // 0x780(0x28)
	struct UMaterialInstanceDynamic* RecoverNPCMaterialObject; // 0x7a8(0x08)
	struct UPostProcessParam* PostProcessParam; // 0x7b0(0x08)
	float DamagePPMFlash; // 0x7b8(0x04)
	float DamagePPMPower; // 0x7bc(0x04)
	bool TickTimeline; // 0x7c0(0x01)
	char pad_7C1[0x7]; // 0x7c1(0x07)
	struct TSoftObjectPtr<UMaterialInstance> KarenMemoryMaterialAsset; // 0x7c8(0x28)
	struct UMaterialInterface* KarenMemoryMaterialObject; // 0x7f0(0x08)
	struct UMaterialInstance* KarenMemoryMaterial; // 0x7f8(0x08)
	enum class EVisionFogID VisionFogEventComID; // 0x800(0x01)
	char pad_801[0x3]; // 0x801(0x03)
	float VisionFogEventComStartRate; // 0x804(0x04)
	float VisionFogEventComTargetRate; // 0x808(0x04)
	float VisionFogEventComInterpTime; // 0x80c(0x04)
	float VisionFogEventComNowTime; // 0x810(0x04)
	bool VisionFogEventComInterp; // 0x814(0x01)
	char pad_815[0x3]; // 0x815(0x03)
	struct TArray<float> VisionFogFar; // 0x818(0x10)
	struct TArray<float> VisionFogNear; // 0x828(0x10)
	struct TArray<struct AActor*> RestoreMenuElevator; // 0x838(0x10)
	bool IsSetupMenu; // 0x848(0x01)
	char pad_849[0x3]; // 0x849(0x03)
	struct FRenderingSettings RenderingSettingsBase; // 0x84c(0x78)
	bool OutlineNoCustomDepth; // 0x8c4(0x01)
	bool UseDebugQuality; // 0x8c5(0x01)
	enum class EGradualQuality DebugQualitySoftFocus; // 0x8c6(0x01)
	enum class EGradualQuality DebugQualityLuminousSmudge ; // 0x8c7(0x01)
	enum class EGradualQuality DebugQualityGradScreenMask; // 0x8c8(0x01)
	enum class EGradualQuality DebugQualityBothSideRim; // 0x8c9(0x01)
	enum class EGradualQuality DebugQualityLightUp; // 0x8ca(0x01)
	enum class EGradualQuality DebugQualityFieldBlur; // 0x8cb(0x01)
	enum class EGradualQuality DebugQualityLightShaft; // 0x8cc(0x01)
	enum class EGradualQuality DebugQualityDrivePlane; // 0x8cd(0x01)
	enum class EGradualQuality DebugQualitySAS; // 0x8ce(0x01)
	enum class EGradualQuality DebugQualityBrainCrash; // 0x8cf(0x01)
	bool OutlineOFF; // 0x8d0(0x01)
	char pad_8D1[0x3]; // 0x8d1(0x03)
	struct FRenderingSettings RenderingSettingsLocation; // 0x8d4(0x78)
	float VisionFogEm8300LightShaftParam; // 0x94c(0x04)
	bool VisionFogEm8300LightShaftON; // 0x950(0x01)
	bool OutlineVisionFogCounter; // 0x951(0x01)
	char pad_952[0x6]; // 0x952(0x06)
	struct TSoftObjectPtr<UMaterialInterface> OutlineVisionFogCounterMaterialAsset; // 0x958(0x28)

	void SetSASPPMCancelCelLook(bool Enable); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetSASPPMCancelCelLook // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsActivePerformShot(enum class EPerformShotType ShotType, bool IsActive); // Function BP_PostProcessManager.BP_PostProcessManager_C.IsActivePerformShot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsNeedFrameWait(); // Function BP_PostProcessManager.BP_PostProcessManager_C.IsNeedFrameWait // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateOnChangeArea(enum class EChangeAreaStatus Status, bool IsChangeLocation); // Function BP_PostProcessManager.BP_PostProcessManager_C.PrivateOnChangeArea // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearRenderingSettingsLocation(); // Function BP_PostProcessManager.BP_PostProcessManager_C.ClearRenderingSettingsLocation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRenderingSettingsLocation(int32_t LocationId, int32_t areaId); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetRenderingSettingsLocation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRenderingSettingsSSRResolutionInternal(struct FRenderingSettings BaseSettings, struct FName OverrideParamName); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetRenderingSettingsSSRResolutionInternal // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetOutlineOFF(bool Off); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetOutlineOFF // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetOutlineENPC(bool BrainField, float Alpha); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetOutlineENPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupOutlineOptimizeNoCustomDepth(bool Enable); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetupOutlineOptimizeNoCustomDepth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRenderingSettingsTest(struct FName NewParam); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetRenderingSettingsTest // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRenderingSettingsSSRResolution(enum class ERenderingSettingsType RenderingSettingType); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetRenderingSettingsSSRResolution // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRenderingSettingsTranslucencyInternal(struct FRenderingSettings BaseSettings, struct FName OverrideParamName); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetRenderingSettingsTranslucencyInternal // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRenderingSettingsMergeInternal(struct FRenderingSettings BaseSettings, struct FName OverrideParamName, struct FRenderingSettings MergeSettings); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetRenderingSettingsMergeInternal // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRenderingSettingsTranslucency(enum class ERenderingSettingsType RenderingSettingType); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetRenderingSettingsTranslucency // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRenderingSettingsALLDynamicEvent(); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetRenderingSettingsALLDynamicEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRenderingSettingsALLDefault(); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetRenderingSettingsALLDefault // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetPerformShotFov(enum class EPerformShotType ShotType, bool Enable, bool OneShot); // Function BP_PostProcessManager.BP_PostProcessManager_C.PrivateSetPerformShotFov // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Setup Outline PPM(); // Function BP_PostProcessManager.BP_PostProcessManager_C.Setup Outline PPM // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAlways(); // Function BP_PostProcessManager.BP_PostProcessManager_C.UpdateAlways // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEventCommandVisionFogRate(enum class EVisionFogID FogID, float Rate, float Time); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetEventCommandVisionFogRate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupKarenMemory(); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetupKarenMemory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateRecoverNPC(float DeltaSeconds, bool Active); // Function BP_PostProcessManager.BP_PostProcessManager_C.UpdateRecoverNPC // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartRecoverNPC(enum class RSPartyPlayerKind PlayerKind); // Function BP_PostProcessManager.BP_PostProcessManager_C.StartRecoverNPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateGetVisionFogMaterialParameter(enum class EVisionFogID VisionFogID, struct TArray<float> Mid); // Function BP_PostProcessManager.BP_PostProcessManager_C.PrivateGetVisionFogMaterialParameter // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetupFishEye(); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetupFishEye // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAcceleratorInterpolateTime(float StartSeconds, float EndSeconds); // Function BP_PostProcessManager.BP_PostProcessManager_C.GetAcceleratorInterpolateTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSeeThroughInterpolateTime(float StartSeconds, float EndSeconds); // Function BP_PostProcessManager.BP_PostProcessManager_C.GetSeeThroughInterpolateTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugReloadPerformTable(); // Function BP_PostProcessManager.BP_PostProcessManager_C.DebugReloadPerformTable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartLevelup(enum class RSPartyPlayerKind PartyKind); // Function BP_PostProcessManager.BP_PostProcessManager_C.StartLevelup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateLevelup(float DeltaSeconds, bool Active); // Function BP_PostProcessManager.BP_PostProcessManager_C.UpdateLevelup // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupLevelup(); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetupLevelup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetScreenLight(); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetScreenLight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupScreenLight(); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetupScreenLight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateInitializePerformShotPostProcessReload(); // Function BP_PostProcessManager.BP_PostProcessManager_C.PrivateInitializePerformShotPostProcessReload // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupPerformShotRateValues(int32_t Index, float Weight, bool UseBlur, bool UseFov, struct FPerformShotData ShotData); // Function BP_PostProcessManager.BP_PostProcessManager_C.PrivateSetupPerformShotRateValues // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateGetPerformShotFinishTime(int32_t Index, float StartFinishTime, float LoopTime, float EndFinishTime); // Function BP_PostProcessManager.BP_PostProcessManager_C.PrivateGetPerformShotFinishTime // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupPerformShotRate(int32_t Index); // Function BP_PostProcessManager.BP_PostProcessManager_C.PrivateSetupPerformShotRate // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePerformShot(float DeltaSeconds, bool Active); // Function BP_PostProcessManager.BP_PostProcessManager_C.UpdatePerformShot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPerformShot(enum class EPerformShotType ShotType, bool OneTime); // Function BP_PostProcessManager.BP_PostProcessManager_C.EndPerformShot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartPerformShot(enum class EPerformShotType ShotType, bool OneTime); // Function BP_PostProcessManager.BP_PostProcessManager_C.StartPerformShot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateInitializePerformShotPostProcess(); // Function BP_PostProcessManager.BP_PostProcessManager_C.PrivateInitializePerformShotPostProcess // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupSimpleFade(); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetupSimpleFade // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSimpleFade(float Rate, struct FLinearColor Color); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetSimpleFade // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsOutlinePriorityFront(bool IsFront); // Function BP_PostProcessManager.BP_PostProcessManager_C.IsOutlinePriorityFront // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void PrivateSetupPicturizeQuality(); // Function BP_PostProcessManager.BP_PostProcessManager_C.PrivateSetupPicturizeQuality // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetVisionFogRate(enum class EVisionFogID VisionFogID, float Rate); // Function BP_PostProcessManager.BP_PostProcessManager_C.PrivateSetVisionFogRate // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateGetVisionFogRate(enum class EVisionFogID VisionFogID, float Rate); // Function BP_PostProcessManager.BP_PostProcessManager_C.PrivateGetVisionFogRate // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void PrivateGetVisionFogMaterial(enum class EVisionFogID VisionFogID, struct UMaterialInstanceDynamic* Mid); // Function BP_PostProcessManager.BP_PostProcessManager_C.PrivateGetVisionFogMaterial // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ClearCinematicSeeThrough(); // Function BP_PostProcessManager.BP_PostProcessManager_C.ClearCinematicSeeThrough // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupCinematicSeeThrough(float Rate, float BlurPower); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetupCinematicSeeThrough // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearCinematicVisionFog(); // Function BP_PostProcessManager.BP_PostProcessManager_C.ClearCinematicVisionFog // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupCinematicVisionFog(enum class EVisionFogID VisionFogID, float Rate, float FogNear, float FogFar, struct FVector CenterLocation); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetupCinematicVisionFog // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRadialBlur(float Rate, float BlurSize, struct FVector BlurCenter, struct FVector BlurColor); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetRadialBlur // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAcceleratorParameterFromRate(float Rate, struct FLinearColor BlurCenter); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetAcceleratorParameterFromRate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearLocalRadialBlur(struct UMaterialInstanceDynamic* PPMaterial); // Function BP_PostProcessManager.BP_PostProcessManager_C.ClearLocalRadialBlur // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupLocalRadialBlur(struct UMaterialInstanceDynamic* PPMaterial, float Rate, float BlurSize, struct FVector BlurCenter, struct FVector BlurColor); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetupLocalRadialBlur // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearLocalAccelerator(struct UMaterialInstanceDynamic* PPMaterial); // Function BP_PostProcessManager.BP_PostProcessManager_C.ClearLocalAccelerator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupLocalAccelerator(struct UMaterialInstanceDynamic* PPMaterial, float Rate, struct FVector BlurCenter); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetupLocalAccelerator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearLocalSeeThrough(struct UMaterialInstanceDynamic* PPMaterial); // Function BP_PostProcessManager.BP_PostProcessManager_C.ClearLocalSeeThrough // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupLocalSeeThrough(struct UMaterialInstanceDynamic* PPMaterial, float Rate, float BlurPower); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetupLocalSeeThrough // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearLocalVIsionFog(struct UMaterialInstanceDynamic* PPMaterial); // Function BP_PostProcessManager.BP_PostProcessManager_C.ClearLocalVIsionFog // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupLocalVIsionFog(struct UMaterialInstanceDynamic* PPMaterial, float Rate, float FogNear, float FogFar, struct FVector CenterLocation); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetupLocalVIsionFog // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateVisionFog(float DeltaSeconds, bool Active); // Function BP_PostProcessManager.BP_PostProcessManager_C.UpdateVisionFog // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupVisionFogMaterial(enum class EVisionFogID VisionFogID); // Function BP_PostProcessManager.BP_PostProcessManager_C.PrivateSetupVisionFogMaterial // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsActiveVisionFog(bool Active); // Function BP_PostProcessManager.BP_PostProcessManager_C.IsActiveVisionFog // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetVisionFogRate(enum class EVisionFogID VisionFogID, float Rate); // Function BP_PostProcessManager.BP_PostProcessManager_C.GetVisionFogRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetVisionFogRate(enum class EVisionFogID VisionFogID, float Rate); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetVisionFogRate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupVisionFogPP(); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetupVisionFogPP // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateRestoreScenePP(struct UPostProcessComponent* PostProcess, struct TArray<struct FWeightedBlendable> RestoreWork); // Function BP_PostProcessManager.BP_PostProcessManager_C.PrivateRestoreScenePP // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RestoreScene(); // Function BP_PostProcessManager.BP_PostProcessManager_C.RestoreScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupMenuPP(struct UPostProcessComponent* PostProcess, struct TArray<struct FWeightedBlendable> RestoreWork); // Function BP_PostProcessManager.BP_PostProcessManager_C.PrivateSetupMenuPP // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupMenu(); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetupMenu // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAcceleratorParameter(float RedBlurColorMul, float RedBlurPower, float NoRedBlurRadius, float PPTime, struct FLinearColor BlurCenter); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetAcceleratorParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAcceleratorRate(float Rate); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetAcceleratorRate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSeeThroughRate(float Rate); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetSeeThroughRate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupSeeThroughPP(); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetupSeeThroughPP // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateInitializePerformPostProcess(); // Function BP_PostProcessManager.BP_PostProcessManager_C.PrivateInitializePerformPostProcess // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadAsset(); // Function BP_PostProcessManager.BP_PostProcessManager_C.LoadAsset // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EnableDamagePostProcess(bool Enable); // Function BP_PostProcessManager.BP_PostProcessManager_C.EnableDamagePostProcess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsActiveDamagePostProcess(bool Active); // Function BP_PostProcessManager.BP_PostProcessManager_C.IsActiveDamagePostProcess // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupAcceleratorPP(); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetupAcceleratorPP // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupOutlinePriorityFront(); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetupOutlinePriorityFront // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupOutlinePriorityDefault(); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetupOutlinePriorityDefault // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDamagePostProcessPowerFlash(float Power); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetDamagePostProcessPowerFlash // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDamagePostProcessPower(float Power); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetDamagePostProcessPower // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupDamagePostProcess(); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetupDamagePostProcess // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPerformPostProcess(struct UPostProcessComponent* PostProcess); // Function BP_PostProcessManager.BP_PostProcessManager_C.GetPerformPostProcess // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetSequencerPostProcessSetting(struct FPostProcessSettings Settings, float BlendWeight); // Function BP_PostProcessManager.BP_PostProcessManager_C.SetSequencerPostProcessSetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetSequencerPostProcess(); // Function BP_PostProcessManager.BP_PostProcessManager_C.ResetSequencerPostProcess // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPostProcess(int32_t Handle, float TimeSeconds); // Function BP_PostProcessManager.BP_PostProcessManager_C.EndPostProcess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(float DeltaSeconds); // Function BP_PostProcessManager.BP_PostProcessManager_C.Update // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetUnusedComponent(int32_t Index); // Function BP_PostProcessManager.BP_PostProcessManager_C.GetUnusedComponent // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartPostProcess(struct FPostProcessSettings Settings, float TimeSeconds, int32_t Handle); // Function BP_PostProcessManager.BP_PostProcessManager_C.StartPostProcess // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_PostProcessManager.BP_PostProcessManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_PostProcessManager.BP_PostProcessManager_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_PostProcessManager.BP_PostProcessManager_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ImmediateExposure(); // Function BP_PostProcessManager.BP_PostProcessManager_C.ImmediateExposure // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DelayBeginPlay(); // Function BP_PostProcessManager.BP_PostProcessManager_C.DelayBeginPlay // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearPool(); // Function BP_PostProcessManager.BP_PostProcessManager_C.ClearPool // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PostProcessManager(int32_t EntryPoint); // Function BP_PostProcessManager.BP_PostProcessManager_C.ExecuteUbergraph_BP_PostProcessManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

