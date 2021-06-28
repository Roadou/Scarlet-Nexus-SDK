// BlueprintGeneratedClass BP_ActionWalkLR_em0700.BP_ActionWalkLR_em0700_C
// Size: 0x12a (Inherited: 0xd8)
struct UBP_ActionWalkLR_em0700_C : UBP_TaskBase_em0700_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	float Time; // 0xe0(0x04)
	struct FName FlyingName; // 0xe4(0x08)
	bool IsLeft; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	struct FVector MoveDir; // 0xf0(0x0c)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct ABP_em0700_Base_C* em0700Base; // 0x100(0x08)
	float rotAngle; // 0x108(0x04)
	struct FVector FinishForwardVector; // 0x10c(0x0c)
	bool NeedFreeCheck; // 0x118(0x01)
	bool RotVector; // 0x119(0x01)
	char pad_11A[0x2]; // 0x11a(0x02)
	float maxTime; // 0x11c(0x04)
	float RightDistance; // 0x120(0x04)
	float LeftDistance; // 0x124(0x04)
	bool bSuccess; // 0x128(0x01)
	bool bHit; // 0x129(0x01)

	void AnotherWalkLR(float DeltaSeconds); // Function BP_ActionWalkLR_em0700.BP_ActionWalkLR_em0700_C.AnotherWalkLR // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NormalWalkLR(float DeltaSeconds); // Function BP_ActionWalkLR_em0700.BP_ActionWalkLR_em0700_C.NormalWalkLR // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsHitWallCheck(struct AActor* Actor, bool IsHit); // Function BP_ActionWalkLR_em0700.BP_ActionWalkLR_em0700_C.IsHitWallCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CheckTimer(float DeltaSeconds, bool IsEnd); // Function BP_ActionWalkLR_em0700.BP_ActionWalkLR_em0700_C.CheckTimer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTimer(struct ABP_em0700_Base_C* Actor); // Function BP_ActionWalkLR_em0700.BP_ActionWalkLR_em0700_C.SetTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_ActionWalkLR_em0700.BP_ActionWalkLR_em0700_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BP_ActionWalkLR_em0700.BP_ActionWalkLR_em0700_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_ActionWalkLR_em0700.BP_ActionWalkLR_em0700_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_ActionWalkLR_em0700(int32_t EntryPoint); // Function BP_ActionWalkLR_em0700.BP_ActionWalkLR_em0700_C.ExecuteUbergraph_BP_ActionWalkLR_em0700 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

