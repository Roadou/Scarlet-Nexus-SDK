// BlueprintGeneratedClass BP_PlayerHardenComponent.BP_PlayerHardenComponent_C
// Size: 0x180 (Inherited: 0xc0)
struct UBP_PlayerHardenComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct ARsBattleHero_C* OwnerHero; // 0xc8(0x08)
	struct ARSBattlePlayer_C* OwnerPlayer; // 0xd0(0x08)
	struct USkeletalMeshComponent* OwnerMesh; // 0xd8(0x08)
	float HardenLerpTime; // 0xe0(0x04)
	bool bHardenOn; // 0xe4(0x01)
	bool bHardenLerp; // 0xe5(0x01)
	char pad_E6[0x2]; // 0xe6(0x02)
	float HardenLerpTimerOld; // 0xe8(0x04)
	struct FGameTimer HardenLerpTimer; // 0xec(0x0c)
	float HardenRate; // 0xf8(0x04)
	float HardenRateStt; // 0xfc(0x04)
	float HardenRateEnd; // 0x100(0x04)
	bool bDamage; // 0x104(0x01)
	bool bDamageRise; // 0x105(0x01)
	char pad_106[0x2]; // 0x106(0x02)
	float RiseTime; // 0x108(0x04)
	float DropTime; // 0x10c(0x04)
	float RateMin; // 0x110(0x04)
	float RateMax; // 0x114(0x04)
	float radiusMin; // 0x118(0x04)
	float RadiusMax; // 0x11c(0x04)
	float DamageRate; // 0x120(0x04)
	bool bInitParam; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
	float AutoHardenCoolDownTime; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct TArray<struct FName> TickRefList; // 0x130(0x10)
	bool bGuardBadStatus; // 0x140(0x01)
	char pad_141[0x3]; // 0x141(0x03)
	struct FGameTimer AutoHardenTimer; // 0x144(0x0c)
	struct FGameTimer CoolDownTimer; // 0x150(0x0c)
	bool bHardenFistOn; // 0x15c(0x01)
	bool bHardenFistLerp; // 0x15d(0x01)
	char pad_15E[0x2]; // 0x15e(0x02)
	struct FGameTimer HardenFistTimer; // 0x160(0x0c)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct UCurveFloat* HardenStartEmissivePowCurve; // 0x170(0x08)
	struct UHardenStartParameter* HardenStartDataAsset; // 0x178(0x08)

	void SetDamageEffectType(bool bHarden); // Function BP_PlayerHardenComponent.BP_PlayerHardenComponent_C.SetDamageEffectType // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SubRemainTime(float SubTime); // Function BP_PlayerHardenComponent.BP_PlayerHardenComponent_C.SubRemainTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void initParam(); // Function BP_PlayerHardenComponent.BP_PlayerHardenComponent_C.initParam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDisplayTickRef(); // Function BP_PlayerHardenComponent.BP_PlayerHardenComponent_C.DebugDisplayTickRef // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTickRef(bool flag in, struct FName ref name in); // Function BP_PlayerHardenComponent.BP_PlayerHardenComponent_C.SetTickRef // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAutoHarden(); // Function BP_PlayerHardenComponent.BP_PlayerHardenComponent_C.UpdateAutoHarden // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateHardenDamage(); // Function BP_PlayerHardenComponent.BP_PlayerHardenComponent_C.UpdateHardenDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateHardenFist(); // Function BP_PlayerHardenComponent.BP_PlayerHardenComponent_C.UpdateHardenFist // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateHardenBody(); // Function BP_PlayerHardenComponent.BP_PlayerHardenComponent_C.UpdateHardenBody // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHardenFist(bool fist on in); // Function BP_PlayerHardenComponent.BP_PlayerHardenComponent_C.SetHardenFist // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDisplayState(); // Function BP_PlayerHardenComponent.BP_PlayerHardenComponent_C.DebugDisplayState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateSystem(); // Function BP_PlayerHardenComponent.BP_PlayerHardenComponent_C.UpdateSystem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckAutoHarden(bool return); // Function BP_PlayerHardenComponent.BP_PlayerHardenComponent_C.CheckAutoHarden // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void isGuardBadStatus(bool return); // Function BP_PlayerHardenComponent.BP_PlayerHardenComponent_C.isGuardBadStatus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetSasHarden(bool harden on in); // Function BP_PlayerHardenComponent.BP_PlayerHardenComponent_C.SetSasHarden // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHardenDamage(); // Function BP_PlayerHardenComponent.BP_PlayerHardenComponent_C.SetHardenDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetHardenDamageCutRate(float damage cut rate); // Function BP_PlayerHardenComponent.BP_PlayerHardenComponent_C.GetHardenDamageCutRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsHarden(bool return); // Function BP_PlayerHardenComponent.BP_PlayerHardenComponent_C.IsHarden // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetHarden(bool harden on in, float harden time in); // Function BP_PlayerHardenComponent.BP_PlayerHardenComponent_C.SetHarden // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(); // Function BP_PlayerHardenComponent.BP_PlayerHardenComponent_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function BP_PlayerHardenComponent.BP_PlayerHardenComponent_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_PlayerHardenComponent.BP_PlayerHardenComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_PlayerHardenComponent.BP_PlayerHardenComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PlayerHardenComponent(int32_t EntryPoint); // Function BP_PlayerHardenComponent.BP_PlayerHardenComponent_C.ExecuteUbergraph_BP_PlayerHardenComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

