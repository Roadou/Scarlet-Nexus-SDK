// BlueprintGeneratedClass BP_WeaponMaterialAccessorComponent.BP_WeaponMaterialAccessorComponent_C
// Size: 0x10ea (Inherited: 0x1058)
struct UBP_WeaponMaterialAccessorComponent_C : UBP_PlayerMaterialAccessorComponent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1058(0x08)
	struct FMACVariableFloat MatWeaponEmissive; // 0x1060(0x28)
	enum class EMaterialAccessorSetupID MatWeaponEmissiveOverride; // 0x1088(0x01)
	char pad_1089[0x7]; // 0x1089(0x07)
	struct FMACVariableFloat MatWeaponNp1100Chakram; // 0x1090(0x28)
	enum class EMaterialAccessorSetupID MatWeaponNp1100ChakramOverride; // 0x10b8(0x01)
	char pad_10B9[0x7]; // 0x10b9(0x07)
	struct FMACVariableFloat MatWeaponPsychicEmissive; // 0x10c0(0x28)
	enum class EMaterialAccessorSetupID MatWeaponPsychicEmissiveOverride; // 0x10e8(0x01)
	enum class E_SASKind MatWeaponPsychicEmissiveSASColor; // 0x10e9(0x01)

	void CopyMaterialParameterWeapon(struct UBP_WeaponMaterialAccessorComponent_C* SourceComponent); // Function BP_WeaponMaterialAccessorComponent.BP_WeaponMaterialAccessorComponent_C.CopyMaterialParameterWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetWeaponEmissive(float Emissive); // Function BP_WeaponMaterialAccessorComponent.BP_WeaponMaterialAccessorComponent_C.GetWeaponEmissive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void PrivateUpdateNp1100(); // Function BP_WeaponMaterialAccessorComponent.BP_WeaponMaterialAccessorComponent_C.PrivateUpdateNp1100 // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupMID(); // Function BP_WeaponMaterialAccessorComponent.BP_WeaponMaterialAccessorComponent_C.PrivateSetupMID // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdateWeaponEmissive(); // Function BP_WeaponMaterialAccessorComponent.BP_WeaponMaterialAccessorComponent_C.PrivateUpdateWeaponEmissive // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateInitialize(); // Function BP_WeaponMaterialAccessorComponent.BP_WeaponMaterialAccessorComponent_C.PrivateInitialize // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdateMaterial(); // Function BP_WeaponMaterialAccessorComponent.BP_WeaponMaterialAccessorComponent_C.PrivateUpdateMaterial // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateLeftHand(); // Function BP_WeaponMaterialAccessorComponent.BP_WeaponMaterialAccessorComponent_C.UpdateLeftHand // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupDefaultParameter(struct AActor* Player); // Function BP_WeaponMaterialAccessorComponent.BP_WeaponMaterialAccessorComponent_C.PrivateSetupDefaultParameter // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_WeaponMaterialAccessorComponent(int32_t EntryPoint); // Function BP_WeaponMaterialAccessorComponent.BP_WeaponMaterialAccessorComponent_C.ExecuteUbergraph_BP_WeaponMaterialAccessorComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

