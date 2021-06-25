// BlueprintGeneratedClass BPC_NeonWireDepth.BPC_NeonWireDepth_C
// Size: 0xb11 (Inherited: 0xaf0)
struct UBPC_NeonWireDepth_C : USkeletalMeshComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xaf0(0x08)
	int32_t WireMaterialIndex; // 0xaf8(0x04)
	char pad_AFC[0x4]; // 0xafc(0x04)
	struct UMaterialInstanceDynamic* WireMaterial; // 0xb00(0x08)
	struct USkeletalMeshComponent* TargetMeshComp; // 0xb08(0x08)
	bool MaterialHologram; // 0xb10(0x01)

	void SetupMaterial(struct UMaterialInterface* SourceMaterial); // Function BPC_NeonWireDepth.BPC_NeonWireDepth_C.SetupMaterial // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(); // Function BPC_NeonWireDepth.BPC_NeonWireDepth_C.Update // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void destroy(); // Function BPC_NeonWireDepth.BPC_NeonWireDepth_C.destroy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Reset(); // Function BPC_NeonWireDepth.BPC_NeonWireDepth_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeFromWireMaterialIndex(struct AActor* TargetActor, int32_t MeshWireMaterialIndex); // Function BPC_NeonWireDepth.BPC_NeonWireDepth_C.InitializeFromWireMaterialIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(struct AActor* TargetActor); // Function BPC_NeonWireDepth.BPC_NeonWireDepth_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BPC_NeonWireDepth.BPC_NeonWireDepth_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BPC_NeonWireDepth(int32_t EntryPoint); // Function BPC_NeonWireDepth.BPC_NeonWireDepth_C.ExecuteUbergraph_BPC_NeonWireDepth // (Final|UbergraphFunction) // @ game+0x1685580
};

