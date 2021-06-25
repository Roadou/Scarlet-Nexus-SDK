// BlueprintGeneratedClass BP_SASManager.BP_SASManager_C
// Size: 0x435 (Inherited: 0x238)
struct ABP_SASManager_C : ASASManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	struct TArray<struct FFSASCommandInternal> CutInCommandArray; // 0x248(0x10)
	int32_t ReservedFlag; // 0x258(0x04)
	int32_t ActiveFlag; // 0x25c(0x04)
	struct TArray<struct FFSASCommandInternal> SkillCommandArray; // 0x260(0x10)
	struct TArray<struct AActor*> SASActorArray; // 0x270(0x10)
	struct FAcceleratorParam AcceleratorParameter; // 0x280(0x0c)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct FString AccelerateName; // 0x290(0x10)
	struct FString CutInName; // 0x2a0(0x10)
	struct FFSASFireParam FireParameter; // 0x2b0(0x01)
	struct FFSASMetalParam MetalParameter; // 0x2b1(0x01)
	struct FFSASSeeThroughParam SeeThroughParameter; // 0x2b2(0x01)
	struct FFSASStealthParam StealthParameter; // 0x2b3(0x01)
	struct FFSASCopyParam CopyParameter; // 0x2b4(0x01)
	struct FFSASTelepoParam TelepoParameter; // 0x2b5(0x01)
	struct FFSASElectricParam ElectricParameter; // 0x2b6(0x01)
	char pad_2B7[0x1]; // 0x2b7(0x01)
	struct TArray<struct ABP_SASCharacter_C*> CutinBindingActors; // 0x2b8(0x10)
	struct ABP_CutinManager_C* BPCutinManager; // 0x2c8(0x08)
	struct TArray<struct FF_SASParam> SASDataTable_Fire; // 0x2d0(0x10)
	struct TArray<struct FF_SASParam> SASDataTable_Metal; // 0x2e0(0x10)
	struct TArray<struct FF_SASParam> SASDataTable_SeeThrough; // 0x2f0(0x10)
	struct TArray<struct FF_SASParam> SASDataTable_Telepo; // 0x300(0x10)
	struct TArray<struct FF_SASParam> SASDataTable_Stealth; // 0x310(0x10)
	struct TArray<struct FF_SASParam> SASDataTable_Electric; // 0x320(0x10)
	struct TArray<struct FF_SASParam> SASDataTable_Copy; // 0x330(0x10)
	struct TArray<struct FF_SASParam> SASDataTable_Accelerator; // 0x340(0x10)
	struct TArray<struct TSoftObjectPtr<UTexture2D>> LogoTextureAssets; // 0x350(0x10)
	int32_t LoadLogoTextureIndex; // 0x360(0x04)
	char pad_364[0x4]; // 0x364(0x04)
	struct TArray<struct UTexture2D*> LogoTextureObject; // 0x368(0x10)
	struct TArray<struct TSoftObjectPtr<UParticleSystem>> CodeEmitterAssets; // 0x378(0x10)
	struct TArray<struct UParticleSystem*> CodeEmitterObject; // 0x388(0x10)
	struct TArray<struct FTransform> CodeEmitterTransform; // 0x398(0x10)
	struct TArray<struct TSoftObjectPtr<ULevelSequence>> CutinSeqeuncerAssets; // 0x3a8(0x10)
	struct TArray<struct ULevelSequence*> CutinSeqeuncerObject; // 0x3b8(0x10)
	struct FFSASPsychicParam PsychicParameter; // 0x3c8(0x01)
	char pad_3C9[0x7]; // 0x3c9(0x07)
	struct TArray<struct FF_SASParam> SASDataTablePsychicCh0100; // 0x3d0(0x10)
	struct TArray<struct FF_SASParam> SASDataTablePsychicCh0200; // 0x3e0(0x10)
	bool bBrainFieldHelpMode; // 0x3f0(0x01)
	enum class E_SASKind BrainFieldHelpKind; // 0x3f1(0x01)
	char pad_3F2[0x6]; // 0x3f2(0x06)
	struct TArray<struct ABP_SASCableEnergyMesh_C*> ConnectEnergyActors; // 0x3f8(0x10)
	struct FString StopSceneName; // 0x408(0x10)
	float StopSceneDilation; // 0x418(0x04)
	char pad_41C[0x4]; // 0x41c(0x04)
	struct ABP_SASCutinExtra_C* ExtraCutin; // 0x420(0x08)
	bool bHealedBrainFieldFlag; // 0x428(0x01)
	char pad_429[0x3]; // 0x429(0x03)
	float CutSceneDilation; // 0x42c(0x04)
	float AC_SASExtendTime_TimeRate; // 0x430(0x04)
	bool bStoppedSASCutIn; // 0x434(0x01)

	void SAS_CommonEnd(enum class E_SASKind SAS_Kind, bool bCancelSASCost, bool bDummy, float RemainTime); // Function BP_SASManager.BP_SASManager_C.SAS_CommonEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SAS_CommonStart(struct FFSASCommand SAS_Command, bool dummy); // Function BP_SASManager.BP_SASManager_C.SAS_CommonStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAccelerating(bool Accelerating); // Function BP_SASManager.BP_SASManager_C.IsAccelerating // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsAcceleratorValid(bool Valid); // Function BP_SASManager.BP_SASManager_C.IsAcceleratorValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetSASExtendTimeRate(float Rate); // Function BP_SASManager.BP_SASManager_C.GetSASExtendTimeRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetCurrentCutinSASType(enum class E_SASKind SASType); // Function BP_SASManager.BP_SASManager_C.GetCurrentCutinSASType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndSAS(struct FFSASCommand Parameter, bool Success); // Function BP_SASManager.BP_SASManager_C.EndSAS // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsCutInReserved(enum class E_SASKind SasKind, bool Reserved); // Function BP_SASManager.BP_SASManager_C.IsCutInReserved // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsAnyCutInReserved(bool Reserved); // Function BP_SASManager.BP_SASManager_C.IsAnyCutInReserved // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void CancelSAS(enum class E_SASKind SAS Kind, bool bCancelSASCost, bool Success); // Function BP_SASManager.BP_SASManager_C.CancelSAS // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RegisterActor(struct AActor* Actor, bool Success); // Function BP_SASManager.BP_SASManager_C.RegisterActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnregisterActor(struct AActor* Actor, bool Success); // Function BP_SASManager.BP_SASManager_C.UnregisterActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Start(struct FFSASCommand Parameter, bool Success); // Function BP_SASManager.BP_SASManager_C.Start // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsReserved(enum class E_SASKind SAS Kind, bool Reserved); // Function BP_SASManager.BP_SASManager_C.IsReserved // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsAnyReserved(bool Reserved); // Function BP_SASManager.BP_SASManager_C.IsAnyReserved // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void CancelSASWhenPlayingCutin(); // Function BP_SASManager.BP_SASManager_C.CancelSASWhenPlayingCutin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsCutinPlayingNative(); // Function BP_SASManager.BP_SASManager_C.IsCutinPlayingNative // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PauseExtraCutin(bool IsPause); // Function BP_SASManager.BP_SASManager_C.PauseExtraCutin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsNeedFrameWait(); // Function BP_SASManager.BP_SASManager_C.IsNeedFrameWait // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetExtraCutinDilation(float Dilation); // Function BP_SASManager.BP_SASManager_C.SetExtraCutinDilation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSASParamDataNum(enum class E_SASKindNative InKind, int32_t DataNum); // Function BP_SASManager.BP_SASManager_C.GetSASParamDataNum // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool GetSASEffectFixParam(enum class E_SASKindNative InKind, struct TArray<struct F_SASParamNative> OutFixParam); // Function BP_SASManager.BP_SASManager_C.GetSASEffectFixParam // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DispTipsSAS(); // Function BP_SASManager.BP_SASManager_C.DispTipsSAS // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEndCutinSequencer(); // Function BP_SASManager.BP_SASManager_C.OnEndCutinSequencer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetHealedBrainFieldFlag(bool isHealed); // Function BP_SASManager.BP_SASManager_C.GetHealedBrainFieldFlag // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHealedBrainFieldFlag(bool bHealed); // Function BP_SASManager.BP_SASManager_C.SetHealedBrainFieldFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMipPreStream(enum class E_SASKind SasKind, bool Enable); // Function BP_SASManager.BP_SASManager_C.SetMipPreStream // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EmitParticleCableEnergy(); // Function BP_SASManager.BP_SASManager_C.EmitParticleCableEnergy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsPlayingCutinExtra(); // Function BP_SASManager.BP_SASManager_C.IsPlayingCutinExtra // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartExtraCutin(enum class ESASCutinExtraID ExtraID); // Function BP_SASManager.BP_SASManager_C.StartExtraCutin // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnloadExtraCutin(); // Function BP_SASManager.BP_SASManager_C.UnloadExtraCutin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadExtraCutin(); // Function BP_SASManager.BP_SASManager_C.LoadExtraCutin // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void VisibleCableEnergy(); // Function BP_SASManager.BP_SASManager_C.VisibleCableEnergy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EraseCableEnergy(); // Function BP_SASManager.BP_SASManager_C.EraseCableEnergy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DetachCableEnergy(); // Function BP_SASManager.BP_SASManager_C.DetachCableEnergy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartCableEnergy(); // Function BP_SASManager.BP_SASManager_C.StartCableEnergy // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopStopScene(); // Function BP_SASManager.BP_SASManager_C.StopStopScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartStopScene(); // Function BP_SASManager.BP_SASManager_C.StartStopScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CancelBrainFieldHelpCutIn(); // Function BP_SASManager.BP_SASManager_C.CancelBrainFieldHelpCutIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayBrainFieldHelpCutIn(enum class EPlayerID HelpPlayerID); // Function BP_SASManager.BP_SASManager_C.PlayBrainFieldHelpCutIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopCutin(); // Function BP_SASManager.BP_SASManager_C.StopCutin // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AcceleratorEnd(struct FAcceleratorParam InputPin, float RemainTime, struct AActor* Owner, bool bHologram); // Function BP_SASManager.BP_SASManager_C.AcceleratorEnd // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AcceleratorStart(struct FAcceleratorParam AcceleratorParameter, struct AActor* Owner, bool bHologram); // Function BP_SASManager.BP_SASManager_C.AcceleratorStart // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSASSequencer(enum class E_SASKind SasKind, struct ULevelSequence* Sequencer); // Function BP_SASManager.BP_SASManager_C.GetSASSequencer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSASCodeEmitterTemplates(struct TArray<struct UParticleSystem*> EmitterTemplates, struct TArray<struct FTransform> Transforms); // Function BP_SASManager.BP_SASManager_C.GetSASCodeEmitterTemplates // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadAssets(); // Function BP_SASManager.BP_SASManager_C.LoadAssets // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSASLogoTexture(enum class E_SASKind SasKind, struct UTexture2D* Texture); // Function BP_SASManager.BP_SASManager_C.GetSASLogoTexture // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadSASParamDataTable(); // Function BP_SASManager.BP_SASManager_C.LoadSASParamDataTable // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSASParamData(enum class E_SASKind kind, int32_t Level, struct FF_SASParam Param); // Function BP_SASManager.BP_SASManager_C.GetSASParamData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetupActiveCutinActor(enum class E_SASKind SasKind, bool Active); // Function BP_SASManager.BP_SASManager_C.SetupActiveCutinActor // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetCharacters(); // Function BP_SASManager.BP_SASManager_C.ResetCharacters // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentCutinSASType_Internal(enum class E_SASKind SASType); // Function BP_SASManager.BP_SASManager_C.GetCurrentCutinSASType_Internal // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopCutinSlow(); // Function BP_SASManager.BP_SASManager_C.StopCutinSlow // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartCutinSlow(); // Function BP_SASManager.BP_SASManager_C.StartCutinSlow // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStopCutin(); // Function BP_SASManager.BP_SASManager_C.OnStopCutin // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FName GetCutinRowNameByESASKind(enum class E_SASKind Index); // Function BP_SASManager.BP_SASManager_C.GetCutinRowNameByESASKind // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetCutinManager(struct ABP_CutinManager_C* CutinManager); // Function BP_SASManager.BP_SASManager_C.GetCutinManager // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetAcceleratorParameter(struct FAcceleratorParam AcceleratorParameter); // Function BP_SASManager.BP_SASManager_C.GetAcceleratorParameter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void OnSkillEnd(struct FFSASCommandInternal Command, bool bCancelSASCost); // Function BP_SASManager.BP_SASManager_C.OnSkillEnd // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSkillStart(struct FFSASCommandInternal Command); // Function BP_SASManager.BP_SASManager_C.OnSkillStart // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetReservedFlag(enum class E_SASKind SasKind, bool on); // Function BP_SASManager.BP_SASManager_C.SetReservedFlag // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCutIn(float DeltaSeconds); // Function BP_SASManager.BP_SASManager_C.UpdateCutIn // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateSASCommand(float DeltaSeconds); // Function BP_SASManager.BP_SASManager_C.UpdateSASCommand // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsCutInPlaying(bool bCheckSASCutInStopped, bool Playing); // Function BP_SASManager.BP_SASManager_C.IsCutInPlaying // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void OnAcceleratorStart(struct FAcceleratorParam Parameter, struct AActor* Owner, bool bHologram); // Function BP_SASManager.BP_SASManager_C.OnAcceleratorStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAcceleratorEnd(struct FAcceleratorParam Parameter, struct AActor* Owner, float RemainTime, bool bHologram); // Function BP_SASManager.BP_SASManager_C.OnAcceleratorEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnElectricStart(struct FFSASElectricParam Param, struct AActor* Owner); // Function BP_SASManager.BP_SASManager_C.OnElectricStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnElectricEnd(struct FFSASElectricParam Param, struct AActor* Owner, float RemainTime); // Function BP_SASManager.BP_SASManager_C.OnElectricEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFireStart(struct FFSASFireParam Param, struct AActor* Owner); // Function BP_SASManager.BP_SASManager_C.OnFireStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFireEnd(struct FFSASFireParam Param, struct AActor* Owner, float RemainTime); // Function BP_SASManager.BP_SASManager_C.OnFireEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMetalStart(struct FFSASMetalParam Param, struct AActor* Owner); // Function BP_SASManager.BP_SASManager_C.OnMetalStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMetalEnd(struct FFSASMetalParam Param, struct AActor* Owner, float RemainTime); // Function BP_SASManager.BP_SASManager_C.OnMetalEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSeeThroughStart(struct FFSASSeeThroughParam Param, struct AActor* Owner); // Function BP_SASManager.BP_SASManager_C.OnSeeThroughStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSeeThroughEnd(struct FFSASSeeThroughParam Param, struct AActor* Owner, float RemainTime); // Function BP_SASManager.BP_SASManager_C.OnSeeThroughEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTelepoStart(struct FFSASTelepoParam Param, struct AActor* Owner); // Function BP_SASManager.BP_SASManager_C.OnTelepoStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTelepoEnd(struct FFSASTelepoParam Param, struct AActor* Owner, float RemainTime); // Function BP_SASManager.BP_SASManager_C.OnTelepoEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStealthStart(struct FFSASStealthParam Param, struct AActor* Owner); // Function BP_SASManager.BP_SASManager_C.OnStealthStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStealthEnd(struct FFSASStealthParam Param, struct AActor* Owner, float RemainTime); // Function BP_SASManager.BP_SASManager_C.OnStealthEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCopyStart(struct FFSASCopyParam Param, struct AActor* Owner); // Function BP_SASManager.BP_SASManager_C.OnCopyStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCopyEnd(struct FFSASCopyParam Param, struct AActor* Owner, float RemainTime); // Function BP_SASManager.BP_SASManager_C.OnCopyEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCutInStart(); // Function BP_SASManager.BP_SASManager_C.OnCutInStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCutInEnd(); // Function BP_SASManager.BP_SASManager_C.OnCutInEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPsychicStart(struct FFSASPsychicParam Param, struct AActor* Owner); // Function BP_SASManager.BP_SASManager_C.OnPsychicStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPsychicEnd(struct FFSASPsychicParam Param, struct AActor* Owner, float RemainTime); // Function BP_SASManager.BP_SASManager_C.OnPsychicEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_SASManager.BP_SASManager_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_SASManager.BP_SASManager_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_SASManager.BP_SASManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void DelayBeginPlay(); // Function BP_SASManager.BP_SASManager_C.DelayBeginPlay // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_SASManager(int32_t EntryPoint); // Function BP_SASManager.BP_SASManager_C.ExecuteUbergraph_BP_SASManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

