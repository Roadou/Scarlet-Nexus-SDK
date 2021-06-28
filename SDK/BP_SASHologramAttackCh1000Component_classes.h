// BlueprintGeneratedClass BP_SASHologramAttackCh1000Component.BP_SASHologramAttackCh1000Component_C
// Size: 0x3c0 (Inherited: 0x385)
struct UBP_SASHologramAttackCh1000Component_C : UBP_SASHologramAttackBaseComponent_C {
	char pad_385[0x3]; // 0x385(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct TArray<struct FFHologramAnimationPlayData> PlayData; // 0x390(0x10)
	struct TArray<struct FFHologramAnimationPlayData> FlyingPlayData; // 0x3a0(0x10)
	bool bSetAccelerator; // 0x3b0(0x01)
	char pad_3B1[0x3]; // 0x3b1(0x03)
	struct FAcceleratorParam AcceleratorParam; // 0x3b4(0x0c)

	void DoPlayEndMontage(bool bFlying); // Function BP_SASHologramAttackCh1000Component.BP_SASHologramAttackCh1000Component_C.DoPlayEndMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsFlyingFinish(bool bFlying); // Function BP_SASHologramAttackCh1000Component.BP_SASHologramAttackCh1000Component_C.IsFlyingFinish // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void OnAttackNotify(int32_t Param); // Function BP_SASHologramAttackCh1000Component.BP_SASHologramAttackCh1000Component_C.OnAttackNotify // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AcceleratorEnd(); // Function BP_SASHologramAttackCh1000Component.BP_SASHologramAttackCh1000Component_C.AcceleratorEnd // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoEndAttack(bool bDummy); // Function BP_SASHologramAttackCh1000Component.BP_SASHologramAttackCh1000Component_C.DoEndAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckStartAttack(float DeltaTime); // Function BP_SASHologramAttackCh1000Component.BP_SASHologramAttackCh1000Component_C.CheckStartAttack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAnimationPlayData(struct TArray<struct FFHologramAnimationPlayData> Data); // Function BP_SASHologramAttackCh1000Component.BP_SASHologramAttackCh1000Component_C.GetAnimationPlayData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_SASHologramAttackCh1000Component.BP_SASHologramAttackCh1000Component_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_SASHologramAttackCh1000Component(int32_t EntryPoint); // Function BP_SASHologramAttackCh1000Component.BP_SASHologramAttackCh1000Component_C.ExecuteUbergraph_BP_SASHologramAttackCh1000Component // (Final|UbergraphFunction) // @ game+0x1685580
};

