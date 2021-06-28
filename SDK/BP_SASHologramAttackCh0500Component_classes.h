// BlueprintGeneratedClass BP_SASHologramAttackCh0500Component.BP_SASHologramAttackCh0500Component_C
// Size: 0x3b8 (Inherited: 0x385)
struct UBP_SASHologramAttackCh0500Component_C : UBP_SASHologramAttackBaseComponent_C {
	char pad_385[0x3]; // 0x385(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct FName SeeThroughClaimantName; // 0x390(0x08)
	struct TArray<struct FFHologramAnimationPlayData> PlayData; // 0x398(0x10)
	struct TArray<struct FFHologramAnimationPlayData> FlyingPlayData; // 0x3a8(0x10)

	void GetAnimationPlayData(struct TArray<struct FFHologramAnimationPlayData> Data); // Function BP_SASHologramAttackCh0500Component.BP_SASHologramAttackCh0500Component_C.GetAnimationPlayData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnHologramHitParticle(struct FHCHitResult HitResult, bool bDummy); // Function BP_SASHologramAttackCh0500Component.BP_SASHologramAttackCh0500Component_C.SpawnHologramHitParticle // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndAttack(bool dummy); // Function BP_SASHologramAttackCh0500Component.BP_SASHologramAttackCh0500Component_C.EndAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckStartAttack(float DeltaTime); // Function BP_SASHologramAttackCh0500Component.BP_SASHologramAttackCh0500Component_C.CheckStartAttack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnHologramOff(); // Function BP_SASHologramAttackCh0500Component.BP_SASHologramAttackCh0500Component_C.OnHologramOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_SASHologramAttackCh0500Component(int32_t EntryPoint); // Function BP_SASHologramAttackCh0500Component.BP_SASHologramAttackCh0500Component_C.ExecuteUbergraph_BP_SASHologramAttackCh0500Component // (Final|UbergraphFunction) // @ game+0x1685580
};

