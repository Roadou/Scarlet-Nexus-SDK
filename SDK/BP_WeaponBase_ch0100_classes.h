// BlueprintGeneratedClass BP_WeaponBase_ch0100.BP_WeaponBase_ch0100_C
// Size: 0x439 (Inherited: 0x409)
struct ABP_WeaponBase_ch0100_C : ABP_WeaponBase_C {
	char pad_409[0x7]; // 0x409(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x410(0x08)
	struct USkeletalMeshComponent* SheathMesh; // 0x418(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> SheathMeshMaterialInstanceArray; // 0x420(0x10)
	struct URSParticleSystemComponentBase* EffectHandle; // 0x430(0x08)
	enum class EPlayerComboPattern WeaponEffectType; // 0x438(0x01)

	void SetWeaponVisibility(bool bVisible); // Function BP_WeaponBase_ch0100.BP_WeaponBase_ch0100_C.SetWeaponVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetMaterialInstanceArray(); // Function BP_WeaponBase_ch0100.BP_WeaponBase_ch0100_C.ResetMaterialInstanceArray // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OffBattleEffect(); // Function BP_WeaponBase_ch0100.BP_WeaponBase_ch0100_C.OffBattleEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBattleEffect(); // Function BP_WeaponBase_ch0100.BP_WeaponBase_ch0100_C.OnBattleEffect // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetExtraMesh(struct TArray<struct USkeletalMeshComponent*> ExtraMesh); // Function BP_WeaponBase_ch0100.BP_WeaponBase_ch0100_C.GetExtraMesh // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetExtraMaterialInstanceArray(struct TArray<struct UMaterialInstanceDynamic*> MaterialInstance); // Function BP_WeaponBase_ch0100.BP_WeaponBase_ch0100_C.GetExtraMaterialInstanceArray // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAttachTransform(struct FTransform Transform); // Function BP_WeaponBase_ch0100.BP_WeaponBase_ch0100_C.GetAttachTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_WeaponBase_ch0100.BP_WeaponBase_ch0100_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void attach(struct ARSBattlePlayer_C* Owner, struct USceneComponent* Component, struct FName SocketName); // Function BP_WeaponBase_ch0100.BP_WeaponBase_ch0100_C.attach // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBattleEffect(bool bON); // Function BP_WeaponBase_ch0100.BP_WeaponBase_ch0100_C.SetBattleEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_WeaponBase_ch0100(int32_t EntryPoint); // Function BP_WeaponBase_ch0100.BP_WeaponBase_ch0100_C.ExecuteUbergraph_BP_WeaponBase_ch0100 // (Final|UbergraphFunction) // @ game+0x1685580
};

