// BlueprintGeneratedClass BP_Reset_em0300.BP_Reset_em0300_C
// Size: 0x101 (Inherited: 0xd0)
struct UBP_Reset_em0300_C : UBP_TaskBase_em0300_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	struct FBlackboardKeySelector Action; // 0xd8(0x28)
	enum class Enum_em0300 Enum; // 0x100(0x01)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Reset_em0300.BP_Reset_em0300_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Reset_em0300(int32_t EntryPoint); // Function BP_Reset_em0300.BP_Reset_em0300_C.ExecuteUbergraph_BP_Reset_em0300 // (Final|UbergraphFunction) // @ game+0x1685580
};

