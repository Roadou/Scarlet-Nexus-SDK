// BlueprintGeneratedClass BP_CombinationVisionCh0200.BP_CombinationVisionCh0200_C
// Size: 0x3e0 (Inherited: 0x3b0)
struct UBP_CombinationVisionCh0200_C : UBP_AttackCombinationVisionBaseComponent_C {
	struct TArray<struct FFHologramAnimationPlayData> FlyingPlayData; // 0x3b0(0x10)
	struct TArray<struct FFHologramAnimationPlayData> PlayData; // 0x3c0(0x10)
	bool bEndAttract; // 0x3d0(0x01)
	bool bCheckSameLocation; // 0x3d1(0x01)
	char pad_3D2[0x2]; // 0x3d2(0x02)
	struct FGameTimer CheckSameLocationTimer; // 0x3d4(0x0c)

	void ClearAttractActor(); // Function BP_CombinationVisionCh0200.BP_CombinationVisionCh0200_C.ClearAttractActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttractTarget(); // Function BP_CombinationVisionCh0200.BP_CombinationVisionCh0200_C.SetAttractTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TickAttractTarget(float DeltaSeconds); // Function BP_CombinationVisionCh0200.BP_CombinationVisionCh0200_C.TickAttractTarget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FindAttractTarget(bool bFailed); // Function BP_CombinationVisionCh0200.BP_CombinationVisionCh0200_C.FindAttractTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndMove(); // Function BP_CombinationVisionCh0200.BP_CombinationVisionCh0200_C.EndMove // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAttackNotify(int32_t Param); // Function BP_CombinationVisionCh0200.BP_CombinationVisionCh0200_C.OnAttackNotify // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoEndAttack(bool bDummy); // Function BP_CombinationVisionCh0200.BP_CombinationVisionCh0200_C.DoEndAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckStartAttack(float DeltaTime); // Function BP_CombinationVisionCh0200.BP_CombinationVisionCh0200_C.CheckStartAttack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAnimationPlayData(struct TArray<struct FFHologramAnimationPlayData> Data); // Function BP_CombinationVisionCh0200.BP_CombinationVisionCh0200_C.GetAnimationPlayData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

