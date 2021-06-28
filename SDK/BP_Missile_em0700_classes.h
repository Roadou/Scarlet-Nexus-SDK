// BlueprintGeneratedClass BP_Missile_em0700.BP_Missile_em0700_C
// Size: 0x745 (Inherited: 0x6f0)
struct ABP_Missile_em0700_C : ABP_Enemy_Weapon_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6f0(0x08)
	struct UParticleSystemComponent* HormingTrail; // 0x6f8(0x08)
	struct USkeletalMeshComponent* MissileMesh; // 0x700(0x08)
	float Speed; // 0x708(0x04)
	char pad_70C[0x4]; // 0x70c(0x04)
	struct AActor* TargetActor; // 0x710(0x08)
	bool IsHit; // 0x718(0x01)
	char pad_719[0x3]; // 0x719(0x03)
	float MoveTimer; // 0x71c(0x04)
	bool IsTargetFound; // 0x720(0x01)
	char pad_721[0x3]; // 0x721(0x03)
	struct FVector FireDir; // 0x724(0x0c)
	struct FVector ActorOldLocation; // 0x730(0x0c)
	float HormingPower; // 0x73c(0x04)
	float MissileSpeed; // 0x740(0x04)
	bool bNotBomb; // 0x744(0x01)

	void SetWeaponVisibility(bool bVisible, bool dummy); // Function BP_Missile_em0700.BP_Missile_em0700_C.SetWeaponVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCustomMove(float DeltaTime, bool return); // Function BP_Missile_em0700.BP_Missile_em0700_C.UpdateCustomMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitCustomMove(bool return); // Function BP_Missile_em0700.BP_Missile_em0700_C.InitCustomMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnHitAttack(struct FHCHitResult HitResult, bool Result); // Function BP_Missile_em0700.BP_Missile_em0700_C.OnHitAttack // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void HitProcess(struct FVector HitLocation, struct FVector HitNormal, bool IsHitPlayer); // Function BP_Missile_em0700.BP_Missile_em0700_C.HitProcess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(float DeltaSec); // Function BP_Missile_em0700.BP_Missile_em0700_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_Missile_em0700.BP_Missile_em0700_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_Missile_em0700.BP_Missile_em0700_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void CreateAttackCollosion(struct UDataTable* DataTable, struct FName SkillName, struct AActor* Owner, float Timer, struct FVector Location); // Function BP_Missile_em0700.BP_Missile_em0700_C.CreateAttackCollosion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Missile_em0700(int32_t EntryPoint); // Function BP_Missile_em0700.BP_Missile_em0700_C.ExecuteUbergraph_BP_Missile_em0700 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

