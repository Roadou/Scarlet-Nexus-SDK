// BlueprintGeneratedClass BP_EW_Scatter_em0300.BP_EW_Scatter_em0300_C
// Size: 0x735 (Inherited: 0x6f0)
struct ABP_EW_Scatter_em0300_C : ABP_Enemy_Weapon_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6f0(0x08)
	float TargetTime; // 0x6f8(0x04)
	float TargetTimeLimit; // 0x6fc(0x04)
	float TargetTimer; // 0x700(0x04)
	float Speed; // 0x704(0x04)
	float RandomSpeed; // 0x708(0x04)
	float Height; // 0x70c(0x04)
	bool IsDead; // 0x710(0x01)
	char pad_711[0x7]; // 0x711(0x07)
	struct UAnimMontage* RunMontage; // 0x718(0x08)
	float interpSpeed; // 0x720(0x04)
	char pad_724[0x4]; // 0x724(0x04)
	struct UParticleSystem* VanishEffectEm0301; // 0x728(0x08)
	float CurrentSpeed; // 0x730(0x04)
	bool OnPsychicObjSpawned; // 0x734(0x01)

	void OnSpawnOnPsychicObj(); // Function BP_EW_Scatter_em0300.BP_EW_Scatter_em0300_C.OnSpawnOnPsychicObj // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateFall(float DeltaSec); // Function BP_EW_Scatter_em0300.BP_EW_Scatter_em0300_C.UpdateFall // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartVanishEffect(struct FVector HitLocation, struct FVector HitNormal, bool dummy); // Function BP_EW_Scatter_em0300.BP_EW_Scatter_em0300_C.StartVanishEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitWeapon(bool dummy); // Function BP_EW_Scatter_em0300.BP_EW_Scatter_em0300_C.InitWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCustomMove(float DeltaTime, bool return); // Function BP_EW_Scatter_em0300.BP_EW_Scatter_em0300_C.UpdateCustomMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitCustomMove(bool return); // Function BP_EW_Scatter_em0300.BP_EW_Scatter_em0300_C.InitCustomMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnHitAttack(struct FHCHitResult HitResult, bool Result); // Function BP_EW_Scatter_em0300.BP_EW_Scatter_em0300_C.OnHitAttack // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnd(); // Function BP_EW_Scatter_em0300.BP_EW_Scatter_em0300_C.SetEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsLength(bool return); // Function BP_EW_Scatter_em0300.BP_EW_Scatter_em0300_C.IsLength // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetRotation(float sec); // Function BP_EW_Scatter_em0300.BP_EW_Scatter_em0300_C.SetRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateForward(float sec); // Function BP_EW_Scatter_em0300.BP_EW_Scatter_em0300_C.UpdateForward // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EW_Scatter_em0300.BP_EW_Scatter_em0300_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EW_Scatter_em0300.BP_EW_Scatter_em0300_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void CreateAttackCollosion(struct UDataTable* DataTable, struct FName SkillName, struct AActor* Owner, float Timer, struct FVector Location); // Function BP_EW_Scatter_em0300.BP_EW_Scatter_em0300_C.CreateAttackCollosion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EW_Scatter_em0300(int32_t EntryPoint); // Function BP_EW_Scatter_em0300.BP_EW_Scatter_em0300_C.ExecuteUbergraph_BP_EW_Scatter_em0300 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

