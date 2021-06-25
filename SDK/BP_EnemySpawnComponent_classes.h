// BlueprintGeneratedClass BP_EnemySpawnComponent.BP_EnemySpawnComponent_C
// Size: 0xe5 (Inherited: 0xc0)
struct UBP_EnemySpawnComponent_C : UActorComponent {
	float ScatterEffectScale; // 0xc0(0x04)
	float SpawnEffectScale; // 0xc4(0x04)
	struct UParticleSystem* StartEffect; // 0xc8(0x08)
	struct UParticleSystem* BreakEffect; // 0xd0(0x08)
	struct FVector OffsetLocation; // 0xd8(0x0c)
	bool bDisableSound; // 0xe4(0x01)

	void StartSpawnEffect(bool IsStartEffect, struct FVector Location, struct FRotator Rotation); // Function BP_EnemySpawnComponent.BP_EnemySpawnComponent_C.StartSpawnEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

