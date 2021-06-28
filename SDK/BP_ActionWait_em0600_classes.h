// BlueprintGeneratedClass BP_ActionWait_em0600.BP_ActionWait_em0600_C
// Size: 0xec (Inherited: 0xd4)
struct UBP_ActionWait_em0600_C : UBP_TaskBase_em0600_C {
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	enum class EnemyActionAnimKind Action; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	float Time; // 0xe4(0x04)
	float Timer; // 0xe8(0x04)

	void CheckTimer(float sec, bool return); // Function BP_ActionWait_em0600.BP_ActionWait_em0600_C.CheckTimer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetTimer(struct ABP_em0600_Base_C* Actor); // Function BP_ActionWait_em0600.BP_ActionWait_em0600_C.SetTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_ActionWait_em0600.BP_ActionWait_em0600_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BP_ActionWait_em0600.BP_ActionWait_em0600_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_ActionWait_em0600.BP_ActionWait_em0600_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_ActionWait_em0600(int32_t EntryPoint); // Function BP_ActionWait_em0600.BP_ActionWait_em0600_C.ExecuteUbergraph_BP_ActionWait_em0600 // (Final|UbergraphFunction) // @ game+0x1685580
};

