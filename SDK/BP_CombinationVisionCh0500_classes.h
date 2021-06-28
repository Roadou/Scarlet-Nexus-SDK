// BlueprintGeneratedClass BP_CombinationVisionCh0500.BP_CombinationVisionCh0500_C
// Size: 0x3d0 (Inherited: 0x3b0)
struct UBP_CombinationVisionCh0500_C : UBP_AttackCombinationVisionBaseComponent_C {
	struct TArray<struct FFHologramAnimationPlayData> PlayData; // 0x3b0(0x10)
	struct TArray<struct FFHologramAnimationPlayData> FlyingPlayData; // 0x3c0(0x10)

	bool CheckStartAttack(float DeltaTime); // Function BP_CombinationVisionCh0500.BP_CombinationVisionCh0500_C.CheckStartAttack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAnimationPlayData(struct TArray<struct FFHologramAnimationPlayData> Data); // Function BP_CombinationVisionCh0500.BP_CombinationVisionCh0500_C.GetAnimationPlayData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

