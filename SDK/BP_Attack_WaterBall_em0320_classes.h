// BlueprintGeneratedClass BP_Attack_WaterBall_em0320.BP_Attack_WaterBall_em0320_C
// Size: 0x109 (Inherited: 0xd0)
struct UBP_Attack_WaterBall_em0320_C : UBP_TaskBase_em0300_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	enum class EnemyAttackAnimKind Attack; // 0xd8(0x01)
	enum class Enum_em0300 Enum; // 0xd9(0x01)
	char pad_DA[0x6]; // 0xda(0x06)
	struct ABP_em0300Base_C* Enemy; // 0xe0(0x08)
	struct FName SkillName; // 0xe8(0x08)
	struct FVector TargetVector; // 0xf0(0x0c)
	struct FVector TargetLocation; // 0xfc(0x0c)
	bool IsWay; // 0x108(0x01)

	void CreateWeapon(); // Function BP_Attack_WaterBall_em0320.BP_Attack_WaterBall_em0320_C.CreateWeapon // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCoolTime(struct ARSBattleEnemy_C* Actor, bool return); // Function BP_Attack_WaterBall_em0320.BP_Attack_WaterBall_em0320_C.SetCoolTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndProcessing(struct AActor* Actor, enum class EnemyMoveAnimKind move, bool return); // Function BP_Attack_WaterBall_em0320.BP_Attack_WaterBall_em0320_C.EndProcessing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Attack_WaterBall_em0320.BP_Attack_WaterBall_em0320_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Attack_WaterBall_em0320.BP_Attack_WaterBall_em0320_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BP_Attack_WaterBall_em0320.BP_Attack_WaterBall_em0320_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Attack_WaterBall_em0320(int32_t EntryPoint); // Function BP_Attack_WaterBall_em0320.BP_Attack_WaterBall_em0320_C.ExecuteUbergraph_BP_Attack_WaterBall_em0320 // (Final|UbergraphFunction) // @ game+0x1685580
};

