// BlueprintGeneratedClass BP_EventManager.BP_EventManager_C
// Size: 0x2cfd (Inherited: 0x330)
struct ABP_EventManager_C : AEventManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UBPC_OptimizeSwitchMaterialPlayer_C* BPC_OptimizeSwitchMaterialStaticFace; // 0x338(0x08)
	struct URSFrameGrabberComponent* RSFrameGrabberToStatic; // 0x340(0x08)
	struct URSFrameGrabberComponent* RSFrameGrabberToDynamic; // 0x348(0x08)
	struct URSSceneCaptureComponent2D* SeamlessCaptureComponent2D; // 0x350(0x08)
	struct UBPC_EventBindingPlayers_C* BPC_EventBindingPlayers; // 0x358(0x08)
	struct URSSceneCaptureComponent2D* StaticCutSceneCapture; // 0x360(0x08)
	struct UBP_EventAssetPoolComponent_C* BP_EventAssetPoolComponent; // 0x368(0x08)
	struct UDirectionalLightComponent* CaptureDirectionalLightComp; // 0x370(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x378(0x08)
	float DynamicToInGameInterp_Interp_CE5F0FB44F167C0C66498F890F64A58A; // 0x380(0x04)
	enum class ETimelineDirection DynamicToInGameInterp__Direction_CE5F0FB44F167C0C66498F890F64A58A; // 0x384(0x01)
	char pad_385[0x3]; // 0x385(0x03)
	struct UTimelineComponent* DynamicToInGameInterp; // 0x388(0x08)
	float BGScreenFadeTimeline_Alpha_C3870689477E87E3CCC458AA92AEB318; // 0x390(0x04)
	enum class ETimelineDirection BGScreenFadeTimeline__Direction_C3870689477E87E3CCC458AA92AEB318; // 0x394(0x01)
	char pad_395[0x3]; // 0x395(0x03)
	struct UTimelineComponent* BGScreenFadeTimeline; // 0x398(0x08)
	float StopStreamPPTimeline_Track_8062AEA34AD8F2E88D0C1BBA12F24C12; // 0x3a0(0x04)
	enum class ETimelineDirection StopStreamPPTimeline__Direction_8062AEA34AD8F2E88D0C1BBA12F24C12; // 0x3a4(0x01)
	char pad_3A5[0x3]; // 0x3a5(0x03)
	struct UTimelineComponent* StopStreamPPTimeline; // 0x3a8(0x08)
	float PPMMoveBlurTimeline_Rate_9E44A655488D3CA7FA5FE0AC19441E01; // 0x3b0(0x04)
	enum class ETimelineDirection PPMMoveBlurTimeline__Direction_9E44A655488D3CA7FA5FE0AC19441E01; // 0x3b4(0x01)
	char pad_3B5[0x3]; // 0x3b5(0x03)
	struct UTimelineComponent* PPMMoveBlurTimeline; // 0x3b8(0x08)
	float TransitionStaticToInGameTimeline_Track_98F59090477C1504072378B2FFFCF5A0; // 0x3c0(0x04)
	enum class ETimelineDirection TransitionStaticToInGameTimeline__Direction_98F59090477C1504072378B2FFFCF5A0; // 0x3c4(0x01)
	char pad_3C5[0x3]; // 0x3c5(0x03)
	struct UTimelineComponent* TransitionStaticToInGameTimeline; // 0x3c8(0x08)
	struct FMulticastInlineDelegate ED_Finish; // 0x3d0(0x10)
	struct FMulticastInlineDelegate ED_PlayStart; // 0x3e0(0x10)
	struct UUserWidget* BGScreenWidget; // 0x3f0(0x08)
	enum class EEventType EventType; // 0x3f8(0x01)
	char pad_3F9[0x7]; // 0x3f9(0x07)
	struct TArray<struct APostProcessVolume*> RestorePPV; // 0x400(0x10)
	struct TArray<struct ABPCaptureActor_C*> CaptureActorList; // 0x410(0x10)
	struct UREDLuaScriptComponent* REDLuaScriptComponent; // 0x420(0x08)
	struct ACineCameraActor* CineCameraActor; // 0x428(0x08)
	int32_t PlayerHiddenFlag; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	struct TArray<struct ABPSpecialCaptureActor_C*> SpecialCaptureActorList; // 0x438(0x10)
	struct AActor* SpecialStaticNodeActor; // 0x448(0x08)
	struct TArray<struct AActor*> EventActorList; // 0x450(0x10)
	struct UMaterialInstanceDynamic* MoveBlurMaterial; // 0x460(0x08)
	struct UPostProcessComponent* PostProcess; // 0x468(0x08)
	struct FPostProcessSettings DefaultSpecialCaptureActorPPSetting; // 0x470(0x780)
	struct ABP_CaptureBG_C* CaptureBG; // 0xbf0(0x08)
	bool IsRunLua; // 0xbf8(0x01)
	char pad_BF9[0x7]; // 0xbf9(0x07)
	struct FPostProcessSettings DefaultBGCaptureActorPPSetting; // 0xc00(0x780)
	struct TArray<struct FTransform> LastSpecialCaptureCameraTransform; // 0x1380(0x10)
	struct TArray<struct FTransform> LastSpecialCapturePlayerTransform; // 0x1390(0x10)
	int32_t StaticToInGameFinalSpecialIndex; // 0x13a0(0x04)
	struct FVector StaticToInGameCameraLocation; // 0x13a4(0x0c)
	struct FTransform StaticToInGameBeforeCameraTransform; // 0x13b0(0x30)
	struct FTransform StaticToInGamePlayerTransform; // 0x13e0(0x30)
	bool UseStaticToInGameCameraLocation; // 0x1410(0x01)
	bool UseStaticToInGamePlayerTransform; // 0x1411(0x01)
	char pad_1412[0x6]; // 0x1412(0x06)
	struct ACameraActor* StaticToInGameCamera; // 0x1418(0x08)
	bool UseStaticToInGame; // 0x1420(0x01)
	char pad_1421[0xf]; // 0x1421(0x0f)
	struct FTransform TransitionStartCameraTransform; // 0x1430(0x30)
	float TransitionStartCameraFOV; // 0x1460(0x04)
	char pad_1464[0x4]; // 0x1464(0x04)
	struct UDataTable* LightDataTable; // 0x1468(0x08)
	struct ABP_EventSettings_C* EventSettings; // 0x1470(0x08)
	struct AActor* CaptureSkyMesh; // 0x1478(0x08)
	struct AActor* StaticEventSkyMesh; // 0x1480(0x08)
	float AxisRightX; // 0x1488(0x04)
	float AxisRightY; // 0x148c(0x04)
	float MaxRotate; // 0x1490(0x04)
	float CameraDistance; // 0x1494(0x04)
	bool lua; // 0x1498(0x01)
	char pad_1499[0x7]; // 0x1499(0x07)
	struct TSoftClassPtr<UObject> BGScreenWidgetClassAsset; // 0x14a0(0x28)
	struct UUserWidget* BGScreenWidgetClassObject; // 0x14c8(0x08)
	struct TSoftClassPtr<UObject> BossNameWidgetClassAsset; // 0x14d0(0x28)
	struct TSoftClassPtr<UObject> CharaNameWidgetClassAsset; // 0x14f8(0x28)
	struct TSoftObjectPtr<UParticleSystem> StaticCutBGParticleAsset; // 0x1520(0x28)
	struct UUserWidget* BossNameWidgetClassObject; // 0x1548(0x08)
	struct UUserWidget* CharaNameWidgetClassObject; // 0x1550(0x08)
	struct UParticleSystem* StaticCutBGParticleObject; // 0x1558(0x08)
	struct TSoftObjectPtr<UStaticMesh> StaticCapSkyAsset; // 0x1560(0x28)
	struct UStaticMesh* StaticCapSkyObject; // 0x1588(0x08)
	struct TSoftObjectPtr<UTexture2D> VignetteMaskDefaultTextureAsset; // 0x1590(0x28)
	struct UTexture2D* VignetteMaskDefualtTextureObject; // 0x15b8(0x08)
	struct TSoftObjectPtr<UTexture2D> GlitchDefaultTextureAsset; // 0x15c0(0x28)
	struct TSoftClassPtr<UObject> BP_StaticSkyClassAsset; // 0x15e8(0x28)
	struct UTexture2D* GlitchDefualtTextureObject; // 0x1610(0x08)
	struct AActor* BP_StaticSkyClass; // 0x1618(0x08)
	struct TSoftClassPtr<UObject> BPFaceCapSkyClassAsset; // 0x1620(0x28)
	struct TSoftClassPtr<UObject> BP_SpecialStaticNodeActorClassAsset; // 0x1648(0x28)
	struct AActor* BPFaceCapSkyClass; // 0x1670(0x08)
	struct AActor* BP_SpecialStaticNodeActorClass; // 0x1678(0x08)
	struct TSoftObjectPtr<UAnimSequence> AS_ec9999_001_Default_Asset; // 0x1680(0x28)
	struct UAnimSequence* AS_ec9999_001_Default_Object; // 0x16a8(0x08)
	struct TSoftObjectPtr<UMaterialInterface> SepiaMaterialAsset; // 0x16b0(0x28)
	struct TSoftObjectPtr<UMaterialInterface> CapturePPMScreenLightAsset; // 0x16d8(0x28)
	struct TSoftObjectPtr<UMaterialInterface> MonoMaterialAsset; // 0x1700(0x28)
	struct TSoftObjectPtr<UMaterialInterface> VignetteMaterialAsset; // 0x1728(0x28)
	struct TSoftObjectPtr<UMaterialInterface> GlitchMaterialAsset; // 0x1750(0x28)
	struct TSoftObjectPtr<UMaterialInterface> LinearToSRGBMaterialAsset; // 0x1778(0x28)
	struct TArray<struct ABP_RedStringMeshSpawner_C*> RedStringsList; // 0x17a0(0x10)
	int32_t CurrentRedStringIndex; // 0x17b0(0x04)
	int32_t MaxRedString; // 0x17b4(0x04)
	enum class EStaticEventType StaticEventType; // 0x17b8(0x01)
	char pad_17B9[0x7]; // 0x17b9(0x07)
	struct TArray<struct ABP_ShowDestinationActor_C*> ArrayShowDestinationActor; // 0x17c0(0x10)
	struct FMulticastInlineDelegate OnChangeDestinationActor; // 0x17d0(0x10)
	struct TSoftObjectPtr<UMaterialInterface> MoveBlurMaterialAsset; // 0x17e0(0x28)
	struct UMaterialInterface* MoveBlurMaterialObject; // 0x1808(0x08)
	struct UDataTable* CaptureDataTable; // 0x1810(0x08)
	struct TMap<struct FName, struct USkeletalMesh*> CaptureDataTableCharaMeshObject; // 0x1818(0x50)
	struct UDataTable* TextureDataTable; // 0x1868(0x08)
	struct TMap<struct FName, struct UTexture*> TextureDataTableTextureObject; // 0x1870(0x50)
	struct TMap<struct FName, struct UManaTexture*> MovieTextureDataTableMovieTextureObject; // 0x18c0(0x50)
	struct UDataTable* MovieTextureDataTable; // 0x1910(0x08)
	struct UUserWidget* BossNameWidget; // 0x1918(0x08)
	struct UUserWidget* CharaNameWidget; // 0x1920(0x08)
	bool UseStaticToInGameBeforeCameraTransform; // 0x1928(0x01)
	char pad_1929[0x3]; // 0x1929(0x03)
	float StaticToInGameBeforeCameraFOV; // 0x192c(0x04)
	struct ABP_CaptureCineCameraActor_C* CutSceneSequencerCamera; // 0x1930(0x08)
	struct TSoftObjectPtr<UMaterialInterface> CapturePPMAcceleratorAsset; // 0x1938(0x28)
	struct TSoftObjectPtr<UMaterialInterface> CapturePPMSeeThroughAsset; // 0x1960(0x28)
	struct TSoftObjectPtr<UMaterialInterface> CapturePPMVisionFogAsset; // 0x1988(0x28)
	struct TSoftObjectPtr<UMaterialInterface> CapturePPMRadialBlurAsset; // 0x19b0(0x28)
	struct ABP_SC_BG_C* BP_SC_BG; // 0x19d8(0x08)
	struct FMulticastInlineDelegate EventBoardParamCurveTimeline; // 0x19e0(0x10)
	struct UTextureRenderTarget2D* SavedRenderTarget; // 0x19f0(0x08)
	bool IsFinishSequencer; // 0x19f8(0x01)
	char pad_19F9[0x7]; // 0x19f9(0x07)
	struct TArray<struct FFRenderTargetData> FaceRenderTargetList; // 0x1a00(0x10)
	struct TArray<struct FFRenderTargetData> SequencerRenderTargetList; // 0x1a10(0x10)
	struct FFRenderTargetData CrossFadeFaceRT; // 0x1a20(0x18)
	struct FFRenderTargetData CrossFadeSeqRT; // 0x1a38(0x18)
	struct TArray<bool> ActiveCapturePPMs; // 0x1a50(0x10)
	struct FTransform CameraActorLocation; // 0x1a60(0x30)
	struct UCameraComponent* NewVar_4; // 0x1a90(0x08)
	bool StoreIsBlendCamera; // 0x1a98(0x01)
	char pad_1A99[0x3]; // 0x1a99(0x03)
	int32_t CurrentCaptureActorIndex; // 0x1a9c(0x04)
	bool IsSpeak; // 0x1aa0(0x01)
	char pad_1AA1[0x7]; // 0x1aa1(0x07)
	struct UDataTable* ShowDestinationData; // 0x1aa8(0x08)
	struct TArray<struct ABP_NewStaticNodeActor_C*> NewStaticActorList; // 0x1ab0(0x10)
	struct ABP_NewStaticNodeActor_C* CurrentNewStaticNode; // 0x1ac0(0x08)
	struct ABP_NewStaticNodeActor_C* BeforeNewStaticNode; // 0x1ac8(0x08)
	struct FFEventInitSettingData CurrentEventSettingData; // 0x1ad0(0x06)
	char pad_1AD6[0x2]; // 0x1ad6(0x02)
	struct ARSLevelSequenceActor* PostProcessSequencer; // 0x1ad8(0x08)
	int32_t CurrentSpeakerActorIndex; // 0x1ae0(0x04)
	char pad_1AE4[0x4]; // 0x1ae4(0x04)
	struct TArray<struct ABPCaptureActor_C*> EveryFrameCaptureActorList; // 0x1ae8(0x10)
	struct UDataTable* CapCharaBGDataTable; // 0x1af8(0x08)
	struct TArray<struct FFCapCharaBGData> LeftCharaBGDataList; // 0x1b00(0x10)
	struct TArray<struct FFCapCharaBGData> RightCharaBGDataList; // 0x1b10(0x10)
	struct TArray<struct FFCapCharaBGData> CenterCharaBGDataList; // 0x1b20(0x10)
	struct FMovieSceneObjectBindingID CameraBindingID; // 0x1b30(0x18)
	struct UShowDestinationDBAsset* ShowDestinationDB; // 0x1b48(0x08)
	struct FMulticastInlineDelegate OnBeforeChangeProgressID; // 0x1b50(0x10)
	struct FMulticastInlineDelegate OnAfterChangeProgressID; // 0x1b60(0x10)
	bool IsDynamicSeamlessInGame; // 0x1b70(0x01)
	char pad_1B71[0x7]; // 0x1b71(0x07)
	struct TSoftObjectPtr<UMaterialInterface> CapturePPMScreenMask; // 0x1b78(0x28)
	struct TSoftObjectPtr<UMaterialInstance> SoftFocusMaterialAsset; // 0x1ba0(0x28)
	struct TSoftObjectPtr<UMaterialInstance> HeartBeatMaterialAsset; // 0x1bc8(0x28)
	bool UseSequencerStaticToInGame; // 0x1bf0(0x01)
	char pad_1BF1[0x3]; // 0x1bf1(0x03)
	int32_t InGameCapActorIndex; // 0x1bf4(0x04)
	float SoundPressureThreshold; // 0x1bf8(0x04)
	char pad_1BFC[0x4]; // 0x1bfc(0x04)
	struct TSoftObjectPtr<UMaterialInstance> AlphaMovieMaterialAsset; // 0x1c00(0x28)
	struct TSoftObjectPtr<UMaterialInstance> DiffusionMaterialAsset; // 0x1c28(0x28)
	struct TArray<struct FFEventCaptureFuncData> SequenceCaptureFuncList; // 0x1c50(0x10)
	struct TArray<struct AActor*> RegistPsychicObjectList; // 0x1c60(0x10)
	struct TSoftObjectPtr<UMaterialInterface> CapturePPMFishEyeAsset; // 0x1c70(0x28)
	bool IsCallOnSequencerFinished; // 0x1c98(0x01)
	char pad_1C99[0x7]; // 0x1c99(0x07)
	struct ARSLevelSequenceActor* PresentSequencer; // 0x1ca0(0x08)
	struct TArray<struct FPostProcessSettings> CaptureAddPPS; // 0x1ca8(0x10)
	struct TArray<int32_t> CaptureAddPPSHandle; // 0x1cb8(0x10)
	int32_t CaptureAddPPSHandleIndex; // 0x1cc8(0x04)
	char pad_1CCC[0x4]; // 0x1ccc(0x04)
	struct TSoftObjectPtr<UMaterialInterface> CapturePPMScreenMaskAfterDOF; // 0x1cd0(0x28)
	struct TArray<struct ABP_Event3DWidgetActor_C*> 3DWidgetList; // 0x1cf8(0x10)
	struct UWB_ui_BrainMes_C* WB_ui_BrainMes; // 0x1d08(0x08)
	struct UUserWidget* WB_UI_BrainMesClass; // 0x1d10(0x08)
	struct TSoftClassPtr<UObject> WBUIBrainMesSoftClass; // 0x1d18(0x28)
	struct TSoftObjectPtr<UMaterialInterface> CapturePPMGradScreenMask; // 0x1d40(0x28)
	struct TSoftObjectPtr<UMaterialInterface> CapturePPMGradScreenMaskAfterDOF; // 0x1d68(0x28)
	struct TSoftObjectPtr<UMaterialInterface> KaiiFilterMaterialAsset; // 0x1d90(0x28)
	bool IsCalledStartBlendPlayerCamera; // 0x1db8(0x01)
	char pad_1DB9[0x7]; // 0x1db9(0x07)
	struct ABP_CaptureCineCameraActor_C* CutSceneSequencerBlendCamera; // 0x1dc0(0x08)
	struct ABP_ActorVisibleChangeBase_C* _ActorVisibleChange; // 0x1dc8(0x08)
	struct TSoftObjectPtr<UMaterialInstance> BothSideLimMaterialAsset; // 0x1dd0(0x28)
	struct FGameTimer PlayObstructActionTimer; // 0x1df8(0x0c)
	int32_t ObstructActionCount; // 0x1e04(0x04)
	bool IsStartCameraCutDynamic; // 0x1e08(0x01)
	bool IsValidMessageVoice; // 0x1e09(0x01)
	char pad_1E0A[0x6]; // 0x1e0a(0x06)
	struct TArray<struct TSoftObjectPtr<UMaterialInstance>> LightUpMaterialAsset; // 0x1e10(0x10)
	struct TSoftObjectPtr<UMaterialInstance> FuturePredictionMaterialAsset; // 0x1e20(0x28)
	bool IsResetNewStaticNode; // 0x1e48(0x01)
	char pad_1E49[0x7]; // 0x1e49(0x07)
	struct FTransform CameraSocketTransform; // 0x1e50(0x30)
	struct TArray<struct TSoftObjectPtr<UMaterialInstance>> FieldBlurMaterialAsset; // 0x1e80(0x10)
	struct TSoftObjectPtr<UMaterialInstance> LightShaftMaterialAsset; // 0x1e90(0x28)
	struct TSoftObjectPtr<UMaterialInstance> OutlineAfterimageMaterialAsset; // 0x1eb8(0x28)
	struct FPostProcessSettings DynamicSequencerCameraPPS; // 0x1ee0(0x780)
	struct UMaterialInterface* LinearToSRGBMaterial; // 0x2660(0x08)
	struct TArray<struct FFEventTriggerCommandData> EventTriggerCommandDataArray; // 0x2668(0x10)
	struct TSoftObjectPtr<UMaterialInstance> ShadowmapMaterialAsset; // 0x2678(0x28)
	struct TArray<struct ARSCharacterBase*> BindEnemyList; // 0x26a0(0x10)
	struct TSoftObjectPtr<UMaterialInstance> StreamMaterialAsset; // 0x26b0(0x28)
	int32_t PostProcessSeqFrameDuration; // 0x26d8(0x04)
	char pad_26DC[0x4]; // 0x26dc(0x04)
	struct UDataTable* ShaderMontageDataTable; // 0x26e0(0x08)
	struct UDataTable* EventPlAttachAssetDataTable; // 0x26e8(0x08)
	struct UDataTable* ForceBTCameraTable; // 0x26f0(0x08)
	struct UDataTable* RipSyncCharaTable; // 0x26f8(0x08)
	float DynamicSequencerCameraDoFFstop; // 0x2700(0x04)
	bool DynamicSequencerCameraDoFFstopOverride; // 0x2704(0x01)
	char pad_2705[0x3]; // 0x2705(0x03)
	struct TArray<struct AActor*> DynamicSpawnableActors; // 0x2708(0x10)
	struct TSoftObjectPtr<UMaterialInstance> REDStringsSignACBeatAsset; // 0x2718(0x28)
	struct TSoftObjectPtr<UMaterialInstance> REDStringsSignBeardingAsset; // 0x2740(0x28)
	struct TSoftObjectPtr<UMaterialInstance> REDStringsSignDotCrawAsset; // 0x2768(0x28)
	struct TSoftObjectPtr<UMaterialInstance> REDStringsSignDropoutAsset; // 0x2790(0x28)
	struct TSoftObjectPtr<UMaterialInstance> REDStringsSignGhostingAsset; // 0x27b8(0x28)
	struct TSoftObjectPtr<UMaterialInstance> REDStringsSignStrobingAsset; // 0x27e0(0x28)
	struct TSoftObjectPtr<UMaterialInstance> REDStringsSignTapeDistortionAsset; // 0x2808(0x28)
	struct TSoftObjectPtr<UMaterialInstance> REDStringsSignYIQManipulationAsset; // 0x2830(0x28)
	bool DebugCaptureRetry; // 0x2858(0x01)
	bool DebugCaptureRetryOneSkip; // 0x2859(0x01)
	char pad_285A[0x6]; // 0x285a(0x06)
	struct ABP_EventPPStream_C* EventPPStream; // 0x2860(0x08)
	int32_t GeneralParticleHandle; // 0x2868(0x04)
	char pad_286C[0x4]; // 0x286c(0x04)
	struct TArray<struct ASequencerParticle*> GeneralParticle1; // 0x2870(0x10)
	struct TArray<struct ASequencerParticle*> GeneralParticle2; // 0x2880(0x10)
	struct TArray<struct ASequencerParticle*> GeneralParticle3; // 0x2890(0x10)
	struct TArray<bool> GeneralParticleActive; // 0x28a0(0x10)
	enum class EEventType PreviousEventType; // 0x28b0(0x01)
	char pad_28B1[0x7]; // 0x28b1(0x07)
	struct ABP_CaptureCineCameraActor_C* InGameCineCameraActor; // 0x28b8(0x08)
	struct ABP_EventPostUpdateTask_C* PostUpdateWork; // 0x28c0(0x08)
	bool DebugDisableUsePrestreamTextures; // 0x28c8(0x01)
	char pad_28C9[0x7]; // 0x28c9(0x07)
	struct TSoftObjectPtr<UMaterialInstance> KarenMemoryMaterialAsset; // 0x28d0(0x28)
	bool DebugDisableTAAStaticGeneral; // 0x28f8(0x01)
	char pad_28F9[0x7]; // 0x28f9(0x07)
	struct FTimerHandle PadVibrationTimer; // 0x2900(0x08)
	struct UPostProcessComponent* PPCDynamicToInGameInterp; // 0x2908(0x08)
	bool DebugDisableMaterialOptimize; // 0x2910(0x01)
	bool IsEventENPCBattleReady; // 0x2911(0x01)
	char pad_2912[0x2]; // 0x2912(0x02)
	float PhaseAnimSkipSpeed; // 0x2914(0x04)
	struct TArray<struct TSoftObjectPtr<UMaterialInstance>> SoftFocusMaterialAssetList; // 0x2918(0x10)
	struct TSoftObjectPtr<UMaterialInterface> REDStringsSignTapeDistortionVerticalAsset; // 0x2928(0x28)
	struct TMap<struct URSAtomComponentBase*, struct FName> MessageVoiceRipSyncInfoList; // 0x2950(0x50)
	struct TArray<struct FFEventTriggerCommandData> StartWaitingHPCheckEventCommandList; // 0x29a0(0x10)
	bool UIUnlockFlag; // 0x29b0(0x01)
	char pad_29B1[0x7]; // 0x29b1(0x07)
	struct AActor* CreditEventManager; // 0x29b8(0x08)
	struct TArray<struct UMaterialInterface*> CaptureExcludePPM; // 0x29c0(0x10)
	struct TArray<int32_t> CaptureExcludePPMHandle; // 0x29d0(0x10)
	struct TMap<struct ARSCharacterBase*, int32_t> OptCustomStencilCachesPlayer; // 0x29e0(0x50)
	struct TMap<struct ABP_WeaponBase_C*, int32_t> OptCustomStencilCachesWeapon; // 0x2a30(0x50)
	struct TMap<struct FString, struct UObject*> LoadMakeEventList; // 0x2a80(0x50)
	bool IsLoadingMakeEvent; // 0x2ad0(0x01)
	char pad_2AD1[0x7]; // 0x2ad1(0x07)
	struct TArray<struct FString> LoadingMakeEventPathList; // 0x2ad8(0x10)
	struct FMulticastInlineDelegate OnStartCutScene; // 0x2ae8(0x10)
	struct FMulticastInlineDelegate OnEndCutScene; // 0x2af8(0x10)
	struct TArray<struct AActor*> SpawndMeshList; // 0x2b08(0x10)
	bool EventCommandWeaponVisibility; // 0x2b18(0x01)
	bool DebugCaptureLog; // 0x2b19(0x01)
	bool DebugDisableFrameDrop; // 0x2b1a(0x01)
	bool IsPlControl; // 0x2b1b(0x01)
	char pad_2B1C[0x4]; // 0x2b1c(0x04)
	struct TArray<struct ARSCharacterBase*> NoBindingInGamePlayers; // 0x2b20(0x10)
	bool bEventEndAreaChangeWarp; // 0x2b30(0x01)
	char pad_2B31[0x7]; // 0x2b31(0x07)
	struct USkeletalMesh* Store1_1PlMesh; // 0x2b38(0x08)
	struct USkeletalMesh* Store16_9PlMesh; // 0x2b40(0x08)
	bool PauseFlag; // 0x2b48(0x01)
	char pad_2B49[0x7]; // 0x2b49(0x07)
	struct UDataTable* SkipENPCCameraTable; // 0x2b50(0x08)
	float CameraInterpSpeed; // 0x2b58(0x04)
	float CurrentAxiaRightX; // 0x2b5c(0x04)
	float CurrentAxisRightY; // 0x2b60(0x04)
	float EaseInOutInterpSpeed; // 0x2b64(0x04)
	float EaseInOutExp; // 0x2b68(0x04)
	bool IsEaseInOutRotate; // 0x2b6c(0x01)
	char pad_2B6D[0x3]; // 0x2b6d(0x03)
	struct UStaticCameraControlDataParam* DA_STCameraControlParam; // 0x2b70(0x08)
	enum class EOptionCameraPitch OptionCameraPitch; // 0x2b78(0x01)
	enum class EOptionCameraYaw OptionCameraYaw; // 0x2b79(0x01)
	char pad_2B7A[0x6]; // 0x2b7a(0x06)
	struct TArray<struct USoundAtomCue*> PhaseAnimSEList; // 0x2b80(0x10)
	float NoRipSyncSDPressureTime; // 0x2b90(0x04)
	float NoSDPressureTimeThreshold; // 0x2b94(0x04)
	bool EventHiddenNeonWire; // 0x2b98(0x01)
	char pad_2B99[0x3]; // 0x2b99(0x03)
	int32_t StaticHighResDelay; // 0x2b9c(0x04)
	struct TArray<struct ASkeletalMeshActor*> StaticGhostTrailCacheActor; // 0x2ba0(0x10)
	int32_t StaticGhostTrailCacheID; // 0x2bb0(0x04)
	char pad_2BB4[0x4]; // 0x2bb4(0x04)
	struct TArray<struct USkeletalMeshComponent*> StaticGhostTrailCacheMeshComps; // 0x2bb8(0x10)
	struct TArray<struct UPoseableMeshComponent*> StaticGhostTrailCachePosableMeshComps; // 0x2bc8(0x10)
	struct TArray<struct UPoseableMeshComponent*> StaticGhostTrailCachePosableMeshComps2; // 0x2bd8(0x10)
	int32_t StaticGhostTrailCachePoseableLayer; // 0x2be8(0x04)
	bool CrossFadePreparationRequired; // 0x2bec(0x01)
	char pad_2BED[0x3]; // 0x2bed(0x03)
	struct ABP_NameWidgetActor_C* NameWidgetActor; // 0x2bf0(0x08)
	bool IsFindPlayerFacial; // 0x2bf8(0x01)
	char pad_2BF9[0x7]; // 0x2bf9(0x07)
	struct TArray<struct FFEventHiddenActorForTagNameData> HiddenActorForTagNameDataList; // 0x2c00(0x10)
	struct FMulticastInlineDelegate DispatchHiddenSetoMask; // 0x2c10(0x10)
	bool SetSaveSequencerCharaTransform; // 0x2c20(0x01)
	bool SetSaveSequencerCameraTransform; // 0x2c21(0x01)
	char pad_2C22[0x6]; // 0x2c22(0x06)
	struct TArray<struct FTransform> CacheSaveSequencerCharaTransformPlayer; // 0x2c28(0x10)
	struct TArray<struct FTransform> CacheSaveSequencerCharaTransformEnemy; // 0x2c38(0x10)
	char pad_2C48[0x8]; // 0x2c48(0x08)
	struct FTransform CacheSaveSequencerCameraTransform; // 0x2c50(0x30)
	struct TMap<struct FName, struct FEventCacheActorHiddenInGame> ActorHiddenInGameFromTagNameCache; // 0x2c80(0x50)
	bool IsCalledSetupStaticScene; // 0x2cd0(0x01)
	char pad_2CD1[0x7]; // 0x2cd1(0x07)
	struct TArray<bool> EventPlayerDefaultCostume; // 0x2cd8(0x10)
	struct TArray<bool> EventPlayerNoAttachments; // 0x2ce8(0x10)
	bool IsNoStopMoviePhaseChange; // 0x2cf8(0x01)
	bool DisableStaticCameraControl; // 0x2cf9(0x01)
	bool IsCalledStartStaticEvent; // 0x2cfa(0x01)
	bool IsCalledStartCameraCutDynamic; // 0x2cfb(0x01)
	bool NoAddEventTriggerCmdFlag; // 0x2cfc(0x01)

	void GetEventTriggerCommendNum(enum class EEventTriggerCheckType CheckType, int32_t count); // Function BP_EventManager.BP_EventManager_C.GetEventTriggerCommendNum // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEventPause(bool IsPause); // Function BP_EventManager.BP_EventManager_C.IsEventPause // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetProgressID(int32_t ProgressId); // Function BP_EventManager.BP_EventManager_C.GetProgressID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsValidEventCommand(); // Function BP_EventManager.BP_EventManager_C.IsValidEventCommand // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsVisibleCharaNameForProgressID(enum class EPlayerID playerId); // Function BP_EventManager.BP_EventManager_C.IsVisibleCharaNameForProgressID // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetPreviousEventType(); // Function BP_EventManager.BP_EventManager_C.ResetPreviousEventType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckProgressID(int32_t MinProgressID, int32_t MaxProgressID); // Function BP_EventManager.BP_EventManager_C.CheckProgressID // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckScenarioFlagListC(struct TArray<struct FShowDestinationFlgCheck> FlgCheckList); // Function BP_EventManager.BP_EventManager_C.CheckScenarioFlagListC // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPlayerCostumeSettings(enum class EPlayerID playerId, bool DefaultCostume, bool NoAttachments); // Function BP_EventManager.BP_EventManager_C.GetPlayerCostumeSettings // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearAllPlayerCostumeSettings(bool ResetBindingActors); // Function BP_EventManager.BP_EventManager_C.ClearAllPlayerCostumeSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPlayerCostumeSettings(enum class EPlayerID playerId, bool DefaultCostume, bool NoAttachments); // Function BP_EventManager.BP_EventManager_C.SetPlayerCostumeSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Clear Cache Actor Hidden in Game from Tag Name(struct FName TagName); // Function BP_EventManager.BP_EventManager_C.Clear Cache Actor Hidden in Game from Tag Name // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCacheActorHiddenInGameFromTagName(struct FName TagName, bool IsHiddenInGame, struct TArray<struct AActor*> Actors); // Function BP_EventManager.BP_EventManager_C.SetCacheActorHiddenInGameFromTagName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSaveSequencerCharaTransform(bool SetupActor); // Function BP_EventManager.BP_EventManager_C.PrivateSaveSequencerCharaTransform // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearHiddenActorforTagName(); // Function BP_EventManager.BP_EventManager_C.ClearHiddenActorforTagName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeCurrentMontageToEndPos(); // Function BP_EventManager.BP_EventManager_C.ChangeCurrentMontageToEndPos // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void HiddenSetoMask(bool bHidden); // Function BP_EventManager.BP_EventManager_C.HiddenSetoMask // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProcessBrainFieldRemainingTimeCheck(struct FFEventTriggerCommandData EventTriggerCommandData, bool Result); // Function BP_EventManager.BP_EventManager_C.ProcessBrainFieldRemainingTimeCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetTeleportTransformAndSweepLocation(struct FTransform transformIn, struct UCapsuleComponent* capsuleComponentIn, struct FTransform OutTransform, struct FVector outSweepLocation); // Function BP_EventManager.BP_EventManager_C.GetTeleportTransformAndSweepLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHiddenActorForTagName(bool FlagIn, bool IsHiddenInGame, struct FName TagName, bool isKeepHidden); // Function BP_EventManager.BP_EventManager_C.SetHiddenActorForTagName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSoundPressureThreshold(float Value); // Function BP_EventManager.BP_EventManager_C.GetSoundPressureThreshold // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitRipSync(struct ABPCaptureActor_C* CaptureActor); // Function BP_EventManager.BP_EventManager_C.InitRipSync // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Set All Capture Actor Hidden in Game(bool NewHidden); // Function BP_EventManager.BP_EventManager_C.Set All Capture Actor Hidden in Game // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Set Capture Actor Hidden in Game(struct ABPCaptureActor_C* CaptureActor, bool NewHidden); // Function BP_EventManager.BP_EventManager_C.Set Capture Actor Hidden in Game // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsNeedFrameWait(); // Function BP_EventManager.BP_EventManager_C.IsNeedFrameWait // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMatchStaticGhostTrailCache(int32_t ControlId, struct TArray<struct ASkeletalMeshActor*> StaticGhostTrailCacheActor, struct TArray<struct USkeletalMeshComponent*> StaticGhostTrailCacheMeshComps, int32_t MeshNum, struct TArray<struct UPoseableMeshComponent*> StaticGhostTrailCachePosableMeshComps, int32_t Layer); // Function BP_EventManager.BP_EventManager_C.GetMatchStaticGhostTrailCache // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetStaticGhostTrailCache(); // Function BP_EventManager.BP_EventManager_C.ResetStaticGhostTrailCache // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetStaticGhostTrailCache(enum class EPlayerID Player, int32_t ControlId, int32_t Num); // Function BP_EventManager.BP_EventManager_C.SetStaticGhostTrailCache // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsCurrentEventOffSkipEndFade(); // Function BP_EventManager.BP_EventManager_C.IsCurrentEventOffSkipEndFade // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EnableTickNewStaticActor(bool Enabled); // Function BP_EventManager.BP_EventManager_C.EnableTickNewStaticActor // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetStaticHighResDelay(int32_t DelayFrame); // Function BP_EventManager.BP_EventManager_C.GetStaticHighResDelay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetStaticHighResDelay(int32_t DelayFrame); // Function BP_EventManager.BP_EventManager_C.SetStaticHighResDelay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEventHiddenNeonWire(bool Hidden); // Function BP_EventManager.BP_EventManager_C.IsEventHiddenNeonWire // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEventHiddenNeonWire(bool Hidden); // Function BP_EventManager.BP_EventManager_C.SetEventHiddenNeonWire // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsWorldMapShowDesSubQuestForAreaName(int32_t LocationId, int32_t areaId, int32_t PortalID, enum class ShowDestinationApplicationType ApplicationType, bool NotOrderCheck, bool IsShow, int32_t VisibleWeight); // Function BP_EventManager.BP_EventManager_C.IsWorldMapShowDesSubQuestForAreaName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsCameraPitchNormal(bool IsNormal); // Function BP_EventManager.BP_EventManager_C.IsCameraPitchNormal // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsCameraYawNormal(bool IsNormal); // Function BP_EventManager.BP_EventManager_C.IsCameraYawNormal // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetUIUnlockFlag(bool UiUnlock); // Function BP_EventManager.BP_EventManager_C.SetUIUnlockFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Set Camera After Change Player(); // Function BP_EventManager.BP_EventManager_C.Set Camera After Change Player // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetEventRenderTarget(enum class ERenderTargetType RenderTargetType, struct UTextureRenderTarget2D* NewTarget); // Function BP_EventManager.BP_EventManager_C.ResetEventRenderTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Get Message Label Facial(struct FString messageLabel, struct FFMessageIDFacialData Facial); // Function BP_EventManager.BP_EventManager_C.Get Message Label Facial // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProccessEnpcBrainFieldTimeLimitEndCheck(struct FFEventTriggerCommandData EventTriggerComandData, bool IsStartEvent); // Function BP_EventManager.BP_EventManager_C.ProccessEnpcBrainFieldTimeLimitEndCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsWeaponVisibility(bool Visibillity); // Function BP_EventManager.BP_EventManager_C.IsWeaponVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWeaponVisibility(bool Visibility, bool NoApply); // Function BP_EventManager.BP_EventManager_C.SetWeaponVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateSimulate(); // Function BP_EventManager.BP_EventManager_C.UpdateSimulate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OnSkipInput(); // Function BP_EventManager.BP_EventManager_C.OnSkipInput // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct TArray<struct FString> GetLoadedAndLoadingMakeEventPathList(); // Function BP_EventManager.BP_EventManager_C.GetLoadedAndLoadingMakeEventPathList // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndAjitoTVSequencer(struct AAjitoMember* BindForAjitoTVBP); // Function BP_EventManager.BP_EventManager_C.EndAjitoTVSequencer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAjitoTVSequencerFinished(); // Function BP_EventManager.BP_EventManager_C.OnAjitoTVSequencerFinished // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayAjitoTVSequencer(struct ULevelSequence* Sequence, struct AActor* BindAjitoTVBP); // Function BP_EventManager.BP_EventManager_C.PlayAjitoTVSequencer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsLoadingMakeEventAsset(); // Function BP_EventManager.BP_EventManager_C.IsLoadingMakeEventAsset // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RemoveLoadingMakeEventList(struct FString ObjectName); // Function BP_EventManager.BP_EventManager_C.RemoveLoadingMakeEventList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Is Find Loading Make Event(struct FString ObjectName, bool IsFind, struct FString ReturnObjectName); // Function BP_EventManager.BP_EventManager_C.Is Find Loading Make Event // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearLoadedMakeEvent(struct FString ObjectName, bool Remove); // Function BP_EventManager.BP_EventManager_C.ClearLoadedMakeEvent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsFindLoadMakeEvent(struct FString BPFilePath, bool IsFind); // Function BP_EventManager.BP_EventManager_C.IsFindLoadMakeEvent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetOptimizeCustomStencilPlayer(struct ARSCharacterBase* Player, bool WithWeapon, bool Enable); // Function BP_EventManager.BP_EventManager_C.SetOptimizeCustomStencilPlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetOptimizeCacheCustomStencilWeapon(struct ABP_WeaponBase_C* Weapon, bool IsFind, bool UseCustomDepth); // Function BP_EventManager.BP_EventManager_C.GetOptimizeCacheCustomStencilWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetOptimizeCacheCustomStencilPlayer(struct ARSCharacterBase* Player, bool IsFind, bool UseCustomDepth); // Function BP_EventManager.BP_EventManager_C.GetOptimizeCacheCustomStencilPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearOptimizeCacheCustomStencil(); // Function BP_EventManager.BP_EventManager_C.ClearOptimizeCacheCustomStencil // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddOptimizeCacheCustomStencil(); // Function BP_EventManager.BP_EventManager_C.AddOptimizeCacheCustomStencil // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RemoveExcludeStaticCapturePPS(int32_t Handle); // Function BP_EventManager.BP_EventManager_C.RemoveExcludeStaticCapturePPS // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddExcludeStaticCapturePPS(struct UMaterialInterface* ExcludeMaterial, int32_t Handle); // Function BP_EventManager.BP_EventManager_C.AddExcludeStaticCapturePPS // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsCurrentCreditEvent(); // Function BP_EventManager.BP_EventManager_C.IsCurrentCreditEvent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndCreditEvent(); // Function BP_EventManager.BP_EventManager_C.EndCreditEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartCreditEvent(); // Function BP_EventManager.BP_EventManager_C.StartCreditEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsValidEventCommandTypeFromNative(enum class EEventTriggerCheckType EventCommandType, bool CheckBrainTalkEvent, bool IsValid); // Function BP_EventManager.BP_EventManager_C.IsValidEventCommandTypeFromNative // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearEventComanndList(); // Function BP_EventManager.BP_EventManager_C.ClearEventComanndList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartWaitingHPCheckEvent(); // Function BP_EventManager.BP_EventManager_C.StartWaitingHPCheckEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupCutsceneMaterial(bool Start); // Function BP_EventManager.BP_EventManager_C.SetupCutsceneMaterial // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool Is Play Enable Rip Sync Montage(struct UAnimMontage* PlayRipSyncMontage, struct UAnimInstance* AnimInstance); // Function BP_EventManager.BP_EventManager_C.Is Play Enable Rip Sync Montage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndCutsceneRestoreMaterial(); // Function BP_EventManager.BP_EventManager_C.EndCutsceneRestoreMaterial // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsRipSyncJointID(struct URSAtomComponentBase* VoiceAtom, struct FName JointID, bool IsRipSync); // Function BP_EventManager.BP_EventManager_C.IsRipSyncJointID // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetSequencerPause(struct ALevelSequenceActor* Sequencer, bool IsPause); // Function BP_EventManager.BP_EventManager_C.SetSequencerPause // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateAddOrUpdateDynamicCutPPMScalarValueALL(struct UPostProcessComponent* TargetPPC, enum class EEventPostProcessID PostProcessID, struct FName ParamName); // Function BP_EventManager.BP_EventManager_C.PrivateAddOrUpdateDynamicCutPPMScalarValueALL // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateAddOrUpdateDynamicCutPPMScalarValueIndexList(struct UPostProcessComponent* TargetPPC, enum class EEventPostProcessID PostProcessID, struct FName ParamName, struct TArray<int32_t> SubIndex, bool IsDynamic, bool EnableMinusValue); // Function BP_EventManager.BP_EventManager_C.PrivateAddOrUpdateDynamicCutPPMScalarValueIndexList // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsLoadPPM(enum class EEventPostProcessID EventPostProcessID, bool Loaded); // Function BP_EventManager.BP_EventManager_C.IsLoadPPM // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitCapturePPM(); // Function BP_EventManager.BP_EventManager_C.InitCapturePPM // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupOptimizeMaterialStaticFace(struct USkeletalMeshComponent* SkelMeshComp); // Function BP_EventManager.BP_EventManager_C.SetupOptimizeMaterialStaticFace // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool isEndPostProcessSequencer(); // Function BP_EventManager.BP_EventManager_C.isEndPostProcessSequencer // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndCutsceneOptimize(); // Function BP_EventManager.BP_EventManager_C.EndCutsceneOptimize // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartCutsceneOptimize(); // Function BP_EventManager.BP_EventManager_C.StartCutsceneOptimize // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopPadVibration(); // Function BP_EventManager.BP_EventManager_C.StopPadVibration // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartPadVibration(struct UForceFeedbackEffect* VibrationParameterAsset, bool IsLoop, float LoopTime); // Function BP_EventManager.BP_EventManager_C.StartPadVibration // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Public Set PPMRed Strings Sign Parameter Internal(struct FEventPPMRedStringsSingParam Param, struct UMaterialInstanceDynamic* PPMTapeDistortion, struct UMaterialInstanceDynamic* PPMYIQManipulation); // Function BP_EventManager.BP_EventManager_C.Public Set PPMRed Strings Sign Parameter Internal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Proccess Brain Field Close Check(struct FFEventTriggerCommandData EventTriggerComandData, bool IsStartEvent); // Function BP_EventManager.BP_EventManager_C.Proccess Brain Field Close Check // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsWireVisibleOffEvent(bool IsOffWireEvent); // Function BP_EventManager.BP_EventManager_C.IsWireVisibleOffEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsCurrentZeroEP(); // Function BP_EventManager.BP_EventManager_C.IsCurrentZeroEP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Reset Event Prestream Textures(); // Function BP_EventManager.BP_EventManager_C.Reset Event Prestream Textures // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugSetPrestreamTextures(bool UsePrestream); // Function BP_EventManager.BP_EventManager_C.DebugSetPrestreamTextures // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Setup Event Prestream Textures(struct AActor* EventActor, bool UsePrestream); // Function BP_EventManager.BP_EventManager_C.Setup Event Prestream Textures // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FinishPostProcessSeqLoop(); // Function BP_EventManager.BP_EventManager_C.FinishPostProcessSeqLoop // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsGeneralParticlesActive(int32_t Handle, bool Active); // Function BP_EventManager.BP_EventManager_C.IsGeneralParticlesActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearGeneralParticles(int32_t Handle); // Function BP_EventManager.BP_EventManager_C.ClearGeneralParticles // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopHideGeneralParticles(int32_t Handle); // Function BP_EventManager.BP_EventManager_C.StopHideGeneralParticles // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetGeneralParticlesInternal(int32_t Handle, struct TArray<struct ASequencerParticle*> GeneralParticles); // Function BP_EventManager.BP_EventManager_C.GetGeneralParticlesInternal // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindingGeneralParticles(int32_t Handle, struct ARSLevelSequenceActor* Sequencer, struct TArray<struct FMovieSceneObjectBindingID> BindingIDList); // Function BP_EventManager.BP_EventManager_C.BindingGeneralParticles // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetGeneralParticlesHandle(int32_t Handle); // Function BP_EventManager.BP_EventManager_C.GetGeneralParticlesHandle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RestartGeneralParticles(int32_t Handle, struct ARSLevelSequenceActor* LevelSequenceActor, struct TArray<struct FMovieSceneObjectBindingID> BindingIDList); // Function BP_EventManager.BP_EventManager_C.RestartGeneralParticles // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeGeneralParticles(); // Function BP_EventManager.BP_EventManager_C.InitializeGeneralParticles // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEventStreamPP(float PerspectiveScaleLeft, float PerspectiveScaleRight, float Rotate, float VisibleLineArea, float EmissivePower); // Function BP_EventManager.BP_EventManager_C.SetEventStreamPP // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProccessDimensionTangleCheck(struct FFEventTriggerCommandData EventTriggerComandData, bool IsStartEvent); // Function BP_EventManager.BP_EventManager_C.ProccessDimensionTangleCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugSetCaptureRetryOneSkip(bool OneSkip); // Function BP_EventManager.BP_EventManager_C.DebugSetCaptureRetryOneSkip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugSetCaptureRetry(bool Retry); // Function BP_EventManager.BP_EventManager_C.DebugSetCaptureRetry // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugCheckCaptureRetry(bool Retry); // Function BP_EventManager.BP_EventManager_C.DebugCheckCaptureRetry // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Private Set PPMRed Strings Sign Parameter Internal(struct FEventPPMRedStringsSingParam Param, struct UMaterialInstanceDynamic* PPMAcBeat, struct UMaterialInstanceDynamic* PPMBearding, struct UMaterialInstanceDynamic* PPMDotCraw, struct UMaterialInstanceDynamic* PPMDropout, struct UMaterialInstanceDynamic* PPMGhosting, struct UMaterialInstanceDynamic* PPMStrobing, struct UMaterialInstanceDynamic* PPMTapeDistortion, struct UMaterialInstanceDynamic* PPMYIQManipulation); // Function BP_EventManager.BP_EventManager_C.Private Set PPMRed Strings Sign Parameter Internal // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPPMRedStringsSignParameter(struct FEventPPMRedStringsSingParam Param, bool bVertical); // Function BP_EventManager.BP_EventManager_C.SetPPMRedStringsSignParameter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupStaticCapturePPMRedStringsSign(struct FEventPPMRedStringsSingParam Param); // Function BP_EventManager.BP_EventManager_C.SetupStaticCapturePPMRedStringsSign // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupDynamicSpawnableActors(struct TArray<struct AActor*> Actors); // Function BP_EventManager.BP_EventManager_C.SetupDynamicSpawnableActors // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCameraCutChangeDynamic(struct UCameraComponent* Camea); // Function BP_EventManager.BP_EventManager_C.OnCameraCutChangeDynamic // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayAddSpecialNodeAnimMontage(struct FString SpecialNodeAnimNamePath); // Function BP_EventManager.BP_EventManager_C.PlayAddSpecialNodeAnimMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopAddSpecialNodeAnimMontage(); // Function BP_EventManager.BP_EventManager_C.StopAddSpecialNodeAnimMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopPostProcessSequencer(); // Function BP_EventManager.BP_EventManager_C.StopPostProcessSequencer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCaptureActorVoiceCharaName(struct ABPCaptureActor_C* CaptureActor, struct FString VoiceCharaName); // Function BP_EventManager.BP_EventManager_C.GetCaptureActorVoiceCharaName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateEventPlAttachAsset(struct FName RowName, int32_t CaptureActorIndex, struct FTransform OffsetTransform); // Function BP_EventManager.BP_EventManager_C.CreateEventPlAttachAsset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateAddOrUpdateDynamicCutPPMScalarValueIndex(struct UPostProcessComponent* TargetPPC, enum class EEventPostProcessID PostProcessID, struct FName ParamName, int32_t SubIndex, bool IsDynamic, bool EnableMinusValue); // Function BP_EventManager.BP_EventManager_C.PrivateAddOrUpdateDynamicCutPPMScalarValueIndex // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateAddOrUpdateDynamicCutPPMValueALL(struct UPostProcessComponent* TargetPPC, enum class EEventPostProcessID PostProcessID, float Value, bool IsDynamic, bool EnableMinusValue); // Function BP_EventManager.BP_EventManager_C.PrivateAddOrUpdateDynamicCutPPMValueALL // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateAddOrUpdateDynamicCutPPMValueIndexList(struct UPostProcessComponent* TargetPPC, enum class EEventPostProcessID PostProcessID, float Value, struct TArray<int32_t> SubIndex, bool IsDynamic, bool EnableMunusValue); // Function BP_EventManager.BP_EventManager_C.PrivateAddOrUpdateDynamicCutPPMValueIndexList // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateAddOrUpdateDynamicCutPPMValueIndex(struct UPostProcessComponent* TargetPPC, enum class EEventPostProcessID PostProcessID, float Value, int32_t SubIndex, bool IsDynamic, bool EnableMinusValue); // Function BP_EventManager.BP_EventManager_C.PrivateAddOrUpdateDynamicCutPPMValueIndex // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Private Get Dynamic Cut PPM Once(enum class EEventPostProcessID EventPostProcessID, bool Load, struct UMaterialInstanceDynamic* PPM); // Function BP_EventManager.BP_EventManager_C.Private Get Dynamic Cut PPM Once // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnLoadPPM(enum class EEventPostProcessID EventPostProcessID); // Function BP_EventManager.BP_EventManager_C.UnLoadPPM // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OnWaitInputFinishEvent(); // Function BP_EventManager.BP_EventManager_C.OnWaitInputFinishEvent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FinishedPostProcessSequencer(); // Function BP_EventManager.BP_EventManager_C.FinishedPostProcessSequencer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePostProcessMaterialInternal(struct UPostProcessComponent* TargetPPC, bool IsDynamic); // Function BP_EventManager.BP_EventManager_C.UpdatePostProcessMaterialInternal // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsCutSceneEventNative(); // Function BP_EventManager.BP_EventManager_C.IsCutSceneEventNative // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckStartTagEnemyHpRateCheckEvent(struct AActor* BattleActor, bool CheckOnly, bool IsStartEvent); // Function BP_EventManager.BP_EventManager_C.CheckStartTagEnemyHpRateCheckEvent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsValidEventCommandType(enum class EEventTriggerCheckType EventCommandType, bool CheckBrainTalkEvent, bool IsValid, struct FFEventTriggerCommandData EventTriggerCommandData); // Function BP_EventManager.BP_EventManager_C.IsValidEventCommandType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckEventCommandArray(); // Function BP_EventManager.BP_EventManager_C.CheckEventCommandArray // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventStartBPCheck(struct FFEventTriggerCommandData EventTriggerCommandData, bool IsStartEvent); // Function BP_EventManager.BP_EventManager_C.EventStartBPCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearEventComanndListToUnderPriority(struct FFEventTriggerCommandData TriggerCommandData); // Function BP_EventManager.BP_EventManager_C.ClearEventComanndListToUnderPriority // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddEventTriggerCommandToPriority(struct FFEventTriggerCommand TriggerCommand); // Function BP_EventManager.BP_EventManager_C.AddEventTriggerCommandToPriority // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckStartWinOrLoseEvent(bool IsStartEvent); // Function BP_EventManager.BP_EventManager_C.CheckStartWinOrLoseEvent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsReadyStartEvents(bool IsCanStartEvents); // Function BP_EventManager.BP_EventManager_C.IsReadyStartEvents // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateFacialNormal(bool UseCache); // Function BP_EventManager.BP_EventManager_C.UpdateFacialNormal // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDynamic(); // Function BP_EventManager.BP_EventManager_C.UpdateDynamic // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetRipSync(); // Function BP_EventManager.BP_EventManager_C.ResetRipSync // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddObstructActionCount(); // Function BP_EventManager.BP_EventManager_C.AddObstructActionCount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProccessObstructActionNumOrTime(struct FFEventTriggerCommandData EventTriggerCommandData, bool IsStartEvent); // Function BP_EventManager.BP_EventManager_C.ProccessObstructActionNumOrTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CancelTimerByPlayObstructAction(); // Function BP_EventManager.BP_EventManager_C.CancelTimerByPlayObstructAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateTimerByPlayObstructAction(); // Function BP_EventManager.BP_EventManager_C.UpdateTimerByPlayObstructAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTimerByPlayObstructAction(float Time); // Function BP_EventManager.BP_EventManager_C.SetTimerByPlayObstructAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProccessTriggerPlayerAnimMontage(struct FFEventTriggerCommandData EventTriggerComandData, bool IsStartEvent); // Function BP_EventManager.BP_EventManager_C.ProccessTriggerPlayerAnimMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLevelActorVisible(bool IsVisible, struct FVector Position, float Range); // Function BP_EventManager.BP_EventManager_C.SetLevelActorVisible // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupStaticCapturePPMKaiiFilter(float Rate, struct FLinearColor Color, bool MaskPlayer, bool MaskEnemy, bool MaskParticle, bool MaskBG, bool AfterDOF); // Function BP_EventManager.BP_EventManager_C.SetupStaticCapturePPMKaiiFilter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetKaiiFilterParameter(float Rate, struct FLinearColor Color, bool MaskPlayer, bool MaskEnemy, bool MaskParticle, bool MaskBG, bool AfterDOF); // Function BP_EventManager.BP_EventManager_C.SetKaiiFilterParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetGradScreenMaskParameter(float Rate, struct FLinearColor Color, bool MaskPlayer, bool MaskEnemy, bool MaskParticle, bool MaskBG, bool AfterDOF, struct FLinearColor BeginColor, struct FLinearColor EndColor, struct FLinearColor BeginPos, struct FLinearColor EndPos, struct FLinearColor Center, float Radius, bool IsRadiusGrad, int32_t BlendMode); // Function BP_EventManager.BP_EventManager_C.SetGradScreenMaskParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupStaticCapturePPMGradScreenMask(float Rate, struct FLinearColor Color, bool MaskPlayer, bool MaskEnemy, bool MaskParticle, bool MaskBG, bool AfterDOF, struct FLinearColor BeginColor, struct FLinearColor EndColor, struct FLinearColor BeginPos, struct FLinearColor EndPos, struct FLinearColor Center, float Radius, bool IsRadiusGrad, int32_t BlendMode); // Function BP_EventManager.BP_EventManager_C.SetupStaticCapturePPMGradScreenMask // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update3DWidget(float InDeltaTime); // Function BP_EventManager.BP_EventManager_C.Update3DWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsNowSettingSeqCaptureBrainMes(); // Function BP_EventManager.BP_EventManager_C.IsNowSettingSeqCaptureBrainMes // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsWaitSequencerCaptureBG(); // Function BP_EventManager.BP_EventManager_C.IsWaitSequencerCaptureBG // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CaptureSceneBGForLevelSequencer(struct ULevelSequence* InSequence, float NewPlaybackPosition); // Function BP_EventManager.BP_EventManager_C.CaptureSceneBGForLevelSequencer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugSetupDynamicPostProcess(bool Enable); // Function BP_EventManager.BP_EventManager_C.DebugSetupDynamicPostProcess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetScreenCapture(struct USceneCaptureComponent2D* Scene Capture Comp, bool Save); // Function BP_EventManager.BP_EventManager_C.SetScreenCapture // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RestorePsychicObject(); // Function BP_EventManager.BP_EventManager_C.RestorePsychicObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StorePsychicObject(); // Function BP_EventManager.BP_EventManager_C.StorePsychicObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCapturePPM(struct AActor* EventActor); // Function BP_EventManager.BP_EventManager_C.UpdateCapturePPM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpecialBoardEffectNoise(int32_t CaptureActorIndex, struct UCurveFloat* Curve, bool IsLoop); // Function BP_EventManager.BP_EventManager_C.SpecialBoardEffectNoise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BoardEffectNoise(int32_t CaptureActorIndex, struct UCurveFloat* Curve, bool IsLoop); // Function BP_EventManager.BP_EventManager_C.BoardEffectNoise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateStaticCapturePPS(int32_t Handle, struct FPostProcessSettings PPS); // Function BP_EventManager.BP_EventManager_C.UpdateStaticCapturePPS // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RemoveStaticCapturePPS(int32_t Handle); // Function BP_EventManager.BP_EventManager_C.RemoveStaticCapturePPS // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddStaticCapturePPS(struct FPostProcessSettings PPS, int32_t Handle); // Function BP_EventManager.BP_EventManager_C.AddStaticCapturePPS // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPresentSequencer(struct AAjitoMember* BindForCharaActor); // Function BP_EventManager.BP_EventManager_C.EndPresentSequencer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPresentSequencerFinished(); // Function BP_EventManager.BP_EventManager_C.OnPresentSequencerFinished // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayPresentSequencer(struct ULevelSequence* Sequence, struct AAjitoMember* BindForCharaActor); // Function BP_EventManager.BP_EventManager_C.PlayPresentSequencer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsWorldMapShowDestinationForAreaName2(int32_t LocationId, int32_t areaId, int32_t PortalID, enum class ShowDestinationApplicationType ApplicationType, bool IsShow, int32_t VisibleWeight); // Function BP_EventManager.BP_EventManager_C.IsWorldMapShowDestinationForAreaName2 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsEmptySeqCaptureFuncList(); // Function BP_EventManager.BP_EventManager_C.IsEmptySeqCaptureFuncList // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CaptureEventBeforeInGame(); // Function BP_EventManager.BP_EventManager_C.CaptureEventBeforeInGame // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCheckSequenceCapFunc(); // Function BP_EventManager.BP_EventManager_C.UpdateCheckSequenceCapFunc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentStaticNodeCurveValueToCurveName(struct FName CurveName, float CurveValue); // Function BP_EventManager.BP_EventManager_C.GetCurrentStaticNodeCurveValueToCurveName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPhaseAnimCurveInfo(struct TArray<struct FEventPlAnimationCurveParam> CurrentPlAnimationCurveDataList); // Function BP_EventManager.BP_EventManager_C.SetPhaseAnimCurveInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsPlayingNewStaticBaseAnimation(); // Function BP_EventManager.BP_EventManager_C.IsPlayingNewStaticBaseAnimation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsPlayingNewStaticPhaseAnimation(); // Function BP_EventManager.BP_EventManager_C.IsPlayingNewStaticPhaseAnimation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateRipSync(struct ABPCaptureActor_C* CaptureActor); // Function BP_EventManager.BP_EventManager_C.UpdateRipSync // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SettingRipSync(struct ABPCaptureActor_C* CaptureActor); // Function BP_EventManager.BP_EventManager_C.SettingRipSync // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SettingNoRipSync(struct ABPCaptureActor_C* CaptureActor, bool IsDefaultCapture); // Function BP_EventManager.BP_EventManager_C.SettingNoRipSync // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetVoiceCharaName(struct FString CharaID, struct FString VoiceCharaName); // Function BP_EventManager.BP_EventManager_C.GetVoiceCharaName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SequencerStaticToInGame(); // Function BP_EventManager.BP_EventManager_C.SequencerStaticToInGame // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUseSequencerStaticInGame(bool UseInGame); // Function BP_EventManager.BP_EventManager_C.SetUseSequencerStaticInGame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetScreenMaskParameter(float Rate, struct FLinearColor Color, bool MaskPlayer, bool MaskEnemy, bool MaskParticle, bool MaskBG, bool AfterDOF); // Function BP_EventManager.BP_EventManager_C.SetScreenMaskParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupStaticCapturePPMScreenMask(float Rate, struct FLinearColor Color, bool MaskPlayer, bool MaskEnemy, bool MaskParticle, bool MaskBG, bool AfterDOF); // Function BP_EventManager.BP_EventManager_C.SetupStaticCapturePPMScreenMask // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetShowDestCheckListForActorName(struct FName ActorName, struct TArray<struct FShowDestinationDBDataCell> ReturnShowCheckList); // Function BP_EventManager.BP_EventManager_C.GetShowDestCheckListForActorName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCharaBGDataToCharaPresetName(struct FName CharaPresetName, struct FFCapCharaBGData CharaBGData); // Function BP_EventManager.BP_EventManager_C.GetCharaBGDataToCharaPresetName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateEveryCapture(); // Function BP_EventManager.BP_EventManager_C.UpdateEveryCapture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SubEveryFrameCapActorList(struct ABPCaptureActor_C* CaptureActor, bool isRemove); // Function BP_EventManager.BP_EventManager_C.SubEveryFrameCapActorList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddEveryFrameCapActorList(struct ABPCaptureActor_C* CaptureActor); // Function BP_EventManager.BP_EventManager_C.AddEveryFrameCapActorList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EffectBokeh(int32_t CaptureActorIndex, struct UCurveFloat* Curve, bool CurveReverse); // Function BP_EventManager.BP_EventManager_C.EffectBokeh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayPostProcessSequencer(struct ULevelSequence* Sequence, bool IsLoop); // Function BP_EventManager.BP_EventManager_C.PlayPostProcessSequencer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearChildCapActor(enum class EPhaseAlphaCurveType AlphaFadeType); // Function BP_EventManager.BP_EventManager_C.ClearChildCapActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetNextNewStaticNode(); // Function BP_EventManager.BP_EventManager_C.SetNextNewStaticNode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayPhaseNodeAnimation(struct FString AnimMontagePath); // Function BP_EventManager.BP_EventManager_C.PlayPhaseNodeAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttachCapActorForPhaseNodeMesh(int32_t CaptureActorIndex, struct FName SocketName, bool NewVisibility); // Function BP_EventManager.BP_EventManager_C.AttachCapActorForPhaseNodeMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartNewStaticInGeneral(struct FString InAnimMontagePath, enum class EShadaAnimeType ShaderAnimType, struct FName SelectShaderAnimeDTRowName, bool NoPlaySE); // Function BP_EventManager.BP_EventManager_C.StartNewStaticInGeneral // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttachCapActorForCapActor(int32_t ParentCapActorIndex, int32_t ChildCapActorIndex, struct FName AttachPointName); // Function BP_EventManager.BP_EventManager_C.AttachCapActorForCapActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetAttachCapActorToNodeActor(int32_t ParentSPCapActorIndex); // Function BP_EventManager.BP_EventManager_C.ResetAttachCapActorToNodeActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetAttachAllCapActor(struct ABPCaptureActor_C* ParentActor); // Function BP_EventManager.BP_EventManager_C.ResetAttachAllCapActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeSpeakerStaticPl(struct TArray<struct FName> FrontCharaPlBoneNameList); // Function BP_EventManager.BP_EventManager_C.ChangeSpeakerStaticPl // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearSpecialStatic(int32_t SpecialCaptureActorIndex); // Function BP_EventManager.BP_EventManager_C.ClearSpecialStatic // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlaySpecialNodeAnimMontage(struct FString SpecialNodeAnimNamePath); // Function BP_EventManager.BP_EventManager_C.PlaySpecialNodeAnimMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetAttachSPCapActorToNodeActor(int32_t ParentSPCapActorIndex); // Function BP_EventManager.BP_EventManager_C.ResetAttachSPCapActorToNodeActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttachCapActorForSpecialNodeActor(int32_t CaptureActorIndex, struct FName AttachPointName); // Function BP_EventManager.BP_EventManager_C.AttachCapActorForSpecialNodeActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetStaticCapturePPMScreenLight(struct FLinearColor [1] Color, float [1] CenterU, float [1] CenterV, float [1] Size, float [1] Intensity, float [1]method, float [1]ReverceEffect, struct FLinearColor [2] Color, float [2] CenterU, float [2] CenterV, float [2] Size, float [2] Intensity, float [2]method, float [2]ReverceEffect, float GradationPower, float GlobalRate); // Function BP_EventManager.BP_EventManager_C.SetStaticCapturePPMScreenLight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsWorldMapShowDestinationForLocationName(int32_t LocationId, bool IsShow); // Function BP_EventManager.BP_EventManager_C.IsWorldMapShowDestinationForLocationName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsWorldMapShowDestinationForAreaName(int32_t LocationId, int32_t areaId, bool IsShow); // Function BP_EventManager.BP_EventManager_C.IsWorldMapShowDestinationForAreaName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SettingChangeSpecialStatic(struct FName BeforeStaticAttachJointName); // Function BP_EventManager.BP_EventManager_C.SettingChangeSpecialStatic // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddEventRenderTarget(struct FFRenderTargetData AddRenderTargetData); // Function BP_EventManager.BP_EventManager_C.AddEventRenderTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetGlitchTexture(); // Function BP_EventManager.BP_EventManager_C.ResetGlitchTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetGlitchTexture(struct UTexture2D* Texture); // Function BP_EventManager.BP_EventManager_C.SetGlitchTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetStaticCapturePPMGlitch(); // Function BP_EventManager.BP_EventManager_C.ResetStaticCapturePPMGlitch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupStaticCapturePPMGlitch(struct UTexture2D* Texture); // Function BP_EventManager.BP_EventManager_C.SetupStaticCapturePPMGlitch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetGlitchPatternTexture(struct UTexture2D* Texture, struct UMaterialInstanceDynamic* Material); // Function BP_EventManager.BP_EventManager_C.PrivateSetGlitchPatternTexture // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetStaticCapturePPMVignetteMask(); // Function BP_EventManager.BP_EventManager_C.ResetStaticCapturePPMVignetteMask // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetVignetteMaskTexture(struct UTexture2D* Texture, struct UMaterialInstanceDynamic* Material); // Function BP_EventManager.BP_EventManager_C.PrivateSetVignetteMaskTexture // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupStaticCapturePPMVignetteMask(struct UTexture2D* Texture); // Function BP_EventManager.BP_EventManager_C.SetupStaticCapturePPMVignetteMask // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AppendSceneCapturePostProcessPPC(struct UPostProcessComponent* PostProcessComponent); // Function BP_EventManager.BP_EventManager_C.AppendSceneCapturePostProcessPPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateIsStaticCaturePPMActive(enum class EEventPostProcessID EventPostProcessID, bool Active); // Function BP_EventManager.BP_EventManager_C.PrivateIsStaticCaturePPMActive // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void PrivateDeactivateStaticCaturePPM(enum class EEventPostProcessID EventPostProcessID); // Function BP_EventManager.BP_EventManager_C.PrivateDeactivateStaticCaturePPM // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateActivateStaticCaturePPM(enum class EEventPostProcessID EventPostProcessID); // Function BP_EventManager.BP_EventManager_C.PrivateActivateStaticCaturePPM // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetActiveStaticCapturePPM(enum class EEventPostProcessID EventPostProcessID, bool Activate); // Function BP_EventManager.BP_EventManager_C.SetActiveStaticCapturePPM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Private Get Static Cature PPM Once(enum class EEventPostProcessID EventPostProcessID, bool Load, struct UMaterialInstanceDynamic* PPM); // Function BP_EventManager.BP_EventManager_C.Private Get Static Cature PPM Once // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearEventRenderTarget(); // Function BP_EventManager.BP_EventManager_C.ClearEventRenderTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitEventRenderTarget(); // Function BP_EventManager.BP_EventManager_C.InitEventRenderTarget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetRenderTargetForArray(struct TArray<struct FFRenderTargetData> RenderTargetArray, struct FFRenderTargetData RenderTargetData); // Function BP_EventManager.BP_EventManager_C.GetRenderTargetForArray // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSequencerRenderTarget(struct FFRenderTargetData RenderTargetData); // Function BP_EventManager.BP_EventManager_C.GetSequencerRenderTarget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetFaceRenderTarget(struct FFRenderTargetData RenderTargetData); // Function BP_EventManager.BP_EventManager_C.GetFaceRenderTarget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsValidChangeLevelAfterEventComand(); // Function BP_EventManager.BP_EventManager_C.IsValidChangeLevelAfterEventComand // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SaveCaptureActorTexture(int32_t CaptureActorIndex); // Function BP_EventManager.BP_EventManager_C.SaveCaptureActorTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SettingCaptureCrossFade(int32_t BoadMeshIndex, struct FName CapturePresetName, struct FName CharaAnimationName, struct FName CharaFaceAnimationName, int32_t NpcMeshTableID, int32_t NpcMaterialTableID, struct FName LightPresetName, struct ULevelSequence* CaptureSequence, float CaptureSequencePosition, struct FName TextureRowName, enum class EStaticPlType StaticPlType, struct FName MovieTextureRowName, struct ABPCaptureActor_C* CaptureActor, bool IsSeamlessInGameCapture, struct FName CharaEyePresetName, float EyeXAxisThreshold, float EyeYAxisThreshold, struct FName CharaPartsDTRowName); // Function BP_EventManager.BP_EventManager_C.SettingCaptureCrossFade // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetStaticCapturePPMRadialBlur(float Rate, float BlurSize, struct FVector BlurCenter, struct FVector BlurColor); // Function BP_EventManager.BP_EventManager_C.SetStaticCapturePPMRadialBlur // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetStaticCapturePPMVisionFog(float Rate, float FogNear, float FogFar, struct FVector CenterLocation); // Function BP_EventManager.BP_EventManager_C.SetStaticCapturePPMVisionFog // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetStaticCapturePPMSeeThrough(float Rate, float BlurPower); // Function BP_EventManager.BP_EventManager_C.SetStaticCapturePPMSeeThrough // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetStaticCapturePPMAccelerator(float Rate, struct FVector BlurCenter); // Function BP_EventManager.BP_EventManager_C.SetStaticCapturePPMAccelerator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AppendSceneCapturePostProcess(struct USceneCaptureComponent2D* SceneCapture); // Function BP_EventManager.BP_EventManager_C.AppendSceneCapturePostProcess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEventType(enum class EEventType EventType); // Function BP_EventManager.BP_EventManager_C.GetEventType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void OnCameraCutFinishd(); // Function BP_EventManager.BP_EventManager_C.OnCameraCutFinishd // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartCameraCutDynamic(struct ULevelSequence* Level Sequence, float BlendTime, enum class EViewTargetBlendFunction BlendFunc, float BlendExp, bool IsEndCameraBlendPlayerCamera); // Function BP_EventManager.BP_EventManager_C.StartCameraCutDynamic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInGameBeforeCamera(struct FTransform Transform, struct UCurveFloat* InGameCurve, float CameraFov); // Function BP_EventManager.BP_EventManager_C.SetInGameBeforeCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetDefaultSceneCapturePostProcessSetting(struct FPostProcessSettings PPS); // Function BP_EventManager.BP_EventManager_C.GetDefaultSceneCapturePostProcessSetting // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CalcSceneCapturePostProcessSettings(struct USceneCaptureComponent2D* SceneCapture, struct FVector Location, struct FPostProcessSettings Settings); // Function BP_EventManager.BP_EventManager_C.CalcSceneCapturePostProcessSettings // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartEventCharaName(int32_t CaptureActorIndex, bool IsSpecialCaptureIndex, struct FName SocketName, struct FString CharaID, struct FVector Scale); // Function BP_EventManager.BP_EventManager_C.StartEventCharaName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartEventBossName(int32_t CaptureActorIndex, bool IsSpecialCaptureIndex, struct FName SocketName, struct FString bossId, struct FVector Scale, enum class EBossNameMode Mode, float freeFixedDrawSecond); // Function BP_EventManager.BP_EventManager_C.StartEventBossName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsPlayBeforeBoardAnimation(); // Function BP_EventManager.BP_EventManager_C.IsPlayBeforeBoardAnimation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsLoadedEventAsset(bool IsLoaded); // Function BP_EventManager.BP_EventManager_C.IsLoadedEventAsset // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadEventAsset(); // Function BP_EventManager.BP_EventManager_C.LoadEventAsset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartPPMMoveBlur(struct FVector2D Vector, struct TSoftObjectPtr<UCurveFloat> TimelineCurve); // Function BP_EventManager.BP_EventManager_C.StartPPMMoveBlur // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProccessEndBrainTalk(bool IsStartEvent); // Function BP_EventManager.BP_EventManager_C.ProccessEndBrainTalk // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEventEnableUIMenu(bool enableFlag); // Function BP_EventManager.BP_EventManager_C.SetEventEnableUIMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEventPause_Internal(bool IsPause); // Function BP_EventManager.BP_EventManager_C.SetEventPause_Internal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetVisibleShowDestinationActor(bool IsVisible); // Function BP_EventManager.BP_EventManager_C.SetVisibleShowDestinationActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SettingEasyStaticForGeneralStatic(int32_t CaptureActorIndex); // Function BP_EventManager.BP_EventManager_C.SettingEasyStaticForGeneralStatic // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProccessEnemyNumCheck(struct FFEventTriggerCommandData EventTriggerComandData, bool IsStartEvent); // Function BP_EventManager.BP_EventManager_C.ProccessEnemyNumCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttachToBoadActor(int32_t AttachBoardNum, struct AActor* ParentActor); // Function BP_EventManager.BP_EventManager_C.AttachToBoadActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAnimMontageTransform(int32_t CaptureActorIndex, struct FString BoardAnimName); // Function BP_EventManager.BP_EventManager_C.SetAnimMontageTransform // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayGeneralBoardAnimation(int32_t CaptureActorIndex, struct FString BoardAnimationIndex, bool IsLoop, struct FName SocketName, int32_t AttachBoardIndex, struct UAnimMontage* AddAnimMontage, struct TSoftObjectPtr<UCurveFloat> PlayRateCurveData); // Function BP_EventManager.BP_EventManager_C.PlayGeneralBoardAnimation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttachRedStringMeshs(struct AActor* ParentActor, struct FName SocketName); // Function BP_EventManager.BP_EventManager_C.AttachRedStringMeshs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetProgressID(int32_t ProgressId); // Function BP_EventManager.BP_EventManager_C.SetProgressID // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetProgressID_Internal(int32_t ProgressId); // Function BP_EventManager.BP_EventManager_C.GetProgressID_Internal // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartBPEvent(bool IsStartSubBPEvent, struct FFEventTriggerCommandData EventTriggerCommandData); // Function BP_EventManager.BP_EventManager_C.StartBPEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProccessEnemyAllDie(bool IsStartEvent); // Function BP_EventManager.BP_EventManager_C.ProccessEnemyAllDie // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProccessTime(struct FFEventTriggerCommandData EventTriggerComandData, bool IsStartEvent); // Function BP_EventManager.BP_EventManager_C.ProccessTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddEventTriggerCommand_Internal(struct FFEventTriggerCommand TriggerCommand); // Function BP_EventManager.BP_EventManager_C.AddEventTriggerCommand_Internal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadAsset(); // Function BP_EventManager.BP_EventManager_C.LoadAsset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartAutoBoardAnimation(int32_t CaptureActorIndex, struct FString boardAnimationName, struct UAnimMontage* AddBordAnimMontage, enum class EStaticPlType StaticPlType, struct TSoftObjectPtr<UCurveFloat> PlayRateCurveData); // Function BP_EventManager.BP_EventManager_C.StartAutoBoardAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NotifyFinishWaitMode(); // Function BP_EventManager.BP_EventManager_C.NotifyFinishWaitMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetVignetteMaskTexture(); // Function BP_EventManager.BP_EventManager_C.ResetVignetteMaskTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetVignetteMaskTexture(struct UTexture2D* Texture); // Function BP_EventManager.BP_EventManager_C.SetVignetteMaskTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePostProcessMaterial(bool ForceUpdate); // Function BP_EventManager.BP_EventManager_C.UpdatePostProcessMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsCutSceneEvent(bool IsCutSceneEvent); // Function BP_EventManager.BP_EventManager_C.IsCutSceneEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	struct UEventAssetPoolComponent* GetAssetPool(); // Function BP_EventManager.BP_EventManager_C.GetAssetPool // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartupCutscene(bool IsPartyPlayerBattleReady, bool IsENPCBattleReady); // Function BP_EventManager.BP_EventManager_C.StartupCutscene // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsFadeAnimation(); // Function BP_EventManager.BP_EventManager_C.IsFadeAnimation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndFade(struct FVector Color, float Time); // Function BP_EventManager.BP_EventManager_C.EndFade // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartFade(struct FVector Color, float Time); // Function BP_EventManager.BP_EventManager_C.StartFade // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct AEventCaptureActorBase* GetCaptureActorBase(int32_t Index); // Function BP_EventManager.BP_EventManager_C.GetCaptureActorBase // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BGEffectScanline(struct UCurveFloat* Curve, bool IsLoop); // Function BP_EventManager.BP_EventManager_C.BGEffectScanline // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BGEffectFringe(struct UCurveFloat* Curve, bool IsLoop); // Function BP_EventManager.BP_EventManager_C.BGEffectFringe // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BGEffectGlitch(struct UCurveFloat* Curve, bool IsLoop); // Function BP_EventManager.BP_EventManager_C.BGEffectGlitch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDirectionalLight(struct FName LightPresetName); // Function BP_EventManager.BP_EventManager_C.SetDirectionalLight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCaptureBGActor(struct ABP_CaptureBG_C* ReturnLocalCaptureBG); // Function BP_EventManager.BP_EventManager_C.GetCaptureBGActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddBoardBGAnimation(struct FString BoardAnimNamePath, bool IsLoop); // Function BP_EventManager.BP_EventManager_C.AddBoardBGAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayBoardBGAnimation(struct FString BoardAnimNamePath, bool IsLoop); // Function BP_EventManager.BP_EventManager_C.PlayBoardBGAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUseTransitionInGame(bool UseTransition); // Function BP_EventManager.BP_EventManager_C.SetUseTransitionInGame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetFinalSpecialIDInGame(int32_t SpecialCaptureActorIndex); // Function BP_EventManager.BP_EventManager_C.SetFinalSpecialIDInGame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TransitionStaticToInGame(); // Function BP_EventManager.BP_EventManager_C.TransitionStaticToInGame // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BGEffectNoise(struct UCurveFloat* Curve, bool IsLoop); // Function BP_EventManager.BP_EventManager_C.BGEffectNoise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTransformInGamePlayer(struct FTransform Transform); // Function BP_EventManager.BP_EventManager_C.SetTransformInGamePlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLocationInGameCamera(struct FVector Location); // Function BP_EventManager.BP_EventManager_C.SetLocationInGameCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTransformCaptureBGCamera(struct FTransform CameraTransform); // Function BP_EventManager.BP_EventManager_C.SetTransformCaptureBGCamera // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTransformCaptureBG(struct FTransform PlaneTransform); // Function BP_EventManager.BP_EventManager_C.SetTransformCaptureBG // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CaptureSceneBG(bool IsSuccess); // Function BP_EventManager.BP_EventManager_C.CaptureSceneBG // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LuaEndStatic(bool isRestoreTransform); // Function BP_EventManager.BP_EventManager_C.LuaEndStatic // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LuaStartStatic(); // Function BP_EventManager.BP_EventManager_C.LuaStartStatic // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpecialEffectNoise(int32_t CaptureActorIndex, struct UCurveFloat* Curve, bool IsLoop); // Function BP_EventManager.BP_EventManager_C.SpecialEffectNoise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EffectNoise(int32_t CaptureActorIndex, struct UCurveFloat* Curve, bool IsLoop); // Function BP_EventManager.BP_EventManager_C.EffectNoise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupDynamicPostProcess(bool Enable); // Function BP_EventManager.BP_EventManager_C.SetupDynamicPostProcess // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializePostProcess(); // Function BP_EventManager.BP_EventManager_C.InitializePostProcess // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSpecialStaticNodeActor(struct AActor* ReturnSpecialStaticNodeActor); // Function BP_EventManager.BP_EventManager_C.GetSpecialStaticNodeActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddSpecialNodeAnimation(struct FString SpecialNodeAnimNamePath, bool IsLoop); // Function BP_EventManager.BP_EventManager_C.AddSpecialNodeAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlaySpecialNodeAnimation(struct FString SpecialNodeAnimNamePath, bool IsLoop); // Function BP_EventManager.BP_EventManager_C.PlaySpecialNodeAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttachToSpecialCaptureActor(int32_t SpecialCaptureActorIndex, struct FName AttachPointName); // Function BP_EventManager.BP_EventManager_C.AttachToSpecialCaptureActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CaptureSceneSpecial(int32_t SpecialCaptureActorIndex); // Function BP_EventManager.BP_EventManager_C.CaptureSceneSpecial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SettingSpecialCamera(int32_t CaptureActorIndex, struct FTransform CameraTransform, float CameraFov); // Function BP_EventManager.BP_EventManager_C.SettingSpecialCamera // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SettingSpecialCapture(int32_t CaptureActorIndex, int32_t BoadMeshIndex); // Function BP_EventManager.BP_EventManager_C.SettingSpecialCapture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool isEndDynamicCutscene(); // Function BP_EventManager.BP_EventManager_C.isEndDynamicCutscene // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCaptureActor(int32_t CaptureActorIndex, struct ABPCaptureActor_C* ReturnCaptureActor); // Function BP_EventManager.BP_EventManager_C.GetCaptureActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CaptureScene(int32_t CaptureActorIndex); // Function BP_EventManager.BP_EventManager_C.CaptureScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CameraAnimation(int32_t CamAnimIndex); // Function BP_EventManager.BP_EventManager_C.CameraAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddBoardAnimation(int32_t CaptureActorIndex, struct FString BoardAnimationIndex, bool IsLoop); // Function BP_EventManager.BP_EventManager_C.AddBoardAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndCutScene(bool isEndEvent, float PlayerCameraBlendTime, enum class EViewTargetBlendFunction PlayerCameraBlendFunc, float PlayerCameraBlendExp, struct FName SkipENPCCamRowName); // Function BP_EventManager.BP_EventManager_C.EndCutScene // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayBoardAnimation(int32_t CaptureActorIndex, struct FString BoardAnimationIndex, bool IsLoop, struct FName SocketName, struct TSoftObjectPtr<UCurveFloat> PlayRateCurveData); // Function BP_EventManager.BP_EventManager_C.PlayBoardAnimation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SettingCapture(int32_t CaptureActorIndex, int32_t BoadMeshIndex, struct FName CapturePresetName, struct FName CharaAnimationName, struct FName CharaFaceAnimationName, int32_t NpcMeshTableID, int32_t NpcMaterialTableID, struct FName LightPresetName, struct ULevelSequence* CaptureSequence, float CaptureSequencePosition, struct FName TextureRowName, enum class EStaticPlType StaticPlType, struct FName MovieTextureRowName, bool IsUseSaveTexture, bool IsSeamlessInGameCapture, bool IsHiddenPlFrameEffect, struct FName CharaEyePresetName, float EyeXAxisThreshold, float EyeYAxisThreshold, struct FName CharaPartsDTRowName, enum class EEventCaptureRenderType RenderType); // Function BP_EventManager.BP_EventManager_C.SettingCapture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupBinding(); // Function BP_EventManager.BP_EventManager_C.SetupBinding // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcMainScenePostProcess(struct FVector Location, struct FPostProcessSettings PostProcessSetting); // Function BP_EventManager.BP_EventManager_C.CalcMainScenePostProcess // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetScreenCaptureTexture(struct UTextureRenderTarget2D* RenderTarget); // Function BP_EventManager.BP_EventManager_C.GetScreenCaptureTexture // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GameScreenCapture(); // Function BP_EventManager.BP_EventManager_C.GameScreenCapture // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFinishDynamicCutScene(); // Function BP_EventManager.BP_EventManager_C.OnFinishDynamicCutScene // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPlayStartDynamicCutScene(); // Function BP_EventManager.BP_EventManager_C.OnPlayStartDynamicCutScene // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFinishStaticCutScene(); // Function BP_EventManager.BP_EventManager_C.OnFinishStaticCutScene // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPlayStartStaticCutScene(); // Function BP_EventManager.BP_EventManager_C.OnPlayStartStaticCutScene // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnLoadSequencerFinish(struct ULevelSequence* Level Sequence); // Function BP_EventManager.BP_EventManager_C.OnLoadSequencerFinish // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSequencerFinished(); // Function BP_EventManager.BP_EventManager_C.OnSequencerFinished // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugEvent(); // Function BP_EventManager.BP_EventManager_C.DebugEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartCutScene(struct FString CutsceneName, bool IsBPEvent); // Function BP_EventManager.BP_EventManager_C.StartCutScene // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_EventManager.BP_EventManager_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TransitionStaticToInGameTimeline__FinishedFunc(); // Function BP_EventManager.BP_EventManager_C.TransitionStaticToInGameTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1685580
	void TransitionStaticToInGameTimeline__UpdateFunc(); // Function BP_EventManager.BP_EventManager_C.TransitionStaticToInGameTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1685580
	void PPMMoveBlurTimeline__FinishedFunc(); // Function BP_EventManager.BP_EventManager_C.PPMMoveBlurTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1685580
	void PPMMoveBlurTimeline__UpdateFunc(); // Function BP_EventManager.BP_EventManager_C.PPMMoveBlurTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1685580
	void DynamicToInGameInterp__FinishedFunc(); // Function BP_EventManager.BP_EventManager_C.DynamicToInGameInterp__FinishedFunc // (BlueprintEvent) // @ game+0x1685580
	void DynamicToInGameInterp__UpdateFunc(); // Function BP_EventManager.BP_EventManager_C.DynamicToInGameInterp__UpdateFunc // (BlueprintEvent) // @ game+0x1685580
	void StopStreamPPTimeline__FinishedFunc(); // Function BP_EventManager.BP_EventManager_C.StopStreamPPTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1685580
	void StopStreamPPTimeline__UpdateFunc(); // Function BP_EventManager.BP_EventManager_C.StopStreamPPTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1685580
	void BGScreenFadeTimeline__FinishedFunc(); // Function BP_EventManager.BP_EventManager_C.BGScreenFadeTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1685580
	void BGScreenFadeTimeline__UpdateFunc(); // Function BP_EventManager.BP_EventManager_C.BGScreenFadeTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_C_K2Node_InputKeyEvent_1(struct FKey Key); // Function BP_EventManager.BP_EventManager_C.InpActEvt_C_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0x1685580
	void ISetProgressID(int32_t ProgressId); // Function BP_EventManager.BP_EventManager_C.ISetProgressID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddEventTriggerCommand(struct FFEventTriggerCommand TriggerCommand); // Function BP_EventManager.BP_EventManager_C.AddEventTriggerCommand // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadMakeEvent(struct FString MakeEventPathString); // Function BP_EventManager.BP_EventManager_C.LoadMakeEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddEventTriggerCommandByPath(enum class EEventTriggerCheckType TriggerType, struct FString TriggerCommandPath, float TriggerWaitTime, int32_t EventPriority); // Function BP_EventManager.BP_EventManager_C.AddEventTriggerCommandByPath // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEventPause(bool IsPause); // Function BP_EventManager.BP_EventManager_C.SetEventPause // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Inner_LoadSequencer(struct FString assetPath); // Function BP_EventManager.BP_EventManager_C.Inner_LoadSequencer // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Inner_LoadSequencerFinish(struct UObject* Loaded); // Function BP_EventManager.BP_EventManager_C.Inner_LoadSequencerFinish // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Inner_PopCameraLag(struct USpringArmComponent* SpringArm); // Function BP_EventManager.BP_EventManager_C.Inner_PopCameraLag // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Inner_PopCameraRotationLag(struct USpringArmComponent* SpringArm); // Function BP_EventManager.BP_EventManager_C.Inner_PopCameraRotationLag // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Inner_TransitionPlayerCamera(); // Function BP_EventManager.BP_EventManager_C.Inner_TransitionPlayerCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivatePPMMoveBlurTimeline(); // Function BP_EventManager.BP_EventManager_C.PrivatePPMMoveBlurTimeline // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SimulateTick(); // Function BP_EventManager.BP_EventManager_C.SimulateTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SimulateBeginPlay(); // Function BP_EventManager.BP_EventManager_C.SimulateBeginPlay // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Inner_DynamicToInGameInterp(float BlendTime); // Function BP_EventManager.BP_EventManager_C.Inner_DynamicToInGameInterp // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateClearTemporalRenderTargets(); // Function BP_EventManager.BP_EventManager_C.PrivateClearTemporalRenderTargets // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventManager.BP_EventManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ScreenCapture(); // Function BP_EventManager.BP_EventManager_C.ScreenCapture // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartStatic(); // Function BP_EventManager.BP_EventManager_C.StartStatic // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndStatic(); // Function BP_EventManager.BP_EventManager_C.EndStatic // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartDynamic(); // Function BP_EventManager.BP_EventManager_C.StartDynamic // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndDynamic(); // Function BP_EventManager.BP_EventManager_C.EndDynamic // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnActor(struct FSEventSpawnParameter Parameter); // Function BP_EventManager.BP_EventManager_C.SpawnActor // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindingActor(struct FSEventBindingParameter Parameter); // Function BP_EventManager.BP_EventManager_C.BindingActor // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DrawMessage(int32_t windowType, struct FString messageLabel, bool skipable, float DrawSecond, bool IsVoiceOnlyMessage, bool isSkipVoiceEnd); // Function BP_EventManager.BP_EventManager_C.DrawMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadMessage(struct TSoftObjectPtr<UDataTable> DataTable); // Function BP_EventManager.BP_EventManager_C.LoadMessage // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnloadMessage(struct FString messageTableName); // Function BP_EventManager.BP_EventManager_C.UnloadMessage // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartDynamicCutscene(struct FString CutsceneName); // Function BP_EventManager.BP_EventManager_C.StartDynamicCutscene // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupStaticScene(); // Function BP_EventManager.BP_EventManager_C.SetupStaticScene // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EventManager.BP_EventManager_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39(float AxisValue); // Function BP_EventManager.BP_EventManager_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39 // (BlueprintEvent) // @ game+0x1685580
	void InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54(float AxisValue); // Function BP_EventManager.BP_EventManager_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54 // (BlueprintEvent) // @ game+0x1685580
	void NearClip(float Length); // Function BP_EventManager.BP_EventManager_C.NearClip // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetNearClip(); // Function BP_EventManager.BP_EventManager_C.ResetNearClip // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartDynamicCutsceneFromAsset(struct ULevelSequence* Sequence, bool IsSeamlessInGame); // Function BP_EventManager.BP_EventManager_C.StartDynamicCutsceneFromAsset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EventManager.BP_EventManager_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void SequencerDrawBossName(struct FString bossId); // Function BP_EventManager.BP_EventManager_C.SequencerDrawBossName // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SequencerDrawTownName(int32_t LocationId); // Function BP_EventManager.BP_EventManager_C.SequencerDrawTownName // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SequencerDrawCharaName(struct FString CharaID); // Function BP_EventManager.BP_EventManager_C.SequencerDrawCharaName // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventBoardParamTimeline_Event(struct ABPCaptureActor_C* CaptureActor, struct FName XParamName, struct FName YParamName, struct UCurveFloat* XCurve, struct UCurveFloat* YCurve, float Speed, float XParamRate, float YParamRate); // Function BP_EventManager.BP_EventManager_C.EventBoardParamTimeline_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventStoreCameraTransform(); // Function BP_EventManager.BP_EventManager_C.EventStoreCameraTransform // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FinishSequencer(); // Function BP_EventManager.BP_EventManager_C.FinishSequencer // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SequencerStartBrainTalk(struct FName BrainTalkID, enum class EBrainTalkCategory Category, bool IsEventCallEnable); // Function BP_EventManager.BP_EventManager_C.SequencerStartBrainTalk // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SequencerStopBrainTalk(); // Function BP_EventManager.BP_EventManager_C.SequencerStopBrainTalk // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SaveSequencerCharaTransform(); // Function BP_EventManager.BP_EventManager_C.SaveSequencerCharaTransform // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeSpeakerToVoice(struct URSAtomComponentBase* Voice); // Function BP_EventManager.BP_EventManager_C.ChangeSpeakerToVoice // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartBlendPlayerCamera(float Blend Time, enum class EViewTargetBlendFunction Blend Function, float Blend Exp); // Function BP_EventManager.BP_EventManager_C.StartBlendPlayerCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLevelVisible(bool Visible, struct TArray<struct TSoftObjectPtr<UObject>> LevelList); // Function BP_EventManager.BP_EventManager_C.SetLevelVisible // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHiddenInGameForTagName(struct FName TagName, bool IsHiddenInGame); // Function BP_EventManager.BP_EventManager_C.SetHiddenInGameForTagName // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartEventFadeOut(struct FLinearColor Color, bool isUnderCaption, float second); // Function BP_EventManager.BP_EventManager_C.StartEventFadeOut // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSequenceEnd(); // Function BP_EventManager.BP_EventManager_C.SetSequenceEnd // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AppearNoBindPartyPlayer(); // Function BP_EventManager.BP_EventManager_C.AppearNoBindPartyPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopStreamPP(struct UCurveFloat* NewFloatCurve); // Function BP_EventManager.BP_EventManager_C.StopStreamPP // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartGrabFrameStaticToDynamic(); // Function BP_EventManager.BP_EventManager_C.StartGrabFrameStaticToDynamic // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndGrabFrameStaticToDynamic(); // Function BP_EventManager.BP_EventManager_C.EndGrabFrameStaticToDynamic // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RemoveBGScreenWidget(bool UseFade); // Function BP_EventManager.BP_EventManager_C.RemoveBGScreenWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayVoice(struct FString VoiceFileName); // Function BP_EventManager.BP_EventManager_C.PlayVoice // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeBrainFieldPlayer(); // Function BP_EventManager.BP_EventManager_C.ChangeBrainFieldPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartTalkEvent(); // Function BP_EventManager.BP_EventManager_C.StartTalkEvent // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndTalkEvent(); // Function BP_EventManager.BP_EventManager_C.EndTalkEvent // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void HideBGEffect(); // Function BP_EventManager.BP_EventManager_C.HideBGEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddMessageVoiceRipSyncInfoList(struct URSAtomComponentBase* AtomComp, struct FName RipSyncBoardJointID); // Function BP_EventManager.BP_EventManager_C.AddMessageVoiceRipSyncInfoList // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SubMessageVoiceRipSyncInfoList(struct URSAtomComponentBase* AtomComp); // Function BP_EventManager.BP_EventManager_C.SubMessageVoiceRipSyncInfoList // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetProgressIDNative(int32_t ProgressId); // Function BP_EventManager.BP_EventManager_C.SetProgressIDNative // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndWork(); // Function BP_EventManager.BP_EventManager_C.EndWork // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void SetupStaticSceneForBrainCrash(); // Function BP_EventManager.BP_EventManager_C.SetupStaticSceneForBrainCrash // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadMakeEvent_Internal(struct FString MakeEventPathString); // Function BP_EventManager.BP_EventManager_C.LoadMakeEvent_Internal // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnLoadedMakeEvent(struct UObject* Loaded); // Function BP_EventManager.BP_EventManager_C.OnLoadedMakeEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupStaticSceneForTexture(struct FName TextureRowName); // Function BP_EventManager.BP_EventManager_C.SetupStaticSceneForTexture // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckAndSetTalkEventPlayerRipSync(struct FString messageLabel, struct URSAtomComponentBase* pAtomComponent); // Function BP_EventManager.BP_EventManager_C.CheckAndSetTalkEventPlayerRipSync // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DelayBeginPlay(); // Function BP_EventManager.BP_EventManager_C.DelayBeginPlay // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetReadyForCrossFadeCharaCapture(float DelayTime, int32_t CaptureActorIndex, struct FName CapturePresetName, struct FName CharaAnimationName, struct FName CharaFaceAnimationName, struct FName LightPresetName, int32_t NpcMeshTableID, int32_t NpcMaterialTableID, struct FName CharaPartsDTRowName, enum class ECharaCapChangeSpeedType ChangeSpeedType); // Function BP_EventManager.BP_EventManager_C.GetReadyForCrossFadeCharaCapture // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnDelaySequencerFinished(); // Function BP_EventManager.BP_EventManager_C.OnDelaySequencerFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventManager(int32_t EntryPoint); // Function BP_EventManager.BP_EventManager_C.ExecuteUbergraph_BP_EventManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
	void DispatchHiddenSetoMask__DelegateSignature(bool bHidden); // Function BP_EventManager.BP_EventManager_C.DispatchHiddenSetoMask__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEndCutScene__DelegateSignature(); // Function BP_EventManager.BP_EventManager_C.OnEndCutScene__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStartCutScene__DelegateSignature(); // Function BP_EventManager.BP_EventManager_C.OnStartCutScene__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAfterChangeProgressID__DelegateSignature(); // Function BP_EventManager.BP_EventManager_C.OnAfterChangeProgressID__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBeforeChangeProgressID__DelegateSignature(); // Function BP_EventManager.BP_EventManager_C.OnBeforeChangeProgressID__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventBoardParamCurveTimeline__DelegateSignature(struct ABPCaptureActor_C* CaptureActor, struct FName XParamName, struct FName YParamName, struct UCurveFloat* XCurve, struct UCurveFloat* YCurve, float Speed, float XParamRate, float YParamRate); // Function BP_EventManager.BP_EventManager_C.EventBoardParamCurveTimeline__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnChangeDestinationActor__DelegateSignature(bool DestinationDispFlag); // Function BP_EventManager.BP_EventManager_C.OnChangeDestinationActor__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ED_PlayStart__DelegateSignature(); // Function BP_EventManager.BP_EventManager_C.ED_PlayStart__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ED_Finish__DelegateSignature(); // Function BP_EventManager.BP_EventManager_C.ED_Finish__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

