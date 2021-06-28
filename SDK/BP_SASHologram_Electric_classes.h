// BlueprintGeneratedClass BP_SASHologram_Electric.BP_SASHologram_Electric_C
// Size: 0x394 (Inherited: 0x368)
struct ABP_SASHologram_Electric_C : ABP_SimpleAttackActor_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x368(0x08)
	struct USphereComponent* AttackCollision; // 0x370(0x08)
	struct UParticleSystem* Particle_ElectricBeam; // 0x378(0x08)
	struct URSParticleSystemComponentBase* Handle_ElectricBeam; // 0x380(0x08)
	struct FVector BeamSourceOffset; // 0x388(0x0c)

	void GetPrimitive(struct UPrimitiveComponent* Primitive); // Function BP_SASHologram_Electric.BP_SASHologram_Electric_C.GetPrimitive // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void StartAttack(struct AActor* attackOwner); // Function BP_SASHologram_Electric.BP_SASHologram_Electric_C.StartAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCustomTimeDilation(float TimeDilation); // Function BP_SASHologram_Electric.BP_SASHologram_Electric_C.UpdateCustomTimeDilation // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Finish(); // Function BP_SASHologram_Electric.BP_SASHologram_Electric_C.Finish // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_SASHologram_Electric(int32_t EntryPoint); // Function BP_SASHologram_Electric.BP_SASHologram_Electric_C.ExecuteUbergraph_BP_SASHologram_Electric // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

