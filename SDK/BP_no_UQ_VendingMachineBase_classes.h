// BlueprintGeneratedClass BP_no_UQ_VendingMachineBase.BP_no_UQ_VendingMachineBase_C
// Size: 0x5e0 (Inherited: 0x5c8)
struct ABP_no_UQ_VendingMachineBase_C : ABP_PsychicObjectStatic_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5c8(0x08)
	struct UBP_UniqueObjectComponentVendingMachine_C* BP_UniqueObjectComponentVendingMachine; // 0x5d0(0x08)
	bool PsychicFinish; // 0x5d8(0x01)
	char pad_5D9[0x3]; // 0x5d9(0x03)
	float VibrationVolume; // 0x5dc(0x04)

	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_no_UQ_VendingMachineBase.BP_no_UQ_VendingMachineBase_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_no_UQ_VendingMachineBase(int32_t EntryPoint); // Function BP_no_UQ_VendingMachineBase.BP_no_UQ_VendingMachineBase_C.ExecuteUbergraph_BP_no_UQ_VendingMachineBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

