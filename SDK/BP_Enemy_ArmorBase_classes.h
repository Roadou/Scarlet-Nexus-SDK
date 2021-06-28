// BlueprintGeneratedClass BP_Enemy_ArmorBase.BP_Enemy_ArmorBase_C
// Size: 0x2a8 (Inherited: 0x230)
struct ABP_Enemy_ArmorBase_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UDestructibleComponent* Mesh; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	float DamageAmount; // 0x248(0x04)
	struct FVector HitLocation; // 0x24c(0x0c)
	struct FVector ImpulseDir; // 0x258(0x0c)
	float ImpulseStrength; // 0x264(0x04)
	float FlashTime; // 0x268(0x04)
	float FlashTImeScale; // 0x26c(0x04)
	float FlashCurrentTime; // 0x270(0x04)
	float VanishTime; // 0x274(0x04)
	float VanishTimeScale; // 0x278(0x04)
	float VanishCurrentTime; // 0x27c(0x04)
	float endTime; // 0x280(0x04)
	float EndCurrentTime; // 0x284(0x04)
	struct FName FlashRateParameterName; // 0x288(0x08)
	struct FName VanishArmorParameterName; // 0x290(0x08)
	bool IsFlash; // 0x298(0x01)
	bool IsVanish; // 0x299(0x01)
	char pad_29A[0x6]; // 0x29a(0x06)
	struct UParticleSystem* ArmorBreakEffect; // 0x2a0(0x08)

	void Finalize(); // Function BP_Enemy_ArmorBase.BP_Enemy_ArmorBase_C.Finalize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Start(struct UMaterialInstanceDynamic* MaterialInstanceArmor, struct FTransform ArmorTransform, struct FVector HitPos, struct FVector HitDir, bool dummy); // Function BP_Enemy_ArmorBase.BP_Enemy_ArmorBase_C.Start // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(float DeltaSec, bool dummy); // Function BP_Enemy_ArmorBase.BP_Enemy_ArmorBase_C.Update // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function BP_Enemy_ArmorBase.BP_Enemy_ArmorBase_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_Enemy_ArmorBase.BP_Enemy_ArmorBase_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_Enemy_ArmorBase.BP_Enemy_ArmorBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function BP_Enemy_ArmorBase.BP_Enemy_ArmorBase_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_Enemy_ArmorBase.BP_Enemy_ArmorBase_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Enemy_ArmorBase(int32_t EntryPoint); // Function BP_Enemy_ArmorBase.BP_Enemy_ArmorBase_C.ExecuteUbergraph_BP_Enemy_ArmorBase // (Final|UbergraphFunction) // @ game+0x1685580
};

