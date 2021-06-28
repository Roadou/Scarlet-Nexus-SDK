// BlueprintGeneratedClass BP_SASHologramAttackCh0600Component.BP_SASHologramAttackCh0600Component_C
// Size: 0x398 (Inherited: 0x385)
struct UBP_SASHologramAttackCh0600Component_C : UBP_SASHologramAttackBaseComponent_C {
	char pad_385[0x3]; // 0x385(0x03)
	struct TArray<struct FFHologramAnimationPlayData> PlayData; // 0x388(0x10)

	void DoPlayEndMontage(bool bFlying); // Function BP_SASHologramAttackCh0600Component.BP_SASHologramAttackCh0600Component_C.DoPlayEndMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsFlyingFinish(bool bFlying); // Function BP_SASHologramAttackCh0600Component.BP_SASHologramAttackCh0600Component_C.IsFlyingFinish // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SpawnHologramHitParticle(struct FHCHitResult HitResult, bool bDummy); // Function BP_SASHologramAttackCh0600Component.BP_SASHologramAttackCh0600Component_C.SpawnHologramHitParticle // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAnimationPlayData(struct TArray<struct FFHologramAnimationPlayData> Data); // Function BP_SASHologramAttackCh0600Component.BP_SASHologramAttackCh0600Component_C.GetAnimationPlayData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

