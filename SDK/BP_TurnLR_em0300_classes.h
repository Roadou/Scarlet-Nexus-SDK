// BlueprintGeneratedClass BP_TurnLR_em0300.BP_TurnLR_em0300_C
// Size: 0xfc (Inherited: 0xd0)
struct UBP_TurnLR_em0300_C : UBP_TaskBase_em0300_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	struct ABP_em0300Base_C* Em0300Base; // 0xd8(0x08)
	struct AActor* Target; // 0xe0(0x08)
	enum class EnemyActionAnimKind Action; // 0xe8(0x01)
	bool IsEnd; // 0xe9(0x01)
	char pad_EA[0x2]; // 0xea(0x02)
	float TurnSecond; // 0xec(0x04)
	float TurnSecondCount; // 0xf0(0x04)
	enum class Enum_em0300 ActionBackRun; // 0xf4(0x01)
	enum class Enum_em0300 ActionTurn; // 0xf5(0x01)
	char pad_F6[0x2]; // 0xf6(0x02)
	float targetAngle; // 0xf8(0x04)

	void IsTurnEnd(bool IsEndTurn); // Function BP_TurnLR_em0300.BP_TurnLR_em0300_C.IsTurnEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_TurnLR_em0300.BP_TurnLR_em0300_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BP_TurnLR_em0300.BP_TurnLR_em0300_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_TurnLR_em0300.BP_TurnLR_em0300_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_TurnLR_em0300(int32_t EntryPoint); // Function BP_TurnLR_em0300.BP_TurnLR_em0300_C.ExecuteUbergraph_BP_TurnLR_em0300 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

