// BlueprintGeneratedClass BP_SASRecastGauge.BP_SASRecastGauge_C
// Size: 0x140 (Inherited: 0xc0)
struct UBP_SASRecastGauge_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct TArray<struct UDataTable*> SASDataTable; // 0xc8(0x10)
	struct TArray<enum class E_SASKind> SasKind; // 0xd8(0x10)
	struct TArray<struct FGameTimer> RecastTimer; // 0xe8(0x10)
	struct ARSBattlePlayer_C* OwnerPlayer; // 0xf8(0x08)
	int32_t SASSetIndex; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct TArray<struct FGameTimer> DelayTimer; // 0x108(0x10)
	float Param_DelayRecastTime; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct TArray<struct FName> PauseClaimantList; // 0x120(0x10)
	float Param_RecastRateSASSttack1; // 0x130(0x04)
	float Param_RecastRateSASSttack2; // 0x134(0x04)
	float Param_RecastRateSASSttack3; // 0x138(0x04)
	float Param_RecastRateSASSttack4; // 0x13c(0x04)

	void IsValidSet(int32_t SetIndex, bool bValid); // Function BP_SASRecastGauge.BP_SASRecastGauge_C.IsValidSet // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentGaugeRateFromSAS(enum class E_SASKind kind, float SASGaugeRate); // Function BP_SASRecastGauge.BP_SASRecastGauge_C.GetCurrentGaugeRateFromSAS // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetButtonFromSAS(enum class E_SASKind kind, bool bFind, enum class E_SASButton Button); // Function BP_SASRecastGauge.BP_SASRecastGauge_C.GetButtonFromSAS // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPauseRecastGauge(bool bPause, struct FName ClaimantName); // Function BP_SASRecastGauge.BP_SASRecastGauge_C.SetPauseRecastGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBeginSAS(enum class E_SASButton ButtonKindIn); // Function BP_SASRecastGauge.BP_SASRecastGauge_C.OnBeginSAS // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddPercentRecastGauge(enum class E_SASButton ButtonKindIn, float RecastPecent); // Function BP_SASRecastGauge.BP_SASRecastGauge_C.AddPercentRecastGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSASSetIndex(int32_t SASSetIndex); // Function BP_SASRecastGauge.BP_SASRecastGauge_C.GetSASSetIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetButtonDown(enum class E_SASButton Button); // Function BP_SASRecastGauge.BP_SASRecastGauge_C.GetButtonDown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetButtonUp(enum class E_SASButton Button); // Function BP_SASRecastGauge.BP_SASRecastGauge_C.GetButtonUp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetButtonRight(enum class E_SASButton Button); // Function BP_SASRecastGauge.BP_SASRecastGauge_C.GetButtonRight // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetButtonLeft(enum class E_SASButton Button); // Function BP_SASRecastGauge.BP_SASRecastGauge_C.GetButtonLeft // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void NextSASSset(); // Function BP_SASRecastGauge.BP_SASRecastGauge_C.NextSASSset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeSASSet(int32_t Index); // Function BP_SASRecastGauge.BP_SASRecastGauge_C.ChangeSASSet // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearGaugeAll(); // Function BP_SASRecastGauge.BP_SASRecastGauge_C.ClearGaugeAll // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateTimer(float Delta, bool bAllOver); // Function BP_SASRecastGauge.BP_SASRecastGauge_C.UpdateTimer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearGauge(enum class E_SASButton button kind in); // Function BP_SASRecastGauge.BP_SASRecastGauge_C.ClearGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsValidSAS(enum class E_SASButton Button, bool bValid); // Function BP_SASRecastGauge.BP_SASRecastGauge_C.IsValidSAS // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetSASFromButton(enum class E_SASButton Button, enum class E_SASKind kind); // Function BP_SASRecastGauge.BP_SASRecastGauge_C.GetSASFromButton // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetSas(enum class E_SASButton Button, enum class E_SASKind kind, bool bCheckValidSet); // Function BP_SASRecastGauge.BP_SASRecastGauge_C.SetSas // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentGaugeRate(enum class E_SASButton SASButton, float SASGaugeRate); // Function BP_SASRecastGauge.BP_SASRecastGauge_C.GetCurrentGaugeRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsCanUse(enum class E_SASButton Button, bool IsCanUse); // Function BP_SASRecastGauge.BP_SASRecastGauge_C.IsCanUse // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void BeginRecastGauge(enum class E_SASButton SASButton, float RemainTime, bool bDelayRecast); // Function BP_SASRecastGauge.BP_SASRecastGauge_C.BeginRecastGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_SASRecastGauge.BP_SASRecastGauge_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_SASRecastGauge.BP_SASRecastGauge_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_SASRecastGauge(int32_t EntryPoint); // Function BP_SASRecastGauge.BP_SASRecastGauge_C.ExecuteUbergraph_BP_SASRecastGauge // (Final|UbergraphFunction) // @ game+0x1685580
};

