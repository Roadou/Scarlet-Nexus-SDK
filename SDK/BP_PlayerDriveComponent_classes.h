// BlueprintGeneratedClass BP_PlayerDriveComponent.BP_PlayerDriveComponent_C
// Size: 0x480 (Inherited: 0x2c8)
struct UBP_PlayerDriveComponent_C : UPlayerDriveComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct TArray<struct ULevelSequence*> StartSequence; // 0x2d0(0x10)
	bool Initialized; // 0x2e0(0x01)
	bool IsMainPlayer; // 0x2e1(0x01)
	bool PlayingSequence; // 0x2e2(0x01)
	char pad_2E3[0x5]; // 0x2e3(0x05)
	struct ARSLevelSequenceActor* Sequencer; // 0x2e8(0x08)
	int32_t SequencerIndex; // 0x2f0(0x04)
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct AActor* RootActor; // 0x2f8(0x08)
	enum class EPlayerID playerId; // 0x300(0x01)
	char pad_301[0x7]; // 0x301(0x07)
	struct UMaterialInstance* PP_PulseForce; // 0x308(0x08)
	struct FVector StartCameraLocation; // 0x310(0x0c)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct UPostProcessComponent* PerformPostProcess; // 0x320(0x08)
	struct TSoftObjectPtr<UMaterialInstance> PP_PulseForceRef; // 0x328(0x28)
	struct ABP_DriveSequenceParameter_C* ParameterActor; // 0x350(0x08)
	struct ARSBattlePlayer_C* OwnerCharacter; // 0x358(0x08)
	struct FMulticastInlineDelegate ED_PlayStart; // 0x360(0x10)
	struct FMulticastInlineDelegate ED_PlayFinish; // 0x370(0x10)
	struct TArray<struct ULevelSequence*> EndSequence; // 0x380(0x10)
	bool PlayStart; // 0x390(0x01)
	bool SkillDamageUp; // 0x391(0x01)
	bool ParameterActorBinding; // 0x392(0x01)
	bool EventEnemy; // 0x393(0x01)
	char pad_394[0x4]; // 0x394(0x04)
	struct FText LowDamageShotName; // 0x398(0x18)
	bool RestoreUI; // 0x3b0(0x01)
	bool RestorePlayerInput; // 0x3b1(0x01)
	char pad_3B2[0x2]; // 0x3b2(0x02)
	struct FRotator StartCameraRotation; // 0x3b4(0x0c)
	bool PlayerDynamic; // 0x3c0(0x01)
	char pad_3C1[0x3]; // 0x3c1(0x03)
	struct FVector StartPlayerLocation; // 0x3c4(0x0c)
	struct UDriveRendererParameter* Parameter; // 0x3d0(0x08)
	float RendererRate; // 0x3d8(0x04)
	bool RendererEnable; // 0x3dc(0x01)
	char pad_3DD[0x3]; // 0x3dd(0x03)
	struct UPostProcessComponent* PostProcess; // 0x3e0(0x08)
	struct FText HighDamageShotName; // 0x3e8(0x18)
	struct ACameraActor* ControlCamera; // 0x400(0x08)
	bool bReadyFlag; // 0x408(0x01)
	char pad_409[0x3]; // 0x409(0x03)
	float DriveDelayTimer; // 0x40c(0x04)
	float SimpleDirectionTimer; // 0x410(0x04)
	char pad_414[0x4]; // 0x414(0x04)
	struct UCurveVector* SimpleDirectionCurve; // 0x418(0x08)
	struct UCurveVector* PlayerDirectionCurve; // 0x420(0x08)
	struct UCurveVector* NpcDirectionCurve; // 0x428(0x08)
	bool bSimpleDirectionFlash; // 0x430(0x01)
	bool bSimpleDirectionCamera; // 0x431(0x01)
	bool bSimpleDirectionHood; // 0x432(0x01)
	bool bSimpleDirectionFlag; // 0x433(0x01)
	bool bSimpleDirectionSlow; // 0x434(0x01)
	bool bNotifyChangePlayerAction; // 0x435(0x01)
	bool bFIrstSimpleDirectionTick; // 0x436(0x01)
	char pad_437[0x1]; // 0x437(0x01)
	struct TSoftObjectPtr<UMaterialInstance> PP_DrivePlaneRef; // 0x438(0x28)
	struct UMaterialInstanceDynamic* PP_DrivePlane; // 0x460(0x08)
	struct FVector LastHandedOverLocation; // 0x468(0x0c)
	bool IsSkipSimpleDirection; // 0x474(0x01)
	bool bForceSimpleDirection; // 0x475(0x01)
	char pad_476[0x2]; // 0x476(0x02)
	float BattlingDelayTimer; // 0x478(0x04)
	bool RenderPostProcess; // 0x47c(0x01)
	bool NowBattling; // 0x47d(0x01)
	bool UseBattlingTimer; // 0x47e(0x01)
	bool CallSetDriveMaterial; // 0x47f(0x01)

	void ProtectedUpdateBattling(float DeltaSeconds); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.ProtectedUpdateBattling // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBattling(bool Battliing); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.SetBattling // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPlaySimpleDirection(bool bPlay); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.IsPlaySimpleDirection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void BeginDriveNoDirection(); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.BeginDriveNoDirection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Shutdown DrivePlane(); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.Shutdown DrivePlane // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDrivePlane(float EffectLength); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.UpdateDrivePlane // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayDriveVoice(enum class EPlayerID playerId); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.PlayDriveVoice // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainFieldDrive(bool bDrive); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.SetBrainFieldDrive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DriveBeginFinalCheck(bool bOK); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.DriveBeginFinalCheck // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDriveReadyAble(bool bOK); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.IsDriveReadyAble // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void NotifyChangePlayerAction(); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.NotifyChangePlayerAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndSimpleDirectionSlow(); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.EndSimpleDirectionSlow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginSimpleDirectionSlow(float Rate); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.BeginSimpleDirectionSlow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DriveImpactAttack(); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.DriveImpactAttack // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSimpleDirectionHood(); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.SetSimpleDirectionHood // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndSimpleDirectionCamera(); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.EndSimpleDirectionCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginSimpleDirectionCamera(); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.BeginSimpleDirectionCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginSimpleDirection(bool isSkipDirection); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.BeginSimpleDirection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TickSimpleDirection(float DeltaSeconds); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.TickSimpleDirection // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndSimpleDirection(bool bSuccess); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.EndSimpleDirection // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndSimpleDirectionFlash(); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.EndSimpleDirectionFlash // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginSimpleDirectionFlash(); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.BeginSimpleDirectionFlash // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnDriveEnd(bool bInterruption, bool bLocationChange); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.OnDriveEnd // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CancelReadyDrive(); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.CancelReadyDrive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReadyDrive(bool bAfterBrainCrash); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.ReadyDrive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TickDriveReady(float DeltaSeconds); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.TickDriveReady // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearPostProcess(); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.ClearPostProcess // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsActivePostProcess(bool IsActive); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.IsActivePostProcess // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ProtectedUpdatePostProcess(float DeltaSeconds); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.ProtectedUpdatePostProcess // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupSequencePPM(bool Enable); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.SetupSequencePPM // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProtectedUpdateSequenceParameter(); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.ProtectedUpdateSequenceParameter // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProtectedGetSequencerAsset(bool IsStart, bool Valid, struct ULevelSequence* LevelSequence); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.ProtectedGetSequencerAsset // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventSeqSetDriveMaterial(bool EnableDrive); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.EventSeqSetDriveMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetSequence(); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.ResetSequence // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventSeqPlayerOpenSwitch(); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.EventSeqPlayerOpenSwitch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayEndSequence(bool bNoSequence); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.PlayEndSequence // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProtectedUpdate(float DeltaSeconds); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.ProtectedUpdate // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProtectedSetSequenceActorEvent(bool SetPlayer, bool SetEnemy, bool IsStart, bool IsDynamic); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.ProtectedSetSequenceActorEvent // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventSeqSetVisibleUI(bool Enable); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.EventSeqSetVisibleUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventSeqDamageEnemy(); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.EventSeqDamageEnemy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventSeqStartInputPlayer(); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.EventSeqStartInputPlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProtectedPlaySequencer(); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.ProtectedPlaySequencer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProtectedOnFinishSequencer(); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.ProtectedOnFinishSequencer // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProtectedBindingSequence(); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.ProtectedBindingSequence // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProtectedGetLoadSequencerAsset(enum class EPlayerID playerId, struct TArray<struct TSoftObjectPtr<ULevelSequence>> StartLevelSequences, struct TArray<struct TSoftObjectPtr<ULevelSequence>> EndLevelSequences); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.ProtectedGetLoadSequencerAsset // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadAsset(enum class EPlayerID UserPlayerID, bool mainPlayer); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.LoadAsset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProtectedFinalize(enum class EEndPlayReason EndPlayReason); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.ProtectedFinalize // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProtectedInitialize(); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.ProtectedInitialize // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsInitialize(bool IsInitialized); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.IsInitialize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsPlayingSequence(bool IsPlaying); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.IsPlayingSequence // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void Finalize(); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.Finalize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayStartSequence(bool HighDamage); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.PlayStartSequence // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsDebugAlwaysDrive(); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.IsDebugAlwaysDrive // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool IsDebugInfiniteDrive(); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.IsDebugInfiniteDrive // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void BindDriveReadyTick(); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.BindDriveReadyTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindDriveReadyTick(); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.UnbindDriveReadyTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void BindSimpleDirectionTick(); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.BindSimpleDirectionTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindSimpleDirectionTick(); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.UnbindSimpleDirectionTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PlayerDriveComponent(int32_t EntryPoint); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.ExecuteUbergraph_BP_PlayerDriveComponent // (Final|UbergraphFunction) // @ game+0x1685580
	void ED_PlayFinish__DelegateSignature(struct AActor* User, bool bPlayStart); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.ED_PlayFinish__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ED_PlayStart__DelegateSignature(struct AActor* User, bool bPlayStart); // Function BP_PlayerDriveComponent.BP_PlayerDriveComponent_C.ED_PlayStart__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

