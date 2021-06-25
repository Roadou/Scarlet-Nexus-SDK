// BlueprintGeneratedClass BP_NPCMetamorphosisComponent.BP_NPCMetamorphosisComponent_C
// Size: 0xe4 (Inherited: 0xc0)
struct UBP_NPCMetamorphosisComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct AActor* CallActor; // 0xc8(0x08)
	float ReturnTimer; // 0xd0(0x04)
	int32_t State; // 0xd4(0x04)
	enum class EEnpcMetamorphosisiFinishType FinishType; // 0xd8(0x01)
	enum class EPlayerID ReturnPlayer; // 0xd9(0x01)
	bool bNotFinishCancelAction; // 0xda(0x01)
	bool bCancelFromForward; // 0xdb(0x01)
	bool bCancelReactionChance; // 0xdc(0x01)
	enum class EEnpcMetamorphosisiFinishType ReserveFinishType; // 0xdd(0x01)
	bool bReserveCancelFromForward; // 0xde(0x01)
	bool bReserveCancelReactionChance; // 0xdf(0x01)
	float ReserveTime; // 0xe0(0x04)

	void SetFinishType(enum class EEnpcMetamorphosisiFinishType Type, bool bDummy); // Function BP_NPCMetamorphosisComponent.BP_NPCMetamorphosisComponent_C.SetFinishType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsReservedFinishCancelAction(bool bReserved); // Function BP_NPCMetamorphosisComponent.BP_NPCMetamorphosisComponent_C.IsReservedFinishCancelAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void UpdateReserve(float DeltaSeconds, bool bDummy); // Function BP_NPCMetamorphosisComponent.BP_NPCMetamorphosisComponent_C.UpdateReserve // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReserveFinishCancelAction(enum class EEnpcMetamorphosisiFinishType FinishType, bool bFromForward, bool bReactionChance, float ReserveSeconds, bool bDummy); // Function BP_NPCMetamorphosisComponent.BP_NPCMetamorphosisComponent_C.ReserveFinishCancelAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCallActor(struct AActor* Actor); // Function BP_NPCMetamorphosisComponent.BP_NPCMetamorphosisComponent_C.GetCallActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsWaitLastAttack(bool bWait); // Function BP_NPCMetamorphosisComponent.BP_NPCMetamorphosisComponent_C.IsWaitLastAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsCancelReactionChance(bool fromForward); // Function BP_NPCMetamorphosisComponent.BP_NPCMetamorphosisComponent_C.IsCancelReactionChance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsCancelFromForward(bool fromForward); // Function BP_NPCMetamorphosisComponent.BP_NPCMetamorphosisComponent_C.IsCancelFromForward // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void AlreadyStartedSetting(enum class EPlayerID ReturnPlayerID, float ReturnSeconds, bool bNotFinishCancelAction, bool bDummy); // Function BP_NPCMetamorphosisComponent.BP_NPCMetamorphosisComponent_C.AlreadyStartedSetting // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FinishCancelAction(enum class EEnpcMetamorphosisiFinishType FinishType, bool fromForward, bool reactionChance, bool bDummy); // Function BP_NPCMetamorphosisComponent.BP_NPCMetamorphosisComponent_C.FinishCancelAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetFinishType(enum class EEnpcMetamorphosisiFinishType FinishType); // Function BP_NPCMetamorphosisComponent.BP_NPCMetamorphosisComponent_C.GetFinishType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsExecMetamorphosis(bool bExec); // Function BP_NPCMetamorphosisComponent.BP_NPCMetamorphosisComponent_C.IsExecMetamorphosis // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void FinishLastAttack(bool bResult); // Function BP_NPCMetamorphosisComponent.BP_NPCMetamorphosisComponent_C.FinishLastAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMetamorphosisParam(struct AActor* Parent, float ReturnSeconds); // Function BP_NPCMetamorphosisComponent.BP_NPCMetamorphosisComponent_C.SetMetamorphosisParam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateMetamorphosis(float DeltaSeconds); // Function BP_NPCMetamorphosisComponent.BP_NPCMetamorphosisComponent_C.UpdateMetamorphosis // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FinishMetamorphosis(bool bDummy); // Function BP_NPCMetamorphosisComponent.BP_NPCMetamorphosisComponent_C.FinishMetamorphosis // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartMetamorphosis(struct AActor* Parent, float ReturnSeconds); // Function BP_NPCMetamorphosisComponent.BP_NPCMetamorphosisComponent_C.StartMetamorphosis // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_NPCMetamorphosisComponent.BP_NPCMetamorphosisComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_NPCMetamorphosisComponent(int32_t EntryPoint); // Function BP_NPCMetamorphosisComponent.BP_NPCMetamorphosisComponent_C.ExecuteUbergraph_BP_NPCMetamorphosisComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

