// BlueprintGeneratedClass BP_JustDodge.BP_JustDodge_C
// Size: 0x16c (Inherited: 0xd8)
struct UBP_JustDodge_C : UPlayerJustDodgeComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	bool bEnable; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	struct FGameTimer SlowTimer; // 0xe4(0x0c)
	struct FString CustomTimeName; // 0xf0(0x10)
	struct FName ClaimantName; // 0x100(0x08)
	struct FGameTimer InvincibleTimer; // 0x108(0x0c)
	bool bReserve; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
	struct ARsBattleHero_C* ControlOwnerHero; // 0x118(0x08)
	float PrevPlayerTimeDilationScale; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct UCurveFloat* TimeDilationCurve; // 0x128(0x08)
	struct UCurveFloat* GlobalTimeDilationCurve; // 0x130(0x08)
	float LastGlobalTimeDilation; // 0x138(0x04)
	struct FVector CheckLocation; // 0x13c(0x0c)
	struct FVector CheckUpDir; // 0x148(0x0c)
	float checkHeight; // 0x154(0x04)
	float CheckRadius; // 0x158(0x04)
	float JUST_DODGE_ACCEPT_TIME; // 0x15c(0x04)
	float CheckScale; // 0x160(0x04)
	float CheckRangeScale; // 0x164(0x04)
	float CheckAcceptTime; // 0x168(0x04)

	void IsJustDodgeDirection(bool bJustDodge); // Function BP_JustDodge.BP_JustDodge_C.IsJustDodgeDirection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetCheckAcceptTime(float Time); // Function BP_JustDodge.BP_JustDodge_C.GetCheckAcceptTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void DebugDraw(); // Function BP_JustDodge.BP_JustDodge_C.DebugDraw // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SettingCheckParameter(bool bSuccess); // Function BP_JustDodge.BP_JustDodge_C.SettingCheckParameter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RemoveTimeDilation(); // Function BP_JustDodge.BP_JustDodge_C.RemoveTimeDilation // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateTimeDilation(); // Function BP_JustDodge.BP_JustDodge_C.UpdateTimeDilation // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckJustDodge(); // Function BP_JustDodge.BP_JustDodge_C.CheckJustDodge // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void End(); // Function BP_JustDodge.BP_JustDodge_C.End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Start(); // Function BP_JustDodge.BP_JustDodge_C.Start // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_JustDodge.BP_JustDodge_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_JustDodge.BP_JustDodge_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_JustDodge(int32_t EntryPoint); // Function BP_JustDodge.BP_JustDodge_C.ExecuteUbergraph_BP_JustDodge // (Final|UbergraphFunction) // @ game+0x1685580
};

