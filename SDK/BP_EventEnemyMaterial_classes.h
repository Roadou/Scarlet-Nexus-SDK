// BlueprintGeneratedClass BP_EventEnemyMaterial.BP_EventEnemyMaterial_C
// Size: 0x271 (Inherited: 0x230)
struct ABP_EventEnemyMaterial_C : ARSActorSystemBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBP_EnemyMaterialAccessorComponent_C* BP_EnemyMaterialAccessorComponent; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	struct TArray<struct FString> MaterialSlotNames; // 0x248(0x10)
	bool RestoreOverrideParameter; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct AActor* SubAttachActor; // 0x260(0x08)
	struct AActor* SubAttachActor2; // 0x268(0x08)
	bool IsInitialized; // 0x270(0x01)

	void GetTargetMesh(struct ARSBattleCharacter_C* Character, struct USkeletalMeshComponent* SkelMeshComp); // Function BP_EventEnemyMaterial.BP_EventEnemyMaterial_C.GetTargetMesh // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(struct USkeletalMeshComponent* SkeletalMesh); // Function BP_EventEnemyMaterial.BP_EventEnemyMaterial_C.Initialize // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventEnemyMaterial.BP_EventEnemyMaterial_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EventEnemyMaterial.BP_EventEnemyMaterial_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventEnemyMaterial(int32_t EntryPoint); // Function BP_EventEnemyMaterial.BP_EventEnemyMaterial_C.ExecuteUbergraph_BP_EventEnemyMaterial // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

