// BlueprintGeneratedClass BP_BrainCrashCoreMaterial.BP_BrainCrashCoreMaterial_C
// Size: 0x259 (Inherited: 0x230)
struct ABP_BrainCrashCoreMaterial_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	float Grayscale; // 0x240(0x04)
	float EmissiveIntensity; // 0x244(0x04)
	float DefaultBodyEmissive; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
	struct USkeletalMeshComponent* Mesh; // 0x250(0x08)
	bool IsInitialized; // 0x258(0x01)

	void ReceiveBeginPlay(); // Function BP_BrainCrashCoreMaterial.BP_BrainCrashCoreMaterial_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_BrainCrashCoreMaterial.BP_BrainCrashCoreMaterial_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_BrainCrashCoreMaterial.BP_BrainCrashCoreMaterial_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_BrainCrashCoreMaterial(int32_t EntryPoint); // Function BP_BrainCrashCoreMaterial.BP_BrainCrashCoreMaterial_C.ExecuteUbergraph_BP_BrainCrashCoreMaterial // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

