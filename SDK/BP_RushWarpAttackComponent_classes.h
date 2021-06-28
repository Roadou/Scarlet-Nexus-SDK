// BlueprintGeneratedClass BP_RushWarpAttackComponent.BP_RushWarpAttackComponent_C
// Size: 0x220 (Inherited: 0x1f0)
struct UBP_RushWarpAttackComponent_C : UBP_WarpAttackComponentBase_C {
	int32_t AttackNum; // 0x1f0(0x04)
	float TargetSearchRange; // 0x1f4(0x04)
	struct TArray<struct UAnimMontage*> AttackMontage; // 0x1f8(0x10)
	int32_t AttackCount; // 0x208(0x04)
	char pad_20C[0x4]; // 0x20c(0x04)
	struct TArray<struct AActor*> TargetList; // 0x210(0x10)

	void SearchTarget(); // Function BP_RushWarpAttackComponent.BP_RushWarpAttackComponent_C.SearchTarget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RandomCalcAngleArray(); // Function BP_RushWarpAttackComponent.BP_RushWarpAttackComponent_C.RandomCalcAngleArray // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckStartAttack(float DeltaTime); // Function BP_RushWarpAttackComponent.BP_RushWarpAttackComponent_C.CheckStartAttack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_RushWarpAttackComponent.BP_RushWarpAttackComponent_C.OnMontageBlendingOut // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

