// BlueprintGeneratedClass BP_SASHologramAttackCh0800Component.BP_SASHologramAttackCh0800Component_C
// Size: 0x3a8 (Inherited: 0x385)
struct UBP_SASHologramAttackCh0800Component_C : UBP_SASHologramAttackBaseComponent_C {
	char pad_385[0x3]; // 0x385(0x03)
	struct TArray<struct FFHologramAnimationPlayData> PlayData; // 0x388(0x10)
	struct TArray<struct FFHologramAnimationPlayData> FlyingPlayData; // 0x398(0x10)

	void GetAnimationPlayData(struct TArray<struct FFHologramAnimationPlayData> Data); // Function BP_SASHologramAttackCh0800Component.BP_SASHologramAttackCh0800Component_C.GetAnimationPlayData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};
