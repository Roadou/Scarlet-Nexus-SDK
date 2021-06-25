// BlueprintGeneratedClass BP_co0100.BP_co0100_C
// Size: 0x330 (Inherited: 0x318)
struct ABP_co0100_C : ABP_CableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UABP_co0100_C* AnimBP; // 0x320(0x08)
	int32_t Index; // 0x328(0x04)
	float DRIVE_MODE_COLOR_RATE; // 0x32c(0x04)

	void EventPhysicsIdling(float IdlingSec, bool bDummy); // Function BP_co0100.BP_co0100_C.EventPhysicsIdling // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoCodeStart(enum class ECableType Type, bool bDummy); // Function BP_co0100.BP_co0100_C.DoCodeStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMaterialLocationParamName(struct FName ParamName); // Function BP_co0100.BP_co0100_C.GetMaterialLocationParamName // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetCableIndex(int32_t Index); // Function BP_co0100.BP_co0100_C.GetCableIndex // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void EndOverrideGravity(enum class ERSCableGravityType Type); // Function BP_co0100.BP_co0100_C.EndOverrideGravity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_co0100.BP_co0100_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void BeginOverrideGravity(enum class ERSCableGravityType Type); // Function BP_co0100.BP_co0100_C.BeginOverrideGravity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_co0100(int32_t EntryPoint); // Function BP_co0100.BP_co0100_C.ExecuteUbergraph_BP_co0100 // (Final|UbergraphFunction) // @ game+0x1685580
};

