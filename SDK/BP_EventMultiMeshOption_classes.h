// BlueprintGeneratedClass BP_EventMultiMeshOption.BP_EventMultiMeshOption_C
// Size: 0x2d0 (Inherited: 0x230)
struct ABP_EventMultiMeshOption_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	bool Physics; // 0x240(0x01)
	char pad_241[0x7]; // 0x241(0x07)
	struct USkeletalMeshComponent* TargetMesh; // 0x248(0x08)
	struct ARSBattlePlayer_C* TargetBattlePlayer; // 0x250(0x08)
	struct TArray<struct ARSBattlePlayer_C*> battlePlayers; // 0x258(0x10)
	struct UPrimitiveComponent* TargetPrimitive; // 0x268(0x08)
	struct TArray<bool> RestoreBattlePlayerPhysics; // 0x270(0x10)
	struct TArray<struct USkeletalMeshComponent*> SkeletalMeshes; // 0x280(0x10)
	struct TArray<bool> RestoreSkeletalMeshPhysics; // 0x290(0x10)
	struct TArray<enum class ECollisionEnabled> RestoreSkeletalMeshCollision; // 0x2a0(0x10)
	struct TArray<bool> RestoreBattlePlayerKawaiiPhysics; // 0x2b0(0x10)
	struct TArray<bool> RestoreSkeletalMeshKawaiiPhysics; // 0x2c0(0x10)

	void SetAllCharPhysics(); // Function BP_EventMultiMeshOption.BP_EventMultiMeshOption_C.SetAllCharPhysics // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Finalize(); // Function BP_EventMultiMeshOption.BP_EventMultiMeshOption_C.Finalize // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function BP_EventMultiMeshOption.BP_EventMultiMeshOption_C.Initialize // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Setup(struct UPrimitiveComponent* Primitive, struct USkeletalMeshComponent* SkeletalMeshCom, struct ARSBattlePlayer_C* RSBattlePlayer); // Function BP_EventMultiMeshOption.BP_EventMultiMeshOption_C.Setup // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventMultiMeshOption.BP_EventMultiMeshOption_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EventMultiMeshOption.BP_EventMultiMeshOption_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventMultiMeshOption(int32_t EntryPoint); // Function BP_EventMultiMeshOption.BP_EventMultiMeshOption_C.ExecuteUbergraph_BP_EventMultiMeshOption // (Final|UbergraphFunction) // @ game+0x1685580
};

