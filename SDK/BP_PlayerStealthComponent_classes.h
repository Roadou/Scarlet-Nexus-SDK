// BlueprintGeneratedClass BP_PlayerStealthComponent.BP_PlayerStealthComponent_C
// Size: 0x1f2 (Inherited: 0xc0)
struct UBP_PlayerStealthComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct USkeletalMeshComponent* OwnerMesh; // 0xc8(0x08)
	struct ARSBattlePlayer_C* OwnerPlayer; // 0xd0(0x08)
	bool bStealthOn; // 0xd8(0x01)
	bool bHeroOrder; // 0xd9(0x01)
	bool bStealthLerp; // 0xda(0x01)
	char pad_DB[0x1]; // 0xdb(0x01)
	float StealthLerpTimer; // 0xdc(0x04)
	float StealthRate; // 0xe0(0x04)
	float StealthRateStt; // 0xe4(0x04)
	float StealthRateEnd; // 0xe8(0x04)
	bool bStealthDelay; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	float StealthDelayTimer; // 0xf0(0x04)
	float DefaultLerpTime; // 0xf4(0x04)
	float StealthLerpTime; // 0xf8(0x04)
	struct FName MaterialParameterNameStealth; // 0xfc(0x08)
	struct FName MaterialParameterNameVanish; // 0x104(0x08)
	bool bPreviousSwitchMaterial; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
	int32_t MaterialSwitchHandle; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct TArray<struct FName> TickClaimantList; // 0x118(0x10)
	struct UMaterialInterface* StealthMaterial; // 0x128(0x08)
	struct UMaterialInterface* StealthMaterialENPC; // 0x130(0x08)
	float StealthOpacityRate; // 0x138(0x04)
	bool SeeThoughCancel; // 0x13c(0x01)
	char pad_13D[0x3]; // 0x13d(0x03)
	struct UCurveLinearColor* AssasinAttackBaseCurve; // 0x140(0x08)
	struct UCurveLinearColor* AssasinAttackFresnelCurve; // 0x148(0x08)
	struct UCurveVector* AssasinAttackEtcCurve; // 0x150(0x08)
	float PassedCurveTime; // 0x158(0x04)
	float AssassinCurveLoopStartTime; // 0x15c(0x04)
	float AssassinCurveLoopEndTime; // 0x160(0x04)
	struct FLinearColor LastLoopAssasinBaseColor; // 0x164(0x10)
	struct FLinearColor LastLoopAssasinFresnelColor; // 0x174(0x10)
	bool bEndAssassinAttackCharge; // 0x184(0x01)
	bool bfirstLoopRun; // 0x185(0x01)
	char pad_186[0x2]; // 0x186(0x02)
	float AssassinCurveLoopEndLinearTime; // 0x188(0x04)
	struct FVector LastLoopAssassinEtc; // 0x18c(0x0c)
	bool bUpdateAssasinAttack; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)
	struct TArray<struct FLinearColor> VectorsBeforeAssassin; // 0x1a0(0x10)
	struct TArray<struct FName> MemoryVectorparametorNames; // 0x1b0(0x10)
	struct TArray<struct FName> MemoryScalarParameterNames; // 0x1c0(0x10)
	struct TArray<float> ScalarsBeforeAssassin; // 0x1d0(0x10)
	float AfterStealthTime; // 0x1e0(0x04)
	struct FGameTimer AfterStealthTimer; // 0x1e4(0x0c)
	bool bPauseTimer; // 0x1f0(0x01)
	bool bEventStealth; // 0x1f1(0x01)

	void IsStealthFromEvent(bool bFromEvent); // Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.IsStealthFromEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetPauseTimer(bool bPauseTimerIN); // Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.SetPauseTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAfterStealthTimer(bool bAfterStealth); // Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.SetAfterStealthTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAfterStealth(bool bAfterStealth); // Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.IsAfterStealth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void EndAssassinAttackCharge(); // Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.EndAssassinAttackCharge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndAssassinAttack(); // Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.EndAssassinAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginAssassinAttack(); // Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.BeginAssassinAttack // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAssasinAttackMaterial(float DeltaTime); // Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.UpdateAssasinAttackMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSeeThroughCancel(bool Enable); // Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.SetSeeThroughCancel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPrivateTickEnabled(bool bEnable, struct FName ClaimantName); // Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.SetPrivateTickEnabled // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupStealthMaterialOnly(float Rate); // Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.SetupStealthMaterialOnly // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMaterialParameter(float Rate, bool OneFrameSetting); // Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.SetMaterialParameter // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsStealthHeroOrder(bool return); // Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.IsStealthHeroOrder // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsStealthThink(bool return); // Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.IsStealthThink // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsStealth(bool return); // Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.IsStealth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void Update(); // Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetStealth(bool stealth on in, bool hero oreder in, float stealth time in, float delay time in, bool no sas cancel in, bool from_event_in); // Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.SetStealth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PlayerStealthComponent(int32_t EntryPoint); // Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.ExecuteUbergraph_BP_PlayerStealthComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

