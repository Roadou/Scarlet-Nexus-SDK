// BlueprintGeneratedClass BP_EW_ElectricShot_em0710.BP_EW_ElectricShot_em0710_C
// Size: 0x73c (Inherited: 0x6f0)
struct ABP_EW_ElectricShot_em0710_C : ABP_Enemy_Weapon_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6f0(0x08)
	struct FVector TargetVector; // 0x6f8(0x0c)
	float MoveTimer; // 0x704(0x04)
	struct UCurveFloat* Curve; // 0x708(0x08)
	float Distance; // 0x710(0x04)
	struct FVector CreateLocation; // 0x714(0x0c)
	float checkDistance; // 0x720(0x04)
	float Speed; // 0x724(0x04)
	bool IsHit; // 0x728(0x01)
	char pad_729[0x7]; // 0x729(0x07)
	struct URSParticleSystemComponentBase* HitEffectHandle; // 0x730(0x08)
	float Range; // 0x738(0x04)

	void FinishWeapon(bool dummy); // Function BP_EW_ElectricShot_em0710.BP_EW_ElectricShot_em0710_C.FinishWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWeaponVisibility(bool bVisible, bool dummy); // Function BP_EW_ElectricShot_em0710.BP_EW_ElectricShot_em0710_C.SetWeaponVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnHitAttack(struct FHCHitResult HitResult, bool Result); // Function BP_EW_ElectricShot_em0710.BP_EW_ElectricShot_em0710_C.OnHitAttack // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void HitProcess(struct FVector HitLocation, struct FVector HitNormal, bool IsHitPlayer); // Function BP_EW_ElectricShot_em0710.BP_EW_ElectricShot_em0710_C.HitProcess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	float GetDistance(); // Function BP_EW_ElectricShot_em0710.BP_EW_ElectricShot_em0710_C.GetDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void Update(float sec); // Function BP_EW_ElectricShot_em0710.BP_EW_ElectricShot_em0710_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EW_ElectricShot_em0710.BP_EW_ElectricShot_em0710_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EW_ElectricShot_em0710.BP_EW_ElectricShot_em0710_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void CreateAttackCollosion(struct UDataTable* DataTable, struct FName SkillName, struct AActor* Owner, float Timer, struct FVector Location); // Function BP_EW_ElectricShot_em0710.BP_EW_ElectricShot_em0710_C.CreateAttackCollosion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EW_ElectricShot_em0710(int32_t EntryPoint); // Function BP_EW_ElectricShot_em0710.BP_EW_ElectricShot_em0710_C.ExecuteUbergraph_BP_EW_ElectricShot_em0710 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

