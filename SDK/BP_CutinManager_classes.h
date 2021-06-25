// BlueprintGeneratedClass BP_CutinManager.BP_CutinManager_C
// Size: 0x3e0 (Inherited: 0x230)
struct ABP_CutinManager_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBP_PlayerMaterialAccessorComponent_C* BP_PlayerMaterialAccessorComponent; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	struct UWB_CutinBase_C* CutinWidget; // 0x248(0x08)
	struct TArray<struct ARSLevelSequenceActor*> SequenceList; // 0x250(0x10)
	struct ARSLevelSequenceActor* NullLevelSequenceActor; // 0x260(0x08)
	struct ARSLevelSequenceActor* CurrentSequencer; // 0x268(0x08)
	struct ACineCameraActor* CurrentCaptureCameraBP; // 0x270(0x08)
	struct ULevelSequencePlayer* CurrentSequencePlayer; // 0x278(0x08)
	bool IsPlayingFlag; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct TArray<struct AActor*> SequencerInActorArray; // 0x288(0x10)
	float SkillDelayTime; // 0x298(0x04)
	float SkilTimer; // 0x29c(0x04)
	struct UMaterialInstance* FadePPMaterial; // 0x2a0(0x08)
	struct UMaterialInstanceDynamic* FadePPMID; // 0x2a8(0x08)
	struct UPostProcessComponent* PostProcess; // 0x2b0(0x08)
	float FadeMax; // 0x2b8(0x04)
	struct FName FadeParamName; // 0x2bc(0x08)
	enum class ECutinType Type; // 0x2c4(0x01)
	char pad_2C5[0x3]; // 0x2c5(0x03)
	struct UDataTable* SequenceDataTable; // 0x2c8(0x08)
	struct UMaterialInstance* DamageNoisePPMaterial; // 0x2d0(0x08)
	struct UMaterialInstanceDynamic* DamageNoisePPMID; // 0x2d8(0x08)
	enum class E_SASKind CurrentSASType; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)
	struct TMap<struct FString, struct AActor*> BindingList; // 0x2e8(0x50)
	struct FMulticastInlineDelegate ED_EndCutin; // 0x338(0x10)
	struct UUserWidget* WidgetClass; // 0x348(0x08)
	struct TSoftObjectPtr<UMaterialInstance> DamageNoisePPMaterialAsset; // 0x350(0x28)
	struct TSoftObjectPtr<UMaterialInstance> FadePPMaterialAsset; // 0x378(0x28)
	struct ACineCameraActor* BP_CaptureCineCameraClass; // 0x3a0(0x08)
	struct FMulticastInlineDelegate ED_CoverScreen; // 0x3a8(0x10)
	bool DebugSASCutin; // 0x3b8(0x01)
	char pad_3B9[0x7]; // 0x3b9(0x07)
	struct FMulticastInlineDelegate ED_BCPlaySequence; // 0x3c0(0x10)
	struct TArray<struct ULevelSequence*> LevelSequenceAssetList; // 0x3d0(0x10)

	void GetCurrentSASType(enum class E_SASKind SasKind); // Function BP_CutinManager.BP_CutinManager_C.GetCurrentSASType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void PauseSequencer(bool IsPause); // Function BP_CutinManager.BP_CutinManager_C.PauseSequencer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnRequestHelpParticle(); // Function BP_CutinManager.BP_CutinManager_C.OnRequestHelpParticle // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupSASExtraShotActive(struct ARSLevelSequenceActor* Sequencer, int32_t ExtraID); // Function BP_CutinManager.BP_CutinManager_C.SetupSASExtraShotActive // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnRequestHelpBrainTalk(); // Function BP_CutinManager.BP_CutinManager_C.OnRequestHelpBrainTalk // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializePostProcess(); // Function BP_CutinManager.BP_CutinManager_C.InitializePostProcess // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadAsset(); // Function BP_CutinManager.BP_CutinManager_C.LoadAsset // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateMaterial(); // Function BP_CutinManager.BP_CutinManager_C.UpdateMaterial // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCapture(); // Function BP_CutinManager.BP_CutinManager_C.UpdateCapture // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearBindingList(); // Function BP_CutinManager.BP_CutinManager_C.ClearBindingList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddBindingList(struct FString BindingList, struct AActor* Actor); // Function BP_CutinManager.BP_CutinManager_C.AddBindingList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindCutinManager(struct ARSLevelSequenceActor* SequenceActor); // Function BP_CutinManager.BP_CutinManager_C.BindCutinManager // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCutinWidget(struct UUserWidget* Widget); // Function BP_CutinManager.BP_CutinManager_C.GetCutinWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void BindDummyCharacter(struct ARSLevelSequenceActor* SequenceActor); // Function BP_CutinManager.BP_CutinManager_C.BindDummyCharacter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearAddSequencerShot(struct ARSLevelSequenceActor* CurrentSequence); // Function BP_CutinManager.BP_CutinManager_C.ClearAddSequencerShot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct ULevelSequence* GetCharaSequencerForESASKind(enum class E_SASKind Index); // Function BP_CutinManager.BP_CutinManager_C.GetCharaSequencerForESASKind // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function BP_CutinManager.BP_CutinManager_C.Initialize // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCutinFadeForce(float Fade); // Function BP_CutinManager.BP_CutinManager_C.SetCutinFadeForce // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCustomTimeDilationSequence(float CustomTimeDilation); // Function BP_CutinManager.BP_CutinManager_C.SetCustomTimeDilationSequence // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSequenceShowActor(); // Function BP_CutinManager.BP_CutinManager_C.SetSequenceShowActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCustomTimeDilationActorArray(float Custom Dilation); // Function BP_CutinManager.BP_CutinManager_C.SetCustomTimeDilationActorArray // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentSequencePlayer(struct ULevelSequencePlayer* CurrentSequencePlayer); // Function BP_CutinManager.BP_CutinManager_C.GetCurrentSequencePlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPlayingCurrentSequence(bool IsPlaying); // Function BP_CutinManager.BP_CutinManager_C.IsPlayingCurrentSequence // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCaptureCameraBP(struct ACineCameraActor* CaptureCameraBP); // Function BP_CutinManager.BP_CutinManager_C.GetCaptureCameraBP // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCaptureCameraBP(struct ACineCameraActor* CaptureCameraBP); // Function BP_CutinManager.BP_CutinManager_C.SetCaptureCameraBP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndCutin(); // Function BP_CutinManager.BP_CutinManager_C.EndCutin // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartCutin(struct FName RowName, enum class E_SASKind ESASKindType); // Function BP_CutinManager.BP_CutinManager_C.StartCutin // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RequestHelpBrainTalk(); // Function BP_CutinManager.BP_CutinManager_C.RequestHelpBrainTalk // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RequestHelpParticle(); // Function BP_CutinManager.BP_CutinManager_C.RequestHelpParticle // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_CutinManager.BP_CutinManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_CutinManager.BP_CutinManager_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_CutinManager.BP_CutinManager_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void StartSASCableReaction(); // Function BP_CutinManager.BP_CutinManager_C.StartSASCableReaction // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartCutinSlow(); // Function BP_CutinManager.BP_CutinManager_C.StartCutinSlow // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopCutinSlow(); // Function BP_CutinManager.BP_CutinManager_C.StopCutinSlow // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSASShot(); // Function BP_CutinManager.BP_CutinManager_C.SetSASShot // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartSASCable(); // Function BP_CutinManager.BP_CutinManager_C.StartSASCable // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugPause(); // Function BP_CutinManager.BP_CutinManager_C.DebugPause // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CoverScreen(); // Function BP_CutinManager.BP_CutinManager_C.CoverScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartSASStop(); // Function BP_CutinManager.BP_CutinManager_C.StartSASStop // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopSASStop(); // Function BP_CutinManager.BP_CutinManager_C.StopSASStop // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartSASEnergy(); // Function BP_CutinManager.BP_CutinManager_C.StartSASEnergy // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DetachSASEnergy(); // Function BP_CutinManager.BP_CutinManager_C.DetachSASEnergy // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void VisibleCableEnergy(); // Function BP_CutinManager.BP_CutinManager_C.VisibleCableEnergy // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadMessage(struct TSoftObjectPtr<UDataTable> DataTable); // Function BP_CutinManager.BP_CutinManager_C.LoadMessage // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnloadMessage(struct FString messageTableName); // Function BP_CutinManager.BP_CutinManager_C.UnloadMessage // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DrawMessage(int32_t windowType, struct FString messageLabel, bool skipable, float DrawSecond, bool IsVoiceOnlyMessage, bool isSkipVoiceEnd); // Function BP_CutinManager.BP_CutinManager_C.DrawMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ParticleSASEnergy(); // Function BP_CutinManager.BP_CutinManager_C.ParticleSASEnergy // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopCutin(); // Function BP_CutinManager.BP_CutinManager_C.StopCutin // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BC_PlaySequence(); // Function BP_CutinManager.BP_CutinManager_C.BC_PlaySequence // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayVoice(struct FString VoiceFileName); // Function BP_CutinManager.BP_CutinManager_C.PlayVoice // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnVisibleSeeThroughJustDodgeBorder(); // Function BP_CutinManager.BP_CutinManager_C.OnVisibleSeeThroughJustDodgeBorder // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TipsSAS(); // Function BP_CutinManager.BP_CutinManager_C.TipsSAS // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_CutinManager(int32_t EntryPoint); // Function BP_CutinManager.BP_CutinManager_C.ExecuteUbergraph_BP_CutinManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
	void ED_BCPlaySequence__DelegateSignature(); // Function BP_CutinManager.BP_CutinManager_C.ED_BCPlaySequence__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ED_CoverScreen__DelegateSignature(); // Function BP_CutinManager.BP_CutinManager_C.ED_CoverScreen__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ED_EndCutin__DelegateSignature(); // Function BP_CutinManager.BP_CutinManager_C.ED_EndCutin__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

