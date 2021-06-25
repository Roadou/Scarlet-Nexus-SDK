// Class ApexDestruction.DestructibleActor
// Size: 0x248 (Inherited: 0x230)
struct ADestructibleActor : AActor {
	struct UDestructibleComponent* DestructibleComponent; // 0x230(0x08)
	struct FMulticastInlineDelegate OnActorFracture; // 0x238(0x10)
};

// Class ApexDestruction.DestructibleComponent
// Size: 0x730 (Inherited: 0x650)
struct UDestructibleComponent : USkinnedMeshComponent {
	char bFractureEffectOverride : 1; // 0x650(0x01)
	char pad_650_1 : 7; // 0x650(0x01)
	char pad_651[0x7]; // 0x651(0x07)
	struct TArray<struct FFractureEffect> FractureEffects; // 0x658(0x10)
	bool bEnableHardSleeping; // 0x668(0x01)
	char pad_669[0x3]; // 0x669(0x03)
	float LargeChunkThreshold; // 0x66c(0x04)
	char pad_670[0x10]; // 0x670(0x10)
	bool RsDestructiblePhysicalMaterialsSetupCancel; // 0x680(0x01)
	char pad_681[0x7]; // 0x681(0x07)
	struct FMulticastInlineDelegate OnComponentFracture; // 0x688(0x10)
	char pad_698[0x98]; // 0x698(0x98)

	void SetDestructibleMesh(struct UDestructibleMesh* NewMesh); // Function ApexDestruction.DestructibleComponent.SetDestructibleMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x67e120
	struct UDestructibleMesh* GetDestructibleMesh(); // Function ApexDestruction.DestructibleComponent.GetDestructibleMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x67e0f0
	void ApplyRadiusDamage(float BaseDamage, struct FVector HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage); // Function ApexDestruction.DestructibleComponent.ApplyRadiusDamage // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x67df40
	void ApplyDamage(float DamageAmount, struct FVector HitLocation, struct FVector ImpulseDir, float ImpulseStrength); // Function ApexDestruction.DestructibleComponent.ApplyDamage // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x67ddd0
};

// Class ApexDestruction.DestructibleFractureSettings
// Size: 0xb8 (Inherited: 0x28)
struct UDestructibleFractureSettings : UObject {
	int32_t CellSiteCount; // 0x28(0x04)
	struct FFractureMaterial FractureMaterialDesc; // 0x2c(0x24)
	int32_t RandomSeed; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct FVector> VoronoiSites; // 0x58(0x10)
	int32_t OriginalSubmeshCount; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct UMaterialInterface*> Materials; // 0x70(0x10)
	struct TArray<struct FDestructibleChunkParameters> ChunkParameters; // 0x80(0x10)
	char pad_90[0x28]; // 0x90(0x28)
};

// Class ApexDestruction.DestructibleMesh
// Size: 0x420 (Inherited: 0x380)
struct UDestructibleMesh : USkeletalMesh {
	struct FDestructibleParameters DefaultDestructibleParameters; // 0x380(0x88)
	struct TArray<struct FFractureEffect> FractureEffects; // 0x408(0x10)
	char pad_418[0x8]; // 0x418(0x08)
};

