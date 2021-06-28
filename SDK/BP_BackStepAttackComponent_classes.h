// BlueprintGeneratedClass BP_BackStepAttackComponent.BP_BackStepAttackComponent_C
// Size: 0x1fc (Inherited: 0x1e8)
struct UBP_BackStepAttackComponent_C : USingleAttackComponent_C {
	bool bAdjustDistance; // 0x1e8(0x01)
	char pad_1E9[0x3]; // 0x1e9(0x03)
	float AdjustDistanceMin; // 0x1ec(0x04)
	float AdjustDistanceMax; // 0x1f0(0x04)
	float AdjustScaleDistanceMin; // 0x1f4(0x04)
	float AdjustScaleDistanceMax; // 0x1f8(0x04)

	void DoEndAttack(bool bDummy); // Function BP_BackStepAttackComponent.BP_BackStepAttackComponent_C.DoEndAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckStartAttack(float DeltaTime); // Function BP_BackStepAttackComponent.BP_BackStepAttackComponent_C.CheckStartAttack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableAttack(bool bEnable); // Function BP_BackStepAttackComponent.BP_BackStepAttackComponent_C.IsEnableAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
};

