// BlueprintGeneratedClass BP_WeaponBase_ch0200.BP_WeaponBase_ch0200_C
// Size: 0x440 (Inherited: 0x409)
struct ABP_WeaponBase_ch0200_C : ABP_WeaponBase_C {
	char pad_409[0x7]; // 0x409(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x410(0x08)
	enum class EPlayerComboPattern CurrentRangeParticlePattern; // 0x418(0x01)
	enum class EPlayerComboPattern SpawndRangeParticlePattern; // 0x419(0x01)
	bool bTargetInRange; // 0x41a(0x01)
	char pad_41B[0x5]; // 0x41b(0x05)
	struct TArray<struct FName> RangeParticleAttachList; // 0x420(0x10)
	struct TArray<struct URSParticleSystemComponentBase*> RangeParticleHandleList; // 0x430(0x10)

	void SetWeaponScaleWp0200(struct FVector InScale, bool bDummy); // Function BP_WeaponBase_ch0200.BP_WeaponBase_ch0200_C.SetWeaponScaleWp0200 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTargetInRange(bool bInRange, bool bDummy); // Function BP_WeaponBase_ch0200.BP_WeaponBase_ch0200_C.SetTargetInRange // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRangeParticleType(enum class EPlayerComboPattern ComboPattern, bool bDummy); // Function BP_WeaponBase_ch0200.BP_WeaponBase_ch0200_C.SetRangeParticleType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginRangeParticle(bool bDummy); // Function BP_WeaponBase_ch0200.BP_WeaponBase_ch0200_C.BeginRangeParticle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndRangeParticle(bool bDummy); // Function BP_WeaponBase_ch0200.BP_WeaponBase_ch0200_C.EndRangeParticle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void attach(struct ARSBattlePlayer_C* Owner, struct USceneComponent* Component, struct FName SocketName); // Function BP_WeaponBase_ch0200.BP_WeaponBase_ch0200_C.attach // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBattleEffect(bool bON); // Function BP_WeaponBase_ch0200.BP_WeaponBase_ch0200_C.SetBattleEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_WeaponBase_ch0200(int32_t EntryPoint); // Function BP_WeaponBase_ch0200.BP_WeaponBase_ch0200_C.ExecuteUbergraph_BP_WeaponBase_ch0200 // (Final|UbergraphFunction) // @ game+0x1685580
};

