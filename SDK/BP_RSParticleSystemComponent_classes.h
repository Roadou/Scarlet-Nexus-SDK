// BlueprintGeneratedClass BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C
// Size: 0x6fb (Inherited: 0x6f0)
struct UBP_RSParticleSystemComponent_C : URSParticleSystemComponentBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6f0(0x08)
	bool IgnoreAccel; // 0x6f8(0x01)
	bool IgnoreTelepo; // 0x6f9(0x01)
	bool isRegist; // 0x6fa(0x01)

	void SAS_CommonEnd(enum class E_SASKind SAS_Kind, bool bCancelSASCost, bool bDummy, float RemainTime); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.SAS_CommonEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SAS_CommonStart(struct FFSASCommand SAS_Command, bool dummy); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.SAS_CommonStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAccelerating(bool Accelerating); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.IsAccelerating // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsAcceleratorValid(bool Valid); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.IsAcceleratorValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void ResetParticle(); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.ResetParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopAndHideParticle(); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.StopAndHideParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopParticle(); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.StopParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayParticle(); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.PlayParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetParameter(); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.ResetParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeOnAccelarator(); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.InitializeOnAccelarator // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupStageSetting(); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.SetupStageSetting // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsSelfAccelerating(struct AActor* Actor); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.IsSelfAccelerating // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsOwnerPlayer(struct UObject* Actor, bool IsPlayer); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.IsOwnerPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsIgnoreAccelerate(bool Ignore); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.IsIgnoreAccelerate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void OnPsychicEnd(struct FFSASPsychicParam Param, struct AActor* Owner, float RemainTime); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.OnPsychicEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPsychicStart(struct FFSASPsychicParam Param, struct AActor* Owner); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.OnPsychicStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCutInEnd(); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.OnCutInEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCutInStart(); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.OnCutInStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCopyEnd(struct FFSASCopyParam Param, struct AActor* Owner, float RemainTime); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.OnCopyEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCopyStart(struct FFSASCopyParam Param, struct AActor* Owner); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.OnCopyStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAcceleratorStart(struct FAcceleratorParam Parameter, struct AActor* Owner, bool bHologram); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.OnAcceleratorStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAcceleratorEnd(struct FAcceleratorParam Parameter, struct AActor* Owner, float RemainTime, bool bHologram); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.OnAcceleratorEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStealthEnd(struct FFSASStealthParam Param, struct AActor* Owner, float RemainTime); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.OnStealthEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStealthStart(struct FFSASStealthParam Param, struct AActor* Owner); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.OnStealthStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTelepoEnd(struct FFSASTelepoParam Param, struct AActor* Owner, float RemainTime); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.OnTelepoEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnTelepoStart(struct FFSASTelepoParam Param, struct AActor* Owner); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.OnTelepoStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnElectricStart(struct FFSASElectricParam Param, struct AActor* Owner); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.OnElectricStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserTick(float ParentDeltaSeconds); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.UserTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSeeThroughEnd(struct FFSASSeeThroughParam Param, struct AActor* Owner, float RemainTime); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.OnSeeThroughEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSeeThroughStart(struct FFSASSeeThroughParam Param, struct AActor* Owner); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.OnSeeThroughStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.Initialize // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayParticleImplements(); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.PlayParticleImplements // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopAndHideParticleImplements(); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.StopAndHideParticleImplements // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopParticleImplements(); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.StopParticleImplements // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMetalEnd(struct FFSASMetalParam Param, struct AActor* Owner, float RemainTime); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.OnMetalEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMetalStart(struct FFSASMetalParam Param, struct AActor* Owner); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.OnMetalStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFireEnd(struct FFSASFireParam Param, struct AActor* Owner, float RemainTime); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.OnFireEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFireStart(struct FFSASFireParam Param, struct AActor* Owner); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.OnFireStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnElectricEnd(struct FFSASElectricParam Param, struct AActor* Owner, float RemainTime); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.OnElectricEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_RSParticleSystemComponent(int32_t EntryPoint); // Function BP_RSParticleSystemComponent.BP_RSParticleSystemComponent_C.ExecuteUbergraph_BP_RSParticleSystemComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

