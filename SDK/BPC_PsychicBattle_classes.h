// BlueprintGeneratedClass BPC_PsychicBattle.BPC_PsychicBattle_C
// Size: 0x448 (Inherited: 0xc0)
struct UBPC_PsychicBattle_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	bool Initialized; // 0xc8(0x01)
	bool Playing; // 0xc9(0x01)
	bool InBattleSequence; // 0xca(0x01)
	char pad_CB[0x5]; // 0xcb(0x05)
	struct ARSLevelSequenceActor* Sequencer; // 0xd0(0x08)
	struct TArray<struct ULevelSequence*> SequenceAssetsCh0100; // 0xd8(0x10)
	struct TArray<struct ULevelSequence*> SequenceAssetsCh0200; // 0xe8(0x10)
	struct ARSCharacterBase* HookPlayerActor; // 0xf8(0x08)
	struct FMulticastInlineDelegate OnFinished; // 0x100(0x10)
	struct FMulticastInlineDelegate OnStart; // 0x110(0x10)
	struct FMulticastInlineDelegate OnBattleStart; // 0x120(0x10)
	struct FMulticastInlineDelegate OnBattleFinish; // 0x130(0x10)
	struct ARSCharacterBase* HookEnemyActor; // 0x140(0x08)
	struct ABP_SeamlessCameraRoot_C* SeamlessCamera; // 0x148(0x08)
	enum class PsychicBattleType BattleType; // 0x150(0x01)
	enum class EPlayerID userId; // 0x151(0x01)
	char pad_152[0x2]; // 0x152(0x02)
	struct FQualifiedFrameTime SequencerEndFrame; // 0x154(0x10)
	char pad_164[0x4]; // 0x164(0x04)
	struct ABP_PsychicObjectBasic_C* PsychicObjectActor; // 0x168(0x08)
	struct UDataTable* DamageDataTable; // 0x170(0x08)
	int32_t RequestSetupEventEndTransform; // 0x178(0x04)
	enum class PsychicBattleType PlayStartPsychicBattleType; // 0x17c(0x01)
	char pad_17D[0x3]; // 0x17d(0x03)
	struct ARSBattleCharacter_C* PlayStartUser; // 0x180(0x08)
	bool PlayStart; // 0x188(0x01)
	enum class PsychicBattleAnimationPhaseType BattleAnimationPhase; // 0x189(0x01)
	char pad_18A[0x6]; // 0x18a(0x06)
	struct UAnimMontage* NowPlayMontagePlayer; // 0x190(0x08)
	struct UAnimMontage* NowPlayMontageEnemy; // 0x198(0x08)
	struct TArray<struct TSoftObjectPtr<UAnimMontage>> ElecPoleMontages0100_0100Ref; // 0x1a0(0x10)
	struct TArray<struct UAnimMontage*> ElecPoleMontages0100; // 0x1b0(0x10)
	struct TArray<struct UAnimMontage*> ElecPoleMontages0200; // 0x1c0(0x10)
	struct TArray<struct TSoftObjectPtr<UAnimMontage>> ElecPoleMontages0100_0200Ref; // 0x1d0(0x10)
	struct TArray<struct TSoftObjectPtr<UAnimMontage>> ElecPoleMontages0200_0100Ref; // 0x1e0(0x10)
	struct TArray<struct TSoftObjectPtr<UAnimMontage>> ElecPoleMontages0200_0200Ref; // 0x1f0(0x10)
	struct TArray<struct TSoftObjectPtr<UAnimMontage>> ElecPoleMontages0100_0100ObjRef; // 0x200(0x10)
	struct TArray<struct TSoftObjectPtr<UAnimMontage>> ElecPoleMontages0100_0200ObjRef; // 0x210(0x10)
	struct TArray<struct TSoftObjectPtr<UAnimMontage>> ElecPoleMontages0200_0100ObjRef; // 0x220(0x10)
	struct TArray<struct TSoftObjectPtr<UAnimMontage>> ElecPoleMontages0200_0200ObjRef; // 0x230(0x10)
	struct TSoftClassPtr<UObject> BattleObjectClassRef; // 0x240(0x28)
	struct AActor* BattleObjectActor; // 0x268(0x08)
	struct TSoftObjectPtr<USkeletalMesh> ElecPoleAnimationMeshRef; // 0x270(0x28)
	struct TArray<struct UAnimMontage*> ElecPoleMontages0100Obj; // 0x298(0x10)
	struct TArray<struct UAnimMontage*> ElecPoleMontages0200Obj; // 0x2a8(0x10)
	struct USkeletalMesh* AnimationMesh; // 0x2b8(0x08)
	struct TSoftObjectPtr<UStaticMesh> ElecPoleMeshRef; // 0x2c0(0x28)
	struct UStaticMesh* AppendMesh; // 0x2e8(0x08)
	bool BattleWin; // 0x2f0(0x01)
	char pad_2F1[0x7]; // 0x2f1(0x07)
	struct TArray<bool> Loaded; // 0x2f8(0x10)
	float BattleObjectAnimationDelayTime; // 0x308(0x04)
	char pad_30C[0x4]; // 0x30c(0x04)
	struct TSoftObjectPtr<UParticleSystem> ParticleKatakanaRef; // 0x310(0x28)
	struct TSoftObjectPtr<UParticleSystem> ParticleHandAura0100Ref; // 0x338(0x28)
	struct TSoftObjectPtr<UParticleSystem> ParticleHandAura0200Ref; // 0x360(0x28)
	struct TSoftObjectPtr<UParticleSystem> ParticleObjRef; // 0x388(0x28)
	struct TArray<struct URSParticleSystemComponentBase*> EmitParticles; // 0x3b0(0x10)
	struct UParticleSystem* ParticleKatakana; // 0x3c0(0x08)
	struct UParticleSystem* ParticleHandAura0100; // 0x3c8(0x08)
	struct UParticleSystem* ParticleHandAura0200; // 0x3d0(0x08)
	struct UParticleSystem* ParticleObj; // 0x3d8(0x08)
	struct TArray<struct TSoftObjectPtr<UParticleSystem>> ParticleObjEfEventRef; // 0x3e0(0x10)
	struct TArray<struct UParticleSystem*> ParticleObjEfEvent; // 0x3f0(0x10)
	struct TSoftObjectPtr<UStaticMesh> ElecPoleMeshBreakRef; // 0x400(0x28)
	struct UStaticMesh* AppendMeshBreak; // 0x428(0x08)
	bool UseSkip; // 0x430(0x01)
	char pad_431[0x3]; // 0x431(0x03)
	float BGActorDitherInterpolateSeconds; // 0x434(0x04)
	float BGActorDitherSeconds; // 0x438(0x04)
	bool StartBGActorHide; // 0x43c(0x01)
	char pad_43D[0x3]; // 0x43d(0x03)
	struct AActor* LockOnRecoverActor; // 0x440(0x08)

	void EventBGActorVisible(); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.EventBGActorVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdateBGActorsDither(float DeltaSeconds); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.PrivateUpdateBGActorsDither // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetBGActorsDither(bool Visible, bool OneShot, float DeltaSeconds); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.PrivateSetBGActorsDither // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProtectedSetupPlayRangeMarkInternal(struct FString MarkName, bool HasMark); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.ProtectedSetupPlayRangeMarkInternal // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProtectedSetupPlayRangeMarkSkip(); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.ProtectedSetupPlayRangeMarkSkip // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProtectedSetupPlayRangeMarkWait(); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.ProtectedSetupPlayRangeMarkWait // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventChangePoleBreak(); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.EventChangePoleBreak // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventEmitPoleParticle(); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.EventEmitPoleParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicObjectActor(struct ABP_PsychicObjectBasic_C* PsychicObjectActor); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.SetPsychicObjectActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBattleParticle(bool Enable); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.SetBattleParticle // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateLoadAssetElectricPole(enum class EPlayerID UsePlayerID); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.PrivateLoadAssetElectricPole // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateOnFinishAnimation(struct UAnimMontage* PlayMontage, bool Interrupted); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.PrivateOnFinishAnimation // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateStopBattleAnimation(); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.PrivateStopBattleAnimation // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivatePlayPhaseAnimation(); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.PrivatePlayPhaseAnimation // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventBattleAnimation(); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.EventBattleAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckPlayStart(); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.CheckPlayStart // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateStartSequencer(enum class PsychicBattleType PsychicBattleType, struct ARSBattleCharacter_C* User); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.PrivateStartSequencer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateSequenceCharacterTransform(struct ARSCharacterBase* Character); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.UpdateSequenceCharacterTransform // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProtectedDamageInternal(struct ARSCharacterBase* DamageActor, struct ARSCharacterBase* attackActor); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.ProtectedDamageInternal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProtectedOnSkipStart(); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.ProtectedOnSkipStart // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsInitialize(bool Initialized); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.IsInitialize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void UpdateSequence(float DeltaSeconds); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.UpdateSequence // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProtectedGetWinLoseShot(enum class PsychicBattleType PsychicBattleType, enum class EPlayerID UserPlayerID, struct FText WinShotName, struct FText LoseShotName); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.ProtectedGetWinLoseShot // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProtectedGetLevelSequenceInternal(enum class PsychicBattleType PsychicBattleType, struct TArray<struct ULevelSequence*> AssetList, struct ULevelSequence* Asset); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.ProtectedGetLevelSequenceInternal // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void ProtectedOnWaitResult(); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.ProtectedOnWaitResult // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProtectedStartBinding(struct ARSCharacterBase* Player, struct ARSCharacterBase* Enemy, bool BindingPlayer, bool BindingEnemy); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.ProtectedStartBinding // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProtectedEventStartInput(struct ARSCharacterBase* Character); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.ProtectedEventStartInput // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventDamageEnemy(); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.EventDamageEnemy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventDamagePlayer(); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.EventDamagePlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Finalize(); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.Finalize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventStartInputEnemy(); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.EventStartInputEnemy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventStartInputPlayer(); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.EventStartInputPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsBattleSequence(bool Playing); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.IsBattleSequence // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetBattleRate(float Rate); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.SetBattleRate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventEndBattleSequence(bool IsWin); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.EventEndBattleSequence // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventStartBattleSequence(); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.EventStartBattleSequence // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProtectedRestoreCharacter(); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.ProtectedRestoreCharacter // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProtectedGetLevelSequence(enum class PsychicBattleType PsychicBattleType, enum class EPlayerID UserPlayerID, struct ULevelSequence* Asset); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.ProtectedGetLevelSequence // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProtectedIsPlayerCh0100(enum class EPlayerID UserPlayerID, bool ch0100); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.ProtectedIsPlayerCh0100 // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void Reset(); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProtectedGetSequencerAsset(enum class PsychicBattleType PsychicBattleType, enum class EPlayerID UserPlayerID, struct TSoftObjectPtr<ULevelSequence> LevelSequence); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.ProtectedGetSequencerAsset // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetParameter(enum class PsychicBattleType PsychicBattleType, struct FPsychicBattleParameter Parameter); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.GetParameter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadAsset(enum class PsychicBattleType PsychicBattleType, enum class EPlayerID UserPlayerID); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.LoadAsset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProtectedOnFinishedSequencer(); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.ProtectedOnFinishedSequencer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProtectedFinalize(enum class EEndPlayReason EndPlayReason); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.ProtectedFinalize // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProtectedInitialize(); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.ProtectedInitialize // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPlaying(bool Playing); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.IsPlaying // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void Start(enum class PsychicBattleType PsychicBattleType, struct ARSBattleCharacter_C* User); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.Start // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void PlayBatleObjectAnimation(enum class PsychicBattleAnimationPhaseType BattlePhase); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.PlayBatleObjectAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BPC_PsychicBattle(int32_t EntryPoint); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.ExecuteUbergraph_BPC_PsychicBattle // (Final|UbergraphFunction) // @ game+0x1685580
	void OnBattleFinish__DelegateSignature(enum class PsychicBattleType PsychicBattleType, bool Win); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.OnBattleFinish__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBattleStart__DelegateSignature(enum class PsychicBattleType PsychicBattleType); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.OnBattleStart__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStart__DelegateSignature(enum class PsychicBattleType PsychicBattleType); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.OnStart__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFinished__DelegateSignature(enum class PsychicBattleType PsychicBattleType); // Function BPC_PsychicBattle.BPC_PsychicBattle_C.OnFinished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

