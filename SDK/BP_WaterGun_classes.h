// BlueprintGeneratedClass BP_WaterGun.BP_WaterGun_C
// Size: 0x742 (Inherited: 0x6f0)
struct ABP_WaterGun_C : ABP_Enemy_Weapon_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6f0(0x08)
	struct UBP_RSParticleSystemComponent_C* BP_RSParticleSystemComponent_Loop; // 0x6f8(0x08)
	struct UBP_RSParticleSystemComponent_C* PS_em0300_atk_Water_gun_hit; // 0x700(0x08)
	float UpdateTime; // 0x708(0x04)
	float UpdateTimer_1; // 0x70c(0x04)
	bool EndStart; // 0x710(0x01)
	bool IsEnd; // 0x711(0x01)
	char pad_712[0x2]; // 0x712(0x02)
	float BeamLengthStart; // 0x714(0x04)
	struct UParticleSystem* BeamEnd; // 0x718(0x08)
	struct UParticleSystemComponent* PS_em0300_atk_Water_gun_end; // 0x720(0x08)
	bool IsHitEffectStart; // 0x728(0x01)
	char pad_729[0x3]; // 0x729(0x03)
	struct FName RowName; // 0x72c(0x08)
	float JustDodgeTime; // 0x734(0x04)
	float LoopParticleStartSecond; // 0x738(0x04)
	float OffsetLenghth; // 0x73c(0x04)
	bool IsAttack; // 0x740(0x01)
	bool IsSeiling; // 0x741(0x01)

	void SetCeilingFlag(); // Function BP_WaterGun.BP_WaterGun_C.SetCeilingFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LineTraceIgnoreDeadCharacter(struct FVector Start, struct FVector End, struct TArray<enum class EObjectTypeQuery> ObjectType, struct FHitResult HitResult, bool Hit); // Function BP_WaterGun.BP_WaterGun_C.LineTraceIgnoreDeadCharacter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAttackCollision(); // Function BP_WaterGun.BP_WaterGun_C.UpdateAttackCollision // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCollision(bool Enable); // Function BP_WaterGun.BP_WaterGun_C.SetCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FinishWeapon(bool dummy); // Function BP_WaterGun.BP_WaterGun_C.FinishWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update Collision Extra Type(struct UDataTable* DataTable, struct FName SkillName); // Function BP_WaterGun.BP_WaterGun_C.Update Collision Extra Type // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEffectEmitterEnable(struct URSParticleSystemComponentBase* Particle, bool NewEnableState); // Function BP_WaterGun.BP_WaterGun_C.SetEffectEmitterEnable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitWeapon(bool dummy); // Function BP_WaterGun.BP_WaterGun_C.InitWeapon // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBeamLength(float Length, struct UParticleSystemComponent* Effect); // Function BP_WaterGun.BP_WaterGun_C.SetBeamLength // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(float Timer); // Function BP_WaterGun.BP_WaterGun_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_WaterGun.BP_WaterGun_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_WaterGun.BP_WaterGun_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void CreateAttackCollosion(struct UDataTable* DataTable, struct FName SkillName, struct AActor* Owner, float Timer, struct FVector Location); // Function BP_WaterGun.BP_WaterGun_C.CreateAttackCollosion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_WaterGun(int32_t EntryPoint); // Function BP_WaterGun.BP_WaterGun_C.ExecuteUbergraph_BP_WaterGun // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

