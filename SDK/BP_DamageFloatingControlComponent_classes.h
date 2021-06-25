// BlueprintGeneratedClass BP_DamageFloatingControlComponent.BP_DamageFloatingControlComponent_C
// Size: 0x24c (Inherited: 0xc0)
struct UBP_DamageFloatingControlComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct UDataTable* DamageFloatingParamTable; // 0xc8(0x08)
	struct FName RowName; // 0xd0(0x08)
	float Power; // 0xd8(0x04)
	struct FRotator Rotation; // 0xdc(0x0c)
	float Weight; // 0xe8(0x04)
	float Attenuation; // 0xec(0x04)
	float FlyFallCoefficient; // 0xf0(0x04)
	float FlyMaxFallSpeed; // 0xf4(0x04)
	float NormalFallCoefficient; // 0xf8(0x04)
	float NormalMaxFallSpeed; // 0xfc(0x04)
	bool bActive; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	float ElapsedTime; // 0x104(0x04)
	struct FVector StartLocation; // 0x108(0x0c)
	float Gravity; // 0x114(0x04)
	struct FVector HitDir; // 0x118(0x0c)
	bool bFall; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
	float ModifiedHighestPointTime; // 0x128(0x04)
	struct FVector BeforeAddLocation; // 0x12c(0x0c)
	float HighestPointTimeLocation; // 0x138(0x04)
	struct FVector ModifiedBeforeAddLocation; // 0x13c(0x0c)
	float OriginalHighestPointTime; // 0x148(0x04)
	float CoefficientScale; // 0x14c(0x04)
	struct FVector FloatingRotationXVector; // 0x150(0x0c)
	float FloatingPitchCosd; // 0x15c(0x04)
	float FloatingPitchSind; // 0x160(0x04)
	float FloatingPitch; // 0x164(0x04)
	float GravityScale; // 0x168(0x04)
	float MaxFallTiming; // 0x16c(0x04)
	bool bLanding; // 0x170(0x01)
	char pad_171[0x3]; // 0x171(0x03)
	float FrictionCoefficient; // 0x174(0x04)
	struct FVector LandingLocation; // 0x178(0x0c)
	float LandingTime; // 0x184(0x04)
	bool bHighestPoint; // 0x188(0x01)
	char pad_189[0x3]; // 0x189(0x03)
	float OriginalMaxTime; // 0x18c(0x04)
	float ModifiedMaxTime; // 0x190(0x04)
	bool bTeleport; // 0x194(0x01)
	char pad_195[0x3]; // 0x195(0x03)
	float EnableTeleportTime; // 0x198(0x04)
	float BeforeElapsedTime; // 0x19c(0x04)
	float FallTimingMinAngle; // 0x1a0(0x04)
	float FallTimingMaxAngle; // 0x1a4(0x04)
	float MinFallTiming; // 0x1a8(0x04)
	char pad_1AC[0x4]; // 0x1ac(0x04)
	struct FMulticastInlineDelegate DispatchBeginFall; // 0x1b0(0x10)
	bool bHit; // 0x1c0(0x01)
	char pad_1C1[0x7]; // 0x1c1(0x07)
	struct FMulticastInlineDelegate DispathFailedFall; // 0x1c8(0x10)
	struct FVector BeforeOwnerLocation; // 0x1d8(0x0c)
	bool bFailedFall; // 0x1e4(0x01)
	bool bOnce; // 0x1e5(0x01)
	char pad_1E6[0x2]; // 0x1e6(0x02)
	struct FVector CorrectHitDir; // 0x1e8(0x0c)
	float CorrectPower; // 0x1f4(0x04)
	bool bSlowMode; // 0x1f8(0x01)
	char pad_1F9[0x7]; // 0x1f9(0x07)
	struct ARSBattleCharacter_C* OwnerCharacter; // 0x200(0x08)
	struct FGameTimer IgnoreLandingCheckTimer; // 0x208(0x0c)
	char pad_214[0x4]; // 0x214(0x04)
	struct UCurveFloat* SlowDeltaSecondsRateCurve; // 0x218(0x08)
	float SlowTimer; // 0x220(0x04)
	float CheckTimer; // 0x224(0x04)
	float LimitFloatingHeight; // 0x228(0x04)
	bool bLimitHeight; // 0x22c(0x01)
	bool bCheckFailedFall; // 0x22d(0x01)
	char pad_22E[0x2]; // 0x22e(0x02)
	struct FGameTimer CheckFailedFallTimer; // 0x230(0x0c)
	struct FGameTimer ForceFailedFallTimer; // 0x23c(0x0c)
	float IgnoreLandingCheckTime; // 0x248(0x04)

	void IsIgnoreLandingCheck(bool bIgnoreLandingCheck); // Function BP_DamageFloatingControlComponent.BP_DamageFloatingControlComponent_C.IsIgnoreLandingCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetSlowMode(bool bSlow); // Function BP_DamageFloatingControlComponent.BP_DamageFloatingControlComponent_C.SetSlowMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLanding(bool bLanding); // Function BP_DamageFloatingControlComponent.BP_DamageFloatingControlComponent_C.SetLanding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void End(); // Function BP_DamageFloatingControlComponent.BP_DamageFloatingControlComponent_C.End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetActive(bool bActive); // Function BP_DamageFloatingControlComponent.BP_DamageFloatingControlComponent_C.GetActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void Start(float Power, struct FRotator Rotation, struct FVector HitDir); // Function BP_DamageFloatingControlComponent.BP_DamageFloatingControlComponent_C.Start // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(float DeltaSec); // Function BP_DamageFloatingControlComponent.BP_DamageFloatingControlComponent_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_DamageFloatingControlComponent.BP_DamageFloatingControlComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void BindUpdate(); // Function BP_DamageFloatingControlComponent.BP_DamageFloatingControlComponent_C.BindUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindUpdate(); // Function BP_DamageFloatingControlComponent.BP_DamageFloatingControlComponent_C.UnbindUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_DamageFloatingControlComponent(int32_t EntryPoint); // Function BP_DamageFloatingControlComponent.BP_DamageFloatingControlComponent_C.ExecuteUbergraph_BP_DamageFloatingControlComponent // (Final|UbergraphFunction) // @ game+0x1685580
	void DispathFailedFall__DelegateSignature(); // Function BP_DamageFloatingControlComponent.BP_DamageFloatingControlComponent_C.DispathFailedFall__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DispatchBeginFall__DelegateSignature(); // Function BP_DamageFloatingControlComponent.BP_DamageFloatingControlComponent_C.DispatchBeginFall__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

