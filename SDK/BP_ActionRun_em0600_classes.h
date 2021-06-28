// BlueprintGeneratedClass BP_ActionRun_em0600.BP_ActionRun_em0600_C
// Size: 0x125 (Inherited: 0xd4)
struct UBP_ActionRun_em0600_C : UBP_TaskBase_em0600_C {
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	enum class EnemyActionAnimKind Action; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	float Time; // 0xe4(0x04)
	float Timer; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct ARSBattleEnemy_C* Enemy; // 0xf0(0x08)
	struct ARSBattleCharacter_C* Target; // 0xf8(0x08)
	struct FVector TargetVec; // 0x100(0x0c)
	float SpeedScale; // 0x10c(0x04)
	float interpSpeed; // 0x110(0x04)
	float OldHpPercent; // 0x114(0x04)
	bool IsSpeedUp; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	float addspeed; // 0x11c(0x04)
	float NewVar_0_1; // 0x120(0x04)
	bool IsPlayAnim; // 0x124(0x01)

	void ExitUpdate(float DeltaSec, bool ReturnEnd); // Function BP_ActionRun_em0600.BP_ActionRun_em0600_C.ExitUpdate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Exit(); // Function BP_ActionRun_em0600.BP_ActionRun_em0600_C.Exit // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckSpeedUp(); // Function BP_ActionRun_em0600.BP_ActionRun_em0600_C.CheckSpeedUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcInterpSpeed(float Speed, float ReturnInterpSpeed); // Function BP_ActionRun_em0600.BP_ActionRun_em0600_C.CalcInterpSpeed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RunUpdate(float DeltaSec); // Function BP_ActionRun_em0600.BP_ActionRun_em0600_C.RunUpdate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInfo(struct ABP_em0600_Base_C* Actor); // Function BP_ActionRun_em0600.BP_ActionRun_em0600_C.SetInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckTimer(float sec, bool return); // Function BP_ActionRun_em0600.BP_ActionRun_em0600_C.CheckTimer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetTimer(struct ABP_em0600_Base_C* Actor); // Function BP_ActionRun_em0600.BP_ActionRun_em0600_C.SetTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_ActionRun_em0600.BP_ActionRun_em0600_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BP_ActionRun_em0600.BP_ActionRun_em0600_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_ActionRun_em0600.BP_ActionRun_em0600_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_ActionRun_em0600(int32_t EntryPoint); // Function BP_ActionRun_em0600.BP_ActionRun_em0600_C.ExecuteUbergraph_BP_ActionRun_em0600 // (Final|UbergraphFunction) // @ game+0x1685580
};

