// BlueprintGeneratedClass BP_SC_BG.BP_SC_BG_C
// Size: 0x26c (Inherited: 0x230)
struct ABP_SC_BG_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UChildActorComponent* ChildActor; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	struct AActor* ParentActor; // 0x248(0x08)
	struct FVector beforeLocation; // 0x250(0x0c)
	struct FRotator BeforeRotation; // 0x25c(0x0c)
	float NewVar_1; // 0x268(0x04)

	void ReceiveTick(float DeltaSeconds); // Function BP_SC_BG.BP_SC_BG_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_SC_BG(int32_t EntryPoint); // Function BP_SC_BG.BP_SC_BG_C.ExecuteUbergraph_BP_SC_BG // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

