// BlueprintGeneratedClass BP_EnemyDamageRagdollComponent.BP_EnemyDamageRagdollComponent_C
// Size: 0x120 (Inherited: 0xc0)
struct UBP_EnemyDamageRagdollComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	bool IsRagdoll; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float BlendWeight; // 0xcc(0x04)
	struct FName PhysicsBoneName; // 0xd0(0x08)
	struct TArray<struct FName> PhysicsInvalidBoneName; // 0xd8(0x10)
	struct FName ImpulseBoneName; // 0xe8(0x08)
	float ImpulsePower; // 0xf0(0x04)
	float TimeScale; // 0xf4(0x04)
	struct ARSBattleCharacter_C* OwnerCharacter; // 0xf8(0x08)
	struct UCurveFloat* CurveData; // 0x100(0x08)
	float UpdateTimer; // 0x108(0x04)
	bool IsInvalidRagdoll; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
	struct TArray<struct FName> PhysicsEnableBoneName; // 0x110(0x10)

	void EndRagdoll(); // Function BP_EnemyDamageRagdollComponent.BP_EnemyDamageRagdollComponent_C.EndRagdoll // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateRagdoll(float DeltaSec); // Function BP_EnemyDamageRagdollComponent.BP_EnemyDamageRagdollComponent_C.UpdateRagdoll // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartRagdoll(struct FVector HitDir); // Function BP_EnemyDamageRagdollComponent.BP_EnemyDamageRagdollComponent_C.StartRagdoll // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EnemyDamageRagdollComponent.BP_EnemyDamageRagdollComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EnemyDamageRagdollComponent.BP_EnemyDamageRagdollComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EnemyDamageRagdollComponent(int32_t EntryPoint); // Function BP_EnemyDamageRagdollComponent.BP_EnemyDamageRagdollComponent_C.ExecuteUbergraph_BP_EnemyDamageRagdollComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

