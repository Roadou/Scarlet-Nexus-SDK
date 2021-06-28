// BlueprintGeneratedClass BP_ActionFlyThreat_em0700.BP_ActionFlyThreat_em0700_C
// Size: 0xf4 (Inherited: 0xd8)
struct UBP_ActionFlyThreat_em0700_C : UBP_TaskBase_em0700_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	enum class Enum_em0700 Action; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct ABP_em0700_Base_C* em0700Base; // 0xe8(0x08)
	float Length; // 0xf0(0x04)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_ActionFlyThreat_em0700.BP_ActionFlyThreat_em0700_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BP_ActionFlyThreat_em0700.BP_ActionFlyThreat_em0700_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_ActionFlyThreat_em0700.BP_ActionFlyThreat_em0700_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_ActionFlyThreat_em0700(int32_t EntryPoint); // Function BP_ActionFlyThreat_em0700.BP_ActionFlyThreat_em0700_C.ExecuteUbergraph_BP_ActionFlyThreat_em0700 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

