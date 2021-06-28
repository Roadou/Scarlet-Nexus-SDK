// BlueprintGeneratedClass BP_ActionFlyWait_em0700.BP_ActionFlyWait_em0700_C
// Size: 0xf1 (Inherited: 0xd8)
struct UBP_ActionFlyWait_em0700_C : UBP_TaskBase_em0700_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	float Time; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct ABP_em0700_Base_C* em0700Base; // 0xe8(0x08)
	bool NeedFreeCheck; // 0xf0(0x01)

	void CheckTimer(float DeltaSeconds, bool IsEnd); // Function BP_ActionFlyWait_em0700.BP_ActionFlyWait_em0700_C.CheckTimer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTimer(struct ABP_em0700_Base_C* Actor); // Function BP_ActionFlyWait_em0700.BP_ActionFlyWait_em0700_C.SetTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_ActionFlyWait_em0700.BP_ActionFlyWait_em0700_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BP_ActionFlyWait_em0700.BP_ActionFlyWait_em0700_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_ActionFlyWait_em0700.BP_ActionFlyWait_em0700_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_ActionFlyWait_em0700(int32_t EntryPoint); // Function BP_ActionFlyWait_em0700.BP_ActionFlyWait_em0700_C.ExecuteUbergraph_BP_ActionFlyWait_em0700 // (Final|UbergraphFunction) // @ game+0x1685580
};

