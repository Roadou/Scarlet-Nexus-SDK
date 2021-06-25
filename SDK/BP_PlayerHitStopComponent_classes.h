// BlueprintGeneratedClass BP_PlayerHitStopComponent.BP_PlayerHitStopComponent_C
// Size: 0x169 (Inherited: 0xc0)
struct UBP_PlayerHitStopComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct FString WeakHitName; // 0xc8(0x10)
	float HitStopReturnSeconds; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct ARSBattlePlayer_C* mainPlayer; // 0xe0(0x08)
	struct UBP_PlayerFixParamater_C* FixParam; // 0xe8(0x08)
	bool IsHitStop; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	int32_t Priority; // 0xf4(0x04)
	float IgnoreHitStopSeconds; // 0xf8(0x04)
	float CurrentStartDelayTime; // 0xfc(0x04)
	enum class EPlayerHitStopType StartDelayHitType; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct AActor* StartDelayEnemy; // 0x108(0x08)
	float StartDelayHitStopSec; // 0x110(0x04)
	float StartDelayHitStopRate; // 0x114(0x04)
	bool StartDelayAllThrow; // 0x118(0x01)
	bool StartDelayTarget; // 0x119(0x01)
	bool IsStartDelay; // 0x11a(0x01)
	char pad_11B[0x5]; // 0x11b(0x05)
	struct FMulticastInlineDelegate BeginHitSlow; // 0x120(0x10)
	bool bSkipUpdate1Frame; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct UDataTable* HitSlowDataTable; // 0x138(0x08)
	struct UDataTable* HitSlowDelayTable; // 0x140(0x08)
	struct TArray<struct FName> HitSlowDataTableRowNames; // 0x148(0x10)
	struct TArray<struct FName> HitSlowDelayDataTableRowNames; // 0x158(0x10)
	bool StartSlowOnce; // 0x168(0x01)

	void PhysicsIdling(); // Function BP_PlayerHitStopComponent.BP_PlayerHitStopComponent_C.PhysicsIdling // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsHitStopPlaying(bool IsPlaying); // Function BP_PlayerHitStopComponent.BP_PlayerHitStopComponent_C.IsHitStopPlaying // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetHitSlowRowName(char Type, bool bDelayTable, struct FName RowName); // Function BP_PlayerHitStopComponent.BP_PlayerHitStopComponent_C.GetHitSlowRowName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void Initialize(); // Function BP_PlayerHitStopComponent.BP_PlayerHitStopComponent_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsStartCauseType(enum class EPlayerHitStopType HitSlowType, enum class HCHitStopCauseType CauseType, struct FHCHitResult HitResult, bool bStart); // Function BP_PlayerHitStopComponent.BP_PlayerHitStopComponent_C.IsStartCauseType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetParamByType(enum class EPlayerHitStopType Type, float second, float Rate, float DelayTime, int32_t Num); // Function BP_PlayerHitStopComponent.BP_PlayerHitStopComponent_C.GetParamByType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPsychicObjHitStopType(enum class HCSkillExtraType ExtraType, enum class EPlayerHitStopType HitStopType); // Function BP_PlayerHitStopComponent.BP_PlayerHitStopComponent_C.GetPsychicObjHitStopType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetStartDelay(enum class EPlayerHitStopType HitType, struct AActor* attacker, struct AActor* Enemy, bool IsAllThrow, enum class HCHitStopCauseType CauseType, bool bTargetIgnore, bool InPlaySlowOnce); // Function BP_PlayerHitStopComponent.BP_PlayerHitStopComponent_C.SetStartDelay // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearStartDelay(); // Function BP_PlayerHitStopComponent.BP_PlayerHitStopComponent_C.ClearStartDelay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPlayerDamageType(enum class EPlayerDamageKind DamageType, enum class EPlayerHitStopType HitStopType); // Function BP_PlayerHitStopComponent.BP_PlayerHitStopComponent_C.GetPlayerDamageType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetHitStopParam(enum class EPlayerHitStopType newType, enum class EPlayerHitStopType CurrentType, enum class EPlayerHitStopType SuccessType, bool IsSuccess, float Seconds, float Rate, float DelayTime); // Function BP_PlayerHitStopComponent.BP_PlayerHitStopComponent_C.GetHitStopParam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPriority(enum class EPlayerHitStopType Type, int32_t Priority); // Function BP_PlayerHitStopComponent.BP_PlayerHitStopComponent_C.GetPriority // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ForceEnd(); // Function BP_PlayerHitStopComponent.BP_PlayerHitStopComponent_C.ForceEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Clear(); // Function BP_PlayerHitStopComponent.BP_PlayerHitStopComponent_C.Clear // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Exit(); // Function BP_PlayerHitStopComponent.BP_PlayerHitStopComponent_C.Exit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsTargetLockCanHitStop(struct AActor* TargetActor, struct AActor* Enemy, struct AActor* attacker, bool IsTargetHitStop); // Function BP_PlayerHitStopComponent.BP_PlayerHitStopComponent_C.IsTargetLockCanHitStop // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartWeakHitStop(enum class EPlayerHitStopType HitType, struct AActor* Enemy, struct AActor* attacker, float HitStopSeconds, float HitStopRate, bool IsAllThrow, struct AActor* Player, bool IsTargetHitStop, bool InStartSlowOnce); // Function BP_PlayerHitStopComponent.BP_PlayerHitStopComponent_C.StartWeakHitStop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(float DeltaSeconds); // Function BP_PlayerHitStopComponent.BP_PlayerHitStopComponent_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_PlayerHitStopComponent.BP_PlayerHitStopComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_PlayerHitStopComponent.BP_PlayerHitStopComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void DelayOnceEnd(); // Function BP_PlayerHitStopComponent.BP_PlayerHitStopComponent_C.DelayOnceEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PlayerHitStopComponent(int32_t EntryPoint); // Function BP_PlayerHitStopComponent.BP_PlayerHitStopComponent_C.ExecuteUbergraph_BP_PlayerHitStopComponent // (Final|UbergraphFunction) // @ game+0x1685580
	void BeginHitSlow__DelegateSignature(); // Function BP_PlayerHitStopComponent.BP_PlayerHitStopComponent_C.BeginHitSlow__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

