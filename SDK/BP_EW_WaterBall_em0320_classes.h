// BlueprintGeneratedClass BP_EW_WaterBall_em0320.BP_EW_WaterBall_em0320_C
// Size: 0x750 (Inherited: 0x6f0)
struct ABP_EW_WaterBall_em0320_C : ABP_Enemy_Weapon_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6f0(0x08)
	float ElapsedTime; // 0x6f8(0x04)
	struct FVector CreateLocation; // 0x6fc(0x0c)
	struct FVector PreLocation; // 0x708(0x0c)
	float Speed; // 0x714(0x04)
	struct FVector FireTargetLocation; // 0x718(0x0c)
	struct FVector FireDirection; // 0x724(0x0c)
	struct UParticleSystem* PlayerHitEffect; // 0x730(0x08)
	struct UParticleSystem* FloorHitEffect; // 0x738(0x08)
	struct USoundAtomCue* HitSoundPlayer; // 0x740(0x08)
	struct FName SkillName; // 0x748(0x08)

	void ProjectileHitProcess(bool IsHitPlayer, struct FVector HitLocation, struct FVector HitNormal, bool NewParam); // Function BP_EW_WaterBall_em0320.BP_EW_WaterBall_em0320_C.ProjectileHitProcess // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateBomber(struct FVector HitLocation); // Function BP_EW_WaterBall_em0320.BP_EW_WaterBall_em0320_C.CreateBomber // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEffectRotation(bool dummy); // Function BP_EW_WaterBall_em0320.BP_EW_WaterBall_em0320_C.SetEffectRotation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWeaponVisibility(bool bVisible, bool dummy); // Function BP_EW_WaterBall_em0320.BP_EW_WaterBall_em0320_C.SetWeaponVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitWeapon(bool dummy); // Function BP_EW_WaterBall_em0320.BP_EW_WaterBall_em0320_C.InitWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnHitAttack(struct FHCHitResult HitResult, bool Result); // Function BP_EW_WaterBall_em0320.BP_EW_WaterBall_em0320_C.OnHitAttack // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MoveUpdate(float DeltaSec, bool dummy); // Function BP_EW_WaterBall_em0320.BP_EW_WaterBall_em0320_C.MoveUpdate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void HitProcess(struct FVector HitLocation, struct FVector HitNormal, bool IsHitPlayer); // Function BP_EW_WaterBall_em0320.BP_EW_WaterBall_em0320_C.HitProcess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(float DeltaSec); // Function BP_EW_WaterBall_em0320.BP_EW_WaterBall_em0320_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EW_WaterBall_em0320.BP_EW_WaterBall_em0320_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EW_WaterBall_em0320.BP_EW_WaterBall_em0320_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void CreateAttackCollosion(struct UDataTable* DataTable, struct FName SkillName, struct AActor* Owner, float Timer, struct FVector Location); // Function BP_EW_WaterBall_em0320.BP_EW_WaterBall_em0320_C.CreateAttackCollosion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EW_WaterBall_em0320(int32_t EntryPoint); // Function BP_EW_WaterBall_em0320.BP_EW_WaterBall_em0320_C.ExecuteUbergraph_BP_EW_WaterBall_em0320 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

