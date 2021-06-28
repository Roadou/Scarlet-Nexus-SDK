// BlueprintGeneratedClass BP_ActionWalkB_em0700.BP_ActionWalkB_em0700_C
// Size: 0x101 (Inherited: 0xd8)
struct UBP_ActionWalkB_em0700_C : UBP_TaskBase_em0700_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	float Time; // 0xe0(0x04)
	struct FName FlyingName; // 0xe4(0x08)
	char pad_EC[0x4]; // 0xec(0x04)
	struct ABP_em0700_Base_C* em0700Base; // 0xf0(0x08)
	bool NeedFreeCheck; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	float maxTime; // 0xfc(0x04)
	bool bHit; // 0x100(0x01)

	void IsHitWallCheck(struct AActor* Actor, bool IsHitWall); // Function BP_ActionWalkB_em0700.BP_ActionWalkB_em0700_C.IsHitWallCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CheckTimer(float DeltaSeconds, bool IsEnd); // Function BP_ActionWalkB_em0700.BP_ActionWalkB_em0700_C.CheckTimer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTimer(struct ABP_em0700_Base_C* Actor); // Function BP_ActionWalkB_em0700.BP_ActionWalkB_em0700_C.SetTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_ActionWalkB_em0700.BP_ActionWalkB_em0700_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BP_ActionWalkB_em0700.BP_ActionWalkB_em0700_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_ActionWalkB_em0700.BP_ActionWalkB_em0700_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_ActionWalkB_em0700(int32_t EntryPoint); // Function BP_ActionWalkB_em0700.BP_ActionWalkB_em0700_C.ExecuteUbergraph_BP_ActionWalkB_em0700 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

