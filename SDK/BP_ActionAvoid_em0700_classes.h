// BlueprintGeneratedClass BP_ActionAvoid_em0700.BP_ActionAvoid_em0700_C
// Size: 0x114 (Inherited: 0xd8)
struct UBP_ActionAvoid_em0700_C : UBP_TaskBase_em0700_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct ABP_em0700_Base_C* em0700Base; // 0xe0(0x08)
	float Length; // 0xe8(0x04)
	enum class EnemyActionAnimKind Action; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	struct FVector MoveDir; // 0xf0(0x0c)
	struct FVector StartMoveDir; // 0xfc(0x0c)
	bool bRandomDir; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	float moveScale; // 0x10c(0x04)
	float Time; // 0x110(0x04)

	void InitEscape(struct AActor* Actor); // Function BP_ActionAvoid_em0700.BP_ActionAvoid_em0700_C.InitEscape // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateEscape(struct AActor* Actor, float DeltaSec); // Function BP_ActionAvoid_em0700.BP_ActionAvoid_em0700_C.UpdateEscape // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_ActionAvoid_em0700.BP_ActionAvoid_em0700_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BP_ActionAvoid_em0700.BP_ActionAvoid_em0700_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_ActionAvoid_em0700.BP_ActionAvoid_em0700_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_ActionAvoid_em0700(int32_t EntryPoint); // Function BP_ActionAvoid_em0700.BP_ActionAvoid_em0700_C.ExecuteUbergraph_BP_ActionAvoid_em0700 // (Final|UbergraphFunction) // @ game+0x1685580
};

