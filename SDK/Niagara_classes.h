// Class Niagara.NiagaraDataInterface
// Size: 0x30 (Inherited: 0x28)
struct UNiagaraDataInterface : UNiagaraDataInterfaceBase {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class Niagara.MovieSceneNiagaraTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneNiagaraTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x58(0x10)
};

// Class Niagara.MovieSceneNiagaraParameterTrack
// Size: 0x90 (Inherited: 0x68)
struct UMovieSceneNiagaraParameterTrack : UMovieSceneNiagaraTrack {
	struct FNiagaraVariable Parameter; // 0x68(0x28)
};

// Class Niagara.MovieSceneNiagaraBoolParameterTrack
// Size: 0x90 (Inherited: 0x90)
struct UMovieSceneNiagaraBoolParameterTrack : UMovieSceneNiagaraParameterTrack {
};

// Class Niagara.MovieSceneNiagaraColorParameterTrack
// Size: 0x90 (Inherited: 0x90)
struct UMovieSceneNiagaraColorParameterTrack : UMovieSceneNiagaraParameterTrack {
};

// Class Niagara.MovieSceneNiagaraFloatParameterTrack
// Size: 0x90 (Inherited: 0x90)
struct UMovieSceneNiagaraFloatParameterTrack : UMovieSceneNiagaraParameterTrack {
};

// Class Niagara.MovieSceneNiagaraIntegerParameterTrack
// Size: 0x90 (Inherited: 0x90)
struct UMovieSceneNiagaraIntegerParameterTrack : UMovieSceneNiagaraParameterTrack {
};

// Class Niagara.MovieSceneNiagaraSystemSpawnSection
// Size: 0xf0 (Inherited: 0xe0)
struct UMovieSceneNiagaraSystemSpawnSection : UMovieSceneSection {
	enum class ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior; // 0xe0(0x04)
	enum class ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior; // 0xe4(0x04)
	enum class ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior; // 0xe8(0x04)
	enum class ENiagaraAgeUpdateMode AgeUpdateMode; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
};

// Class Niagara.MovieSceneNiagaraSystemTrack
// Size: 0x68 (Inherited: 0x68)
struct UMovieSceneNiagaraSystemTrack : UMovieSceneNiagaraTrack {
};

// Class Niagara.MovieSceneNiagaraVectorParameterTrack
// Size: 0x98 (Inherited: 0x90)
struct UMovieSceneNiagaraVectorParameterTrack : UMovieSceneNiagaraParameterTrack {
	int32_t ChannelsUsed; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// Class Niagara.NiagaraActor
// Size: 0x240 (Inherited: 0x230)
struct ANiagaraActor : AActor {
	struct UNiagaraComponent* NiagaraComponent; // 0x230(0x08)
	char bDestroyOnSystemFinish : 1; // 0x238(0x01)
	char pad_238_1 : 7; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)

	void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish); // Function Niagara.NiagaraActor.SetDestroyOnSystemFinish // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0xcdda60
	void OnNiagaraSystemFinished(struct UNiagaraComponent* FinishedComponent); // Function Niagara.NiagaraActor.OnNiagaraSystemFinished // (Final|Native|Private) // @ game+0xcdd5f0
};

// Class Niagara.NiagaraComponent
// Size: 0x5c0 (Inherited: 0x410)
struct UNiagaraComponent : UFXSystemComponent {
	struct UNiagaraSystem* Asset; // 0x408(0x08)
	enum class ENiagaraTickBehavior TickBehavior; // 0x410(0x01)
	struct FNiagaraUserRedirectionParameterStore OverrideParameters; // 0x418(0x108)
	char bForceSolo : 1; // 0x520(0x01)
	char pad_521_1 : 7; // 0x521(0x01)
	char pad_522[0x2a]; // 0x522(0x2a)
	char bAutoDestroy : 1; // 0x54c(0x01)
	char bRenderingEnabled : 1; // 0x54c(0x01)
	char bAutoManageAttachment : 1; // 0x54c(0x01)
	char bAutoAttachWeldSimulatedBodies : 1; // 0x54c(0x01)
	char pad_54C_4 : 4; // 0x54c(0x01)
	char pad_54D[0x3]; // 0x54d(0x03)
	float MaxTimeBeforeForceUpdateTransform; // 0x550(0x04)
	char pad_554[0x4]; // 0x554(0x04)
	struct FMulticastInlineDelegate OnSystemFinished; // 0x558(0x10)
	struct TWeakObjectPtr<struct USceneComponent> AutoAttachParent; // 0x568(0x08)
	struct FName AutoAttachSocketName; // 0x570(0x08)
	enum class EAttachmentRule AutoAttachLocationRule; // 0x578(0x01)
	enum class EAttachmentRule AutoAttachRotationRule; // 0x579(0x01)
	enum class EAttachmentRule AutoAttachScaleRule; // 0x57a(0x01)
	char pad_57B[0x45]; // 0x57b(0x45)

	void SetVariableVec4(struct FName InVariableName, struct FVector4 InValue); // Function Niagara.NiagaraComponent.SetVariableVec4 // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xcdee30
	void SetVariableVec3(struct FName InVariableName, struct FVector InValue); // Function Niagara.NiagaraComponent.SetVariableVec3 // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xcded60
	void SetVariableVec2(struct FName InVariableName, struct FVector2D InValue); // Function Niagara.NiagaraComponent.SetVariableVec2 // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xcdeca0
	void SetVariableQuat(struct FName InVariableName, struct FQuat InValue); // Function Niagara.NiagaraComponent.SetVariableQuat // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xcdebd0
	void SetVariableObject(struct FName InVariableName, struct UObject* Object); // Function Niagara.NiagaraComponent.SetVariableObject // (Final|Native|Public|BlueprintCallable) // @ game+0xcdeb10
	void SetVariableMaterial(struct FName InVariableName, struct UMaterialInterface* Object); // Function Niagara.NiagaraComponent.SetVariableMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0xcdea50
	void SetVariableLinearColor(struct FName InVariableName, struct FLinearColor InValue); // Function Niagara.NiagaraComponent.SetVariableLinearColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xcde980
	void SetVariableInt(struct FName InVariableName, int32_t InValue); // Function Niagara.NiagaraComponent.SetVariableInt // (Final|Native|Public|BlueprintCallable) // @ game+0xcde8c0
	void SetVariableFloat(struct FName InVariableName, float InValue); // Function Niagara.NiagaraComponent.SetVariableFloat // (Final|Native|Public|BlueprintCallable) // @ game+0xcde7f0
	void SetVariableBool(struct FName InVariableName, bool InValue); // Function Niagara.NiagaraComponent.SetVariableBool // (Final|Native|Public|BlueprintCallable) // @ game+0xcde720
	void SetVariableActor(struct FName InVariableName, struct AActor* Actor); // Function Niagara.NiagaraComponent.SetVariableActor // (Final|Native|Public|BlueprintCallable) // @ game+0xcde660
	void SetSeekDelta(float InSeekDelta); // Function Niagara.NiagaraComponent.SetSeekDelta // (Final|Native|Public|BlueprintCallable) // @ game+0xcde5e0
	void SetRenderingEnabled(bool bInRenderingEnabled); // Function Niagara.NiagaraComponent.SetRenderingEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0xcde550
	void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance); // Function Niagara.NiagaraComponent.SetPreviewLODDistance // (Final|Native|Public|BlueprintCallable) // @ game+0xcde480
	void SetPaused(bool bInPaused); // Function Niagara.NiagaraComponent.SetPaused // (Final|Native|Public|BlueprintCallable) // @ game+0xcde3f0
	void SetNiagaraVariableVec4(struct FString InVariableName, struct FVector4 InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableVec4 // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xcde300
	void SetNiagaraVariableVec3(struct FString InVariableName, struct FVector InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableVec3 // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xcde210
	void SetNiagaraVariableVec2(struct FString InVariableName, struct FVector2D InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableVec2 // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xcde140
	void SetNiagaraVariableQuat(struct FString InVariableName, struct FQuat InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableQuat // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xcde060
	void SetNiagaraVariableObject(struct FString InVariableName, struct UObject* Object); // Function Niagara.NiagaraComponent.SetNiagaraVariableObject // (Final|Native|Public|BlueprintCallable) // @ game+0xcddc00
	void SetNiagaraVariableLinearColor(struct FString InVariableName, struct FLinearColor InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xcddf80
	void SetNiagaraVariableInt(struct FString InVariableName, int32_t InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableInt // (Final|Native|Public|BlueprintCallable) // @ game+0xcddea0
	void SetNiagaraVariableFloat(struct FString InVariableName, float InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableFloat // (Final|Native|Public|BlueprintCallable) // @ game+0xcdddc0
	void SetNiagaraVariableBool(struct FString InVariableName, bool InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableBool // (Final|Native|Public|BlueprintCallable) // @ game+0xcddce0
	void SetNiagaraVariableActor(struct FString InVariableName, struct AActor* Actor); // Function Niagara.NiagaraComponent.SetNiagaraVariableActor // (Final|Native|Public|BlueprintCallable) // @ game+0xcddc00
	void SetMaxSimTime(float InMaxTime); // Function Niagara.NiagaraComponent.SetMaxSimTime // (Final|Native|Public|BlueprintCallable) // @ game+0xcddb80
	void SetForceSolo(bool bInForceSolo); // Function Niagara.NiagaraComponent.SetForceSolo // (Final|Native|Public|BlueprintCallable) // @ game+0xcddaf0
	void SetDesiredAge(float InDesiredAge); // Function Niagara.NiagaraComponent.SetDesiredAge // (Final|Native|Public|BlueprintCallable) // @ game+0xcdd9e0
	void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking); // Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking // (Final|Native|Public|BlueprintCallable) // @ game+0xcdd950
	void SetAutoDestroy(bool bInAutoDestroy); // Function Niagara.NiagaraComponent.SetAutoDestroy // (Final|Native|Public|BlueprintCallable) // @ game+0xcdd8c0
	void SetAsset(struct UNiagaraSystem* InAsset); // Function Niagara.NiagaraComponent.SetAsset // (Final|Native|Public|BlueprintCallable) // @ game+0xcdd840
	void SetAllowScalability(bool bAllow); // Function Niagara.NiagaraComponent.SetAllowScalability // (Final|Native|Public|BlueprintCallable) // @ game+0xcdd7b0
	void SetAgeUpdateMode(enum class ENiagaraAgeUpdateMode InAgeUpdateMode); // Function Niagara.NiagaraComponent.SetAgeUpdateMode // (Final|Native|Public|BlueprintCallable) // @ game+0xcdd730
	void SeekToDesiredAge(float InDesiredAge); // Function Niagara.NiagaraComponent.SeekToDesiredAge // (Final|Native|Public|BlueprintCallable) // @ game+0xcdd6b0
	void ResetSystem(); // Function Niagara.NiagaraComponent.ResetSystem // (Final|Native|Public|BlueprintCallable) // @ game+0xcdd690
	void ReinitializeSystem(); // Function Niagara.NiagaraComponent.ReinitializeSystem // (Final|Native|Public|BlueprintCallable) // @ game+0xcdd670
	bool IsPaused(); // Function Niagara.NiagaraComponent.IsPaused // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xcdd5c0
	float GetSeekDelta(); // Function Niagara.NiagaraComponent.GetSeekDelta // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xcdd590
	bool GetPreviewLODDistanceEnabled(); // Function Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xad4510
	int32_t GetPreviewLODDistance(); // Function Niagara.NiagaraComponent.GetPreviewLODDistance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xcdd570
	struct TArray<struct FVector> GetNiagaraParticleValueVec3_DebugOnly(struct FString InEmitterName, struct FString InValueName); // Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly // (Final|Native|Public|BlueprintCallable) // @ game+0xcdd2f0
	struct TArray<float> GetNiagaraParticleValues_DebugOnly(struct FString InEmitterName, struct FString InValueName); // Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly // (Final|Native|Public|BlueprintCallable) // @ game+0xcdd430
	struct TArray<struct FVector> GetNiagaraParticlePositions_DebugOnly(struct FString InEmitterName); // Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly // (Final|Native|Public|BlueprintCallable) // @ game+0xcdd200
	float GetMaxSimTime(); // Function Niagara.NiagaraComponent.GetMaxSimTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xcdd1d0
	bool GetForceSolo(); // Function Niagara.NiagaraComponent.GetForceSolo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xcdd1a0
	float GetDesiredAge(); // Function Niagara.NiagaraComponent.GetDesiredAge // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xcdd170
	struct UNiagaraDataInterface* GetDataInterface(struct FString Name); // Function Niagara.NiagaraComponent.GetDataInterface // (Final|Native|Public|BlueprintCallable) // @ game+0xcdd0c0
	struct UNiagaraSystem* GetAsset(); // Function Niagara.NiagaraComponent.GetAsset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xcdd0a0
	enum class ENiagaraAgeUpdateMode GetAgeUpdateMode(); // Function Niagara.NiagaraComponent.GetAgeUpdateMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xcdd070
	void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds); // Function Niagara.NiagaraComponent.AdvanceSimulationByTime // (Final|Native|Public|BlueprintCallable) // @ game+0xcdcfb0
	void AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds); // Function Niagara.NiagaraComponent.AdvanceSimulation // (Final|Native|Public|BlueprintCallable) // @ game+0xcdcee0
};

// Class Niagara.NiagaraComponentPool
// Size: 0x80 (Inherited: 0x28)
struct UNiagaraComponentPool : UObject {
	struct TMap<struct UNiagaraSystem*, struct FNCPool> WorldParticleSystemPools; // 0x28(0x50)
	char pad_78[0x8]; // 0x78(0x08)
};

// Class Niagara.NiagaraConvertInPlaceUtilityBase
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraConvertInPlaceUtilityBase : UObject {
};

// Class Niagara.NiagaraDataInterfaceAudioSubmix
// Size: 0x38 (Inherited: 0x30)
struct UNiagaraDataInterfaceAudioSubmix : UNiagaraDataInterface {
	struct USoundSubmix* Submix; // 0x30(0x08)
};

// Class Niagara.NiagaraDataInterfaceAudioOscilloscope
// Size: 0x40 (Inherited: 0x30)
struct UNiagaraDataInterfaceAudioOscilloscope : UNiagaraDataInterface {
	struct USoundSubmix* Submix; // 0x30(0x08)
	int32_t resolution; // 0x38(0x04)
	float ScopeInMilliseconds; // 0x3c(0x04)
};

// Class Niagara.NiagaraDataInterfaceAudioSpectrum
// Size: 0x48 (Inherited: 0x38)
struct UNiagaraDataInterfaceAudioSpectrum : UNiagaraDataInterfaceAudioSubmix {
	int32_t resolution; // 0x38(0x04)
	float MinimumFrequency; // 0x3c(0x04)
	float MaximumFrequency; // 0x40(0x04)
	float NoiseFloorDb; // 0x44(0x04)
};

// Class Niagara.NiagaraDataInterfaceCamera
// Size: 0x38 (Inherited: 0x30)
struct UNiagaraDataInterfaceCamera : UNiagaraDataInterface {
	int32_t PlayerControllerIndex; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Niagara.NiagaraDataInterfaceCollisionQuery
// Size: 0x40 (Inherited: 0x30)
struct UNiagaraDataInterfaceCollisionQuery : UNiagaraDataInterface {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class Niagara.NiagaraDataInterfaceCurveBase
// Size: 0x58 (Inherited: 0x30)
struct UNiagaraDataInterfaceCurveBase : UNiagaraDataInterface {
	struct TArray<float> ShaderLUT; // 0x30(0x10)
	float LUTMinTime; // 0x40(0x04)
	float LUTMaxTime; // 0x44(0x04)
	float LUTInvTimeRange; // 0x48(0x04)
	float LUTNumSamplesMinusOne; // 0x4c(0x04)
	char bUseLUT : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class Niagara.NiagaraDataInterfaceColorCurve
// Size: 0x258 (Inherited: 0x58)
struct UNiagaraDataInterfaceColorCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve RedCurve; // 0x58(0x80)
	struct FRichCurve GreenCurve; // 0xd8(0x80)
	struct FRichCurve BlueCurve; // 0x158(0x80)
	struct FRichCurve AlphaCurve; // 0x1d8(0x80)
};

// Class Niagara.NiagaraDataInterfaceCurlNoise
// Size: 0x40 (Inherited: 0x30)
struct UNiagaraDataInterfaceCurlNoise : UNiagaraDataInterface {
	uint32_t Seed; // 0x30(0x04)
	char pad_34[0xc]; // 0x34(0x0c)
};

// Class Niagara.NiagaraDataInterfaceCurve
// Size: 0xd8 (Inherited: 0x58)
struct UNiagaraDataInterfaceCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve Curve; // 0x58(0x80)
};

// Class Niagara.NiagaraParticleCallbackHandler
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraParticleCallbackHandler : UInterface {

	void ReceiveParticleData(struct TArray<struct FBasicParticleData> Data, struct UNiagaraSystem* NiagaraSystem); // Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xce3930
};

// Class Niagara.NiagaraDataInterfaceExport
// Size: 0x58 (Inherited: 0x30)
struct UNiagaraDataInterfaceExport : UNiagaraDataInterface {
	struct FNiagaraUserParameterBinding CallbackHandlerParameter; // 0x30(0x28)
};

// Class Niagara.NiagaraDataInterfaceRWBase
// Size: 0xd0 (Inherited: 0x30)
struct UNiagaraDataInterfaceRWBase : UNiagaraDataInterface {
	struct TSet<int32_t> OutputShaderStages; // 0x30(0x50)
	struct TSet<int32_t> IterationShaderStages; // 0x80(0x50)
};

// Class Niagara.NiagaraDataInterfaceGrid2D
// Size: 0xf0 (Inherited: 0xd0)
struct UNiagaraDataInterfaceGrid2D : UNiagaraDataInterfaceRWBase {
	int32_t NumCellsX; // 0xd0(0x04)
	int32_t NumCellsY; // 0xd4(0x04)
	int32_t NumCellsMaxAxis; // 0xd8(0x04)
	int32_t NumAttributes; // 0xdc(0x04)
	bool SetGridFromMaxAxis; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	struct FVector2D WorldBBoxSize; // 0xe4(0x08)
	char pad_EC[0x4]; // 0xec(0x04)
};

// Class Niagara.NiagaraDataInterfaceGrid2DCollection
// Size: 0x140 (Inherited: 0xf0)
struct UNiagaraDataInterfaceGrid2DCollection : UNiagaraDataInterfaceGrid2D {
	char pad_F0[0x50]; // 0xf0(0x50)

	void GetTextureSize(struct UNiagaraComponent* Component, int32_t SizeX, int32_t SizeY); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xce3810
	void GetRawTextureSize(struct UNiagaraComponent* Component, int32_t SizeX, int32_t SizeY); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xce36f0
	bool FillTexture2D(struct UNiagaraComponent* Component, struct UTextureRenderTarget2D* Dest, int32_t AttributeIndex); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D // (Native|Public|BlueprintCallable) // @ game+0xce35e0
	bool FillRawTexture2D(struct UNiagaraComponent* Component, struct UTextureRenderTarget2D* Dest, int32_t TilesX, int32_t TilesY); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xce3470
};

// Class Niagara.NiagaraDataInterfaceGrid3D
// Size: 0xf0 (Inherited: 0xd0)
struct UNiagaraDataInterfaceGrid3D : UNiagaraDataInterfaceRWBase {
	struct FIntVector NumVoxels; // 0xd0(0x0c)
	float VoxelSize; // 0xdc(0x04)
	bool SetGridFromVoxelSize; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	struct FVector WorldBBoxSize; // 0xe4(0x0c)
};

// Class Niagara.NiagaraDataInterfaceNeighborGrid3D
// Size: 0xf8 (Inherited: 0xf0)
struct UNiagaraDataInterfaceNeighborGrid3D : UNiagaraDataInterfaceGrid3D {
	uint32_t MaxNeighborsPerVoxel; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// Class Niagara.NiagaraDataInterfaceOcclusion
// Size: 0x30 (Inherited: 0x30)
struct UNiagaraDataInterfaceOcclusion : UNiagaraDataInterface {
};

// Class Niagara.NiagaraDataInterfaceParticleRead
// Size: 0x40 (Inherited: 0x30)
struct UNiagaraDataInterfaceParticleRead : UNiagaraDataInterface {
	struct FString EmitterName; // 0x30(0x10)
};

// Class Niagara.NiagaraDataInterfaceSimpleCounter
// Size: 0x30 (Inherited: 0x30)
struct UNiagaraDataInterfaceSimpleCounter : UNiagaraDataInterface {
};

// Class Niagara.NiagaraDataInterfaceSkeletalMesh
// Size: 0xb8 (Inherited: 0x30)
struct UNiagaraDataInterfaceSkeletalMesh : UNiagaraDataInterface {
	struct AActor* Source; // 0x30(0x08)
	struct FNiagaraUserParameterBinding MeshUserParameter; // 0x38(0x28)
	struct USkeletalMeshComponent* SourceComponent; // 0x60(0x08)
	enum class ENDISkeletalMesh_SkinningMode SkinningMode; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct TArray<struct FName> SamplingRegions; // 0x70(0x10)
	int32_t WholeMeshLOD; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct TArray<struct FName> FilteredBones; // 0x88(0x10)
	struct TArray<struct FName> FilteredSockets; // 0x98(0x10)
	struct FName ExcludeBoneName; // 0xa8(0x08)
	char bExcludeBone : 1; // 0xb0(0x01)
	char pad_B0_1 : 7; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// Class Niagara.NiagaraDataInterfaceSpline
// Size: 0x38 (Inherited: 0x30)
struct UNiagaraDataInterfaceSpline : UNiagaraDataInterface {
	struct AActor* Source; // 0x30(0x08)
};

// Class Niagara.NiagaraDataInterfaceStaticMesh
// Size: 0x60 (Inherited: 0x30)
struct UNiagaraDataInterfaceStaticMesh : UNiagaraDataInterface {
	struct UStaticMesh* DefaultMesh; // 0x30(0x08)
	struct AActor* Source; // 0x38(0x08)
	struct UStaticMeshComponent* SourceComponent; // 0x40(0x08)
	struct FNDIStaticMeshSectionFilter SectionFilter; // 0x48(0x10)
	char pad_58[0x8]; // 0x58(0x08)
};

// Class Niagara.NiagaraDataInterfaceTexture
// Size: 0x38 (Inherited: 0x30)
struct UNiagaraDataInterfaceTexture : UNiagaraDataInterface {
	struct UTexture* Texture; // 0x30(0x08)
};

// Class Niagara.NiagaraDataInterfaceVector2DCurve
// Size: 0x158 (Inherited: 0x58)
struct UNiagaraDataInterfaceVector2DCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve XCurve; // 0x58(0x80)
	struct FRichCurve YCurve; // 0xd8(0x80)
};

// Class Niagara.NiagaraDataInterfaceVector4Curve
// Size: 0x258 (Inherited: 0x58)
struct UNiagaraDataInterfaceVector4Curve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve XCurve; // 0x58(0x80)
	struct FRichCurve YCurve; // 0xd8(0x80)
	struct FRichCurve ZCurve; // 0x158(0x80)
	struct FRichCurve WCurve; // 0x1d8(0x80)
};

// Class Niagara.NiagaraDataInterfaceVectorCurve
// Size: 0x1d8 (Inherited: 0x58)
struct UNiagaraDataInterfaceVectorCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve XCurve; // 0x58(0x80)
	struct FRichCurve YCurve; // 0xd8(0x80)
	struct FRichCurve ZCurve; // 0x158(0x80)
};

// Class Niagara.NiagaraDataInterfaceVectorField
// Size: 0x40 (Inherited: 0x30)
struct UNiagaraDataInterfaceVectorField : UNiagaraDataInterface {
	struct UVectorField* Field; // 0x30(0x08)
	bool bTileX; // 0x38(0x01)
	bool bTileY; // 0x39(0x01)
	bool bTileZ; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
};

// Class Niagara.NiagaraDataInterfaceVolumeTexture
// Size: 0x38 (Inherited: 0x30)
struct UNiagaraDataInterfaceVolumeTexture : UNiagaraDataInterface {
	struct UVolumeTexture* Texture; // 0x30(0x08)
};

// Class Niagara.NiagaraEditorDataBase
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraEditorDataBase : UObject {
};

// Class Niagara.NiagaraEffectType
// Size: 0x100 (Inherited: 0x28)
struct UNiagaraEffectType : UObject {
	enum class ENiagaraScalabilityUpdateFrequency UpdateFrequency; // 0x28(0x04)
	enum class ENiagaraCullReaction CullReaction; // 0x2c(0x04)
	struct TArray<struct FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings; // 0x30(0x10)
	struct FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings; // 0x40(0x10)
	struct FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings; // 0x50(0x10)
	char pad_60[0xa0]; // 0x60(0xa0)
};

// Class Niagara.NiagaraEmitter
// Size: 0x2b0 (Inherited: 0x28)
struct UNiagaraEmitter : UObject {
	bool bLocalSpace; // 0x28(0x01)
	bool bDeterminism; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	int32_t RandomSeed; // 0x2c(0x04)
	enum class EParticleAllocationMode AllocationMode; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t PreAllocationCount; // 0x34(0x04)
	struct FNiagaraEmitterScriptProperties UpdateScriptProps; // 0x38(0x28)
	struct FNiagaraEmitterScriptProperties SpawnScriptProps; // 0x60(0x28)
	struct FNiagaraEmitterScriptProperties EmitterSpawnScriptProps; // 0x88(0x28)
	struct FNiagaraEmitterScriptProperties EmitterUpdateScriptProps; // 0xb0(0x28)
	enum class ENiagaraSimTarget SimTarget; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	struct FBox FixedBounds; // 0xdc(0x1c)
	int32_t MinDetailLevel; // 0xf8(0x04)
	int32_t MaxDetailLevel; // 0xfc(0x04)
	struct FNiagaraDetailsLevelScaleOverrides GlobalSpawnCountScaleOverrides; // 0x100(0x14)
	char pad_114[0x4]; // 0x114(0x04)
	struct FNiagaraPlatformSet Platforms; // 0x118(0x20)
	struct FNiagaraEmitterScalabilityOverrides ScalabilityOverrides; // 0x138(0x10)
	char bInterpolatedSpawning : 1; // 0x148(0x01)
	char bFixedBounds : 1; // 0x148(0x01)
	char bUseMinDetailLevel : 1; // 0x148(0x01)
	char bUseMaxDetailLevel : 1; // 0x148(0x01)
	char bOverrideGlobalSpawnCountScale : 1; // 0x148(0x01)
	char bRequiresPersistentIDs : 1; // 0x148(0x01)
	char pad_148_6 : 2; // 0x148(0x01)
	char pad_149[0x3]; // 0x149(0x03)
	float MaxDeltaTimePerTick; // 0x14c(0x04)
	uint32_t DefaultShaderStageIndex; // 0x150(0x04)
	uint32_t MaxUpdateIterations; // 0x154(0x04)
	struct TSet<uint32_t> SpawnStages; // 0x158(0x50)
	char bSimulationStagesEnabled : 1; // 0x1a8(0x01)
	char bDeprecatedShaderStagesEnabled : 1; // 0x1a8(0x01)
	char bLimitDeltaTime : 1; // 0x1a8(0x01)
	char pad_1A8_3 : 5; // 0x1a8(0x01)
	char pad_1A9[0x7]; // 0x1a9(0x07)
	struct FString UniqueEmitterName; // 0x1b0(0x10)
	struct TArray<struct UNiagaraRendererProperties*> RendererProperties; // 0x1c0(0x10)
	struct TArray<struct FNiagaraEventScriptProperties> EventHandlerScriptProps; // 0x1d0(0x10)
	struct TArray<struct UNiagaraSimulationStageBase*> SimulationStages; // 0x1e0(0x10)
	struct UNiagaraScript* GPUComputeScript; // 0x1f0(0x08)
	struct TArray<struct FName> SharedEventGeneratorIds; // 0x1f8(0x10)
	char pad_208[0xa8]; // 0x208(0xa8)
};

// Class Niagara.NiagaraEventReceiverEmitterAction
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraEventReceiverEmitterAction : UObject {
};

// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
// Size: 0x30 (Inherited: 0x28)
struct UNiagaraEventReceiverEmitterAction_SpawnParticles : UNiagaraEventReceiverEmitterAction {
	uint32_t NumParticles; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class Niagara.NiagaraFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraFunctionLibrary : UBlueprintFunctionLibrary {

	struct UNiagaraComponent* SpawnSystemAttached(struct UNiagaraSystem* SystemTemplate, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, enum class EAttachLocation LocationType, bool bAutoDestroy, bool bAutoActivate, enum class ENCPoolMethod PoolingMethod, bool bPreCullCheck); // Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xce6b90
	struct UNiagaraComponent* SpawnSystemAtLocation(struct UObject* WorldContextObject, struct UNiagaraSystem* SystemTemplate, struct FVector Location, struct FRotator Rotation, struct FVector Scale, bool bAutoDestroy, bool bAutoActivate, enum class ENCPoolMethod PoolingMethod, bool bPreCullCheck); // Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xce68e0
	void SetVolumeTextureObject(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UVolumeTexture* Texture); // Function Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xce67d0
	void SetTextureObject(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UTexture* Texture); // Function Niagara.NiagaraFunctionLibrary.SetTextureObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xce6410
	void OverrideSystemUserVariableStaticMeshComponent(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UStaticMeshComponent* StaticMeshComponent); // Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xce5ea0
	void OverrideSystemUserVariableStaticMesh(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UStaticMesh* StaticMesh); // Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xce5d90
	void OverrideSystemUserVariableSkeletalMeshComponent(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct USkeletalMeshComponent* SkeletalMeshComponent); // Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xce5c80
	struct UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(struct UObject* WorldContextObject, struct UNiagaraParameterCollection* Collection); // Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xce58f0
};

// Class Niagara.NiagaraRendererProperties
// Size: 0x50 (Inherited: 0x28)
struct UNiagaraRendererProperties : UNiagaraMergeable {
	int32_t SortOrderHint; // 0x28(0x04)
	bool bIsEnabled; // 0x2c(0x01)
	bool bMotionBlurEnabled; // 0x2d(0x01)
	char pad_2E[0x22]; // 0x2e(0x22)
};

// Class Niagara.NiagaraLightRendererProperties
// Size: 0x338 (Inherited: 0x50)
struct UNiagaraLightRendererProperties : UNiagaraRendererProperties {
	char bUseInverseSquaredFalloff : 1; // 0x50(0x01)
	char bAffectsTranslucency : 1; // 0x50(0x01)
	char bOverrideRenderingEnabled : 1; // 0x50(0x01)
	char pad_50_3 : 5; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float RadiusScale; // 0x54(0x04)
	struct FVector ColorAdd; // 0x58(0x0c)
	char pad_64[0x4]; // 0x64(0x04)
	struct FNiagaraVariableAttributeBinding LightRenderingEnabledBinding; // 0x68(0x78)
	struct FNiagaraVariableAttributeBinding LightExponentBinding; // 0xe0(0x78)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0x158(0x78)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x1d0(0x78)
	struct FNiagaraVariableAttributeBinding RadiusBinding; // 0x248(0x78)
	struct FNiagaraVariableAttributeBinding VolumetricScatteringBinding; // 0x2c0(0x78)
};

// Class Niagara.NiagaraMeshRendererProperties
// Size: 0x728 (Inherited: 0x50)
struct UNiagaraMeshRendererProperties : UNiagaraRendererProperties {
	struct UStaticMesh* ParticleMesh; // 0x50(0x08)
	enum class ENiagaraSortMode SortMode; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	char bOverrideMaterials : 1; // 0x5c(0x01)
	char bSortOnlyWhenTranslucent : 1; // 0x5c(0x01)
	char pad_5C_2 : 6; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct TArray<struct FNiagaraMeshMaterialOverride> OverrideMaterials; // 0x60(0x10)
	struct FVector2D SubImageSize; // 0x70(0x08)
	char bSubImageBlend : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	enum class ENiagaraMeshFacingMode FacingMode; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	char bLockedAxisEnable : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	struct FVector LockedAxis; // 0x84(0x0c)
	enum class ENiagaraMeshLockedAxisSpace LockedAxisSpace; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0x98(0x78)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x110(0x78)
	struct FNiagaraVariableAttributeBinding VelocityBinding; // 0x188(0x78)
	struct FNiagaraVariableAttributeBinding MeshOrientationBinding; // 0x200(0x78)
	struct FNiagaraVariableAttributeBinding ScaleBinding; // 0x278(0x78)
	struct FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x2f0(0x78)
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x368(0x78)
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x3e0(0x78)
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x458(0x78)
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x4d0(0x78)
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x548(0x78)
	struct FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x5c0(0x78)
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x638(0x78)
	struct FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x6b0(0x78)
};

// Class Niagara.NiagaraParameterCollectionInstance
// Size: 0xf8 (Inherited: 0x28)
struct UNiagaraParameterCollectionInstance : UObject {
	struct UNiagaraParameterCollection* Collection; // 0x28(0x08)
	struct TArray<struct FNiagaraVariable> OverridenParameters; // 0x30(0x10)
	struct FNiagaraParameterStore ParameterStorage; // 0x40(0xb8)

	void SetVectorParameter(struct FString InVariableName, struct FVector InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xce66e0
	void SetVector4Parameter(struct FString InVariableName, struct FVector4 InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xce65f0
	void SetVector2DParameter(struct FString InVariableName, struct FVector2D InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xce6520
	void SetQuatParameter(struct FString InVariableName, struct FQuat InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xce6330
	void SetIntParameter(struct FString InVariableName, int32_t InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter // (Final|Native|Public|BlueprintCallable) // @ game+0xce6250
	void SetFloatParameter(struct FString InVariableName, float InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter // (Final|Native|Public|BlueprintCallable) // @ game+0xce6170
	void SetColorParameter(struct FString InVariableName, struct FLinearColor InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xce6090
	void SetBoolParameter(struct FString InVariableName, bool InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter // (Final|Native|Public|BlueprintCallable) // @ game+0xce5fb0
	struct FVector GetVectorParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xce5bc0
	struct FVector4 GetVector4Parameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xce5b10
	struct FVector2D GetVector2DParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xce5a60
	struct FQuat GetQuatParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xce59b0
	int32_t GetIntParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter // (Final|Native|Public|BlueprintCallable) // @ game+0xce5840
	float GetFloatParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter // (Final|Native|Public|BlueprintCallable) // @ game+0xce5790
	struct FLinearColor GetColorParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xce56e0
	bool GetBoolParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter // (Final|Native|Public|BlueprintCallable) // @ game+0xce5630
};

// Class Niagara.NiagaraParameterCollection
// Size: 0x58 (Inherited: 0x28)
struct UNiagaraParameterCollection : UObject {
	struct FName Namespace; // 0x28(0x08)
	struct TArray<struct FNiagaraVariable> Parameters; // 0x30(0x10)
	struct UNiagaraParameterCollectionInstance* DefaultInstance; // 0x40(0x08)
	struct FGuid CompileId; // 0x48(0x10)
};

// Class Niagara.NiagaraPrecompileContainer
// Size: 0x40 (Inherited: 0x28)
struct UNiagaraPrecompileContainer : UObject {
	struct TArray<struct UNiagaraScript*> Scripts; // 0x28(0x10)
	struct UNiagaraSystem* System; // 0x38(0x08)
};

// Class Niagara.NiagaraPreviewBase
// Size: 0x230 (Inherited: 0x230)
struct ANiagaraPreviewBase : AActor {

	void SetSystem(struct UNiagaraSystem* InSystem); // Function Niagara.NiagaraPreviewBase.SetSystem // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLabelText(struct FText InXAxisText, struct FText InYAxisText); // Function Niagara.NiagaraPreviewBase.SetLabelText // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

// Class Niagara.NiagaraPreviewAxis
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraPreviewAxis : UObject {

	int32_t Num(); // Function Niagara.NiagaraPreviewAxis.Num // (Native|Event|Public|BlueprintEvent) // @ game+0xcea9e0
	void ApplyToPreview(struct UNiagaraComponent* PreviewComponent, int32_t PreviewIndex, bool bIsXAxis, struct FString OutLabelText); // Function Niagara.NiagaraPreviewAxis.ApplyToPreview // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xcea7a0
};

// Class Niagara.NiagaraPreviewAxis_InterpParamBase
// Size: 0x38 (Inherited: 0x28)
struct UNiagaraPreviewAxis_InterpParamBase : UNiagaraPreviewAxis {
	struct FName Param; // 0x28(0x08)
	int32_t count; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamInt32
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamInt32 : UNiagaraPreviewAxis_InterpParamBase {
	int32_t Min; // 0x38(0x04)
	int32_t Max; // 0x3c(0x04)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamFloat
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamFloat : UNiagaraPreviewAxis_InterpParamBase {
	float Min; // 0x38(0x04)
	float Max; // 0x3c(0x04)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector2D
// Size: 0x48 (Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamVector2D : UNiagaraPreviewAxis_InterpParamBase {
	struct FVector2D Min; // 0x38(0x08)
	struct FVector2D Max; // 0x40(0x08)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector
// Size: 0x50 (Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamVector : UNiagaraPreviewAxis_InterpParamBase {
	struct FVector Min; // 0x38(0x0c)
	struct FVector Max; // 0x44(0x0c)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector4
// Size: 0x60 (Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamVector4 : UNiagaraPreviewAxis_InterpParamBase {
	char pad_38[0x8]; // 0x38(0x08)
	struct FVector4 Min; // 0x40(0x10)
	struct FVector4 Max; // 0x50(0x10)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor
// Size: 0x58 (Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamLinearColor : UNiagaraPreviewAxis_InterpParamBase {
	struct FLinearColor Min; // 0x38(0x10)
	struct FLinearColor Max; // 0x48(0x10)
};

// Class Niagara.NiagaraPreviewGrid
// Size: 0x280 (Inherited: 0x230)
struct ANiagaraPreviewGrid : AActor {
	struct UNiagaraSystem* System; // 0x230(0x08)
	enum class ENiagaraPreviewGridResetMode ResetMode; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct UNiagaraPreviewAxis* PreviewAxisX; // 0x240(0x08)
	struct UNiagaraPreviewAxis* PreviewAxisY; // 0x248(0x08)
	struct ANiagaraPreviewBase* PreviewClass; // 0x250(0x08)
	float SpacingX; // 0x258(0x04)
	float SpacingY; // 0x25c(0x04)
	int32_t NumX; // 0x260(0x04)
	int32_t NumY; // 0x264(0x04)
	struct TArray<struct UChildActorComponent*> PreviewComponents; // 0x268(0x10)
	char pad_278[0x8]; // 0x278(0x08)

	void SetPaused(bool bPaused); // Function Niagara.NiagaraPreviewGrid.SetPaused // (Final|Native|Public|BlueprintCallable) // @ game+0xceaa10
	void GetPreviews(struct TArray<struct UNiagaraComponent*> OutPreviews); // Function Niagara.NiagaraPreviewGrid.GetPreviews // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xcea930
	void DeactivatePreviews(); // Function Niagara.NiagaraPreviewGrid.DeactivatePreviews // (Final|Native|Public|BlueprintCallable) // @ game+0xcea910
	void ActivatePreviews(bool bReset); // Function Niagara.NiagaraPreviewGrid.ActivatePreviews // (Final|Native|Public|BlueprintCallable) // @ game+0xcea710
};

// Class Niagara.NiagaraRibbonRendererProperties
// Size: 0x760 (Inherited: 0x50)
struct UNiagaraRibbonRendererProperties : UNiagaraRendererProperties {
	struct UMaterialInterface* Material; // 0x50(0x08)
	struct FNiagaraUserParameterBinding MaterialUserParamBinding; // 0x58(0x28)
	enum class ENiagaraRibbonFacingMode FacingMode; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float UV0TilingDistance; // 0x84(0x04)
	struct FVector2D UV0Scale; // 0x88(0x08)
	struct FVector2D UV0Offset; // 0x90(0x08)
	enum class ENiagaraRibbonAgeOffsetMode UV0AgeOffsetMode; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	float UV1TilingDistance; // 0x9c(0x04)
	struct FVector2D UV1Scale; // 0xa0(0x08)
	struct FVector2D UV1Offset; // 0xa8(0x08)
	enum class ENiagaraRibbonAgeOffsetMode UV1AgeOffsetMode; // 0xb0(0x01)
	enum class ENiagaraRibbonDrawDirection DrawDirection; // 0xb1(0x01)
	char pad_B2[0x2]; // 0xb2(0x02)
	float CurveTension; // 0xb4(0x04)
	enum class ENiagaraRibbonTessellationMode TessellationMode; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	int32_t TessellationFactor; // 0xbc(0x04)
	bool bUseConstantFactor; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	float TessellationAngle; // 0xc4(0x04)
	bool bScreenSpaceTessellation; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0xd0(0x78)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x148(0x78)
	struct FNiagaraVariableAttributeBinding VelocityBinding; // 0x1c0(0x78)
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x238(0x78)
	struct FNiagaraVariableAttributeBinding RibbonTwistBinding; // 0x2b0(0x78)
	struct FNiagaraVariableAttributeBinding RibbonWidthBinding; // 0x328(0x78)
	struct FNiagaraVariableAttributeBinding RibbonFacingBinding; // 0x3a0(0x78)
	struct FNiagaraVariableAttributeBinding RibbonIdBinding; // 0x418(0x78)
	struct FNiagaraVariableAttributeBinding RibbonLinkOrderBinding; // 0x490(0x78)
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x508(0x78)
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x580(0x78)
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x5f8(0x78)
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x670(0x78)
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x6e8(0x78)
};

// Class Niagara.NiagaraScript
// Size: 0x520 (Inherited: 0x28)
struct UNiagaraScript : UObject {
	enum class ENiagaraScriptUsage Usage; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t UsageIndex; // 0x2c(0x04)
	struct FGuid UsageId; // 0x30(0x10)
	struct FNiagaraParameterStore RapidIterationParameters; // 0x40(0xb8)
	struct FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore; // 0xf8(0xd8)
	struct TArray<struct FNiagaraBoundParameter> ScriptExecutionBoundParameters; // 0x1d0(0x10)
	struct FNiagaraVMExecutableDataId CachedScriptVMId; // 0x1e0(0x48)
	char pad_228[0x1b0]; // 0x228(0x1b0)
	struct FNiagaraVMExecutableData CachedScriptVM; // 0x3d8(0x128)
	struct TArray<struct UNiagaraParameterCollection*> CachedParameterCollectionReferences; // 0x500(0x10)
	struct TArray<struct FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces; // 0x510(0x10)

	void RaiseOnGPUCompilationComplete(); // Function Niagara.NiagaraScript.RaiseOnGPUCompilationComplete // (Final|Native|Public) // @ game+0x8518d0
};

// Class Niagara.NiagaraScriptSourceBase
// Size: 0x48 (Inherited: 0x28)
struct UNiagaraScriptSourceBase : UObject {
	char pad_28[0x20]; // 0x28(0x20)
};

// Class Niagara.NiagaraSettings
// Size: 0x98 (Inherited: 0x38)
struct UNiagaraSettings : UDeveloperSettings {
	struct TArray<struct FSoftObjectPath> AdditionalParameterTypes; // 0x38(0x10)
	struct TArray<struct FSoftObjectPath> AdditionalPayloadTypes; // 0x48(0x10)
	struct TArray<struct FSoftObjectPath> AdditionalParameterEnums; // 0x58(0x10)
	struct FSoftObjectPath DefaultEffectType; // 0x68(0x18)
	struct TArray<struct FText> QualityLevels; // 0x80(0x10)
	struct UNiagaraEffectType* DefaultEffectTypePtr; // 0x90(0x08)
};

// Class Niagara.NiagaraSimulationStageBase
// Size: 0x38 (Inherited: 0x28)
struct UNiagaraSimulationStageBase : UNiagaraMergeable {
	struct UNiagaraScript* Script; // 0x28(0x08)
	struct FName SimulationStageName; // 0x30(0x08)
};

// Class Niagara.NiagaraSimulationStageGeneric
// Size: 0x70 (Inherited: 0x38)
struct UNiagaraSimulationStageGeneric : UNiagaraSimulationStageBase {
	enum class ENiagaraIterationSource IterationSource; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t iterations; // 0x3c(0x04)
	char bSpawnOnly : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FNiagaraVariableDataInterfaceBinding DataInterface; // 0x48(0x28)
};

// Class Niagara.NiagaraSpriteRendererProperties
// Size: 0x8b0 (Inherited: 0x50)
struct UNiagaraSpriteRendererProperties : UNiagaraRendererProperties {
	struct UMaterialInterface* Material; // 0x50(0x08)
	struct FNiagaraUserParameterBinding MaterialUserParamBinding; // 0x58(0x28)
	enum class ENiagaraSpriteAlignment Alignment; // 0x80(0x01)
	enum class ENiagaraSpriteFacingMode FacingMode; // 0x81(0x01)
	char pad_82[0x2]; // 0x82(0x02)
	struct FVector2D PivotInUVSpace; // 0x84(0x08)
	enum class ENiagaraSortMode SortMode; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	struct FVector2D SubImageSize; // 0x90(0x08)
	char bSubImageBlend : 1; // 0x98(0x01)
	char bRemoveHMDRollInVR : 1; // 0x98(0x01)
	char bSortOnlyWhenTranslucent : 1; // 0x98(0x01)
	char pad_98_3 : 5; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	float MinFacingCameraBlendDistance; // 0x9c(0x04)
	float MaxFacingCameraBlendDistance; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0xa8(0x78)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x120(0x78)
	struct FNiagaraVariableAttributeBinding VelocityBinding; // 0x198(0x78)
	struct FNiagaraVariableAttributeBinding SpriteRotationBinding; // 0x210(0x78)
	struct FNiagaraVariableAttributeBinding SpriteSizeBinding; // 0x288(0x78)
	struct FNiagaraVariableAttributeBinding SpriteFacingBinding; // 0x300(0x78)
	struct FNiagaraVariableAttributeBinding SpriteAlignmentBinding; // 0x378(0x78)
	struct FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x3f0(0x78)
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x468(0x78)
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x4e0(0x78)
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x558(0x78)
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x5d0(0x78)
	struct FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x648(0x78)
	struct FNiagaraVariableAttributeBinding UVScaleBinding; // 0x6c0(0x78)
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x738(0x78)
	struct FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x7b0(0x78)
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x828(0x78)
	char pad_8A0[0x10]; // 0x8a0(0x10)
};

// Class Niagara.NiagaraSystem
// Size: 0x478 (Inherited: 0x30)
struct UNiagaraSystem : UFXSystemAsset {
	char pad_30[0x1]; // 0x30(0x01)
	bool bDumpDebugSystemInfo; // 0x31(0x01)
	bool bDumpDebugEmitterInfo; // 0x32(0x01)
	char pad_33[0x1]; // 0x33(0x01)
	char bFixedBounds : 1; // 0x34(0x01)
	char pad_34_1 : 7; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct UNiagaraEffectType* effectType; // 0x38(0x08)
	bool bOverrideScalabilitySettings; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct FNiagaraSystemScalabilityOverride> ScalabilityOverrides; // 0x48(0x10)
	struct FNiagaraSystemScalabilityOverrides SystemScalabilityOverrides; // 0x58(0x10)
	struct TArray<struct FNiagaraEmitterHandle> EmitterHandles; // 0x68(0x10)
	struct TArray<struct UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides; // 0x78(0x10)
	struct UNiagaraScript* SystemSpawnScript; // 0x88(0x08)
	struct UNiagaraScript* SystemUpdateScript; // 0x90(0x08)
	char pad_98[0x10]; // 0x98(0x10)
	struct FNiagaraSystemCompiledData SystemCompiledData; // 0xa8(0x258)
	struct FNiagaraUserRedirectionParameterStore ExposedParameters; // 0x300(0x108)
	struct FBox FixedBounds; // 0x408(0x1c)
	bool bAutoDeactivate; // 0x424(0x01)
	char pad_425[0x3]; // 0x425(0x03)
	float WarmupTime; // 0x428(0x04)
	int32_t WarmupTickCount; // 0x42c(0x04)
	float WarmupTickDelta; // 0x430(0x04)
	bool bHasSystemScriptDIsWithPerInstanceData; // 0x434(0x01)
	char pad_435[0x3]; // 0x435(0x03)
	struct TArray<struct FName> UserDINamesReadInSystemScripts; // 0x438(0x10)
	char pad_448[0x30]; // 0x448(0x30)
};

