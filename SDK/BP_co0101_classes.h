// BlueprintGeneratedClass BP_co0101.BP_co0101_C
// Size: 0x342 (Inherited: 0x318)
struct ABP_co0101_C : ABP_CableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct FGameTimer DitherTimer; // 0x320(0x0c)
	float PARAM_DitherTime; // 0x32c(0x04)
	int32_t Index; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
	struct UABP_co0101_C* AnimBP; // 0x338(0x08)
	bool bBrainFieldMode; // 0x340(0x01)
	bool bStart; // 0x341(0x01)

	void GetSASStartAnimSequence(struct UAnimSequence* AnimSequence); // Function BP_co0101.BP_co0101_C.GetSASStartAnimSequence // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventPhysicsIdling(float IdlingSec, bool bDummy); // Function BP_co0101.BP_co0101_C.EventPhysicsIdling // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMaterialLocationParamName(struct FName ParamName); // Function BP_co0101.BP_co0101_C.GetMaterialLocationParamName // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetCableIndex(int32_t Index); // Function BP_co0101.BP_co0101_C.GetCableIndex // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void DoCodeEnd(enum class ECableType Ttype, bool bEnd); // Function BP_co0101.BP_co0101_C.DoCodeEnd // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoCodeStart(enum class ECableType Type, bool bDummy); // Function BP_co0101.BP_co0101_C.DoCodeStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDither(); // Function BP_co0101.BP_co0101_C.UpdateDither // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetVisibility(bool New Visibility); // Function BP_co0101.BP_co0101_C.SetVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCodePower(float Rate); // Function BP_co0101.BP_co0101_C.SetCodePower // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_co0101.BP_co0101_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_co0101.BP_co0101_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void BeginOverrideGravity(enum class ERSCableGravityType Type); // Function BP_co0101.BP_co0101_C.BeginOverrideGravity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndOverrideGravity(enum class ERSCableGravityType Type); // Function BP_co0101.BP_co0101_C.EndOverrideGravity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_co0101(int32_t EntryPoint); // Function BP_co0101.BP_co0101_C.ExecuteUbergraph_BP_co0101 // (Final|UbergraphFunction) // @ game+0x1685580
};

