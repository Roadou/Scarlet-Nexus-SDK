// BlueprintGeneratedClass BrainFieldChargeAttackComponent.BrainFieldChargeAttackComponent_C
// Size: 0x2f4 (Inherited: 0x2da)
struct UBrainFieldChargeAttackComponent_C : UChargeAttackComponent_C {
	char pad_2DA[0x6]; // 0x2da(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct ARsBattleHero_C* OwnerHero; // 0x2e8(0x08)
	int32_t DropSettingChargeLevel; // 0x2f0(0x04)

	void OnChangeChargeLevel(int32_t ChargeLevel, bool bDummy); // Function BrainFieldChargeAttackComponent.BrainFieldChargeAttackComponent_C.OnChangeChargeLevel // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BrainFieldChargeAttackComponent.BrainFieldChargeAttackComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void CancelCharge(); // Function BrainFieldChargeAttackComponent.BrainFieldChargeAttackComponent_C.CancelCharge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BrainFieldChargeAttackComponent(int32_t EntryPoint); // Function BrainFieldChargeAttackComponent.BrainFieldChargeAttackComponent_C.ExecuteUbergraph_BrainFieldChargeAttackComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

