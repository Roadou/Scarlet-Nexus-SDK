// BlueprintGeneratedClass BP_SASCableEnergyMesh.BP_SASCableEnergyMesh_C
// Size: 0x29c (Inherited: 0x230)
struct ABP_SASCableEnergyMesh_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBP_RSParticleSystemComponent_C* BP_RSParticleSystemComponent; // 0x238(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	struct FVector StartLocation; // 0x250(0x0c)
	float Dissolve; // 0x25c(0x04)
	bool StartMesh; // 0x260(0x01)
	bool GetStartLocation; // 0x261(0x01)
	char pad_262[0x2]; // 0x262(0x02)
	float ParentCalbeSize; // 0x264(0x04)
	float EnergyCalbeSize; // 0x268(0x04)
	struct FName CableParentSocket; // 0x26c(0x08)
	char pad_274[0x4]; // 0x274(0x04)
	struct ABP_CableBase_C* ParentCable; // 0x278(0x08)
	float ParentDissolve; // 0x280(0x04)
	int32_t DelayedVisible; // 0x284(0x04)
	bool RequestParticleEmit; // 0x288(0x01)
	bool RequestMeshDisp; // 0x289(0x01)
	char pad_28A[0x2]; // 0x28a(0x02)
	struct FRotator StartRotation; // 0x28c(0x0c)
	float ParentAnimationOffset; // 0x298(0x04)

	void PrivateUpdateDelayedVisible(); // Function BP_SASCableEnergyMesh.BP_SASCableEnergyMesh_C.PrivateUpdateDelayedVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetVisibleDelayed(); // Function BP_SASCableEnergyMesh.BP_SASCableEnergyMesh_C.SetVisibleDelayed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetParentDissolve(float Dissolve); // Function BP_SASCableEnergyMesh.BP_SASCableEnergyMesh_C.SetParentDissolve // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDissolve(float Dissolve); // Function BP_SASCableEnergyMesh.BP_SASCableEnergyMesh_C.SetDissolve // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EmitParticle(); // Function BP_SASCableEnergyMesh.BP_SASCableEnergyMesh_C.EmitParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetErase(); // Function BP_SASCableEnergyMesh.BP_SASCableEnergyMesh_C.SetErase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetVisible(); // Function BP_SASCableEnergyMesh.BP_SASCableEnergyMesh_C.SetVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DetachEnergy(); // Function BP_SASCableEnergyMesh.BP_SASCableEnergyMesh_C.DetachEnergy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdate(); // Function BP_SASCableEnergyMesh.BP_SASCableEnergyMesh_C.PrivateUpdate // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartEnergy(struct ABP_CableBase_C* TargetCable); // Function BP_SASCableEnergyMesh.BP_SASCableEnergyMesh_C.StartEnergy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_SASCableEnergyMesh.BP_SASCableEnergyMesh_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void SetStopDilation(float Dilation); // Function BP_SASCableEnergyMesh.BP_SASCableEnergyMesh_C.SetStopDilation // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_SASCableEnergyMesh(int32_t EntryPoint); // Function BP_SASCableEnergyMesh.BP_SASCableEnergyMesh_C.ExecuteUbergraph_BP_SASCableEnergyMesh // (Final|UbergraphFunction) // @ game+0x1685580
};

