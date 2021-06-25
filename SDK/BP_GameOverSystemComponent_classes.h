// BlueprintGeneratedClass BP_GameOverSystemComponent.BP_GameOverSystemComponent_C
// Size: 0x2d0 (Inherited: 0xc0)
struct UBP_GameOverSystemComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct ARSLevelSequenceActor* Sequencer; // 0xc8(0x08)
	struct TSoftObjectPtr<ULevelSequence> GameOverSequenceAsset0100; // 0xd0(0x28)
	struct TSoftObjectPtr<ULevelSequence> GameOverSequenceAsset0200; // 0xf8(0x28)
	struct TSoftObjectPtr<ULevelSequence> RecoverSequenceAsset0100; // 0x120(0x28)
	struct UMaterialInterface* PPToneMono; // 0x148(0x08)
	struct TSoftObjectPtr<ULevelSequence> RecoverSequenceAsset0200; // 0x150(0x28)
	struct TSoftObjectPtr<UMaterialInterface> PPToneMonoAsset; // 0x178(0x28)
	struct ULevelSequence* GameOverSequence; // 0x1a0(0x08)
	struct ULevelSequence* RecoverSequence; // 0x1a8(0x08)
	bool PlayingGameOver; // 0x1b0(0x01)
	bool PlayingRecover; // 0x1b1(0x01)
	char pad_1B2[0x6]; // 0x1b2(0x06)
	struct ARSBattlePlayer_C* RecoverPlayer; // 0x1b8(0x08)
	struct ARSBattleCharacter_C* RecoverNPC; // 0x1c0(0x08)
	float RecoverCameraRate; // 0x1c8(0x04)
	char pad_1CC[0x4]; // 0x1cc(0x04)
	struct AActor* SystemRootActor; // 0x1d0(0x08)
	bool SetupStartCutEvent; // 0x1d8(0x01)
	char pad_1D9[0x7]; // 0x1d9(0x07)
	struct FTransform RecoverPlayerTransform; // 0x1e0(0x30)
	struct FTransform RecoverNPCTransform; // 0x210(0x30)
	struct FTransform RecoverRelativeTransformPlayer; // 0x240(0x30)
	struct FTransform RecoverRelativeTransformNPC; // 0x270(0x30)
	enum class EPlayerID LoadPlayerID; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct ABP_SeamlessCameraRoot_C* SeamlessCamera; // 0x2a8(0x08)
	struct FQualifiedFrameTime SequqncerEndFrame; // 0x2b0(0x10)
	bool WaitBrainField; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct ABP_GameOverCameraTopViewRoot_C* TopViewRoot; // 0x2c8(0x08)

	void PrivatePlayEnpcBattleVoice(); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.PrivatePlayEnpcBattleVoice // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateBrainFieldClose(); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.PrivateBrainFieldClose // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventRevivePlayer(); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.EventRevivePlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventBrainTalkRevival(); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.EventBrainTalkRevival // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateGetRecoverBrainTalkID(struct FName BrainTalkID); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.PrivateGetRecoverBrainTalkID // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void PrivateGetGameOverBrainTalkID(struct FName BrainTalkID); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.PrivateGetGameOverBrainTalkID // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void ReloadPlayer(enum class EPlayerID playerId); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.ReloadPlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventCameraTopView(); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.EventCameraTopView // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateCalcRecoverFinishTransform(struct FTransform BaseTransform, struct FTransform RestoreRelativeTransform, struct ARSBattleCharacter_C* Character, struct FTransform FinishTransform); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.PrivateCalcRecoverFinishTransform // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void PrivateCalcRecoverStartTransform(struct ARSBattlePlayer_C* Player, struct ARSBattleCharacter_C* NPC, struct FTransform FinishTransform); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.PrivateCalcRecoverStartTransform // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateRecover(); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.UpdateRecover // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventStartCutEvent(); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.EventStartCutEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateRecoverCamera(); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.UpdateRecoverCamera // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateEraseHUD(); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.PrivateEraseHUD // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventEraseHUD(); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.EventEraseHUD // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupRecoverCamera(); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.PrivateSetupRecoverCamera // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventRecoverCamera(); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.EventRecoverCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateBrainFieldSwitchBG(bool IsBrainField); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.PrivateBrainFieldSwitchBG // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventPlayerStandup(); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.EventPlayerStandup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventWaitStandupNPC(); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.EventWaitStandupNPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPlayingAny(bool IsPlaying); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.IsPlayingAny // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsPlayingDeadRecover(bool IsPlaying); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.IsPlayingDeadRecover // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void PrivateStartSequence(struct ULevelSequence* InSequencer); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.PrivateStartSequence // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartDeadRecover(struct ARSBattleCharacter_C* RecoverCharacter); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.StartDeadRecover // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateLoadAsset(); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.PrivateLoadAsset // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPlayingDeadGameOver(bool IsPlaying); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.IsPlayingDeadGameOver // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void EventRecoverEffectPlayer(); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.EventRecoverEffectPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventRecoverEffectNPC(); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.EventRecoverEffectNPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventBrainFieldOut(); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.EventBrainFieldOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupPostProcess(float Rate); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.PrivateSetupPostProcess // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventChangeDeadCamera(); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.EventChangeDeadCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventPlayerAnimationDead(); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.EventPlayerAnimationDead // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventBrainTalkDead(); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.EventBrainTalkDead // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventBrainTalkDeadBlur(); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.EventBrainTalkDeadBlur // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventStartUIGameOver(); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.EventStartUIGameOver // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateFinishGameOver(); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.PrivateFinishGameOver // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartDeadGameOver(); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.StartDeadGameOver // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void EventOnBrainFieldClose(); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.EventOnBrainFieldClose // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateBrainFieldOutRestart(); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.PrivateBrainFieldOutRestart // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_GameOverSystemComponent(int32_t EntryPoint); // Function BP_GameOverSystemComponent.BP_GameOverSystemComponent_C.ExecuteUbergraph_BP_GameOverSystemComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

