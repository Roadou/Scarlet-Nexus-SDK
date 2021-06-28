// BlueprintGeneratedClass BP_Attack_SwingLR_em0100.BP_Attack_SwingLR_em0100_C
// Size: 0xf9 (Inherited: 0xd8)
struct UBP_Attack_SwingLR_em0100_C : UBP_TaskBase_em0100_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	bool IsCheckDistance; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct ABP_em0100Base_C* em0100Base; // 0xe8(0x08)
	enum class EnemyAttackAnimKind AnimKind; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	int32_t SwingCount; // 0xf4(0x04)
	enum class Enum_em0100 EnumStamp; // 0xf8(0x01)

	void CheckTargetLRPosition(bool IsRight); // Function BP_Attack_SwingLR_em0100.BP_Attack_SwingLR_em0100_C.CheckTargetLRPosition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCoolTime(struct ARSBattleEnemy_C* Actor, bool return); // Function BP_Attack_SwingLR_em0100.BP_Attack_SwingLR_em0100_C.SetCoolTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCoolTimeSwing(struct ABP_em0100Base_C* Actor); // Function BP_Attack_SwingLR_em0100.BP_Attack_SwingLR_em0100_C.SetCoolTimeSwing // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Attack_SwingLR_em0100.BP_Attack_SwingLR_em0100_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BP_Attack_SwingLR_em0100.BP_Attack_SwingLR_em0100_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Attack_SwingLR_em0100.BP_Attack_SwingLR_em0100_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Attack_SwingLR_em0100(int32_t EntryPoint); // Function BP_Attack_SwingLR_em0100.BP_Attack_SwingLR_em0100_C.ExecuteUbergraph_BP_Attack_SwingLR_em0100 // (Final|UbergraphFunction) // @ game+0x1685580
};

