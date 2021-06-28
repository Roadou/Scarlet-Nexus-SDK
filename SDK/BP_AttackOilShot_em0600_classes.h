// BlueprintGeneratedClass BP_AttackOilShot_em0600.BP_AttackOilShot_em0600_C
// Size: 0xf9 (Inherited: 0xd4)
struct UBP_AttackOilShot_em0600_C : UBP_TaskBase_em0600_C {
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	enum class EnemyAttackAnimKind Attack; // 0xe0(0x01)
	enum class Enum_em0600 Enum; // 0xe1(0x01)
	char pad_E2[0x2]; // 0xe2(0x02)
	struct FName SkillName; // 0xe4(0x08)
	char pad_EC[0x4]; // 0xec(0x04)
	struct ABP_em0600_Base_C* em0600Base; // 0xf0(0x08)
	bool IsRapidAttack; // 0xf8(0x01)

	void CreateWeapon(struct ABP_em0600_Base_C* Actor, struct AActor* CreateClass, struct FName SkillName); // Function BP_AttackOilShot_em0600.BP_AttackOilShot_em0600_C.CreateWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCoolTime(struct ARSBattleEnemy_C* Actor, bool return); // Function BP_AttackOilShot_em0600.BP_AttackOilShot_em0600_C.SetCoolTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_AttackOilShot_em0600.BP_AttackOilShot_em0600_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BP_AttackOilShot_em0600.BP_AttackOilShot_em0600_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_AttackOilShot_em0600.BP_AttackOilShot_em0600_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_AttackOilShot_em0600(int32_t EntryPoint); // Function BP_AttackOilShot_em0600.BP_AttackOilShot_em0600_C.ExecuteUbergraph_BP_AttackOilShot_em0600 // (Final|UbergraphFunction) // @ game+0x1685580
};

