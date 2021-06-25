// BlueprintGeneratedClass BP_CollisionHitSoundComponent.BP_CollisionHitSoundComponent_C
// Size: 0x188 (Inherited: 0xc0)
struct UBP_CollisionHitSoundComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct TArray<struct AActor*> HitActor; // 0xc8(0x10)
	struct TArray<bool> IsHit; // 0xd8(0x10)
	struct FVector OldRollRightAxis; // 0xe8(0x0c)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct AActor* OwnerActor; // 0xf8(0x08)
	bool IsRoll; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	struct FRotator OldRollRot; // 0x104(0x0c)
	bool IsRollSoundPlay; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	struct FVector TotalRoll; // 0x114(0x0c)
	struct FVector OldDeltaRot; // 0x120(0x0c)
	struct FRotator OldFallRot; // 0x12c(0x0c)
	float IgnoreVelocity; // 0x138(0x04)
	float HitGameTime; // 0x13c(0x04)
	float IgnoreHitMinSeconds; // 0x140(0x04)
	float IgnoreHitMaxSeconds; // 0x144(0x04)
	float LargeHitSoundThresholdVelocity; // 0x148(0x04)
	float IgnoreHitSeconds; // 0x14c(0x04)
	struct FRotator RollFirstRotate; // 0x150(0x0c)
	float RotateSoundStartAngle; // 0x15c(0x04)
	struct URSAtomComponentBase* RollSoundHandle; // 0x160(0x08)
	float LargeRollSpeedThreshold; // 0x168(0x04)
	float IgnoreMoveLength; // 0x16c(0x04)
	struct FVector HitSoundLocation; // 0x170(0x0c)
	bool IsNoSoundRoll; // 0x17c(0x01)
	char pad_17D[0x3]; // 0x17d(0x03)
	struct ABP_SoundManager_C* SoundManager; // 0x180(0x08)

	void GetOwnerMaterials(struct TArray<struct UMaterialInterface*> OwnerMaterials); // Function BP_CollisionHitSoundComponent.BP_CollisionHitSoundComponent_C.GetOwnerMaterials // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCollisionSound(struct FHitResult OtherHitResult, struct UMaterialInterface* OwnerMaterial, struct FRSCollisionSound CollisionSound); // Function BP_CollisionHitSoundComponent.BP_CollisionHitSoundComponent_C.GetCollisionSound // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCollisionParam(); // Function BP_CollisionHitSoundComponent.BP_CollisionHitSoundComponent_C.UpdateCollisionParam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CollisionSound(struct AActor* OtherActor, struct FVector Impulse, struct FHitResult HitResult); // Function BP_CollisionHitSoundComponent.BP_CollisionHitSoundComponent_C.CollisionSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CollisionFallSound(struct AActor* OtherActor, struct FVector Impulse, struct FHitResult HitResult, bool IsFall); // Function BP_CollisionHitSoundComponent.BP_CollisionHitSoundComponent_C.CollisionFallSound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CollisionRollSound(struct AActor* OtherActor, struct FVector Impulse, struct FHitResult HitResult, bool IsRolling); // Function BP_CollisionHitSoundComponent.BP_CollisionHitSoundComponent_C.CollisionRollSound // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CollisionHitSound(struct AActor* OtherActor, struct FVector Impulse, struct FHitResult HitResult, bool IsHitSound); // Function BP_CollisionHitSoundComponent.BP_CollisionHitSoundComponent_C.CollisionHitSound // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_CollisionHitSoundComponent.BP_CollisionHitSoundComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_CollisionHitSoundComponent.BP_CollisionHitSoundComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_CollisionHitSoundComponent(int32_t EntryPoint); // Function BP_CollisionHitSoundComponent.BP_CollisionHitSoundComponent_C.ExecuteUbergraph_BP_CollisionHitSoundComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

