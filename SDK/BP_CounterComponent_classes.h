// BlueprintGeneratedClass BP_CounterComponent.BP_CounterComponent_C
// Size: 0x100 (Inherited: 0xc0)
struct UBP_CounterComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct ARSBattlePlayer_C* OwnerPlayer; // 0xc8(0x08)
	struct UHitCheckComponent* HitCheck; // 0xd0(0x08)
	bool bCheckAnim; // 0xd8(0x01)
	bool bCounterAnim; // 0xd9(0x01)
	bool bAutoCounter; // 0xda(0x01)
	bool bAutoCounterSuccess; // 0xdb(0x01)
	bool bThinkCounter; // 0xdc(0x01)
	bool bThinkCounterSuccess; // 0xdd(0x01)
	bool bCoolDown; // 0xde(0x01)
	char pad_DF[0x1]; // 0xdf(0x01)
	struct FGameTimer CoolDownTimer; // 0xe0(0x0c)
	int32_t CounterRate; // 0xec(0x04)
	float CapsuleRaidusRate; // 0xf0(0x04)
	float CapsuleHalfHeightRate; // 0xf4(0x04)
	float CooldownTimeMin; // 0xf8(0x04)
	float CooldownTimeMax; // 0xfc(0x04)

	void IsThinkCounter(bool bCounter); // Function BP_CounterComponent.BP_CounterComponent_C.IsThinkCounter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsThinkCounterSuccess(bool return); // Function BP_CounterComponent.BP_CounterComponent_C.IsThinkCounterSuccess // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetThinkCounterSuccess(); // Function BP_CounterComponent.BP_CounterComponent_C.SetThinkCounterSuccess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetThinkCounter(bool flag in); // Function BP_CounterComponent.BP_CounterComponent_C.SetThinkCounter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsCounterAnimEnable(bool return); // Function BP_CounterComponent.BP_CounterComponent_C.IsCounterAnimEnable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetCounterAnimEnable(); // Function BP_CounterComponent.BP_CounterComponent_C.SetCounterAnimEnable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAutoCounterSuccess(bool return); // Function BP_CounterComponent.BP_CounterComponent_C.IsAutoCounterSuccess // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetAutoCounter(bool on); // Function BP_CounterComponent.BP_CounterComponent_C.SetAutoCounter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckAutoCounter(bool return); // Function BP_CounterComponent.BP_CounterComponent_C.CheckAutoCounter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Finalize(); // Function BP_CounterComponent.BP_CounterComponent_C.Finalize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(); // Function BP_CounterComponent.BP_CounterComponent_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(int32_t auto counter rate in, float auto counter radius rate in, float auto counter half height rate in, float cool down time min in, float cool down time max in); // Function BP_CounterComponent.BP_CounterComponent_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_CounterComponent.BP_CounterComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_CounterComponent(int32_t EntryPoint); // Function BP_CounterComponent.BP_CounterComponent_C.ExecuteUbergraph_BP_CounterComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

