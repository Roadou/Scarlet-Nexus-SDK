// BlueprintGeneratedClass BP_Attack_Rush_Loop_em0100.BP_Attack_Rush_Loop_em0100_C
// Size: 0x114 (Inherited: 0xd8)
struct UBP_Attack_Rush_Loop_em0100_C : UBP_TaskBase_em0100_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	enum class Enum_em0100 Name; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	float Time; // 0xe4(0x04)
	float Timer; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct ABP_em0100Base_C* em0100Base; // 0xf0(0x08)
	float WallStopDistance; // 0xf8(0x04)
	struct FVector PathBaseLocation; // 0xfc(0x0c)
	struct FVector PathTargetLocation; // 0x108(0x0c)

	void SetLookAt(bool lookAt); // Function BP_Attack_Rush_Loop_em0100.BP_Attack_Rush_Loop_em0100_C.SetLookAt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsNearForwardWall(bool IsNear); // Function BP_Attack_Rush_Loop_em0100.BP_Attack_Rush_Loop_em0100_C.IsNearForwardWall // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NewFunction_1(struct ABP_em0100Base_C* self2, float param_Time_228_BE5850A649DE740B847A93900D0EF774); // Function BP_Attack_Rush_Loop_em0100.BP_Attack_Rush_Loop_em0100_C.NewFunction_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCoolTime(struct ARSBattleEnemy_C* Actor, bool return); // Function BP_Attack_Rush_Loop_em0100.BP_Attack_Rush_Loop_em0100_C.SetCoolTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCoolTimeRush(struct ABP_em0100Base_C* Actor); // Function BP_Attack_Rush_Loop_em0100.BP_Attack_Rush_Loop_em0100_C.SetCoolTimeRush // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Attack_Rush_Loop_em0100.BP_Attack_Rush_Loop_em0100_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Attack_Rush_Loop_em0100.BP_Attack_Rush_Loop_em0100_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BP_Attack_Rush_Loop_em0100.BP_Attack_Rush_Loop_em0100_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Attack_Rush_Loop_em0100(int32_t EntryPoint); // Function BP_Attack_Rush_Loop_em0100.BP_Attack_Rush_Loop_em0100_C.ExecuteUbergraph_BP_Attack_Rush_Loop_em0100 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

