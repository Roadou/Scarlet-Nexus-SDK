// BlueprintGeneratedClass BP_EventMeshOption.BP_EventMeshOption_C
// Size: 0x27c (Inherited: 0x230)
struct ABP_EventMeshOption_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	struct UPrimitiveComponent* TargetPrimitive; // 0x240(0x08)
	bool ReceivesDecals; // 0x248(0x01)
	bool RestoreReceivesDecals; // 0x249(0x01)
	bool InfiniteBounds; // 0x24a(0x01)
	bool RestoreInfiniteBounds; // 0x24b(0x01)
	float BoundsScale; // 0x24c(0x04)
	bool Physics; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)
	struct USkeletalMeshComponent* TargetMesh; // 0x258(0x08)
	bool RestorePhysics; // 0x260(0x01)
	char pad_261[0x7]; // 0x261(0x07)
	struct ARSBattlePlayer_C* TargetBattlePlayer; // 0x268(0x08)
	bool RestoreKawaiiPhysics; // 0x270(0x01)
	enum class ECollisionEnabled RestoreCollision; // 0x271(0x01)
	bool PlayerForceOutlineVisibility; // 0x272(0x01)
	bool OverrideBoundsScale; // 0x273(0x01)
	float RestoreBoundsScale; // 0x274(0x04)
	bool OverrideUseCapsuleShadow; // 0x278(0x01)
	bool UseCapsuleShadow; // 0x279(0x01)
	bool OverrideCapsuleShadow; // 0x27a(0x01)
	bool RestoreCapsuleShadow; // 0x27b(0x01)

	void Finalize(); // Function BP_EventMeshOption.BP_EventMeshOption_C.Finalize // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function BP_EventMeshOption.BP_EventMeshOption_C.Initialize // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Setup(struct UPrimitiveComponent* Primitive, struct USkeletalMeshComponent* SkeletalMeshCom, struct ARSBattlePlayer_C* RSBattlePlayer); // Function BP_EventMeshOption.BP_EventMeshOption_C.Setup // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventMeshOption.BP_EventMeshOption_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EventMeshOption.BP_EventMeshOption_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventMeshOption(int32_t EntryPoint); // Function BP_EventMeshOption.BP_EventMeshOption_C.ExecuteUbergraph_BP_EventMeshOption // (Final|UbergraphFunction) // @ game+0x1685580
};

