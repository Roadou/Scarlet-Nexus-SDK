// BlueprintGeneratedClass BP_em0100.BP_em0100_C
// Size: 0x22f8 (Inherited: 0x22c1)
struct ABP_em0100_C : ABP_em0100Base_C {
	char pad_22C1[0x7]; // 0x22c1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x22c8(0x08)
	struct UCapsuleComponent* Capsule2; // 0x22d0(0x08)
	struct UBP_Param_em0100_C* BP_Param_em0100; // 0x22d8(0x08)
	struct FGameTimer TransChangeTimer; // 0x22e0(0x0c)
	bool StartNoArmor; // 0x22ec(0x01)
	char pad_22ED[0x3]; // 0x22ed(0x03)
	struct UAnimMontage* DeadMontage2Leg; // 0x22f0(0x08)

	void GetET_StopWaitMontage(struct UAnimMontage* WaitMontage); // Function BP_em0100.BP_em0100_C.GetET_StopWaitMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDeadMontage(bool bEnableConsiderFlag); // Function BP_em0100.BP_em0100_C.SetDeadMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetShell(); // Function BP_em0100.BP_em0100_C.ResetShell // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetRowNameAnimScaleHitStop(enum class EnemyDamageAnimKind DamageAnimKind, struct FName RowName); // Function BP_em0100.BP_em0100_C.GetRowNameAnimScaleHitStop // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AreaOutResetParam(); // Function BP_em0100.BP_em0100_C.AreaOutResetParam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ActionAfterRush(bool IsSuccessProbability, bool IsNear); // Function BP_em0100.BP_em0100_C.ActionAfterRush // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStartHideArmor(bool dummy); // Function BP_em0100.BP_em0100_C.OnStartHideArmor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CallFuncDamageDownStart(bool dummy); // Function BP_em0100.BP_em0100_C.CallFuncDamageDownStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUniqueSeeWeak(bool on, bool Dammy); // Function BP_em0100.BP_em0100_C.SetUniqueSeeWeak // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateArmorModel(bool dummy); // Function BP_em0100.BP_em0100_C.CreateArmorModel // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsUniqueDownCondition(struct FRotator Rot, struct FVector hitPosition, struct FVector HitDir, struct UPrimitiveComponent* Primitive, bool PsychicObjectCombo, struct FHCSkillCommonInfo skill, struct AActor* attacker, bool bDown); // Function BP_em0100.BP_em0100_C.IsUniqueDownCondition // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetKeepOutAreaWastes(float Value); // Function BP_em0100.BP_em0100_C.GetKeepOutAreaWastes // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void StartTransTimer(bool dummy); // Function BP_em0100.BP_em0100_C.StartTransTimer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CanTrans(bool Result); // Function BP_em0100.BP_em0100_C.CanTrans // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void MainTick(float DeltaSeconds, bool dummy); // Function BP_em0100.BP_em0100_C.MainTick // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_em0100.BP_em0100_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_em0100.BP_em0100_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_em0100(int32_t EntryPoint); // Function BP_em0100.BP_em0100_C.ExecuteUbergraph_BP_em0100 // (Final|UbergraphFunction) // @ game+0x1685580
};

