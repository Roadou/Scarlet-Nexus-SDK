// BlueprintGeneratedClass BP_SAS_PlayerState.BP_SAS_PlayerState_C
// Size: 0xf8 (Inherited: 0xc0)
struct UBP_SAS_PlayerState_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	int32_t ActiveFlag; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct TArray<struct FFSASCommand> SAS_CommandArray; // 0xd0(0x10)
	bool bPauseTimer; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct TArray<bool> bDelayEndFlag; // 0xe8(0x10)

	void ChargeRemainTime(); // Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.ChargeRemainTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetActiveSecondsRate(enum class E_SASButton Button, float Rate); // Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.GetActiveSecondsRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetActiveSecondsFromKind(enum class E_SASKind kind, float ActiveSeconds); // Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.GetActiveSecondsFromKind // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SubRemainTimeMax(enum class E_SASKind kind); // Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.SubRemainTimeMax // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RecoverRemainTime(enum class E_SASKind kind, float RecoverTime); // Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.RecoverRemainTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RecoverRemainTimeByRate(enum class E_SASKind kind, float RecoverRate); // Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.RecoverRemainTimeByRate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDelayEndFlag(enum class E_SASKind kind, bool bDelay); // Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.SetDelayEndFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PauseTimer(bool bPauseTimer); // Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.PauseTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SubRemainTime(enum class E_SASKind kind, float SubTime); // Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.SubRemainTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SAS_End(enum class E_SASButton SASButton); // Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.SAS_End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCommandAccelerator(struct FAcceleratorParam Command, struct AActor* Owner); // Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.GetCommandAccelerator // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RegistCommandParam(enum class E_SASButton SASButton, struct FFSASCommand SAS_CommandParam); // Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.RegistCommandParam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetActiveSeconds(enum class E_SASButton SASButton, float ActiveSeconds); // Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.GetActiveSeconds // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void Update(float DeltaSeconds); // Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.Update // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsActiveSAS(enum class E_SASKind SAS_Kind, bool Active); // Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.IsActiveSAS // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAnyActiveSAS(bool Acitve); // Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.IsAnyActiveSAS // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetActiveFlag(enum class E_SASButton SASButton, bool on); // Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.SetActiveFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_SAS_PlayerState(int32_t EntryPoint); // Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.ExecuteUbergraph_BP_SAS_PlayerState // (Final|UbergraphFunction) // @ game+0x1685580
};

