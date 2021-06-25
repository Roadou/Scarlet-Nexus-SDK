// BlueprintGeneratedClass BP_BrainFieldManager.BP_BrainFieldManager_C
// Size: 0x1325 (Inherited: 0xba0)
struct ABP_BrainFieldManager_C : ABrainFieldManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xba0(0x08)
	struct UStaticMeshComponent* SM_BG; // 0xba8(0x08)
	struct URSSceneCaptureComponent2D* RSSceneCaptureComponent2D; // 0xbb0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0xbb8(0x08)
	struct TArray<struct FTransform> RestorePlayerTransform; // 0xbc0(0x10)
	struct TArray<struct FName> BrainFieldLevelName; // 0xbd0(0x10)
	bool UserIsPlayer; // 0xbe0(0x01)
	char pad_BE1[0x7]; // 0xbe1(0x07)
	struct TArray<struct ULevelStreaming*> BrainFieldLevelLists; // 0xbe8(0x10)
	struct TArray<struct AActor*> PlayerLists; // 0xbf8(0x10)
	struct TArray<struct AActor*> EnemyLists; // 0xc08(0x10)
	struct TArray<struct FTransform> RestoreEnemyTransform; // 0xc18(0x10)
	struct TArray<struct FName> BrainFieldPlayerLevelName; // 0xc28(0x10)
	struct FVector LevelLocation; // 0xc38(0x0c)
	char pad_C44[0x4]; // 0xc44(0x04)
	struct AActor* BrainFieldUser; // 0xc48(0x08)
	bool InvokeBrainField; // 0xc50(0x01)
	char pad_C51[0x7]; // 0xc51(0x07)
	struct TArray<struct AActor*> NormalLevelActorLists; // 0xc58(0x10)
	struct TArray<struct UBP_RSParticleBackgroundComponent_C*> NormalLevelParticleLists; // 0xc68(0x10)
	struct TArray<struct FBrainFieldRestoreFlag> NormalLevelActorFlagLists; // 0xc78(0x10)
	int32_t SwitchVisibleActorSplitIndex; // 0xc88(0x04)
	bool UseVisibilityActorSplitFrame; // 0xc8c(0x01)
	char pad_C8D[0x3]; // 0xc8d(0x03)
	int32_t VisibilityActorSplitFrame; // 0xc90(0x04)
	char pad_C94[0x4]; // 0xc94(0x04)
	struct ABP_BrainFieldSequenceActor_C* SequenceActor; // 0xc98(0x08)
	bool InBrainField; // 0xca0(0x01)
	char pad_CA1[0x7]; // 0xca1(0x07)
	struct TArray<struct AActor*> EnemyFarLists; // 0xca8(0x10)
	struct TArray<struct APsychicGrabAttachment_C*> GrabAttachmentList; // 0xcb8(0x10)
	struct TArray<struct FTransform> RestorePsychicAttachmentTransform; // 0xcc8(0x10)
	struct FMulticastInlineDelegate ED_BrainFieldBattleStart; // 0xcd8(0x10)
	struct FMulticastInlineDelegate ED_BrainFieldBattleEnd; // 0xce8(0x10)
	struct FMulticastInlineDelegate ED_BrainFieldSwitchBG; // 0xcf8(0x10)
	struct UPostProcessComponent* PostProcess; // 0xd08(0x08)
	struct UMaterialInstanceDynamic* ReleaseBFMaterial; // 0xd10(0x08)
	bool DebugForceEnd; // 0xd18(0x01)
	char pad_D19[0x3]; // 0xd19(0x03)
	int32_t LoadLevelCounter; // 0xd1c(0x04)
	struct TArray<struct ULevelStreaming*> BrainFieldLevelPlayerList; // 0xd20(0x10)
	struct TArray<struct ULevelStreaming*> BrainFieldLevelEnemyList; // 0xd30(0x10)
	struct TArray<struct AActor*> BrainFieldActorLists; // 0xd40(0x10)
	struct AActor* SystemRoot; // 0xd50(0x08)
	int32_t SequencerIndex; // 0xd58(0x04)
	char pad_D5C[0x4]; // 0xd5c(0x04)
	struct TArray<struct AActor*> BrainFieldActorPlayerList; // 0xd60(0x10)
	struct TArray<struct AActor*> BrainFieldActorEnemyList; // 0xd70(0x10)
	struct TArray<struct FBrainFieldRestoreFlag> BrainFieldActorFlagLists; // 0xd80(0x10)
	struct TArray<struct FBrainFieldRestoreFlag> BrainFieldActorUserFlagLists; // 0xd90(0x10)
	struct TArray<struct UParticleSystemComponent*> BrainFieldParticleComponentLists; // 0xda0(0x10)
	struct TArray<struct ADirectionalLight*> BrainFieldLightLists; // 0xdb0(0x10)
	struct TArray<struct FTransform> BrainFieldPlayerTransform; // 0xdc0(0x10)
	bool CallCloseEventEnd; // 0xdd0(0x01)
	char pad_DD1[0xf]; // 0xdd1(0x0f)
	struct FTransform BFUserLastTransform; // 0xde0(0x30)
	bool SpawnPsychicObject; // 0xe10(0x01)
	char pad_E11[0x7]; // 0xe11(0x07)
	struct AActor* MonitorActor; // 0xe18(0x08)
	struct FMulticastInlineDelegate ED_ChangeMonitorState; // 0xe20(0x10)
	bool LevelLoadEnd; // 0xe30(0x01)
	char pad_E31[0x7]; // 0xe31(0x07)
	struct AActor* BrainFieldUserSub; // 0xe38(0x08)
	enum class EBrainFieldEndType EndType; // 0xe40(0x01)
	char pad_E41[0x7]; // 0xe41(0x07)
	struct TSoftObjectPtr<UMaterialInstance> ReleaseBFMaterialAsset; // 0xe48(0x28)
	struct TSoftClassPtr<UObject> MonitorActorClassAsset; // 0xe70(0x28)
	struct TSoftObjectPtr<UStaticMesh> BGStaticMeshAsset; // 0xe98(0x28)
	bool OverrideBF; // 0xec0(0x01)
	bool IsPerformance; // 0xec1(0x01)
	char pad_EC2[0x6]; // 0xec2(0x06)
	struct TArray<struct FName> BrainFieldEnemyLevelName; // 0xec8(0x10)
	bool IsEventStart; // 0xed8(0x01)
	char pad_ED9[0x7]; // 0xed9(0x07)
	struct TArray<struct FFlagListStruct> EnemyComponentRestoreFlags; // 0xee0(0x10)
	struct FFlagListStruct EnemyRestoreFlags; // 0xef0(0x10)
	struct ACameraActor* WatchCamera; // 0xf00(0x08)
	struct FVector WatchBaseLocation; // 0xf08(0x0c)
	struct FVector WatchLocation; // 0xf14(0x0c)
	bool FreeCameraWatchMode; // 0xf20(0x01)
	char pad_F21[0x7]; // 0xf21(0x07)
	struct UCurveFloat* FieldTimeColorCurve; // 0xf28(0x08)
	struct AActor* BrainCrashAttacker; // 0xf30(0x08)
	bool PlayerCameraWatchMode; // 0xf38(0x01)
	char pad_F39[0x3]; // 0xf39(0x03)
	struct FVector PlayerCameraWatchTargetOffset; // 0xf3c(0x0c)
	float PlayerCameraWatchPitch; // 0xf48(0x04)
	struct FRotator PlayerCameraWatchBaseRotation; // 0xf4c(0x0c)
	float PlayerCameraWatchEaseTime; // 0xf58(0x04)
	float PlayerCameraWatchEaseTimeMax; // 0xf5c(0x04)
	bool IsPlayerHidden; // 0xf60(0x01)
	bool DebugForceBrainCrashENPCOverwrite; // 0xf61(0x01)
	bool DebugForceFieldColor; // 0xf62(0x01)
	char pad_F63[0x1]; // 0xf63(0x01)
	float DebugForceFieldColorSide; // 0xf64(0x04)
	float DebugForceFieldColorGrayScale; // 0xf68(0x04)
	char pad_F6C[0x4]; // 0xf6c(0x04)
	struct AActor* BrainCrashAttackerSub; // 0xf70(0x08)
	char pad_F78[0x8]; // 0xf78(0x08)
	struct FTransform ENPCStartTransform; // 0xf80(0x30)
	struct TArray<struct AActor*> BrainFieldUserList; // 0xfb0(0x10)
	struct TArray<struct AActor*> OverrideLastBrainFieldUserList; // 0xfc0(0x10)
	struct TArray<struct UBP_RSParticleBackgroundComponent_C*> BrainFieldBGEffect; // 0xfd0(0x10)
	struct FBrainFieldRestoreFlag NormalLevelParticleFlag; // 0xfe0(0x28)
	bool IsEnemyHidden; // 0x1008(0x01)
	char pad_1009[0x7]; // 0x1009(0x07)
	struct TSoftObjectPtr<UMaterialInstance> TimeBFMaterialAsset; // 0x1010(0x28)
	struct UMaterialInstanceDynamic* TimeBFMaterial; // 0x1038(0x08)
	struct TArray<struct UPrimitiveComponent*> HiddenBGPrimitives; // 0x1040(0x10)
	struct FName BrainFieldNaviLevelName; // 0x1050(0x08)
	struct FName BrainFieldCollisionCommonLevelName; // 0x1058(0x08)
	struct FName CollisionLevelPath; // 0x1060(0x08)
	struct FName NavimeshLevelPath; // 0x1068(0x08)
	bool UseCustomCollision; // 0x1070(0x01)
	char pad_1071[0xf]; // 0x1071(0x0f)
	struct FBrainFieldSettingsLocation CustomCollisionSettings; // 0x1080(0x220)
	struct TArray<struct FTransform> EventEnemyTransforms; // 0x12a0(0x10)
	struct TArray<struct FTransform> ENPCSequencerTransform; // 0x12b0(0x10)
	bool DebugDispEnemyWave; // 0x12c0(0x01)
	char pad_12C1[0x7]; // 0x12c1(0x07)
	struct ABP_BrainFieldCollisions_C* PackageRefCollision; // 0x12c8(0x08)
	struct FName BrainFieldNavimeshCommonLevelName; // 0x12d0(0x08)
	bool RequestCollisionLevelVisible; // 0x12d8(0x01)
	bool FiniashCollisionLevelVisible; // 0x12d9(0x01)
	bool RequestNavimeshVisible; // 0x12da(0x01)
	char pad_12DB[0x5]; // 0x12db(0x05)
	struct TArray<int32_t> ENPCCustomStencils; // 0x12e0(0x10)
	bool DelayedBattleFieldOut; // 0x12f0(0x01)
	char pad_12F1[0x3]; // 0x12f1(0x03)
	int32_t DelayedBattleFieldOutGroupId; // 0x12f4(0x04)
	struct TArray<bool> RestorePlayerTransformValid; // 0x12f8(0x10)
	struct TArray<bool> PlayerHIdden; // 0x1308(0x10)
	struct FName InvalidDamageNameENPCClose; // 0x1318(0x08)
	bool SetInvalidDamageENPCClose; // 0x1320(0x01)
	enum class EPlayerID ENPCLoadPlayerID; // 0x1321(0x01)
	bool InSetupMenu; // 0x1322(0x01)
	bool DelayedBattleFieldOutIsBoss; // 0x1323(0x01)
	bool RestoreENPCPlayerLockOn; // 0x1324(0x01)

	void PrivateAdjustPlayerOpenSequenceLocation(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.PrivateAdjustPlayerOpenSequenceLocation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventENPCWhiteoutEnd(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.EventENPCWhiteoutEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupMenu(bool InMenu); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.SetupMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCustomCollisionSettings(struct FBrainFieldSettingsLocation Settings, bool UseCustomCollision); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.GetCustomCollisionSettings // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void HasCustomRestoreTransform(bool UseRestoreTransform); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.HasCustomRestoreTransform // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeBrainFieldEnemy(struct AActor* NewEnemy, struct AActor* OldEnemy); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.ChangeBrainFieldEnemy // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsNeedFrameWait(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.IsNeedFrameWait // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetInvalidDamagePlayers(bool Invalid, struct FName ClaimantName); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.PrivateSetInvalidDamagePlayers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateOverwriteRestoreTransform(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.PrivateOverwriteRestoreTransform // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupJumpBFEnemyAvatar(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.SetupJumpBFEnemyAvatar // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyLastOne(bool IsLastOne); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.IsEnemyLastOne // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetDelayedBattleFieldEnemyEnabled(int32_t GroupID, bool IsBossInBattleField); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.SetDelayedBattleFieldEnemyEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugSetMonitorIndex(enum class EPlayerID Index); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.DebugSetMonitorIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayPerformSequencerInternal(bool UseRefresh); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.PlayPerformSequencerInternal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsPerformanceSequencer_FromNative(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.IsPerformanceSequencer_FromNative // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	bool InBranField_FromNative(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.InBranField_FromNative // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetENPCCustomStencil(bool Set); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.SetENPCCustomStencil // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventCheckUsePsychicSpawn(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.EventCheckUsePsychicSpawn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateLoadLevelVisible(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.PrivateLoadLevelVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool GetUserIsPlayer(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.GetUserIsPlayer // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateCheckUseSpawnPsychicObject(bool UseSpawn); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.PrivateCheckUseSpawnPsychicObject // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	bool IsInvokeBrainField_FromNative(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.IsInvokeBrainField_FromNative // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetupBrainFieldMaterial(enum class RSPartyPlayerKind kind); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.SetupBrainFieldMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupEnemyWaveTransform(struct TArray<struct ARSBattleCharacter_C*> WaveEnemyList); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.SetupEnemyWaveTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UndoENpcDriveSetting(struct AActor* Actor); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.UndoENpcDriveSetting // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDamageStep(int32_t Step); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.SetDamageStep // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void HasSeamlessEvent(bool HasEvent); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.HasSeamlessEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update ENPCSequence Time(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.Update ENPCSequence Time // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivatePostLoadCollisionLevel(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.PrivatePostLoadCollisionLevel // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBrainFieldPlayerTransformCustomCollision(struct TArray<struct FTransform> Transforms); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.GetBrainFieldPlayerTransformCustomCollision // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckCustomCollision(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.CheckCustomCollision // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RestoreVisibleNearBG(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.RestoreVisibleNearBG // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void HiddenNearBG(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.HiddenNearBG // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTimePostRate(float Rate); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.SetTimePostRate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetVisibleEnemy(bool Visible); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.SetVisibleEnemy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void VisibleNormalParticles(bool IsVisible, struct TArray<struct UBP_RSParticleBackgroundComponent_C*> ParticleList, struct FBrainFieldRestoreFlag RestoreFlag, struct FBrainFieldRestoreFlag SetRestoreFlag); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.VisibleNormalParticles // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetENPCSequencerType(enum class EBrainFieldSequencerType Type); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.GetENPCSequencerType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void ReloadPlayerSequencer(enum class EPlayerID playerId); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.ReloadPlayerSequencer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateOnSpawnBrainFieldBGEffect(struct UBP_RSParticleBackgroundComponent_C* Emitter); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.PrivateOnSpawnBrainFieldBGEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDispEnemy(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.DebugDispEnemy // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupBrainFieldUser(struct AActor* User, struct AActor* SubUser); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.PrivateSetupBrainFieldUser // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBrainFieldUserList(struct TArray<struct AActor*> User); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.GetBrainFieldUserList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetENPCStartTransform(struct FTransform Transform); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.GetENPCStartTransform // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetENPCStartTransform(struct FTransform Transform); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.SetENPCStartTransform // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDebugForceFieldColor(bool Enable, float SideColor, float Grayscale); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.SetDebugForceFieldColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDebugForceBrainCrashENPCOverwrite(bool Enable); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.SetDebugForceBrainCrashENPCOverwrite // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetVisiblePlayer(bool Visible); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.SetVisiblePlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdatePlayerCameraWatchUser(float DeltaSeconds); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.PrivateUpdatePlayerCameraWatchUser // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayerCameraWatchUser(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.EndPlayerCameraWatchUser // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginPlayerCameraWatchUser(struct FVector TargetOffset, float Pitch, float EaseTime); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.BeginPlayerCameraWatchUser // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBrainFieldUser(struct AActor* User); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.GetBrainFieldUser // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnloadENPCCheck(struct ARSBattlePlayer_C* Player); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.UnloadENPCCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventReceiveBrainCrashCheckENPC(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.EventReceiveBrainCrashCheckENPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdateFieldTimeColor(float DeltaSeconds); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.PrivateUpdateFieldTimeColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPlayerCameraWatchUser(struct FVector TargetOffset, float Pitch); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.SetPlayerCameraWatchUser // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainFieldUserHoodON(bool HoodON); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.BrainFieldUserHoodON // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdateFreeCameraWatchUser(float DeltaSeconds); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.PrivateUpdateFreeCameraWatchUser // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayerStopEvent(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.PlayerStopEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartFreeCameraWatchUser(float BlendTimeSeconds, struct FVector WatchOffset); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.StartFreeCameraWatchUser // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventOpenUserEnd(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.EventOpenUserEnd // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnloadENPC(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.UnloadENPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadENPC(struct AActor* ENPCActor, enum class EBrainFieldENPCType ENPCType); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.LoadENPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEventStartup(bool IsEvent); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.IsEventStartup // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void PrivateSwitchVisibleTeamActors(bool IsPlayer, bool IsVisible); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.PrivateSwitchVisibleTeamActors // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadLevels(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.LoadLevels // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupENPCStencil(struct AActor* Target, bool Set, int32_t Index); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.PrivateSetupENPCStencil // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventClose(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.EventClose // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventOpenUser(struct AActor* User, struct AActor* SubUser); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.EventOpenUser // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Is Performance Sequencer(bool IsPerform); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.Is Performance Sequencer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PerformOverrideStartInnerOne(bool IsUser, struct TArray<struct AActor*> Lists); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.PerformOverrideStartInnerOne // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsUserIsPlayer(bool IsPlayer); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.IsUserIsPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void PrivateSetupMaterial(struct AActor* Actor, bool VisibleBrainField, bool SetupBrainCode); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.PrivateSetupMaterial // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupPartyMaterial(bool VisibleBrainField); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.PrivateSetupPartyMaterial // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupBFVisible(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.PrivateSetupBFVisible // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PerformOverrideStart(bool PlaySequencer); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.PerformOverrideStart // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OverrideBrainField(struct AActor* User, struct AActor* SubUser); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.OverrideBrainField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateMoveBFPlayerTransform(bool UseDynamicEventRelative); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.PrivateMoveBFPlayerTransform // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSwitchBGSide(bool UserIsPlayer); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.PrivateSwitchBGSide // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadAsset(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.LoadAsset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SwitchGameOver(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.SwitchGameOver // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsReceiveBrainCrashGameOver(bool IsGameOver); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.IsReceiveBrainCrashGameOver // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetEndType(enum class EBrainFieldEndType EndType); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.GetEndType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PerformMoveNormalFieldInnerOne(bool IsUser, struct TArray<struct AActor*> Lists); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.PerformMoveNormalFieldInnerOne // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PerformMoveBrainFieldInnerOne(bool IsUser, struct TArray<struct AActor*> Lists); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.PerformMoveBrainFieldInnerOne // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainFieldLightVisible(bool Visible); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.SetBrainFieldLightVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsInvokeBrainField(bool InvokeBrainField); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.IsInvokeBrainField // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SwitchParticleSystem(bool Enabled); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.SwitchParticleSystem // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsSpawnPsychicObject(bool IsSpawn); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.IsSpawnPsychicObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetupGrabObjectEnabled(bool Enabled); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.SetupGrabObjectEnabled // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupEnemyEnabledInternal(bool Enabled, struct AActor* InEnemy, int32_t InEnemyIndex, struct TArray<bool> EnemyFlagList, struct TArray<bool> ComponentsFlagList); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.SetupEnemyEnabledInternal // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartUserInput(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.StartUserInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupEnemyEnabled(bool Enabled); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.SetupEnemyEnabled // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupPlayerMaterial(struct ARSBattlePlayer_C* Player, bool VisibleBrainField); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.SetupPlayerMaterial // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PostLoadedLevel(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.PostLoadedLevel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugForceEndField(bool isForce); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.DebugForceEndField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckFinishCondition(bool IsFinish); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.CheckFinishCondition // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcBrainFieldPsychicAttachmentTransform(struct AActor* PsychicActor, struct FTransform LastPlayerTransform, struct FTransform NewPlayerTransform, struct FTransform NewTransform); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.CalcBrainFieldPsychicAttachmentTransform // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InBranField(bool InBrainDield); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.InBranField // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void PlayPerformSequencer(bool MoveBrainField, int32_t Index, bool StartPlay); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.PlayPerformSequencer // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void JumpNormalTransform(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.JumpNormalTransform // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void JumpBrainFieldTransform(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.JumpBrainFieldTransform // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void VisibleNormalActors(bool IsVisible, int32_t ObjectNum, int32_t VisibleSplitIndex, struct TArray<struct AActor*> ActorList, struct TArray<struct FBrainFieldRestoreFlag> SettingFlags); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.VisibleNormalActors // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetNormalLevelActorList(struct TArray<struct AActor*> LevelLists, struct TArray<struct UBP_RSParticleBackgroundComponent_C*> LevelParticleList); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.GetNormalLevelActorList // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsFinishNormalFieldVisible(bool Finish); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.IsFinishNormalFieldVisible // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndFieldBattle(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.EndFieldBattle // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartFieldBattle(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.StartFieldBattle // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsFinishBrainFieldVisible(bool Finish); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.IsFinishBrainFieldVisible // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SwitchVisibleBrainFieldLevel(bool VisibleBrainField); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.SwitchVisibleBrainFieldLevel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBrainFieldPlayerTransform(struct TArray<struct FTransform> Transforms); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.GetBrainFieldPlayerTransform // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PerformCloseStart(bool PlaySequencer); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.PerformCloseStart // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PerformOpenStart(bool InGameStart); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.PerformOpenStart // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PerformCloseEndInnerOne(bool IsUser, struct TArray<struct AActor*> Lists); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.PerformCloseEndInnerOne // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PerformCloseStartInnerOne(bool IsUser, struct TArray<struct AActor*> Lists); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.PerformCloseStartInnerOne // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PerformOpenEndInnerOne(bool IsUser, struct TArray<struct AActor*> Lists, bool InGameStart); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.PerformOpenEndInnerOne // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PerformOpenStartInnerOne(bool IsUser, struct TArray<struct AActor*> Lists, struct TArray<struct FTransform> Transforms, bool InGameStart, struct TArray<bool> OutValid); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.PerformOpenStartInnerOne // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBrainFieldEnemyList(bool InGameStart, bool AllTrain, struct TArray<struct AActor*> TargetEnemyListBattleField, struct TArray<struct AActor*> TargetEnemyListBattleFieldWave, struct TArray<struct AActor*> TargetEnemyListNormal, struct TArray<struct AActor*> FarEnemyLists); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.GetBrainFieldEnemyList // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PerformCloseEnd(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.PerformCloseEnd // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PerformOpenEnd(bool InGameStart); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.PerformOpenEnd // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndBrainField(enum class EBrainFieldEndType EndType, struct AActor* BrainCrashAttacker, struct AActor* BrainCrashAttackerSub); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.EndBrainField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPlayerList(struct TArray<struct AActor*> PlayerLists); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.GetPlayerList // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartBrainField(struct AActor* User, struct AActor* SubUser, bool IsEvent); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.StartBrainField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Private_SwitchVisibleActorSplitFrame(bool VisibleBrainField, int32_t ObjectNum); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.Private_SwitchVisibleActorSplitFrame // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Private_PerformEndWaitFinish(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.Private_PerformEndWaitFinish // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Private_PerformEndWait(bool MoveBrainField); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.Private_PerformEndWait // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Private_LoadNavimeshLevels(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.Private_LoadNavimeshLevels // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Private_UnloadNavimeshLevels(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.Private_UnloadNavimeshLevels // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateEvent_VisibleRuntimeLevels(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.PrivateEvent_VisibleRuntimeLevels // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateEvent_HiddenRuntimeLevels(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.PrivateEvent_HiddenRuntimeLevels // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Private_LoadCollisionLevel(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.Private_LoadCollisionLevel // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Private_UnloadCollisionLevel(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.Private_UnloadCollisionLevel // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateEvent_PlaySequencerENPCBrainField(bool UseRefresh); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.PrivateEvent_PlaySequencerENPCBrainField // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Private_DelayedHood(struct TArray<struct AActor*> Actors, bool Visible); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.Private_DelayedHood // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetDynamicShadow(bool Enable); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.PrivateSetDynamicShadow // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetDynamicShadowDelay(bool Enable); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.PrivateSetDynamicShadowDelay // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void Private_LevelLoaded(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.Private_LevelLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnChangedDebugForceEnd(struct ADebuggingItemBool* InItem); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.OnChangedDebugForceEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnChangeMonitorState(enum class EBrainFieldMonitorState MonitorState); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.OnChangeMonitorState // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReadyDebManager(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.OnReadyDebManager // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBGRenderTarget(struct UTextureRenderTarget2D* Target); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.SetBGRenderTarget // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetRenderTarget(enum class ERenderTargetType RenderTargetType, struct UTextureRenderTarget2D* NewTarget); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.ResetRenderTarget // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void DelayBeginPlay(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.DelayBeginPlay // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_BrainFieldManager(int32_t EntryPoint); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.ExecuteUbergraph_BP_BrainFieldManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
	void ED_ChangeMonitorState__DelegateSignature(enum class EBrainFieldMonitorState MonitorState); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.ED_ChangeMonitorState__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ED_BrainFieldSwitchBG__DelegateSignature(bool IsBrainField); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.ED_BrainFieldSwitchBG__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ED_BrainFieldBattleEnd__DelegateSignature(enum class EBrainFieldEndType EndType); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.ED_BrainFieldBattleEnd__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ED_BrainFieldBattleStart__DelegateSignature(); // Function BP_BrainFieldManager.BP_BrainFieldManager_C.ED_BrainFieldBattleStart__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

