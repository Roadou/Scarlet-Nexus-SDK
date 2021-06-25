// BlueprintGeneratedClass BP_ParticleManager.BP_ParticleManager_C
// Size: 0x2a51 (Inherited: 0x2a20)
struct ABP_ParticleManager_C : ARSParticleSystemManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a20(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2a28(0x08)
	struct TArray<struct ABP_EffectBackground_C*> BPEffectBackGrounds; // 0x2a30(0x10)
	struct TArray<struct ABP_EffectBackGroundMother_C*> EffectBackGroundMothers; // 0x2a40(0x10)
	bool bAllHideNow; // 0x2a50(0x01)

	void RegistEffectBackGroundMother(struct ABP_EffectBackGroundMother_C* MotherActor, int32_t ArrayNumber); // Function BP_ParticleManager.BP_ParticleManager_C.RegistEffectBackGroundMother // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalledAtEventEnd(struct FString EventName, bool dummy); // Function BP_ParticleManager.BP_ParticleManager_C.CalledAtEventEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalledAtEventStart(struct FString EventName, bool dummy); // Function BP_ParticleManager.BP_ParticleManager_C.CalledAtEventStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetParticleArray(bool dummy); // Function BP_ParticleManager.BP_ParticleManager_C.ResetParticleArray // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RegistEffectBackGround(struct ABP_EffectBackground_C* EffectBackground, int32_t ArrayNumber); // Function BP_ParticleManager.BP_ParticleManager_C.RegistEffectBackGround // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEndConnectEffect(struct FName ObjectName, bool bDummy); // Function BP_ParticleManager.BP_ParticleManager_C.OnEndConnectEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBeginConnectEffect(struct UParticleSystem* ParticleSystem, struct FName ObjectName, enum class EEffectConnectPoint SourceConnectPoint, struct FName SourceSocketName, enum class EEffectConnectPoint TargetConnectPoint, struct FName TargetSocketName, struct USoundAtomCue* PlaySound, bool bDummy); // Function BP_ParticleManager.BP_ParticleManager_C.OnBeginConnectEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetFootStepTemplate(enum class EPhysicalSurface SurfaceType, struct UParticleSystem* Template); // Function BP_ParticleManager.BP_ParticleManager_C.GetFootStepTemplate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetLandingTemplate(enum class EPhysicalSurface SurfaceType, struct UParticleSystem* Template); // Function BP_ParticleManager.BP_ParticleManager_C.GetLandingTemplate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SAS_CommonEnd(enum class E_SASKind SAS_Kind, bool bCancelSASCost, bool bDummy, float RemainTime); // Function BP_ParticleManager.BP_ParticleManager_C.SAS_CommonEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SAS_CommonStart(struct FFSASCommand SAS_Command, bool dummy); // Function BP_ParticleManager.BP_ParticleManager_C.SAS_CommonStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAccelerating(bool Accelerating); // Function BP_ParticleManager.BP_ParticleManager_C.IsAccelerating // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsAcceleratorValid(bool Valid); // Function BP_ParticleManager.BP_ParticleManager_C.IsAcceleratorValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void TickPauseEventRestore(struct TArray<struct URSParticleSystemComponentBase*> RestoreParticleComps); // Function BP_ParticleManager.BP_ParticleManager_C.TickPauseEventRestore // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TickPauseEventStart(struct TArray<struct URSParticleSystemComponentBase*> SetupParticleComps); // Function BP_ParticleManager.BP_ParticleManager_C.TickPauseEventStart // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupStageParam(struct FVector Location, struct URSParticleSystemComponentBase* RSParticleSystemComp, bool IsSetup); // Function BP_ParticleManager.BP_ParticleManager_C.SetupStageParam // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUnregistEffectBackgroundMother(struct ABP_EffectBackGroundMother_C* Background); // Function BP_ParticleManager.BP_ParticleManager_C.PrivateUnregistEffectBackgroundMother // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUnregistEffectBackground(struct ABP_EffectBackground_C* Background); // Function BP_ParticleManager.BP_ParticleManager_C.PrivateUnregistEffectBackground // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayEventParticles(struct FString EventName, struct UBP_RSParticleBackgroundComponent_C* BackGroundComponent, bool Play); // Function BP_ParticleManager.BP_ParticleManager_C.PlayEventParticles // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopEventPaticles(struct FString EventName, struct UBP_RSParticleBackgroundComponent_C* BackGroundComponent, bool Stop); // Function BP_ParticleManager.BP_ParticleManager_C.StopEventPaticles // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnElectricStart(struct FFSASElectricParam Param, struct AActor* Owner); // Function BP_ParticleManager.BP_ParticleManager_C.OnElectricStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnElectricEnd(struct FFSASElectricParam Param, struct AActor* Owner, float RemainTime); // Function BP_ParticleManager.BP_ParticleManager_C.OnElectricEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFireStart(struct FFSASFireParam Param, struct AActor* Owner); // Function BP_ParticleManager.BP_ParticleManager_C.OnFireStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFireEnd(struct FFSASFireParam Param, struct AActor* Owner, float RemainTime); // Function BP_ParticleManager.BP_ParticleManager_C.OnFireEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMetalStart(struct FFSASMetalParam Param, struct AActor* Owner); // Function BP_ParticleManager.BP_ParticleManager_C.OnMetalStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMetalEnd(struct FFSASMetalParam Param, struct AActor* Owner, float RemainTime); // Function BP_ParticleManager.BP_ParticleManager_C.OnMetalEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSeeThroughStart(struct FFSASSeeThroughParam Param, struct AActor* Owner); // Function BP_ParticleManager.BP_ParticleManager_C.OnSeeThroughStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSeeThroughEnd(struct FFSASSeeThroughParam Param, struct AActor* Owner, float RemainTime); // Function BP_ParticleManager.BP_ParticleManager_C.OnSeeThroughEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTelepoStart(struct FFSASTelepoParam Param, struct AActor* Owner); // Function BP_ParticleManager.BP_ParticleManager_C.OnTelepoStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTelepoEnd(struct FFSASTelepoParam Param, struct AActor* Owner, float RemainTime); // Function BP_ParticleManager.BP_ParticleManager_C.OnTelepoEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStealthStart(struct FFSASStealthParam Param, struct AActor* Owner); // Function BP_ParticleManager.BP_ParticleManager_C.OnStealthStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStealthEnd(struct FFSASStealthParam Param, struct AActor* Owner, float RemainTime); // Function BP_ParticleManager.BP_ParticleManager_C.OnStealthEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCopyStart(struct FFSASCopyParam Param, struct AActor* Owner); // Function BP_ParticleManager.BP_ParticleManager_C.OnCopyStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCopyEnd(struct FFSASCopyParam Param, struct AActor* Owner, float RemainTime); // Function BP_ParticleManager.BP_ParticleManager_C.OnCopyEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCutInStart(); // Function BP_ParticleManager.BP_ParticleManager_C.OnCutInStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCutInEnd(); // Function BP_ParticleManager.BP_ParticleManager_C.OnCutInEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPsychicStart(struct FFSASPsychicParam Param, struct AActor* Owner); // Function BP_ParticleManager.BP_ParticleManager_C.OnPsychicStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPsychicEnd(struct FFSASPsychicParam Param, struct AActor* Owner, float RemainTime); // Function BP_ParticleManager.BP_ParticleManager_C.OnPsychicEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAcceleratorStart(struct FAcceleratorParam Parameter, struct AActor* Owner, bool bHologram); // Function BP_ParticleManager.BP_ParticleManager_C.OnAcceleratorStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAcceleratorEnd(struct FAcceleratorParam Parameter, struct AActor* Owner, float RemainTime, bool bHologram); // Function BP_ParticleManager.BP_ParticleManager_C.OnAcceleratorEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_ParticleManager.BP_ParticleManager_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_ParticleManager.BP_ParticleManager_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void UnregistEffectBackGround(struct ABP_EffectBackground_C* EffectBackground); // Function BP_ParticleManager.BP_ParticleManager_C.UnregistEffectBackGround // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnregistEffectBackGroundMother(struct ABP_EffectBackGroundMother_C* MotherActor); // Function BP_ParticleManager.BP_ParticleManager_C.UnregistEffectBackGroundMother // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void HideBGEffect(bool toHide); // Function BP_ParticleManager.BP_ParticleManager_C.HideBGEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DelayBeginPlay(); // Function BP_ParticleManager.BP_ParticleManager_C.DelayBeginPlay // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_ParticleManager(int32_t EntryPoint); // Function BP_ParticleManager.BP_ParticleManager_C.ExecuteUbergraph_BP_ParticleManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

