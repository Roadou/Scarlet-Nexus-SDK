// BlueprintGeneratedClass BP_HologramBullet_ch0500.BP_HologramBullet_ch0500_C
// Size: 0x5c0 (Inherited: 0x5b4)
struct ABP_HologramBullet_ch0500_C : ABP_BulletBase_C {
	struct FVector HitLocation; // 0x5b4(0x0c)

	void Fire(struct AActor* attackOwner, struct FVector FirePoint, struct FVector Dir, struct FAttackCollisionInfoBP CollisionInfo, bool bDisableImpactParticle, bool bSuccess); // Function BP_HologramBullet_ch0500.BP_HologramBullet_ch0500_C.Fire // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMoveUpdate(float DeltaSeconds, struct FVector ResultLocation, bool bEnd, bool bImpactLand); // Function BP_HologramBullet_ch0500.BP_HologramBullet_ch0500_C.OnMoveUpdate // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_HologramBullet_ch0500.BP_HologramBullet_ch0500_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

