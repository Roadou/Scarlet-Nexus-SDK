// BlueprintGeneratedClass BP_HologramBullet_ch0900.BP_HologramBullet_ch0900_C
// Size: 0x5d8 (Inherited: 0x5b4)
struct ABP_HologramBullet_ch0900_C : ABP_BulletBase_C {
	char pad_5B4[0x4]; // 0x5b4(0x04)
	struct UCapsuleComponent* AttackCollision5; // 0x5b8(0x08)
	struct UCapsuleComponent* AttackCollision4; // 0x5c0(0x08)
	struct UCapsuleComponent* AttackCollision3; // 0x5c8(0x08)
	struct UCapsuleComponent* AttackCollision2; // 0x5d0(0x08)

	void OnAttackEnd(bool bDummy); // Function BP_HologramBullet_ch0900.BP_HologramBullet_ch0900_C.OnAttackEnd // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnUpdate(float DeltaSeconds, bool bDummy); // Function BP_HologramBullet_ch0900.BP_HologramBullet_ch0900_C.OnUpdate // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Fire(struct AActor* attackOwner, struct FVector FirePoint, struct FVector Dir, struct FAttackCollisionInfoBP CollisionInfo, bool bDisableImpactParticle, bool bSuccess); // Function BP_HologramBullet_ch0900.BP_HologramBullet_ch0900_C.Fire // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

