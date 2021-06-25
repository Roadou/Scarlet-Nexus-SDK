// BlueprintGeneratedClass BP_EnemyBattleLog.BP_EnemyBattleLog_C
// Size: 0x141 (Inherited: 0xc0)
struct UBP_EnemyBattleLog_C : UActorComponent {
	float ActiveTime; // 0xc0(0x04)
	bool EnableActiveTimer; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	struct FString Prefix; // 0xc8(0x10)
	struct TArray<struct FString> Tag; // 0xd8(0x10)
	bool bPrintToScScreen; // 0xe8(0x01)
	bool bPrintToLog; // 0xe9(0x01)
	char pad_EA[0x2]; // 0xea(0x02)
	struct FLinearColor TextColor; // 0xec(0x10)
	float Duration; // 0xfc(0x04)
	bool IsFlooded; // 0x100(0x01)
	bool IsOil; // 0x101(0x01)
	bool IsFlame; // 0x102(0x01)
	bool IsElectric; // 0x103(0x01)
	int32_t FloodedCount; // 0x104(0x04)
	int32_t OilCount; // 0x108(0x04)
	int32_t FlameCount; // 0x10c(0x04)
	int32_t ElectricCount; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct TArray<struct FFallbackStruct> DamageParam; // 0x118(0x10)
	int32_t FlameDamage; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct FString enemyName; // 0x130(0x10)
	bool IsDead; // 0x140(0x01)

	void SetEnemyName(struct FString Name, bool dummy); // Function BP_EnemyBattleLog.BP_EnemyBattleLog_C.SetEnemyName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MainTick(float DeltaSeconds, struct UEnemyScriptComponent* EnemyScript, struct UCharactersParameterComponent* CharactersParameter); // Function BP_EnemyBattleLog.BP_EnemyBattleLog_C.MainTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDamageParam(struct FHCHitResult HitResult, int32_t Damage, bool dummy); // Function BP_EnemyBattleLog.BP_EnemyBattleLog_C.SetDamageParam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OutputLog_Dead(bool dummy); // Function BP_EnemyBattleLog.BP_EnemyBattleLog_C.OutputLog_Dead // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OutputLog_DamageDown(bool dummy); // Function BP_EnemyBattleLog.BP_EnemyBattleLog_C.OutputLog_DamageDown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OutputLog_Reaction(bool IsSmall, bool dummy); // Function BP_EnemyBattleLog.BP_EnemyBattleLog_C.OutputLog_Reaction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OutputLog_BadState(struct UCharactersParameterComponent* CharactersParameter, bool dummy); // Function BP_EnemyBattleLog.BP_EnemyBattleLog_C.OutputLog_BadState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OutputLog_BrainCrash(bool dummy); // Function BP_EnemyBattleLog.BP_EnemyBattleLog_C.OutputLog_BrainCrash // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OutputLog_CrashChanceEnd(bool dummy); // Function BP_EnemyBattleLog.BP_EnemyBattleLog_C.OutputLog_CrashChanceEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OutputLog_CrashChanceStart(bool dummy); // Function BP_EnemyBattleLog.BP_EnemyBattleLog_C.OutputLog_CrashChanceStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OutputLog_ArmorBreak(bool dummy); // Function BP_EnemyBattleLog.BP_EnemyBattleLog_C.OutputLog_ArmorBreak // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OutputLog_Lost(bool dummy); // Function BP_EnemyBattleLog.BP_EnemyBattleLog_C.OutputLog_Lost // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OutputLog_Find(bool dummy); // Function BP_EnemyBattleLog.BP_EnemyBattleLog_C.OutputLog_Find // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetTimeString(struct FString TimeString); // Function BP_EnemyBattleLog.BP_EnemyBattleLog_C.GetTimeString // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetTagString(int32_t TagNo, struct FString tagString); // Function BP_EnemyBattleLog.BP_EnemyBattleLog_C.GetTagString // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CheckEnableOutput(bool IsEnable); // Function BP_EnemyBattleLog.BP_EnemyBattleLog_C.CheckEnableOutput // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OutputLog_Action(struct FString ActionName, bool dummy); // Function BP_EnemyBattleLog.BP_EnemyBattleLog_C.OutputLog_Action // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndActiveTimer(bool dummy); // Function BP_EnemyBattleLog.BP_EnemyBattleLog_C.EndActiveTimer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartActiveTimer(bool dummy); // Function BP_EnemyBattleLog.BP_EnemyBattleLog_C.StartActiveTimer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetActiveTimer(float DeltaSec, bool dummy); // Function BP_EnemyBattleLog.BP_EnemyBattleLog_C.SetActiveTimer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

