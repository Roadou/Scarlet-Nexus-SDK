// BlueprintGeneratedClass BP_AssassinAttackComponent.BP_AssassinAttackComponent_C
// Size: 0x2e8 (Inherited: 0x2da)
struct UBP_AssassinAttackComponent_C : UChargeAttackComponent_C {
	char pad_2DA[0x6]; // 0x2da(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)

	void StartCharge(); // Function BP_AssassinAttackComponent.BP_AssassinAttackComponent_C.StartCharge // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoEndAttack(bool bDummy); // Function BP_AssassinAttackComponent.BP_AssassinAttackComponent_C.DoEndAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartAttack(int32_t AttackIndex); // Function BP_AssassinAttackComponent.BP_AssassinAttackComponent_C.StartAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableAttack(bool bEnable); // Function BP_AssassinAttackComponent.BP_AssassinAttackComponent_C.IsEnableAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void BindMaterialTick(); // Function BP_AssassinAttackComponent.BP_AssassinAttackComponent_C.BindMaterialTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindMaterialTick(); // Function BP_AssassinAttackComponent.BP_AssassinAttackComponent_C.UnbindMaterialTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MaterialTick(float DeltaSeconds); // Function BP_AssassinAttackComponent.BP_AssassinAttackComponent_C.MaterialTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_AssassinAttackComponent(int32_t EntryPoint); // Function BP_AssassinAttackComponent.BP_AssassinAttackComponent_C.ExecuteUbergraph_BP_AssassinAttackComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

