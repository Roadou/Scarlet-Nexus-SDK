// BlueprintGeneratedClass BP_RSAtomComponent.BP_RSAtomComponent_C
// Size: 0x1259 (Inherited: 0x1250)
struct UBP_RSAtomComponent_C : URSAtomComponentBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1250(0x08)
	bool IgnoreAccel; // 0x1258(0x01)

	void SAS_CommonEnd(enum class E_SASKind SAS_Kind, bool bCancelSASCost, bool bDummy, float RemainTime); // Function BP_RSAtomComponent.BP_RSAtomComponent_C.SAS_CommonEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SAS_CommonStart(struct FFSASCommand SAS_Command, bool dummy); // Function BP_RSAtomComponent.BP_RSAtomComponent_C.SAS_CommonStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAccelerating(bool Accelerating); // Function BP_RSAtomComponent.BP_RSAtomComponent_C.IsAccelerating // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsAcceleratorValid(bool Valid); // Function BP_RSAtomComponent.BP_RSAtomComponent_C.IsAcceleratorValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void ResetParameter(); // Function BP_RSAtomComponent.BP_RSAtomComponent_C.ResetParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeOnAccelarate(); // Function BP_RSAtomComponent.BP_RSAtomComponent_C.InitializeOnAccelarate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsOwnerPlayer(struct UObject* Actor, bool IsPlayer); // Function BP_RSAtomComponent.BP_RSAtomComponent_C.IsOwnerPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsIgnoreAccelerate(bool Ignore); // Function BP_RSAtomComponent.BP_RSAtomComponent_C.IsIgnoreAccelerate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void OnTelepoStart(struct FFSASTelepoParam Param, struct AActor* Owner); // Function BP_RSAtomComponent.BP_RSAtomComponent_C.OnTelepoStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTelepoEnd(struct FFSASTelepoParam Param, struct AActor* Owner, float RemainTime); // Function BP_RSAtomComponent.BP_RSAtomComponent_C.OnTelepoEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStealthStart(struct FFSASStealthParam Param, struct AActor* Owner); // Function BP_RSAtomComponent.BP_RSAtomComponent_C.OnStealthStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStealthEnd(struct FFSASStealthParam Param, struct AActor* Owner, float RemainTime); // Function BP_RSAtomComponent.BP_RSAtomComponent_C.OnStealthEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCopyStart(struct FFSASCopyParam Param, struct AActor* Owner); // Function BP_RSAtomComponent.BP_RSAtomComponent_C.OnCopyStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCopyEnd(struct FFSASCopyParam Param, struct AActor* Owner, float RemainTime); // Function BP_RSAtomComponent.BP_RSAtomComponent_C.OnCopyEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCutInStart(); // Function BP_RSAtomComponent.BP_RSAtomComponent_C.OnCutInStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCutInEnd(); // Function BP_RSAtomComponent.BP_RSAtomComponent_C.OnCutInEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPsychicStart(struct FFSASPsychicParam Param, struct AActor* Owner); // Function BP_RSAtomComponent.BP_RSAtomComponent_C.OnPsychicStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPsychicEnd(struct FFSASPsychicParam Param, struct AActor* Owner, float RemainTime); // Function BP_RSAtomComponent.BP_RSAtomComponent_C.OnPsychicEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAcceleratorStart(struct FAcceleratorParam Parameter, struct AActor* Owner, bool bHologram); // Function BP_RSAtomComponent.BP_RSAtomComponent_C.OnAcceleratorStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAcceleratorEnd(struct FAcceleratorParam Parameter, struct AActor* Owner, float RemainTime, bool bHologram); // Function BP_RSAtomComponent.BP_RSAtomComponent_C.OnAcceleratorEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSeeThroughEnd(struct FFSASSeeThroughParam Param, struct AActor* Owner, float RemainTime); // Function BP_RSAtomComponent.BP_RSAtomComponent_C.OnSeeThroughEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_RSAtomComponent.BP_RSAtomComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnSeeThroughStart(struct FFSASSeeThroughParam Param, struct AActor* Owner); // Function BP_RSAtomComponent.BP_RSAtomComponent_C.OnSeeThroughStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_RSAtomComponent.BP_RSAtomComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnMetalEnd(struct FFSASMetalParam Param, struct AActor* Owner, float RemainTime); // Function BP_RSAtomComponent.BP_RSAtomComponent_C.OnMetalEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMetalStart(struct FFSASMetalParam Param, struct AActor* Owner); // Function BP_RSAtomComponent.BP_RSAtomComponent_C.OnMetalStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFireEnd(struct FFSASFireParam Param, struct AActor* Owner, float RemainTime); // Function BP_RSAtomComponent.BP_RSAtomComponent_C.OnFireEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFireStart(struct FFSASFireParam Param, struct AActor* Owner); // Function BP_RSAtomComponent.BP_RSAtomComponent_C.OnFireStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnElectricEnd(struct FFSASElectricParam Param, struct AActor* Owner, float RemainTime); // Function BP_RSAtomComponent.BP_RSAtomComponent_C.OnElectricEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnElectricStart(struct FFSASElectricParam Param, struct AActor* Owner); // Function BP_RSAtomComponent.BP_RSAtomComponent_C.OnElectricStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_RSAtomComponent.BP_RSAtomComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function BP_RSAtomComponent.BP_RSAtomComponent_C.Initialize // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_RSAtomComponent(int32_t EntryPoint); // Function BP_RSAtomComponent.BP_RSAtomComponent_C.ExecuteUbergraph_BP_RSAtomComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

