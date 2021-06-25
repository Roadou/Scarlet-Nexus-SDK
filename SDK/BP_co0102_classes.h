// BlueprintGeneratedClass BP_co0102.BP_co0102_C
// Size: 0x358 (Inherited: 0x318)
struct ABP_co0102_C : ABP_CableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct FGameTimer DitherTimer; // 0x320(0x0c)
	float PARAM_DitherTime; // 0x32c(0x04)
	int32_t Index; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
	struct UABP_co0102_C* AnimBP; // 0x338(0x08)
	bool bBrainFieldMode; // 0x340(0x01)
	bool bStart; // 0x341(0x01)
	char pad_342[0x2]; // 0x342(0x02)
	struct FVector PARAM_ReticleScale; // 0x344(0x0c)
	struct ABP_SASCableEnergyMesh_C* EnergyMesh; // 0x350(0x08)

	void SetEnergyCableDissolveInternal(float Dissolve, float ParentDissolve); // Function BP_co0102.BP_co0102_C.SetEnergyCableDissolveInternal // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndEnergyCable(); // Function BP_co0102.BP_co0102_C.EndEnergyCable // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartEnergyCable(); // Function BP_co0102.BP_co0102_C.StartEnergyCable // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEnergyCable(struct ABP_SASCableEnergyMesh_C* EnergyMesh); // Function BP_co0102.BP_co0102_C.GetEnergyCable // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FinalizeEnergyCable(enum class EEndPlayReason EndPlayReason); // Function BP_co0102.BP_co0102_C.FinalizeEnergyCable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeEnergyCable(); // Function BP_co0102.BP_co0102_C.InitializeEnergyCable // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMaterialLocationParamName(struct FName ParamName); // Function BP_co0102.BP_co0102_C.GetMaterialLocationParamName // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetCableIndex(int32_t Index); // Function BP_co0102.BP_co0102_C.GetCableIndex // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void DoCodeEnd(enum class ECableType Ttype, bool bEnd); // Function BP_co0102.BP_co0102_C.DoCodeEnd // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoCodeStart(enum class ECableType Type, bool bDummy); // Function BP_co0102.BP_co0102_C.DoCodeStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDither(); // Function BP_co0102.BP_co0102_C.UpdateDither // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetVisibility(bool New Visibility); // Function BP_co0102.BP_co0102_C.SetVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCodePower(float Rate); // Function BP_co0102.BP_co0102_C.SetCodePower // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_co0102.BP_co0102_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void BeginOverrideGravity(enum class ERSCableGravityType Type); // Function BP_co0102.BP_co0102_C.BeginOverrideGravity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndOverrideGravity(enum class ERSCableGravityType Type); // Function BP_co0102.BP_co0102_C.EndOverrideGravity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DirectEnablePhysics(); // Function BP_co0102.BP_co0102_C.DirectEnablePhysics // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnegyCableDissolve(float Dissolve, float ParentDissolve); // Function BP_co0102.BP_co0102_C.SetEnegyCableDissolve // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_co0102.BP_co0102_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_co0102.BP_co0102_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_co0102(int32_t EntryPoint); // Function BP_co0102.BP_co0102_C.ExecuteUbergraph_BP_co0102 // (Final|UbergraphFunction) // @ game+0x1685580
};

