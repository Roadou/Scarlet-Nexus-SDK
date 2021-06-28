// BlueprintGeneratedClass BP_SASHologramAttackCh0400Component.BP_SASHologramAttackCh0400Component_C
// Size: 0x3b0 (Inherited: 0x385)
struct UBP_SASHologramAttackCh0400Component_C : UBP_SASHologramAttackBaseComponent_C {
	char pad_385[0x3]; // 0x385(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct TArray<struct FFHologramAnimationPlayData> PlayData; // 0x390(0x10)
	struct TArray<struct FFHologramAnimationPlayData> FlyingPlayData; // 0x3a0(0x10)

	void IsFlyingFinish(bool bFlying); // Function BP_SASHologramAttackCh0400Component.BP_SASHologramAttackCh0400Component_C.IsFlyingFinish // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetAnimationPlayData(struct TArray<struct FFHologramAnimationPlayData> Data); // Function BP_SASHologramAttackCh0400Component.BP_SASHologramAttackCh0400Component_C.GetAnimationPlayData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnHologramHitParticle(struct FHCHitResult HitResult, bool bDummy); // Function BP_SASHologramAttackCh0400Component.BP_SASHologramAttackCh0400Component_C.SpawnHologramHitParticle // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetChargeMove(); // Function BP_SASHologramAttackCh0400Component.BP_SASHologramAttackCh0400Component_C.SetChargeMove // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_SASHologramAttackCh0400Component(int32_t EntryPoint); // Function BP_SASHologramAttackCh0400Component.BP_SASHologramAttackCh0400Component_C.ExecuteUbergraph_BP_SASHologramAttackCh0400Component // (Final|UbergraphFunction) // @ game+0x1685580
};

