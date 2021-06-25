// BlueprintGeneratedClass BPCaptureActor.BPCaptureActor_C
// Size: 0xa33 (Inherited: 0x238)
struct ABPCaptureActor_C : AEventCaptureActorBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct USkeletalMeshComponent* CharaFacePartsCustomComponent; // 0x240(0x08)
	struct USkeletalMeshComponent* CharaFacePartsComponent; // 0x248(0x08)
	struct USkeletalMeshComponent* SM_co0300; // 0x250(0x08)
	struct USkeletalMeshComponent* SM_static_pl_sky; // 0x258(0x08)
	struct UChildActorComponent* ChildActor; // 0x260(0x08)
	struct USkeletalMeshComponent* CaptureModel; // 0x268(0x08)
	struct URSSceneCaptureComponent2D* RSSceneCaptureComponent2D; // 0x270(0x08)
	struct UCameraComponent* Camera; // 0x278(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x280(0x08)
	float FrameParticleAlphaTimeline_Track_E998C6614D99BCCEC6362B9B84F3718F; // 0x288(0x04)
	enum class ETimelineDirection FrameParticleAlphaTimeline__Direction_E998C6614D99BCCEC6362B9B84F3718F; // 0x28c(0x01)
	char pad_28D[0x3]; // 0x28d(0x03)
	struct UTimelineComponent* FrameParticleAlphaTimeline; // 0x290(0x08)
	struct FVector NoiseAdvancedTimeline_GlitchCurve_5729C23D46E753B230A2F680C09382F2; // 0x298(0x0c)
	struct FVector NoiseAdvancedTimeline_FringeCurve_5729C23D46E753B230A2F680C09382F2; // 0x2a4(0x0c)
	float NoiseAdvancedTimeline_NoiseCurve_5729C23D46E753B230A2F680C09382F2; // 0x2b0(0x04)
	float NoiseAdvancedTimeline_MonitorNoiseCurve_5729C23D46E753B230A2F680C09382F2; // 0x2b4(0x04)
	enum class ETimelineDirection NoiseAdvancedTimeline__Direction_5729C23D46E753B230A2F680C09382F2; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	struct UTimelineComponent* NoiseAdvancedTimeline; // 0x2c0(0x08)
	float NoiseTimeline_Track_E6D277BA484692FFE03CC0B5AA3F5B1D; // 0x2c8(0x04)
	enum class ETimelineDirection NoiseTimeline__Direction_E6D277BA484692FFE03CC0B5AA3F5B1D; // 0x2cc(0x01)
	char pad_2CD[0x3]; // 0x2cd(0x03)
	struct UTimelineComponent* NoiseTimeline; // 0x2d0(0x08)
	float TimelineAddBoardAnimWeightCurve_Track_E59A3A01434E2BBB6AAE77A278E9528A; // 0x2d8(0x04)
	enum class ETimelineDirection TimelineAddBoardAnimWeightCurve__Direction_E59A3A01434E2BBB6AAE77A278E9528A; // 0x2dc(0x01)
	char pad_2DD[0x3]; // 0x2dd(0x03)
	struct UTimelineComponent* TimelineAddBoardAnimWeightCurve; // 0x2e0(0x08)
	float BoardParamCurveTimelineBase_3_ParamYCurve_26CF180A46E0FE07CD22B28C225E0474; // 0x2e8(0x04)
	float BoardParamCurveTimelineBase_3_ParamXCurve_26CF180A46E0FE07CD22B28C225E0474; // 0x2ec(0x04)
	enum class ETimelineDirection BoardParamCurveTimelineBase_3__Direction_26CF180A46E0FE07CD22B28C225E0474; // 0x2f0(0x01)
	char pad_2F1[0x7]; // 0x2f1(0x07)
	struct UTimelineComponent* BoardParamCurveTimelineBase_4; // 0x2f8(0x08)
	float EffectGaussFilterTimeline_Track_D1C10B9E40FE142F89097F8BE08263F3; // 0x300(0x04)
	enum class ETimelineDirection EffectGaussFilterTimeline__Direction_D1C10B9E40FE142F89097F8BE08263F3; // 0x304(0x01)
	char pad_305[0x3]; // 0x305(0x03)
	struct UTimelineComponent* EffectGaussFilterTimeline; // 0x308(0x08)
	float BoardParamCurveTimelineBase_2_ParamYCurve_10EA6CDD49920DC83A38C3982973510E; // 0x310(0x04)
	float BoardParamCurveTimelineBase_2_ParamXCurve_10EA6CDD49920DC83A38C3982973510E; // 0x314(0x04)
	enum class ETimelineDirection BoardParamCurveTimelineBase_2__Direction_10EA6CDD49920DC83A38C3982973510E; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
	struct UTimelineComponent* BoardParamCurveTimelineBase_3; // 0x320(0x08)
	float BoardParamCurveTimelineBase_1_ParamYCurve_63A3D6EC42C3F05297FFF49C5F34B24E; // 0x328(0x04)
	float BoardParamCurveTimelineBase_1_ParamXCurve_63A3D6EC42C3F05297FFF49C5F34B24E; // 0x32c(0x04)
	enum class ETimelineDirection BoardParamCurveTimelineBase_1__Direction_63A3D6EC42C3F05297FFF49C5F34B24E; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	struct UTimelineComponent* BoardParamCurveTimelineBase_2; // 0x338(0x08)
	float CrossFadeTimeline_Track_77235619450957C9FC9D208EF5E46B84; // 0x340(0x04)
	enum class ETimelineDirection CrossFadeTimeline__Direction_77235619450957C9FC9D208EF5E46B84; // 0x344(0x01)
	char pad_345[0x3]; // 0x345(0x03)
	struct UTimelineComponent* CrossFadeTimeline; // 0x348(0x08)
	float TelepathyTimeLine_StaticTelepathy_loop_C4D48D5047DAF2C17A7F7DB746010AC1; // 0x350(0x04)
	enum class ETimelineDirection TelepathyTimeLine__Direction_C4D48D5047DAF2C17A7F7DB746010AC1; // 0x354(0x01)
	char pad_355[0x3]; // 0x355(0x03)
	struct UTimelineComponent* TelepathyTimeLine; // 0x358(0x08)
	enum class ETimelineDirection EffectAlphaTimeline__Direction_7BC54E104812DB0FB50E8C82820DA397; // 0x360(0x01)
	char pad_361[0x7]; // 0x361(0x07)
	struct UTimelineComponent* EffectAlphaTimeline; // 0x368(0x08)
	enum class ETimelineDirection EffectMoveTimeline__Direction_FC24475242A91A71BE0D3C964E50B323; // 0x370(0x01)
	char pad_371[0x7]; // 0x371(0x07)
	struct UTimelineComponent* EffectMoveTimeline; // 0x378(0x08)
	enum class ETimelineDirection EffectScaleTimeline__Direction_7EE5F94043797CE93BB05CA3CE777981; // 0x380(0x01)
	char pad_381[0x7]; // 0x381(0x07)
	struct UTimelineComponent* EffectScaleTimeline; // 0x388(0x08)
	struct UTextureRenderTarget2D* RenderTarget; // 0x390(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> MIDList; // 0x398(0x10)
	struct TArray<struct FTransform> CameraTransformList; // 0x3a8(0x10)
	struct TArray<struct USkeletalMesh*> PlaneMeshList; // 0x3b8(0x10)
	struct TArray<struct UAnimSequence*> BPCharaList; // 0x3c8(0x10)
	struct UDataTable* CurrentAnimationData; // 0x3d8(0x08)
	struct ABP_MovieManager_C* MovieManager; // 0x3e0(0x08)
	enum class ERenderTargetType UsedRenderTargetType; // 0x3e8(0x01)
	char pad_3E9[0x7]; // 0x3e9(0x07)
	struct TArray<struct FString> vecAnimNamePath; // 0x3f0(0x10)
	struct TArray<bool> vecIsAnimationLoop; // 0x400(0x10)
	struct FString CharaAnimFolderPath; // 0x410(0x10)
	struct URSParticleSystemComponentBase* CurrentFrameParticle; // 0x420(0x08)
	float ScaleStart; // 0x428(0x04)
	float ScaleEnd; // 0x42c(0x04)
	struct UCurveFloat* ScaleCurve; // 0x430(0x08)
	struct UCurveFloat* MoveCurve; // 0x438(0x08)
	struct FVector2D MoveStart; // 0x440(0x08)
	struct FVector2D MoveEnd; // 0x448(0x08)
	float AlphaStart; // 0x450(0x04)
	float AlphaEnd; // 0x454(0x04)
	struct UCurveFloat* AlphaCurve; // 0x458(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> ParticleMIDArray; // 0x460(0x10)
	struct AActor* SkyMeshActor; // 0x470(0x08)
	struct TArray<struct FBoardAnimationInfo> vecNextBoardAnim; // 0x478(0x10)
	struct TArray<struct TSoftObjectPtr<USkeletalMesh>> PlaneMeshAssetList; // 0x488(0x10)
	struct TArray<struct TSoftObjectPtr<UParticleSystem>> StaticCutFramePSAsset; // 0x498(0x10)
	struct TArray<struct UParticleSystem*> StaticCutFramePSObject; // 0x4a8(0x10)
	struct TSoftClassPtr<UObject> ChildActorAsset; // 0x4b8(0x28)
	struct TSoftObjectPtr<UMaterialInterface> LinearToSRGBMaterialAsset; // 0x4e0(0x28)
	struct TSoftObjectPtr<USkeletalMesh> StaticPlSkyMeshAsset; // 0x508(0x28)
	struct ABP_EventCaptureCamera_C* GeneralCaptureCamera; // 0x530(0x08)
	struct ARSLevelSequenceActor* GeneralStaticSequenceActor; // 0x538(0x08)
	struct TArray<struct FString> vecPlAnimNamePath; // 0x540(0x10)
	struct URSParticleSystemComponentBase* CurrentFrameTelepathyParticle; // 0x550(0x08)
	struct TArray<struct UParticleSystem*> StaticCutTelepathyPSObject; // 0x558(0x10)
	struct TArray<struct TSoftObjectPtr<UParticleSystem>> StaticCutTelepathyPSAsset; // 0x568(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> TelepathyParticleMIDArray; // 0x578(0x10)
	struct TArray<struct ASequencerParticle*> GeneralParticles; // 0x588(0x10)
	struct UMaterialInterface* LinearToSRGBMaterial; // 0x598(0x08)
	struct TArray<struct UParticleSystem*> StaticCutOverTelepathyPSObject; // 0x5a0(0x10)
	struct TArray<struct TSoftObjectPtr<UParticleSystem>> StaticCutOverTelepathyPSAsset; // 0x5b0(0x10)
	struct URSParticleSystemComponentBase* CurrentFrameOverTelepathyParticle; // 0x5c0(0x08)
	struct FName BoardParamCurve_XParamName_2; // 0x5c8(0x08)
	struct FName BoardParamCurve_YParamName_2; // 0x5d0(0x08)
	struct FName BoardParamCurve_XParamName_3; // 0x5d8(0x08)
	struct FName BoardParamCurve_YParamName_3; // 0x5e0(0x08)
	bool IsCrossFadeCapActor; // 0x5e8(0x01)
	char pad_5E9[0x3]; // 0x5e9(0x03)
	struct FName BeforeCapturePresetName; // 0x5ec(0x08)
	char pad_5F4[0x4]; // 0x5f4(0x04)
	struct UCurveFloat* DefaultCrossFadeCurve; // 0x5f8(0x08)
	float BoardParamCurve_XParamRate_2; // 0x600(0x04)
	float BoardParamCurve_YParamRate_2; // 0x604(0x04)
	float BoardParamCurve_XParamRate_3; // 0x608(0x04)
	float BoardParamCurve_YParamRate_3; // 0x60c(0x04)
	struct FFRenderTargetData MainRTData; // 0x610(0x18)
	struct FVector BoardParamCurve_Sp_Add_2; // 0x628(0x0c)
	struct FVector BoardParamCurve_Sp_Add_3; // 0x634(0x0c)
	struct FVector BoardParamCurve_Sp_Mul_2; // 0x640(0x0c)
	struct FVector BoardParamCurve_Sp_Mul_3; // 0x64c(0x0c)
	struct ANpcSkeletalMeshActor* NpcSkeletalActor; // 0x658(0x08)
	enum class ETimelineDirection CurrentCrossFadeTimelineDirection; // 0x660(0x01)
	char pad_661[0x7]; // 0x661(0x07)
	struct FString LastBordAnimationName; // 0x668(0x10)
	enum class EEventCaptureType CurrentCaptureType; // 0x678(0x01)
	char pad_679[0x3]; // 0x679(0x03)
	float SequenceEffectAlpha; // 0x67c(0x04)
	struct FFEventSettingCapData CurrentSettingCapData; // 0x680(0x70)
	struct TArray<struct FFChangeFaceData> ChangeFaceDataArray; // 0x6f0(0x10)
	struct FFChangeFaceData NextChangeFaceData; // 0x700(0x14)
	char pad_714[0x4]; // 0x714(0x04)
	struct FTimerHandle CurrentChangeFaceTimeHandle; // 0x718(0x08)
	int32_t CaptureActorIndex; // 0x720(0x04)
	char pad_724[0x4]; // 0x724(0x04)
	struct ABPCaptureActor_C* CrossFadeCapActor; // 0x728(0x08)
	bool IsEveryFrameCapture; // 0x730(0x01)
	char pad_731[0x7]; // 0x731(0x07)
	struct TSoftObjectPtr<UMaterialInstance> MI_static_pl_16_9Asset; // 0x738(0x28)
	struct UMaterialInstance* MI_static_pl_16_9Object; // 0x760(0x08)
	struct TSoftObjectPtr<UMaterialInstance> MI_static_pl_skyAsset; // 0x768(0x28)
	struct UMaterialInstance* MI_static_pl_skyObject; // 0x790(0x08)
	bool IsUpdateCaptureScene; // 0x798(0x01)
	char pad_799[0x7]; // 0x799(0x07)
	struct TArray<struct ARSBattleCharacter_C*> BindActorArray; // 0x7a0(0x10)
	struct UDataTable* FaceDataList; // 0x7b0(0x08)
	struct UAnimMontage* CharaLipSyncAnimMontage; // 0x7b8(0x08)
	bool IsCaptureCrossFadeCapActor; // 0x7c0(0x01)
	char pad_7C1[0x7]; // 0x7c1(0x07)
	struct UAnimMontage* CharaDefaultFaceAnimMontage; // 0x7c8(0x08)
	struct TArray<struct FEventPlAnimationCurveParam> CurrentPlAnimationCurveDataList; // 0x7d0(0x10)
	float BeforeCrossFadeCurveValue; // 0x7e0(0x04)
	struct FName BoardParamCurve_XParamName_4; // 0x7e4(0x08)
	struct FName BoardParamCurve_YParamName_4; // 0x7ec(0x08)
	float BoardParamCurve_XParamRate_4; // 0x7f4(0x04)
	float BoardParamCurve_YParamRate_4; // 0x7f8(0x04)
	struct FVector BoardParamCurve_Sp_Add_4; // 0x7fc(0x0c)
	struct FVector BoardParamCurve_Sp_Mul_4; // 0x808(0x0c)
	char pad_814[0x4]; // 0x814(0x04)
	struct UCurveFloat* DefaultAddBoardAnimCurve; // 0x818(0x08)
	int32_t GeneralParticleDirty; // 0x820(0x04)
	float BeforeAlphaCurveValue; // 0x824(0x04)
	float CurrentEffectAlpha; // 0x828(0x04)
	bool WaitGeneralCapture; // 0x82c(0x01)
	char pad_82D[0x3]; // 0x82d(0x03)
	struct UAnimMontage* ImageMaterialAnimMontage; // 0x830(0x08)
	struct TSoftObjectPtr<UMaterialInstance> MI_static_pl_CharaBGAsset; // 0x838(0x28)
	struct UMaterialInstance* MI_static_pl_CharaBG; // 0x860(0x08)
	struct AActor* FacialCaptureActor; // 0x868(0x08)
	struct USkeletalMeshComponent* FacialCaptureMesh; // 0x870(0x08)
	struct UDataTable* EyeDataList; // 0x878(0x08)
	struct USkeletalMesh* CharaFacePartsMesh; // 0x880(0x08)
	struct TSoftObjectPtr<USkeletalMesh> CharaFacePartsMeshAsset; // 0x888(0x28)
	struct UCurveFloat* DefaultFrameParticleFadeCurve; // 0x8b0(0x08)
	enum class EStaticPlType BeforeStaticPlType; // 0x8b8(0x01)
	char pad_8B9[0x3]; // 0x8b9(0x03)
	int32_t GeneralParticleHandle; // 0x8bc(0x04)
	struct UTextureRenderTarget2D* HighResRenderTarget2; // 0x8c0(0x08)
	struct UTextureRenderTarget2D* HighResRenderTarget3; // 0x8c8(0x08)
	int32_t HighResRenderIndex; // 0x8d0(0x04)
	enum class ERenderTargetType HighResUsedRenderTargetType2; // 0x8d4(0x01)
	enum class ERenderTargetType HighResUsedRenderTargetType3; // 0x8d5(0x01)
	char pad_8D6[0x2]; // 0x8d6(0x02)
	float HighResRestoreMPCGlobalRate; // 0x8d8(0x04)
	int32_t FaceTAACount; // 0x8dc(0x04)
	struct TArray<struct FMovieSceneObjectBindingID> GeneralParticleBindings; // 0x8e0(0x10)
	bool HighResMode; // 0x8f0(0x01)
	char pad_8F1[0x7]; // 0x8f1(0x07)
	struct TArray<struct ABP_MenuPlayerBase_C*> GeneralBindingSpawnInstance; // 0x8f8(0x10)
	struct TArray<struct USkeletalMeshComponent*> HighResPauseMeshes; // 0x908(0x10)
	struct TArray<struct ASkeletalMeshActor*> GeneralBindingSpawnWeaponInstance; // 0x918(0x10)
	int32_t GeneralTAACaptureTime; // 0x928(0x04)
	bool GeneralTAACaptureMode; // 0x92c(0x01)
	bool RestoreOptimizeTickCharaFaceParts; // 0x92d(0x01)
	bool RestoreOptimizeTickStaticPlWidget; // 0x92e(0x01)
	char pad_92F[0x1]; // 0x92f(0x01)
	struct UDataTable* CharaPartsDataList; // 0x930(0x08)
	bool BGWaitMode; // 0x938(0x01)
	char pad_939[0x7]; // 0x939(0x07)
	struct TArray<struct UMaterialInterface*> DebugStaticPLMaterial; // 0x940(0x10)
	bool GStaticRemoveEventCommand; // 0x950(0x01)
	bool GeneralParticleRetry; // 0x951(0x01)
	char pad_952[0x2]; // 0x952(0x02)
	float GeneralTAACaptureSeconds; // 0x954(0x04)
	struct FName DynamicTextureRowName; // 0x958(0x08)
	struct TArray<struct USkeletalMesh*> 16_9PlaneMeshList; // 0x960(0x10)
	struct TArray<struct USkeletalMesh*> 1_1PlaneMeshList; // 0x970(0x10)
	struct TArray<struct TSoftObjectPtr<USkeletalMesh>> 16_9PlaneMeshAssetList; // 0x980(0x10)
	struct TArray<struct TSoftObjectPtr<USkeletalMesh>> 1_1PlaneMeshAssetList; // 0x990(0x10)
	struct FRandomStream PlRandomStream; // 0x9a0(0x08)
	struct TArray<struct UParticleSystem*> StaticCut1_1FramePSObject; // 0x9a8(0x10)
	struct TArray<struct UParticleSystem*> StaticCut16_9FramePSObject; // 0x9b8(0x10)
	struct TArray<struct TSoftObjectPtr<UParticleSystem>> StaticCut1_1FramePSAsset; // 0x9c8(0x10)
	struct TArray<struct TSoftObjectPtr<UParticleSystem>> StaticCut16_9FramePSAsset; // 0x9d8(0x10)
	bool IsUseRandomPl; // 0x9e8(0x01)
	char pad_9E9[0x3]; // 0x9e9(0x03)
	float BackupMaterialParam_SrcTexX; // 0x9ec(0x04)
	float BackupMaterialParam_SrcTexY; // 0x9f0(0x04)
	char pad_9F4[0x4]; // 0x9f4(0x04)
	struct TArray<struct UMaterialInstance*> MaterialSources; // 0x9f8(0x10)
	bool HiddenMark; // 0xa08(0x01)
	bool ParticleAfterActorTickOff; // 0xa09(0x01)
	char pad_A0A[0x6]; // 0xa0a(0x06)
	struct AActor* DecalBP; // 0xa10(0x08)
	float HighResProjectionScaleX; // 0xa18(0x04)
	bool RestoreOptimizeTickCharaFacePartsCustom; // 0xa1c(0x01)
	bool SetupStoreSequencerInGameTransform; // 0xa1d(0x01)
	char pad_A1E[0x2]; // 0xa1e(0x02)
	struct TArray<struct URSParticleSystemComponentBase*> HighResTickPauseParticles; // 0xa20(0x10)
	bool HighResResetCull; // 0xa30(0x01)
	bool GeneralTAACaptureManyCap; // 0xa31(0x01)
	bool CaptureGeneralStatic; // 0xa32(0x01)

	void Is Valid Curve Param Type(enum class ECurveParamType CurveParamType, bool ReturnIsValid); // Function BPCaptureActor.BPCaptureActor_C.Is Valid Curve Param Type // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetGeneralStaticBindingActors(struct TArray<struct ABP_MenuPlayerBase_C*> GeneralBindingSpawnInstance, struct TArray<struct ASkeletalMeshActor*> GeneralBindingSpawnWeaponInstance); // Function BPCaptureActor.BPCaptureActor_C.GetGeneralStaticBindingActors // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct UAnimationAsset* Get Anim Sequence from Path(struct FString Path, bool Load); // Function BPCaptureActor.BPCaptureActor_C.Get Anim Sequence from Path // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearBloodDecalBP(); // Function BPCaptureActor.BPCaptureActor_C.ClearBloodDecalBP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBloodDecalBP(); // Function BPCaptureActor.BPCaptureActor_C.SetBloodDecalBP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Set Hidden by Current Status(); // Function BPCaptureActor.BPCaptureActor_C.Set Hidden by Current Status // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Set Hidden Mark(bool Hidden); // Function BPCaptureActor.BPCaptureActor_C.Set Hidden Mark // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Set All Tick Enabled(bool Enabled); // Function BPCaptureActor.BPCaptureActor_C.Set All Tick Enabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Check and Change Light Material BP(); // Function BPCaptureActor.BPCaptureActor_C.Check and Change Light Material BP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetRandomPlaneMesh(struct TArray<struct USkeletalMesh*> PlanList, struct USkeletalMesh* PlaneMesh); // Function BPCaptureActor.BPCaptureActor_C.GetRandomPlaneMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update Frame Drop(float DeltaSeconds); // Function BPCaptureActor.BPCaptureActor_C.Update Frame Drop // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSkipButton(); // Function BPCaptureActor.BPCaptureActor_C.OnSkipButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateGeneralParticles(); // Function BPCaptureActor.BPCaptureActor_C.UpdateGeneralParticles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeCharaMaterial(struct FName RowName); // Function BPCaptureActor.BPCaptureActor_C.ChangeCharaMaterial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TAAForceCaptureFinishEventStack(); // Function BPCaptureActor.BPCaptureActor_C.TAAForceCaptureFinishEventStack // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayNpcMeshMontage(struct UAnimMontage* AnimMontage, float InPlayRate, float InTimeToStartMontageAt, struct FName SectionName); // Function BPCaptureActor.BPCaptureActor_C.PlayNpcMeshMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsTownPeopleSkeletalMesh(struct FString CharaObjectName); // Function BPCaptureActor.BPCaptureActor_C.IsTownPeopleSkeletalMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void OffOptimizeTick(); // Function BPCaptureActor.BPCaptureActor_C.OffOptimizeTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnOptimizeTick(); // Function BPCaptureActor.BPCaptureActor_C.OnOptimizeTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndGStatic TAACapture(); // Function BPCaptureActor.BPCaptureActor_C.EndGStatic TAACapture // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartGStatic TAACapture(bool UseTAA, bool ManyCapture); // Function BPCaptureActor.BPCaptureActor_C.StartGStatic TAACapture // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Setup GStatic TAACapture(enum class EEventCaptureRenderType RenderType, bool ErrorTextureTarget); // Function BPCaptureActor.BPCaptureActor_C.Setup GStatic TAACapture // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsGStaticTAACaptureFirst(bool Run); // Function BPCaptureActor.BPCaptureActor_C.IsGStaticTAACaptureFirst // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsGStaticTAACaptureRun(bool Run); // Function BPCaptureActor.BPCaptureActor_C.IsGStaticTAACaptureRun // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void PrivateRestoreHighResAnimation(); // Function BPCaptureActor.BPCaptureActor_C.PrivateRestoreHighResAnimation // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivatePauseHighResInGameActorsAnimation(); // Function BPCaptureActor.BPCaptureActor_C.PrivatePauseHighResInGameActorsAnimation // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DestroyFrameParticle(); // Function BPCaptureActor.BPCaptureActor_C.DestroyFrameParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct UAnimationAsset* Get Chara Face Part AnimSequence(struct UObject* Object, struct FString FacialName, bool IsFaceAnimation); // Function BPCaptureActor.BPCaptureActor_C.Get Chara Face Part AnimSequence // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupHighResCaptureMaterial(bool UseHighRes); // Function BPCaptureActor.BPCaptureActor_C.PrivateSetupHighResCaptureMaterial // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupFacialCaptureRenderSettingNPC(struct URSSceneCaptureComponent2D* SceneCapture, struct FName CapturePresetName, struct ANpcSkeletalMeshActor* NPCSkelActor); // Function BPCaptureActor.BPCaptureActor_C.SetupFacialCaptureRenderSettingNPC // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupFacialCaptureRenderSettingInternal(struct URSSceneCaptureComponent2D* SceneCapture, struct FName CapturePresetName, struct FEventFacialCaptureRenderSettings RenderSetting, bool NpMaterial); // Function BPCaptureActor.BPCaptureActor_C.SetupFacialCaptureRenderSettingInternal // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AdjustCaptureTarget(enum class EEventCaptureType CaptureType, int32_t FaceBoardMeshIndex, bool Reset); // Function BPCaptureActor.BPCaptureActor_C.AdjustCaptureTarget // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupFacialCaptureRenderSetting(struct URSSceneCaptureComponent2D* SceneCapture, struct FName CapturePresetName, struct AActor* Actor, struct USkeletalMeshComponent* SkelMeshComp); // Function BPCaptureActor.BPCaptureActor_C.SetupFacialCaptureRenderSetting // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupHighResCapture(struct URSSceneCaptureComponent2D* SceneCapture, enum class EEventCaptureRenderType RenderType); // Function BPCaptureActor.BPCaptureActor_C.PrivateSetupHighResCapture // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupPlMaterialRenderType(struct UMaterialInstanceDynamic* Mid, enum class EEventCaptureRenderType RenderType); // Function BPCaptureActor.BPCaptureActor_C.PrivateSetupPlMaterialRenderType // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateGetRenderTarget(bool IsFace, struct FText ErrorInformation, struct FFRenderTargetData RTData); // Function BPCaptureActor.BPCaptureActor_C.PrivateGetRenderTarget // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupHighResRenderTarget(struct FText ErrorInformation); // Function BPCaptureActor.BPCaptureActor_C.PrivateSetupHighResRenderTarget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupFacialCaptureMaterial(bool IsNPC); // Function BPCaptureActor.BPCaptureActor_C.SetupFacialCaptureMaterial // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupStageParam(struct ARSLevelSequenceActor* LevelSequence, struct TArray<struct ABP_MenuPlayerBase_C*> BindingSpawnPlayers, struct TArray<struct ASkeletalMeshActor*> BindingSpawnWeapons, bool UseInGamePlayer); // Function BPCaptureActor.BPCaptureActor_C.PrivateSetupStageParam // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSequenceInGamePartyMember(); // Function BPCaptureActor.BPCaptureActor_C.SetSequenceInGamePartyMember // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCharaFaceMaterialParameter(struct FName SectionName); // Function BPCaptureActor.BPCaptureActor_C.SetCharaFaceMaterialParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetFrameParticleAlpha(float Alpha); // Function BPCaptureActor.BPCaptureActor_C.SetFrameParticleAlpha // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDebugPl(); // Function BPCaptureActor.BPCaptureActor_C.SetDebugPl // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SettingCharaFacePartsMesh(struct FName FaceAnimationName, struct FName CharaPartsDTRowName); // Function BPCaptureActor.BPCaptureActor_C.SettingCharaFacePartsMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCharaEyeData(struct FName CharaEyePresetName, float EyeXAxisThreshold, float EyeYAxisThreshold); // Function BPCaptureActor.BPCaptureActor_C.SetCharaEyeData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearFacialModelCaptureMesh(); // Function BPCaptureActor.BPCaptureActor_C.ClearFacialModelCaptureMesh // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupSkeletalMeshes(struct ARSLevelSequenceActor* Sequencer); // Function BPCaptureActor.BPCaptureActor_C.SetupSkeletalMeshes // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayBoardCurveValueMontage(struct UAnimMontage* AnimMontage, bool IsLoop, struct UCurveFloat* MontageWeghtCurveAsset); // Function BPCaptureActor.BPCaptureActor_C.PlayBoardCurveValueMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateResetGemeralParticles(); // Function BPCaptureActor.BPCaptureActor_C.PrivateResetGemeralParticles // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StoreSequencerInGame(struct ULevelSequence* Sequencer, float SequencePosition); // Function BPCaptureActor.BPCaptureActor_C.StoreSequencerInGame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCaptureSequencerFinished(bool RemoveEventCommand); // Function BPCaptureActor.BPCaptureActor_C.OnCaptureSequencerFinished // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RemoveSequencerInPsychicObject(); // Function BPCaptureActor.BPCaptureActor_C.RemoveSequencerInPsychicObject // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePhaseAnimCurveData(); // Function BPCaptureActor.BPCaptureActor_C.UpdatePhaseAnimCurveData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayCharaMeshMontage(struct UAnimMontage* AnimMontage, float InPlayRate, float InTimeToStartMontageAt, struct FName SectionName); // Function BPCaptureActor.BPCaptureActor_C.PlayCharaMeshMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCaptureSceneFace(); // Function BPCaptureActor.BPCaptureActor_C.UpdateCaptureSceneFace // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCharaBGData(struct FName CapturePresetName, enum class EStaticPlType StaticPlType); // Function BPCaptureActor.BPCaptureActor_C.SetCharaBGData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SettingCharaBGCapture(); // Function BPCaptureActor.BPCaptureActor_C.SettingCharaBGCapture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearChangeFaceTimerData(); // Function BPCaptureActor.BPCaptureActor_C.ClearChangeFaceTimerData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetChangeFaceTimer(); // Function BPCaptureActor.BPCaptureActor_C.SetChangeFaceTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnChangeFaceTimerEnd(); // Function BPCaptureActor.BPCaptureActor_C.OnChangeFaceTimerEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartChangeFaceTimer(struct TArray<struct FFChangeFaceData> ChangeFaceDataArray); // Function BPCaptureActor.BPCaptureActor_C.StartChangeFaceTimer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCharaFaceAnimMontage(struct FName SectionName); // Function BPCaptureActor.BPCaptureActor_C.SetCharaFaceAnimMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCharaBodyAnimMontage(struct FName SectionName); // Function BPCaptureActor.BPCaptureActor_C.SetCharaBodyAnimMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearStoreRenderTarget(); // Function BPCaptureActor.BPCaptureActor_C.ClearStoreRenderTarget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAllPartsVisibility(bool NewVisibility); // Function BPCaptureActor.BPCaptureActor_C.SetAllPartsVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayNodeAnimation(struct FString BoardAnimationIndex); // Function BPCaptureActor.BPCaptureActor_C.PlayNodeAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct UAnimationAsset* GetAnimSequenceForAnimFullPath(struct FString Prefix); // Function BPCaptureActor.BPCaptureActor_C.GetAnimSequenceForAnimFullPath // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetModelHiddenInGame(bool IsHiddenCaptureModel); // Function BPCaptureActor.BPCaptureActor_C.SetModelHiddenInGame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SettingNpcModel(struct FName charaAnimName, struct FName charaFaceAnimName, int32_t NpcMeshTableID, int32_t NpcMaterialTableID); // Function BPCaptureActor.BPCaptureActor_C.SettingNpcModel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAnimationRate(); // Function BPCaptureActor.BPCaptureActor_C.UpdateAnimationRate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTelepathyParticleMIDArray(struct URSParticleSystemComponentBase* ParticleComponent); // Function BPCaptureActor.BPCaptureActor_C.SetTelepathyParticleMIDArray // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupPPM(struct URSSceneCaptureComponent2D* SceneCapture, struct UCineCameraComponent* AddPostProcess); // Function BPCaptureActor.BPCaptureActor_C.SetupPPM // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupGeneralStaticParticle(struct ARSLevelSequenceActor* LevelSequenceActor, struct TArray<struct FMovieSceneObjectBindingID> BindingID); // Function BPCaptureActor.BPCaptureActor_C.PrivateSetupGeneralStaticParticle // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SettingNormalBoardAnimation(struct UAnimMontage* AnimMontage); // Function BPCaptureActor.BPCaptureActor_C.SettingNormalBoardAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SettingGeneralBoardAnimation(struct UAnimMontage* AnimMontage); // Function BPCaptureActor.BPCaptureActor_C.SettingGeneralBoardAnimation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTexParameterForTexDatatable(struct UDataTable* DataTable, struct FName RowName, struct UMaterialInstanceDynamic* InputPin, struct UTexture* AsTexture); // Function BPCaptureActor.BPCaptureActor_C.SetTexParameterForTexDatatable // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SettingMovieTexture(struct UMaterialInstanceDynamic* MaterialInstance, struct FName MovieTextureRowName); // Function BPCaptureActor.BPCaptureActor_C.SettingMovieTexture // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CaptureSceneGeneralStatic(struct ULevelSequence* InSequence, float NewPlaybackPosition, bool IsSeamlessInGameCapture, enum class EEventCaptureRenderType RenderType); // Function BPCaptureActor.BPCaptureActor_C.CaptureSceneGeneralStatic // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAnimMontageTransform(struct FString BoardAnimName); // Function BPCaptureActor.BPCaptureActor_C.SetAnimMontageTransform // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetBoardAnimation(); // Function BPCaptureActor.BPCaptureActor_C.ResetBoardAnimation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadAsset(); // Function BPCaptureActor.BPCaptureActor_C.LoadAsset // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartAutoBoardAnimaton(struct FString BoardAnimatonName, struct UAnimMontage* AddBordAnimMontage, enum class EStaticPlType StaticPlType, struct TSoftObjectPtr<UCurveFloat> PlayRateCurveData); // Function BPCaptureActor.BPCaptureActor_C.StartAutoBoardAnimaton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckAutoBoardAnimation(); // Function BPCaptureActor.BPCaptureActor_C.CheckAutoBoardAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearSceneCaptureRenderTarget(); // Function BPCaptureActor.BPCaptureActor_C.ClearSceneCaptureRenderTarget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSceneCaptureRenderTarget(); // Function BPCaptureActor.BPCaptureActor_C.SetSceneCaptureRenderTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCaptureShowOnlyActors(); // Function BPCaptureActor.BPCaptureActor_C.SetCaptureShowOnlyActors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupAlphaSort(); // Function BPCaptureActor.BPCaptureActor_C.SetupAlphaSort // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetActorLocationForSocketName(struct FName SocketName, enum class EStaticPlType StaticPlType); // Function BPCaptureActor.BPCaptureActor_C.SetActorLocationForSocketName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBP_static_pl(struct ACharacter* ASCharacter); // Function BPCaptureActor.BPCaptureActor_C.GetBP_static_pl // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTicks(bool Enabled); // Function BPCaptureActor.BPCaptureActor_C.SetTicks // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndEvent(); // Function BPCaptureActor.BPCaptureActor_C.EndEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartEvent(); // Function BPCaptureActor.BPCaptureActor_C.StartEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcTimelineRate(struct UTimelineComponent* Timeline, struct UCurveFloat* Curve, float Rate); // Function BPCaptureActor.BPCaptureActor_C.CalcTimelineRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct UAnimationAsset* GetCharaBodyAnimMontage(struct UObject* Object); // Function BPCaptureActor.BPCaptureActor_C.GetCharaBodyAnimMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct UAnimationAsset* GetCharaFaceAnimMontage(struct UObject* Object, struct FString FacialName, bool IsFaceAnimation); // Function BPCaptureActor.BPCaptureActor_C.GetCharaFaceAnimMontage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct UObject* GetCharaAnimInstance(struct UObject* Object); // Function BPCaptureActor.BPCaptureActor_C.GetCharaAnimInstance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventEnd(bool IsCrossFadeActor); // Function BPCaptureActor.BPCaptureActor_C.EventEnd // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct UAnimationAsset* GetCharaAnimSequence(struct UObject* Object, struct FName InName); // Function BPCaptureActor.BPCaptureActor_C.GetCharaAnimSequence // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct UAnimationAsset* GetAnimSequenceForAnimNamePath(struct FString Prefix, bool IsBoardOrbitAnimation); // Function BPCaptureActor.BPCaptureActor_C.GetAnimSequenceForAnimNamePath // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEndMotion(bool IsEndMotion); // Function BPCaptureActor.BPCaptureActor_C.IsEndMotion // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CaptureScene(); // Function BPCaptureActor.BPCaptureActor_C.CaptureScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddBoardAnimation(struct FString BoardAnimationIndex, bool IsLoop); // Function BPCaptureActor.BPCaptureActor_C.AddBoardAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPlaneMeshHiddenInGame(bool IsHidden); // Function BPCaptureActor.BPCaptureActor_C.SetPlaneMeshHiddenInGame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayBoardAnimation(struct FString BoardAnimationIndex, bool IsLoop, struct FName SocketName, bool isAddMotion, enum class EStaticPlType StaticPlType, struct TSoftObjectPtr<UCurveFloat> PlayRateCurveData, bool IsSuccess); // Function BPCaptureActor.BPCaptureActor_C.PlayBoardAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SettingCapture(int32_t BoardMeshIndex, struct FName CapturePresetName, struct FName CharaAnimationName, struct FName CharaFaceAnimationName, int32_t NpcMeshTableID, int32_t NpcMaterialTableID, struct FName LightPresetName, struct ULevelSequence* CaptureSequence, float CaptureSequencePosition, struct FName TextureRowName, enum class EStaticPlType StaticPlType, struct FName MovieTextureRowName, bool IsUseSaveTexture, bool IsSeamlessInGameCapture, bool IsNoStaticPlSetting, bool IsHiddenPlFrameEffect, struct FName CharaEyePresetName, float EyeXAxisThreshold, float EyeYAxisThreshold, struct FName CharaPartsDTRowName, enum class EEventCaptureRenderType RenderType); // Function BPCaptureActor.BPCaptureActor_C.SettingCapture // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EffectGaussFilterTimeline__FinishedFunc(); // Function BPCaptureActor.BPCaptureActor_C.EffectGaussFilterTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1685580
	void EffectGaussFilterTimeline__UpdateFunc(); // Function BPCaptureActor.BPCaptureActor_C.EffectGaussFilterTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1685580
	void NoiseTimeline__FinishedFunc(); // Function BPCaptureActor.BPCaptureActor_C.NoiseTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1685580
	void NoiseTimeline__UpdateFunc(); // Function BPCaptureActor.BPCaptureActor_C.NoiseTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1685580
	void NoiseAdvancedTimeline__FinishedFunc(); // Function BPCaptureActor.BPCaptureActor_C.NoiseAdvancedTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1685580
	void NoiseAdvancedTimeline__UpdateFunc(); // Function BPCaptureActor.BPCaptureActor_C.NoiseAdvancedTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1685580
	void EffectScaleTimeline__FinishedFunc(); // Function BPCaptureActor.BPCaptureActor_C.EffectScaleTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1685580
	void EffectScaleTimeline__UpdateFunc(); // Function BPCaptureActor.BPCaptureActor_C.EffectScaleTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1685580
	void EffectMoveTimeline__FinishedFunc(); // Function BPCaptureActor.BPCaptureActor_C.EffectMoveTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1685580
	void EffectMoveTimeline__UpdateFunc(); // Function BPCaptureActor.BPCaptureActor_C.EffectMoveTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1685580
	void EffectAlphaTimeline__FinishedFunc(); // Function BPCaptureActor.BPCaptureActor_C.EffectAlphaTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1685580
	void EffectAlphaTimeline__UpdateFunc(); // Function BPCaptureActor.BPCaptureActor_C.EffectAlphaTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1685580
	void CrossFadeTimeline__FinishedFunc(); // Function BPCaptureActor.BPCaptureActor_C.CrossFadeTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1685580
	void CrossFadeTimeline__UpdateFunc(); // Function BPCaptureActor.BPCaptureActor_C.CrossFadeTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1685580
	void TelepathyTimeLine__FinishedFunc(); // Function BPCaptureActor.BPCaptureActor_C.TelepathyTimeLine__FinishedFunc // (BlueprintEvent) // @ game+0x1685580
	void TelepathyTimeLine__UpdateFunc(); // Function BPCaptureActor.BPCaptureActor_C.TelepathyTimeLine__UpdateFunc // (BlueprintEvent) // @ game+0x1685580
	void BoardParamCurveTimelineBase_1__FinishedFunc(); // Function BPCaptureActor.BPCaptureActor_C.BoardParamCurveTimelineBase_1__FinishedFunc // (BlueprintEvent) // @ game+0x1685580
	void BoardParamCurveTimelineBase_1__UpdateFunc(); // Function BPCaptureActor.BPCaptureActor_C.BoardParamCurveTimelineBase_1__UpdateFunc // (BlueprintEvent) // @ game+0x1685580
	void BoardParamCurveTimelineBase_2__FinishedFunc(); // Function BPCaptureActor.BPCaptureActor_C.BoardParamCurveTimelineBase_2__FinishedFunc // (BlueprintEvent) // @ game+0x1685580
	void BoardParamCurveTimelineBase_2__UpdateFunc(); // Function BPCaptureActor.BPCaptureActor_C.BoardParamCurveTimelineBase_2__UpdateFunc // (BlueprintEvent) // @ game+0x1685580
	void BoardParamCurveTimelineBase_3__FinishedFunc(); // Function BPCaptureActor.BPCaptureActor_C.BoardParamCurveTimelineBase_3__FinishedFunc // (BlueprintEvent) // @ game+0x1685580
	void BoardParamCurveTimelineBase_3__UpdateFunc(); // Function BPCaptureActor.BPCaptureActor_C.BoardParamCurveTimelineBase_3__UpdateFunc // (BlueprintEvent) // @ game+0x1685580
	void TimelineAddBoardAnimWeightCurve__FinishedFunc(); // Function BPCaptureActor.BPCaptureActor_C.TimelineAddBoardAnimWeightCurve__FinishedFunc // (BlueprintEvent) // @ game+0x1685580
	void TimelineAddBoardAnimWeightCurve__UpdateFunc(); // Function BPCaptureActor.BPCaptureActor_C.TimelineAddBoardAnimWeightCurve__UpdateFunc // (BlueprintEvent) // @ game+0x1685580
	void FrameParticleAlphaTimeline__FinishedFunc(); // Function BPCaptureActor.BPCaptureActor_C.FrameParticleAlphaTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1685580
	void FrameParticleAlphaTimeline__UpdateFunc(); // Function BPCaptureActor.BPCaptureActor_C.FrameParticleAlphaTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1685580
	void EffectGaussFilter(struct UCurveFloat* Curve, bool CurveReverse); // Function BPCaptureActor.BPCaptureActor_C.EffectGaussFilter // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EffectNoise(struct UCurveFloat* Curve, bool IsLoop); // Function BPCaptureActor.BPCaptureActor_C.EffectNoise // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EffectNoiseAdvanced(struct UCurveFloat* MonitorNoiseCurve, struct UCurveVector* FringeCurve, struct UCurveVector* GlitchCurve, struct UCurveFloat* NoiseCurve, bool IsLoop); // Function BPCaptureActor.BPCaptureActor_C.EffectNoiseAdvanced // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BPCaptureActor.BPCaptureActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BPCaptureActor.BPCaptureActor_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void EventSettingCapture(struct FName CapturePresetName, struct FName CharaAnimationTableName, float CharaAnimationStartFrame); // Function BPCaptureActor.BPCaptureActor_C.EventSettingCapture // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SequenceScale(float Time, float Start, float End, struct UCurveFloat* Curve, bool Loop); // Function BPCaptureActor.BPCaptureActor_C.SequenceScale // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SequenceMove(float Time, struct FVector2D Start, struct FVector2D End, struct UCurveFloat* Curve, bool Loop); // Function BPCaptureActor.BPCaptureActor_C.SequenceMove // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEffectScale(float Scale); // Function BPCaptureActor.BPCaptureActor_C.SetEffectScale // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEffectMove(struct FVector2D Offset); // Function BPCaptureActor.BPCaptureActor_C.SetEffectMove // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEffectAlpha(float Alpha); // Function BPCaptureActor.BPCaptureActor_C.SetEffectAlpha // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SequenceAlpha(float Time, float Start, float End, struct UCurveFloat* Curve, bool Loop); // Function BPCaptureActor.BPCaptureActor_C.SequenceAlpha // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopSequenceAlpha(); // Function BPCaptureActor.BPCaptureActor_C.StopSequenceAlpha // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopWaitSequencer(); // Function BPCaptureActor.BPCaptureActor_C.StopWaitSequencer // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventOnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function BPCaptureActor.BPCaptureActor_C.EventOnMontageBlendingOut // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventSettingGeneralBoard(struct FName SocketName); // Function BPCaptureActor.BPCaptureActor_C.EventSettingGeneralBoard // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventSettingNormalBoard(struct FName SocketName); // Function BPCaptureActor.BPCaptureActor_C.EventSettingNormalBoard // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CrossFade(struct UCurveFloat* Curve); // Function BPCaptureActor.BPCaptureActor_C.CrossFade // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartTelepathyLoop(); // Function BPCaptureActor.BPCaptureActor_C.StartTelepathyLoop // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BoardParamCurveTimeline(struct FName XParamName, struct FName YParamName, struct UCurveFloat* XCurve, struct UCurveFloat* YCurve, float Speed, float XParamRate, float YParamRate, struct FVector Sp_Add, struct FVector Sp_Mul); // Function BPCaptureActor.BPCaptureActor_C.BoardParamCurveTimeline // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopCrossFadeSequencer(); // Function BPCaptureActor.BPCaptureActor_C.StopCrossFadeSequencer // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateCapturePost(); // Function BPCaptureActor.BPCaptureActor_C.PrivateCapturePost // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BoardParamCurveTimelineReset(); // Function BPCaptureActor.BPCaptureActor_C.BoardParamCurveTimelineReset // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCaptureModelMontageEnd(struct UAnimMontage* Montage, bool bInterrupted); // Function BPCaptureActor.BPCaptureActor_C.OnCaptureModelMontageEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBoadAddAnimWeightCurve(struct UCurveFloat* Curve); // Function BPCaptureActor.BPCaptureActor_C.SetBoadAddAnimWeightCurve // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StoreSequencerInGameTransform(struct ULevelSequence* Sequnece, float SequencePosition); // Function BPCaptureActor.BPCaptureActor_C.StoreSequencerInGameTransform // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AlphaFadeFrameParticle(struct UCurveFloat* Curve); // Function BPCaptureActor.BPCaptureActor_C.AlphaFadeFrameParticle // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugRetryCapture(); // Function BPCaptureActor.BPCaptureActor_C.DebugRetryCapture // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TAACaptureSetting(); // Function BPCaptureActor.BPCaptureActor_C.TAACaptureSetting // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CancelTAACaptureSetting(); // Function BPCaptureActor.BPCaptureActor_C.CancelTAACaptureSetting // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ForceCaptureFinish(); // Function BPCaptureActor.BPCaptureActor_C.ForceCaptureFinish // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateGeneralCapturePost(); // Function BPCaptureActor.BPCaptureActor_C.PrivateGeneralCapturePost // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BPCaptureActor(int32_t EntryPoint); // Function BPCaptureActor.BPCaptureActor_C.ExecuteUbergraph_BPCaptureActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

