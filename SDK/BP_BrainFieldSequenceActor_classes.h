// BlueprintGeneratedClass BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C
// Size: 0x3c8 (Inherited: 0x230)
struct ABP_BrainFieldSequenceActor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBP_PlayerMaterialAccessorComponent_C* BP_PlayerMaterialAccessorComponent; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	struct ARSLevelSequenceActor* SequencerActor; // 0x248(0x08)
	struct FMulticastInlineDelegate ED_OnFinished; // 0x250(0x10)
	struct AActor* BrainFieldUser; // 0x260(0x08)
	struct FString BrainFieldDilationName; // 0x268(0x10)
	struct TArray<struct ARSLevelSequenceActor*> OpenSequencerActor; // 0x278(0x10)
	struct TArray<struct ARSLevelSequenceActor*> CloseSequencerActor; // 0x288(0x10)
	struct TArray<struct ARSLevelSequenceActor*> ReceiveBrainCrashSequencerActor; // 0x298(0x10)
	struct TArray<struct ARSLevelSequenceActor*> OverrideSequencerActor; // 0x2a8(0x10)
	struct TArray<struct ARSLevelSequenceActor*> EnemyOpenSequencerActor; // 0x2b8(0x10)
	struct TArray<struct ARSLevelSequenceActor*> EnemyCloseSequencerActor; // 0x2c8(0x10)
	struct TArray<struct ARSLevelSequenceActor*> EnemyReceiveBrainCrashSequencerActor; // 0x2d8(0x10)
	struct TArray<struct ARSLevelSequenceActor*> EnemyOverrideSequencerActor; // 0x2e8(0x10)
	struct TSoftObjectPtr<UTexture2D> ShadowOffsetMapAsset; // 0x2f8(0x28)
	struct UTexture2D* ShadowOffsetMap; // 0x320(0x08)
	struct AActor* DummyActor; // 0x328(0x08)
	float CameraWatchZoom; // 0x330(0x04)
	enum class EBrainFieldSequencerType SequencerTypePlayer; // 0x334(0x01)
	enum class EBrainFieldSequencerType SequencerTypeENPC; // 0x335(0x01)
	bool EventCalledStartInput; // 0x336(0x01)
	char pad_337[0x1]; // 0x337(0x01)
	struct TSoftObjectPtr<ULevelSequence> DamageSequenceAsset; // 0x338(0x28)
	int32_t nowDamageStep; // 0x360(0x04)
	int32_t FinalStepEndFrameNumber; // 0x364(0x04)
	bool alreadyThroughOneShot; // 0x368(0x01)
	char pad_369[0x3]; // 0x369(0x03)
	int32_t OneShotEndFrame; // 0x36c(0x04)
	int32_t nowLoopDuration; // 0x370(0x04)
	char pad_374[0x4]; // 0x374(0x04)
	struct ARSLevelSequenceActor* DamageSequence; // 0x378(0x08)
	struct ABP_EventPPFuturePrediction_C* SpawnedPPFuturePredictionBP; // 0x380(0x08)
	float HealingTime; // 0x388(0x04)
	struct FLinearColor HealColor; // 0x38c(0x10)
	bool bBeforeFlameHealedFlag; // 0x39c(0x01)
	char pad_39D[0x3]; // 0x39d(0x03)
	int32_t waitHealDamageStepValue; // 0x3a0(0x04)
	struct FLinearColor constHealColor; // 0x3a4(0x10)
	char pad_3B4[0x4]; // 0x3b4(0x04)
	struct TArray<struct ABP_EventTypeSwitchBase_C*> MenuSetupPPs; // 0x3b8(0x10)

	void SetupMenu(bool InMenu); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.SetupMenu // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupBindingPlayerFromTextOpt(struct ARSCharacterBase* Player, struct TArray<struct FText> BindingText, struct TArray<struct FText> BindingCodeText, struct TArray<struct FText> BindingWeaponText, bool IsBinding); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.SetupBindingPlayerFromTextOpt // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPPFuturePredictionBP(); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.GetPPFuturePredictionBP // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RefreshSequencer(); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.RefreshSequencer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetNowDamageStep(int32_t NewParam); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.GetNowDamageStep // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopDamageSequence(); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.StopDamageSequence // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDamageStep(int32_t addValue, bool bIgnorHealCheck); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.SetDamageStep // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Start Damage Sequence(); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.Start Damage Sequence // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupSeamlessEvent(); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.PrivateSetupSeamlessEvent // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupBindingSystemRoot(struct AActor* SystemRoot, bool IsBinding); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.SetupBindingSystemRoot // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsLoadENPC(bool Loaded); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.IsLoadENPC // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetSequencerTypeENPC(enum class EBrainFieldSequencerType SequencerType); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.GetSequencerTypeENPC // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetSequencerTypePlayer(enum class EBrainFieldSequencerType SequencerType); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.GetSequencerTypePlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void PrivateSetSequenceAsset(enum class EBrainFieldSequencerType SequencerType, struct TArray<struct ARSLevelSequenceActor*> OpenList, struct TArray<struct ARSLevelSequenceActor*> CloseList, struct TArray<struct ARSLevelSequenceActor*> ReceiveBrainCrashList, struct TArray<struct ARSLevelSequenceActor*> OverrideList); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.PrivateSetSequenceAsset // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupBindingENPC(struct ARSCharacterBase* ENPC, bool IsBinding); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.SetupBindingENPC // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupBindingNPC(struct ARSCharacterBase* NPC, bool IsBinding); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.SetupBindingNPC // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSequencerList(bool UserIsPlayer, bool IsOpen, bool IsOverride, enum class EBrainFieldEndType EndType, struct TArray<struct ARSLevelSequenceActor*> SequencerList); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.GetSequencerList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCameraWatchZoom(float Zoom); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.GetCameraWatchZoom // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void FinishSequencerFlow(); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.FinishSequencerFlow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUnloadSequenceAsset(struct TArray<struct ARSLevelSequenceActor*> Instance); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.PrivateUnloadSequenceAsset // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnloadSequenceAssetENPC(); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.UnloadSequenceAssetENPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSequenceAssetENPC(enum class EBrainFieldSequencerType SequencerType); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.SetSequenceAssetENPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateLoadSequenceAsset(struct TArray<struct TSoftObjectPtr<ULevelSequence>> Sequences, struct TArray<struct ARSLevelSequenceActor*> OutputInstance); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.PrivateLoadSequenceAsset // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupBindingDummyFromText(struct FText BindingText, bool IsBinding); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.SetupBindingDummyFromText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadAsset(); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.LoadAsset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupBindingPlayerFromText(struct ARSCharacterBase* Player, struct FText BindingText, bool IsBinding); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.SetupBindingPlayerFromText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Stop(); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.Stop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetActiveSequencer(bool UserIsPlayer, bool IsOpen, bool IsOverride, enum class EBrainFieldEndType EndType, int32_t Index); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.SetActiveSequencer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupBindingPlayer(struct ARSCharacterBase* Player, bool IsBinding); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.SetupBindingPlayer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainFieldUser(struct AActor* User, struct AActor* SubUser); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.SetBrainFieldUser // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSequenceAssetPlayer(enum class EBrainFieldSequencerType SequencerType); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.SetSequenceAssetPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnLoaded_830D2F464683427EE424F3A810D577C1(struct UObject* Loaded); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.OnLoaded_830D2F464683427EE424F3A810D577C1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void SwitchVisibleBrainField(); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.SwitchVisibleBrainField // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SwitchVisibleNormal(); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.SwitchVisibleNormal // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFinished(); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.OnFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Play(); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.Play // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartInput(); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.StartInput // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartSlow(); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.StartSlow // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndSlow(); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.EndSlow // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetVisibleUI(bool Enable); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.SetVisibleUI // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainFieldLightHide(); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.BrainFieldLightHide // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainFieldLightVisible(); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.BrainFieldLightVisible // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayerStopEvent(); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.PlayerStopEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CameraWatchUser(float BlendTimeSeconds, struct FVector WatchOffset); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.CameraWatchUser // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserHoodON(bool Value); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.UserHoodON // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayerWatchUser(struct FVector TargetOffset, float Pitch, float EaseTime); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.PlayerWatchUser // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBrainCrashCheckENPC(); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.ReceiveBrainCrashCheckENPC // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginPlayerWatchUser(struct FVector TargetOffset, float Pitch, float EaseTime); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.BeginPlayerWatchUser // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayerWatchUser(); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.EndPlayerWatchUser // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetVisiblePlayer(bool Value); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.SetVisiblePlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetVisibleEnemy(bool Value); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.SetVisibleEnemy // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void HiddenNearBG(); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.HiddenNearBG // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SeamlessEventJump(); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.SeamlessEventJump // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PPMOutlineFront(); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.PPMOutlineFront // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PPMOutlineDefault(); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.PPMOutlineDefault // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void StartENPCPsychicObject(); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.StartENPCPsychicObject // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ASyncLoadDamageSequence(); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.ASyncLoadDamageSequence // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupPlayAfterFrameDrop(); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.SetupPlayAfterFrameDrop // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ENPCWhiteoutEnd(); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.ENPCWhiteoutEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_BrainFieldSequenceActor(int32_t EntryPoint); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.ExecuteUbergraph_BP_BrainFieldSequenceActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
	void ED_OnFinished__DelegateSignature(); // Function BP_BrainFieldSequenceActor.BP_BrainFieldSequenceActor_C.ED_OnFinished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

