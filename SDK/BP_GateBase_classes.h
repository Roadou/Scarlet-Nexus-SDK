// BlueprintGeneratedClass BP_GateBase.BP_GateBase_C
// Size: 0x319 (Inherited: 0x281)
struct ABP_GateBase_C : ABP_GimmickObjectBase_C {
	char pad_281[0x7]; // 0x281(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UStaticMeshComponent* Door; // 0x290(0x08)
	enum class EEasingFunc DoorMoveFunction; // 0x298(0x01)
	char pad_299[0x3]; // 0x299(0x03)
	float DoorMoveFunctionExp; // 0x29c(0x04)
	struct FTransform DoorOpenTransform; // 0x2a0(0x30)
	struct FTransform DoorCloseTransform; // 0x2d0(0x30)
	bool StopInEvent; // 0x300(0x01)
	char pad_301[0x7]; // 0x301(0x07)
	struct USoundAtomCue* GateOpenSe; // 0x308(0x08)
	struct USoundAtomCue* GateCloseSe; // 0x310(0x08)
	bool IsFixed; // 0x318(0x01)

	void PlaySE(struct USoundAtomCue* Sound); // Function BP_GateBase.BP_GateBase_C.PlaySE // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayCloseSound(); // Function BP_GateBase.BP_GateBase_C.PlayCloseSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayOpenSound(); // Function BP_GateBase.BP_GateBase_C.PlayOpenSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateInClosing(float DeltaSeconds); // Function BP_GateBase.BP_GateBase_C.UpdateInClosing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateInOpening(float DeltaSeconds); // Function BP_GateBase.BP_GateBase_C.UpdateInOpening // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateGimmickMesh(); // Function BP_GateBase.BP_GateBase_C.UpdateGimmickMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateMain(float DeltaSeconds); // Function BP_GateBase.BP_GateBase_C.UpdateMain // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GimmickOpen(); // Function BP_GateBase.BP_GateBase_C.GimmickOpen // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GimmickCloseForce(); // Function BP_GateBase.BP_GateBase_C.GimmickCloseForce // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GimmickOpenForce(); // Function BP_GateBase.BP_GateBase_C.GimmickOpenForce // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GimmickClose(); // Function BP_GateBase.BP_GateBase_C.GimmickClose // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_GateBase.BP_GateBase_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_GateBase.BP_GateBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_GateBase(int32_t EntryPoint); // Function BP_GateBase.BP_GateBase_C.ExecuteUbergraph_BP_GateBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

