// BlueprintGeneratedClass BP_Attack_Jump_em0300.BP_Attack_Jump_em0300_C
// Size: 0x128 (Inherited: 0xd0)
struct UBP_Attack_Jump_em0300_C : UBP_TaskBase_em0300_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	enum class EnemyAttackAnimKind Attack_Start; // 0xd8(0x01)
	enum class EnemyAttackAnimKind Attack_Landing; // 0xd9(0x01)
	enum class EnemyAttackAnimKind Attack_Loop; // 0xda(0x01)
	enum class EnemyAttackAnimKind Attack_Loop_Default; // 0xdb(0x01)
	enum class EnemyAttackAnimKind Attack_Loop_Struggle; // 0xdc(0x01)
	enum class EnemyAttackAnimKind Attack_LandingEnd; // 0xdd(0x01)
	enum class EnemyAttackAnimKind AnimKind; // 0xde(0x01)
	enum class Enum_em0300 Enum; // 0xdf(0x01)
	struct FRotator LookRotation; // 0xe0(0x0c)
	struct FVector TargetLocation; // 0xec(0x0c)
	float Timer; // 0xf8(0x04)
	bool IsCeiling; // 0xfc(0x01)
	bool IsUpdateEnd; // 0xfd(0x01)
	bool Key; // 0xfe(0x01)
	char pad_FF[0x1]; // 0xff(0x01)
	struct ABP_em0300Base_C* Em0300Base; // 0x100(0x08)
	struct FName ActionName; // 0x108(0x08)
	float LandingWaitTime; // 0x110(0x04)
	float LandingPastSec; // 0x114(0x04)
	struct AActor* ShockWaveTarget; // 0x118(0x08)
	struct AActor* TargetPlayer; // 0x120(0x08)

	void IsPerry(bool perry); // Function BP_Attack_Jump_em0300.BP_Attack_Jump_em0300_C.IsPerry // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetShockWaveTarget(); // Function BP_Attack_Jump_em0300.BP_Attack_Jump_em0300_C.SetShockWaveTarget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartShockWave(); // Function BP_Attack_Jump_em0300.BP_Attack_Jump_em0300_C.StartShockWave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsShockWave(bool shockWave); // Function BP_Attack_Jump_em0300.BP_Attack_Jump_em0300_C.IsShockWave // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateTarget(struct AActor* Actor); // Function BP_Attack_Jump_em0300.BP_Attack_Jump_em0300_C.UpdateTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeAttack(); // Function BP_Attack_Jump_em0300.BP_Attack_Jump_em0300_C.ChangeAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FVector GetMoveVector(struct FVector Vec); // Function BP_Attack_Jump_em0300.BP_Attack_Jump_em0300_C.GetMoveVector // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	float GetTimer(float A); // Function BP_Attack_Jump_em0300.BP_Attack_Jump_em0300_C.GetTimer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetTargetMove(struct AActor* Actor, float sec); // Function BP_Attack_Jump_em0300.BP_Attack_Jump_em0300_C.SetTargetMove // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLookRotation(struct AActor* Actor); // Function BP_Attack_Jump_em0300.BP_Attack_Jump_em0300_C.SetLookRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCoolTime(struct ARSBattleEnemy_C* Actor, bool return); // Function BP_Attack_Jump_em0300.BP_Attack_Jump_em0300_C.SetCoolTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndProcessing(struct AActor* Actor, enum class EnemyMoveAnimKind move, bool return); // Function BP_Attack_Jump_em0300.BP_Attack_Jump_em0300_C.EndProcessing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BP_Attack_Jump_em0300.BP_Attack_Jump_em0300_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Attack_Jump_em0300.BP_Attack_Jump_em0300_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Attack_Jump_em0300.BP_Attack_Jump_em0300_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Attack_Jump_em0300(int32_t EntryPoint); // Function BP_Attack_Jump_em0300.BP_Attack_Jump_em0300_C.ExecuteUbergraph_BP_Attack_Jump_em0300 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

