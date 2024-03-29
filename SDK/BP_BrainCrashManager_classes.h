// BlueprintGeneratedClass BP_BrainCrashManager.BP_BrainCrashManager_C
// Size: 0x8e5 (Inherited: 0x300)
struct ABP_BrainCrashManager_C : ABrainCrashManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct UBPC_BrainCrashPostProcessControl_C* BPC_BrainCrashPostProcessControl; // 0x308(0x08)
	struct UBP_EnemyMaterialAccessorComponent_C* BP_EnemyMaterialAccessorComponent; // 0x310(0x08)
	struct UBP_PlayerMaterialAccessorComponent_C* BP_PlayerMaterialAccessorComponent; // 0x318(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x320(0x08)
	float _______0_Debug_E4B969E14E6370FEABC2749DB4857E7A; // 0x328(0x04)
	enum class ETimelineDirection _______0__Direction_E4B969E14E6370FEABC2749DB4857E7A; // 0x32c(0x01)
	char pad_32D[0x3]; // 0x32d(0x03)
	struct UTimelineComponent*  ��イ_1; // 0x330(0x08)
	struct ARSLevelSequenceActor* Sequencer; // 0x338(0x08)
	struct FString BrainCrashDilationName; // 0x340(0x10)
	float BaseFOV; // 0x350(0x04)
	char pad_354[0x4]; // 0x354(0x04)
	struct UPostProcessComponent* PerformPostProcess; // 0x358(0x08)
	struct ABP_BrainCrashCutinCharacter_C* CutinCharacter; // 0x360(0x08)
	struct ABP_CutinManager_C* CutinManager; // 0x368(0x08)
	bool EnabledPluseForce; // 0x370(0x01)
	char pad_371[0x7]; // 0x371(0x07)
	struct TSoftClassPtr<UObject> CutinCharacterClassAsset; // 0x378(0x28)
	struct TSoftObjectPtr<ULevelSequence> GeneralSequencer0100Asset; // 0x3a0(0x28)
	struct ULevelSequence* GeneralLevelSequence; // 0x3c8(0x08)
	struct AActor* CutinCharacterClass; // 0x3d0(0x08)
	float BrainFieldCheckSlowRate; // 0x3d8(0x04)
	float BrainFieldCheckTimeSeconds; // 0x3dc(0x04)
	bool PlayGeneralSequencer; // 0x3e0(0x01)
	bool PlayENPCSequencer; // 0x3e1(0x01)
	char pad_3E2[0x6]; // 0x3e2(0x06)
	struct ARSBattleCharacter_C* CrashTargetEnemy; // 0x3e8(0x08)
	struct ABP_EventCameraRoot_C* SeqUniqueRoot; // 0x3f0(0x08)
	char pad_3F8[0x8]; // 0x3f8(0x08)
	struct FTransform SequencerRootTransform; // 0x400(0x30)
	struct TArray<struct FTransform> SequencerJoinPlayerTransform; // 0x430(0x10)
	struct FTransform SequencerEnemyTransform; // 0x440(0x30)
	struct UBrainCrashParam* Param; // 0x470(0x08)
	float DebugParamUniqueOffsetX; // 0x478(0x04)
	float DebugParamUniqueOffsetY; // 0x47c(0x04)
	float DebugParamUniqueOffsetSeconds; // 0x480(0x04)
	float DebugUniqueOffsetTime; // 0x484(0x04)
	struct ABP_EventCameraRoot_C* SeqCameraRoot; // 0x488(0x08)
	struct ABP_EventCameraRoot_C* SeqUniquePlayerRoot; // 0x490(0x08)
	struct ABP_EventCameraRoot_C* SeqUniqueEnemyRoot; // 0x498(0x08)
	struct FVector HeightAdjust_EnemyStartLandCheckOffset; // 0x4a0(0x0c)
	float HeightAdjust_EnemyStartLandDown; // 0x4ac(0x04)
	struct FVector HeightAdjust_EnemyUpperOffset; // 0x4b0(0x0c)
	struct FVector HeightAdjust_EnemyBaseOffset; // 0x4bc(0x0c)
	struct FVector HeightAdjust_PlayerStartOffset; // 0x4c8(0x0c)
	struct FVector HeightAdjust_PlayerFinalLandOffset; // 0x4d4(0x0c)
	float HeightAdjust_PlayerFinalLand; // 0x4e0(0x04)
	float HeightAdjust_PlayerJumpUp; // 0x4e4(0x04)
	bool SetupStartRootTransform; // 0x4e8(0x01)
	char pad_4E9[0x7]; // 0x4e9(0x07)
	struct FString BrainCrashSequencerDilationName; // 0x4f0(0x10)
	float SequencerDilation; // 0x500(0x04)
	char pad_504[0x4]; // 0x504(0x04)
	struct ACineCameraActor* SequencerCamera; // 0x508(0x08)
	struct ACineCameraActor* InterpolateCamera; // 0x510(0x08)
	float HeightAdjust_PlayerStart; // 0x518(0x04)
	float StartCameraInterpolate; // 0x51c(0x04)
	float EndCameraInterpolate; // 0x520(0x04)
	bool InterpolateStartCamera; // 0x524(0x01)
	char pad_525[0xb]; // 0x525(0x0b)
	struct FTransform PlayerAnimationFinalTransform; // 0x530(0x30)
	struct FTransform PlayerMeshRelativeTransform; // 0x560(0x30)
	float SlowCustomTimeDilation; // 0x590(0x04)
	bool RequestUpdatePlayerFinalTransform; // 0x594(0x01)
	char pad_595[0x3]; // 0x595(0x03)
	float EnemyApplyScaleRate; // 0x598(0x04)
	float EnemyApplyScaleTranslateCancel; // 0x59c(0x04)
	float EnemyApplyInGameLocationRateXY; // 0x5a0(0x04)
	float EnemyApplyInGameLocationRateZ; // 0x5a4(0x04)
	bool FixedLocation; // 0x5a8(0x01)
	bool DebugUseDepthOffset; // 0x5a9(0x01)
	char pad_5AA[0x6]; // 0x5aa(0x06)
	struct ABP_co2000Base_C* CrashTargetCore; // 0x5b0(0x08)
	float HideDitherTime; // 0x5b8(0x04)
	bool HideDitherStart; // 0x5bc(0x01)
	char pad_5BD[0x3]; // 0x5bd(0x03)
	struct FTransform StartEnemyTransform; // 0x5c0(0x30)
	struct UAnimMontage* PlayerEndMontage; // 0x5f0(0x08)
	char pad_5F8[0x8]; // 0x5f8(0x08)
	struct FTransform EnemyMeshRelativeTransform; // 0x600(0x30)
	struct UAnimMontage* PlayerEndMontageCache; // 0x630(0x08)
	struct UBrainCrashLocationSettings* LocationSafePoint; // 0x638(0x08)
	struct FTransform PlayerStartTransform; // 0x640(0x30)
	struct FVector CameraStartLocation; // 0x670(0x0c)
	struct FRotator CameraStartRotation; // 0x67c(0x0c)
	bool RestoreUniquePlayerCameraTransform; // 0x688(0x01)
	bool DebugOutLog; // 0x689(0x01)
	bool DebugForceUnique; // 0x68a(0x01)
	bool DebugForceGeneral; // 0x68b(0x01)
	char pad_68C[0x4]; // 0x68c(0x04)
	struct TArray<struct ARSCharacterBase*> CrashTargetEnemyGeneral; // 0x690(0x10)
	bool DebugForceENPCKill; // 0x6a0(0x01)
	char pad_6A1[0x7]; // 0x6a1(0x07)
	struct TSoftObjectPtr<ULevelSequence> GeneralSequencer0200Asset; // 0x6a8(0x28)
	struct TSoftObjectPtr<ULevelSequence> ENPCSequencerDamage0100Asset; // 0x6d0(0x28)
	struct TSoftObjectPtr<ULevelSequence> ENPCSequencerKillSolo0100Asset; // 0x6f8(0x28)
	struct TArray<struct ARSCharacterBase*> JoinPlayers; // 0x720(0x10)
	bool PlayENPCSoloSequencer; // 0x730(0x01)
	char pad_731[0x7]; // 0x731(0x07)
	struct AActor* BindingDummyActor; // 0x738(0x08)
	bool PlayENPCKillSequencer; // 0x740(0x01)
	bool VisibleUI; // 0x741(0x01)
	bool ValidUniqueSafePoint; // 0x742(0x01)
	char pad_743[0xd]; // 0x743(0x0d)
	struct FTransform UniqueSafePointTransform; // 0x750(0x30)
	bool StartGeneralDamage; // 0x780(0x01)
	char pad_781[0x7]; // 0x781(0x07)
	struct TArray<struct FGameTimer> GeneralDamageTimers; // 0x788(0x10)
	bool WaitUniqueTimer; // 0x798(0x01)
	char pad_799[0x7]; // 0x799(0x07)
	struct ULevelSequence* ENPCSequenceDamage; // 0x7a0(0x08)
	struct ULevelSequence* ENPCSequenceKillSolo; // 0x7a8(0x08)
	struct ULevelSequence* ENPCSequenceKillMulti; // 0x7b0(0x08)
	struct TSoftObjectPtr<ULevelSequence> ENPCSequencerKillMulti0100Asset; // 0x7b8(0x28)
	enum class ECollisionEnabled RestoreEnemyCollision; // 0x7e0(0x01)
	char pad_7E1[0x7]; // 0x7e1(0x07)
	struct TArray<struct FString> ExcludeBindEnemyID; // 0x7e8(0x10)
	float GeneralCameraLookatRate; // 0x7f8(0x04)
	struct FVector GeneralCameraTarget; // 0x7fc(0x0c)
	float GeneralCameraLookatPitch; // 0x808(0x04)
	float GeneralCameraLookatOffsetPitch; // 0x80c(0x04)
	bool UniqueFixedLocation; // 0x810(0x01)
	char pad_811[0x7]; // 0x811(0x07)
	struct TSoftObjectPtr<ULevelSequence> ENPCSequencerDamage0200Asset; // 0x818(0x28)
	struct TSoftObjectPtr<ULevelSequence> ENPCSequencerKillSolo0200Asset; // 0x840(0x28)
	struct TSoftObjectPtr<ULevelSequence> ENPCSequencerKillMulti0200Asset; // 0x868(0x28)
	struct FTimerHandle UniqueWaitTimer; // 0x890(0x08)
	bool isPlay; // 0x898(0x01)
	char pad_899[0x3]; // 0x899(0x03)
	int32_t HideDitherFlow; // 0x89c(0x04)
	bool UseUniqueCameraInterpolate; // 0x8a0(0x01)
	bool CacheUseUniqueCameraInterpolate; // 0x8a1(0x01)
	bool FixedLocationTargetUnlock; // 0x8a2(0x01)
	bool FixedLocationTargetLockRestore; // 0x8a3(0x01)
	char pad_8A4[0x4]; // 0x8a4(0x04)
	struct TArray<struct ARSCharacterBase*> BrainCrashTargets; // 0x8a8(0x10)
	struct ATriggerEffectManager* TrgEffMgr; // 0x8b8(0x08)
	bool VisibleUIModeBoss; // 0x8c0(0x01)
	bool PlayENPCEm8300Sequencer; // 0x8c1(0x01)
	enum class EPlayerID LoadENPCPlayerID; // 0x8c2(0x01)
	char pad_8C3[0x1]; // 0x8c3(0x01)
	struct FVector killedEnemyLocation; // 0x8c4(0x0c)
	bool PlayBrainFieldClose; // 0x8d0(0x01)
	char pad_8D1[0x3]; // 0x8d1(0x03)
	struct FQualifiedFrameTime CutinFullTime; // 0x8d4(0x10)
	bool IsLockBrainCrashTarget; // 0x8e4(0x01)

	void GetSequencerDilation(float Dilation); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.GetSequencerDilation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupCutinCloseBrainFieldClose(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.PrivateSetupCutinCloseBrainFieldClose // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnKilledEnemyDropItem(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.SpawnKilledEnemyDropItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnloadENPCCheck(struct ARSBattlePlayer_C* Player); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.UnloadENPCCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Calc Not Bried Camera Location(float PlayerToEnemyYaw, struct FVector CutCameraVector, struct FVector PlayerBaseLocation, struct FVector NewLocation, bool Bried); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.Calc Not Bried Camera Location // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsNeedFrameWait(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.IsNeedFrameWait // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckBrainCrashKill(bool bGeneral); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.CheckBrainCrashKill // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateResetLevelSequenceActor(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.PrivateResetLevelSequenceActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetENPCBrainCrashType(bool isEnpc, bool IsKill, bool IsSolo); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.GetENPCBrainCrashType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsCrashTargetSeeThroughStealth(bool SeeThroughStealth); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.IsCrashTargetSeeThroughStealth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ReloadPlayerSequencer(enum class EPlayerID playerId); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.ReloadPlayerSequencer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCrashTargetAndIsGeneral(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.GetCrashTargetAndIsGeneral // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCrashTargetEnemyGeneralNames(struct TArray<struct FString> targetEnemyNames, int32_t targetNum, bool bGeneral); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.GetCrashTargetEnemyGeneralNames // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetUniqueWaitTime(float RemainTime); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.GetUniqueWaitTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateFinishRestoreMaterial(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.PrivateFinishRestoreMaterial // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdateGeneral(float DeltaSeconds); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.PrivateUpdateGeneral // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttachWeapon(bool ForceBattle); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.AttachWeapon // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateCalcTransform(struct FTransform ActorTransform, struct FTransform RelativeComponentTransform, struct FTransform Transform); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.PrivateCalcTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnloadENPC(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.UnloadENPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadENPC(bool Damage, bool KillSolo, bool KillMulti, bool ASyncLoading); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.LoadENPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPlayerStartTransform(bool AddMeshRelative, struct FTransform Transform); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.GetPlayerStartTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdateGeneralDamage(float DeltaSeconds); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.PrivateUpdateGeneralDamage // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateGeneralDamageSetup(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.PrivateGeneralDamageSetup // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupTypeSequencer(struct ARSCharacterBase* mainPlayer); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.PrivateSetupTypeSequencer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrintWarning(struct FText Message, bool NoSequence); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.PrintWarning // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSequencerBindingUnique(struct ARSCharacterBase* mainPlayer, struct ARSCharacterBase* LeftPlayer, struct ARSCharacterBase* RightPlayer); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.PrivateSequencerBindingUnique // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSequencerBindingGeneral(struct ARSCharacterBase* mainPlayer); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.PrivateSequencerBindingGeneral // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateGetENPCLoadSequenceAssets(struct TSoftObjectPtr<ULevelSequence> Damage, struct TSoftObjectPtr<ULevelSequence> KillSolo, struct TSoftObjectPtr<ULevelSequence> KillMulti); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.PrivateGetENPCLoadSequenceAssets // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Private Finish Unique Restore Player Camera Transform(bool Interrupt); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.Private Finish Unique Restore Player Camera Transform // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventDelayedPlayUniqueSequencerPlayer(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.EventDelayedPlayUniqueSequencerPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivatePlaySequencerPlayer(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.PrivatePlaySequencerPlayer // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSafePointLocationData(struct UBrainCrashLocationSettings* LocationSafePoint); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.GetSafePointLocationData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadSafePointData(int32_t LoationID, int32_t areaId); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.LoadSafePointData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReloadSafePointData(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.ReloadSafePointData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SearchSafePoint(struct FVector PlayerLocation, struct FVector TargetLocation, struct ARSBattleCharacter_C* TargetEnemy, bool Valid, struct FTransform RootTransform); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.SearchSafePoint // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateOnCameraCutChange(struct UCameraComponent* CameraComp); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.PrivateOnCameraCutChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdateDither(float DeltaSeconds, bool Finish); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.PrivateUpdateDither // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateEnableSkeletalDepthOffset(struct USkeletalMeshComponent* SkeletalMesh, bool Enable); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.PrivateEnableSkeletalDepthOffset // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateEnableActorDepthOffset(struct ARSCharacterBase* Character, bool Enable); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.PrivateEnableActorDepthOffset // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdateActorDepthOffset(float DeltaSeconds); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.PrivateUpdateActorDepthOffset // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdateFixedLocation(float DeltaSeconds); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.PrivateUpdateFixedLocation // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateGetPlayerFinalTransform(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.PrivateGetPlayerFinalTransform // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Private Calc Unique Crash Finish Restore Transform FreeLoc(struct ARSCharacterBase* Enemy, struct ARSCharacterBase* mainPlayer, struct FTransform Transform); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.Private Calc Unique Crash Finish Restore Transform FreeLoc // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdateUniqueCamera(float DeltaSeconds); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.PrivateUpdateUniqueCamera // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetStartRootTransform(struct FTransform Transform); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.SetStartRootTransform // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPlayingAnyBrainCrash(bool NowPlaying); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.IsPlayingAnyBrainCrash // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void PrivateUpdateTransformAdjust(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.PrivateUpdateTransformAdjust // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdateDebug(float DeltaSeconds); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.PrivateUpdateDebug // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateEventSetPlayerFootIK(bool Enable); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.PrivateEventSetPlayerFootIK // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Private Calc Unique Crash Finish Restore Transform FixedLoc(struct ARSCharacterBase* Character, struct FTransform MotionTransform, struct FTransform Transform); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.Private Calc Unique Crash Finish Restore Transform FixedLoc // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateCalcUniqueCrashStartTransform(struct FTransform Transform); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.PrivateCalcUniqueCrashStartTransform // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateFinishBrainCrashSequencer(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.PrivateFinishBrainCrashSequencer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateInitialize(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.PrivateInitialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPlayingGeneralBrainCrash(bool IsGeneral); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.IsPlayingGeneralBrainCrash // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsPlayingUniqueBrainCrash(bool IsUnique); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.IsPlayingUniqueBrainCrash // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void PrivateUpdate(float DeltaSeconds); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.PrivateUpdate // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivatePlayBrainCrashSequencer(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.PrivatePlayBrainCrashSequencer // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateStartBrainCrash(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.PrivateStartBrainCrash // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupBrainFieldRestart(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.PrivateSetupBrainFieldRestart // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupBrainFieldOverwrite(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.PrivateSetupBrainFieldOverwrite // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateCheckBrainFieldOverwrite(bool Overwrite); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.PrivateCheckBrainFieldOverwrite // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadAssets(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.LoadAssets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetActiveCutinActor(bool Active); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.SetActiveCutinActor // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCutinManager(struct ABP_CutinManager_C* CutinManager); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.GetCutinManager // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateBlurCenterPositiion(struct AActor* TargetEnemy); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.UpdateBlurCenterPositiion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void  ��イムライン_0__(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C. ��イムライン_0__ // (BlueprintEvent) // @ game+0x1685580
	void  ��イムライン_0(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C. ��イムライン_0 // (BlueprintEvent) // @ game+0x1685580
	void OnLoaded_9AAF0560439FC75A4D4CA984758A7DF3(struct UObject* Loaded); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnLoaded_9AAF0560439FC75A4D4CA984758A7DF3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnLoaded_B234BA9E4B9FA682314A0AB58DA24026(struct UObject* Loaded); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnLoaded_B234BA9E4B9FA682314A0AB58DA24026 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnLoaded_33D5999B4C06E16493524A8CA8AEEB06(struct UObject* Loaded); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnLoaded_33D5999B4C06E16493524A8CA8AEEB06 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateLoadENPC(bool Damage, bool KillSolo, bool KillMulti, bool ASyncLoading); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.PrivateLoadENPC // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void PlayBrainCrashSequencer(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.PlayBrainCrashSequencer // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayBrainCrash(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.PlayBrainCrash // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayParticle(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.PlayParticle // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartSlow(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.StartSlow // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndSlow(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.EndSlow // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnDead(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnDead // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPlayerMotion(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnPlayerMotion // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEnemyFloating(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnEnemyFloating // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStartCutin(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnStartCutin // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSequencerFinished(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnSequencerFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Private_EndCutin(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.Private_EndCutin // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Private_SetupTimedilation(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.Private_SetupTimedilation // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCheckBrainFieldOverwrite(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnCheckBrainFieldOverwrite // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCheckBrainFieldOverwrite_Restart(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnCheckBrainFieldOverwrite_Restart // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPlayerFootIK(struct FSEventSequencerBool Enable); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnPlayerFootIK // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartSlowSequencer(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.StartSlowSequencer // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndSlowSequencer(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.EndSlowSequencer // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SlowDilation(float Time Dilation); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.SlowDilation // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OtherActorVisible(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OtherActorVisible // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartUniqueCutin(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.StartUniqueCutin // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FinishUniqueTransform(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.FinishUniqueTransform // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartGeneralCutin(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.StartGeneralCutin // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetVisibleUIOn(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.SetVisibleUIOn // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetVisibleUIOff(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.SetVisibleUIOff // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GeneralDamage(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.GeneralDamage // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UniqueWaitTimerStart(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.UniqueWaitTimerStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UniqueWaitTimerEnd(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.UniqueWaitTimerEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupCutinDilationTime(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.SetupCutinDilationTime // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnImpact(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnImpact // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAttract(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnAttract // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnHold(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnHold // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnImpactB(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnImpactB // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnImpactC(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnImpactC // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStopImpact(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnStopImpact // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnWeakPull(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnWeakPull // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSlam(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnSlam // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnLift(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnLift // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnRotation(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnRotation // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCatch(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnCatch // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnHolding(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnHolding // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCatchAndHold(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnCatchAndHold // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnWeakPullB(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnWeakPullB // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSwordSpins(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnSwordSpins // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSwing(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnSwing // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSwordStab(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnSwordStab // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnLiftB(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnLiftB // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnThrowSword(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnThrowSword // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnLiftup(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnLiftup // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCapture(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnCapture // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStartTwistingFaucet(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnStartTwistingFaucet // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTwistFaucet(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnTwistFaucet // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStopTwistFaucet(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnStopTwistFaucet // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSlideRForPlayer(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnSlideRForPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseWater(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnReleaseWater // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseRandomWater(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnReleaseRandomWater // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAttractForEm0300(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnAttractForEm0300 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnThrow(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnThrow // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStopReleaseWater(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnStopReleaseWater // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSuppressVolumeForReleaseWater(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnSuppressVolumeForReleaseWater // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnShaveGround(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnShaveGround // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCutup(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnCutup // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrampling(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnTrampling // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnShaveEnemy(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnShaveEnemy // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnLanding(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnLanding // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnRotationSky(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnRotationSky // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnShake(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnShake // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAttractandJump(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnAttractandJump // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPutStrength(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnPutStrength // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnImpactD(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnImpactD // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBossFall(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnBossFall // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnThrowRToL(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnThrowRToL // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnHitStone(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnHitStone // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnThrowLToR(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnThrowLToR // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnHitGatheredStone(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnHitGatheredStone // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStopAllPadEffect(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnStopAllPadEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnThrowShort(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnThrowShort // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPullOut(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnPullOut // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCrash(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnCrash // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPullHorizontal(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnPullHorizontal // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnDrop(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnDrop // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBossKneel(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnBossKneel // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnJump(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnJump // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAttractandRide(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnAttractandRide // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnWeakPullC(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnWeakPullC // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFlyingAway(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnFlyingAway // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnImpactE(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnImpactE // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnExplosion(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnExplosion // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSmallMachineGunL(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnSmallMachineGunL // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSmallMachineGunR(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnSmallMachineGunR // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCutWithSword(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnCutWithSword // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSmallExplosion(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnSmallExplosion // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnShutterShake(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnShutterShake // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAttractAround(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnAttractAround // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPutStrengthB(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnPutStrengthB // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnThrowObject(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnThrowObject // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnHitObject(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnHitObject // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStabTube(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnStabTube // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBurn(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnBurn // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnKickGround(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnKickGround // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCreateAvater(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnCreateAvater // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnContinuanceCut(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnContinuanceCut // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnLookUp(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnLookUp // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBackflip(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnBackflip // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnHoldSword(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnHoldSword // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnLandAndShakeSword(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnLandAndShakeSword // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCarFire(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnCarFire // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnRotationAir(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnRotationAir // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFloatObject(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnFloatObject // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSqueeze(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnSqueeze // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFinishPull(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnFinishPull // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBreakWeakPoint(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnBreakWeakPoint // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStabTubeImpact(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnStabTubeImpact // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFloatSword(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnFloatSword // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCutLeg(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnCutLeg // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTakeOff(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnTakeOff // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTailWrap(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnTailWrap // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnRaiseHand(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnRaiseHand // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnGeneralSqueeze(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnGeneralSqueeze // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnGeneralBreak(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnGeneralBreak // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCapture_ENPC(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnCapture_ENPC // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPartyCapture(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnPartyCapture // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnRotateCamera(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnRotateCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBeat(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnBeat // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCircleEffect(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnCircleEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnHandForword(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnHandForword // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFallENPC(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnFallENPC // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnImpact_ENPC(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnImpact_ENPC // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnImpactB_ENPC(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnImpactB_ENPC // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnImpactC_ENPC(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnImpactC_ENPC // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnHandTakeBack(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnHandTakeBack // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCircleEffectBack(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnCircleEffectBack // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAttract_ENPC(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnAttract_ENPC // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnGiantsErase(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnGiantsErase // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnKneel(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnKneel // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAttract_Karen(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnAttract_Karen // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnImpact_Karen(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnImpact_Karen // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnImpact_Karen_After(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnImpact_Karen_After // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnGiantsSnakeup(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnGiantsSnakeup // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStopPadEffectHalf(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnStopPadEffectHalf // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAttractLong(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnAttractLong // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCut(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnCut // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void HideCore(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.HideCore // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFloatSword2(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnFloatSword2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCutLeg2(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.OnCutLeg2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DelayBeginPlay(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.DelayBeginPlay // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateCutinBrainFieldClose(); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.PrivateCutinBrainFieldClose // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_BrainCrashManager(int32_t EntryPoint); // Function BP_BrainCrashManager.BP_BrainCrashManager_C.ExecuteUbergraph_BP_BrainCrashManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

