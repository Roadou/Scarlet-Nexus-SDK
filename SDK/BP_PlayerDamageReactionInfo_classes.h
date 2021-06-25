// BlueprintGeneratedClass BP_PlayerDamageReactionInfo.BP_PlayerDamageReactionInfo_C
// Size: 0x168 (Inherited: 0x110)
struct UBP_PlayerDamageReactionInfo_C : UPlayerDamageReactionInfoBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x110(0x08)
	enum class EPlayerDamageKind damageKind_1; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	struct FVector DamageDir_1; // 0x11c(0x0c)
	struct ARSBattlePlayer_C* OwnerPlayer; // 0x128(0x08)
	bool bAddDamage_1; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct AActor* DamageAttacker_1; // 0x138(0x08)
	enum class HCHitStopCauseType HitStopCauseType_1; // 0x140(0x01)
	char pad_141[0x3]; // 0x141(0x03)
	float FloatingPower_1; // 0x144(0x04)
	struct FRotator FloatingAngle_1; // 0x148(0x0c)
	enum class HCSkillAttackType AttackType_1; // 0x154(0x01)
	char pad_155[0x3]; // 0x155(0x03)
	int32_t BadStateFlag_1; // 0x158(0x04)
	float CrashAccessDelay; // 0x15c(0x04)
	struct UBP_PlayerHitStopComponent_C* HitStopComp; // 0x160(0x08)

	bool StartEnpcDamageMove_BPImplement(struct FVector DamageDir, float Power, bool DeadMove); // Function BP_PlayerDamageReactionInfo.BP_PlayerDamageReactionInfo_C.StartEnpcDamageMove_BPImplement // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool BrainCrashAccess_CallFromCPP(); // Function BP_PlayerDamageReactionInfo.BP_PlayerDamageReactionInfo_C.BrainCrashAccess_CallFromCPP // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool StartEnemyAddDamageShake_BPImplement(bool bTriggerAttack); // Function BP_PlayerDamageReactionInfo.BP_PlayerDamageReactionInfo_C.StartEnemyAddDamageShake_BPImplement // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckFinishMetamorphosis_BPImplement(struct UPlayerENpcBaseComponent* ENpcComp, enum class EPlayerDamageKind InDamageKind, bool bFront); // Function BP_PlayerDamageReactionInfo.BP_PlayerDamageReactionInfo_C.CheckFinishMetamorphosis_BPImplement // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAerialDamage(bool bAerial); // Function BP_PlayerDamageReactionInfo.BP_PlayerDamageReactionInfo_C.IsAerialDamage // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetDamageReaction(enum class EPlayerDamageKind damageKind); // Function BP_PlayerDamageReactionInfo.BP_PlayerDamageReactionInfo_C.SetDamageReaction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDeadDamage(bool bBrainFieldTimeUp); // Function BP_PlayerDamageReactionInfo.BP_PlayerDamageReactionInfo_C.SetDeadDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckReaction(bool InReactionChance, bool InForceBlow, bool InForceReactionL, bool InLaunchAttack, bool InForceLaunch, bool InJustDodgeDown, bool InCheckWInce, float InWinceAccumulation, float InWinceResistance, float InKnockBackAccumulation, float InKnockBackResistance, float InDownAccumulation, float InDownResistance, struct FVector InDamageDir, int32_t InBadStateFlag, struct FRotator InFloatingAngle, bool InPsychicObjectUniqueReaction, enum class EPlayerDamageKind Damage); // Function BP_PlayerDamageReactionInfo.BP_PlayerDamageReactionInfo_C.CheckReaction // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetBrainFieldWarning(bool bTimeUp); // Function BP_PlayerDamageReactionInfo.BP_PlayerDamageReactionInfo_C.SetBrainFieldWarning // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAddDamage(bool bAddDamage); // Function BP_PlayerDamageReactionInfo.BP_PlayerDamageReactionInfo_C.IsAddDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void ClearAddDamage(); // Function BP_PlayerDamageReactionInfo.BP_PlayerDamageReactionInfo_C.ClearAddDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsBlow(bool bBlow); // Function BP_PlayerDamageReactionInfo.BP_PlayerDamageReactionInfo_C.IsBlow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsExistDamage(bool bExist); // Function BP_PlayerDamageReactionInfo.BP_PlayerDamageReactionInfo_C.IsExistDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void Clear(); // Function BP_PlayerDamageReactionInfo.BP_PlayerDamageReactionInfo_C.Clear // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDamageReaction(struct FHCHitResult HitResult); // Function BP_PlayerDamageReactionInfo.BP_PlayerDamageReactionInfo_C.UpdateDamageReaction // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetDamageReaction(enum class EPlayerDamageKind ReactionType); // Function BP_PlayerDamageReactionInfo.BP_PlayerDamageReactionInfo_C.GetDamageReaction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_PlayerDamageReactionInfo.BP_PlayerDamageReactionInfo_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_PlayerDamageReactionInfo.BP_PlayerDamageReactionInfo_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void BrainCrashAccess(); // Function BP_PlayerDamageReactionInfo.BP_PlayerDamageReactionInfo_C.BrainCrashAccess // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PlayerDamageReactionInfo(int32_t EntryPoint); // Function BP_PlayerDamageReactionInfo.BP_PlayerDamageReactionInfo_C.ExecuteUbergraph_BP_PlayerDamageReactionInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

