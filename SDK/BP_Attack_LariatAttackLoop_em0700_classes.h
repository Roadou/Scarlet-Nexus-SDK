// BlueprintGeneratedClass BP_Attack_LariatAttackLoop_em0700.BP_Attack_LariatAttackLoop_em0700_C
// Size: 0x159 (Inherited: 0xd8)
struct UBP_Attack_LariatAttackLoop_em0700_C : UBP_TaskBase_em0700_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	float DeltaSeconds; // 0xe0(0x04)
	struct FVector LastLocation; // 0xe4(0x0c)
	float OldTargetLength; // 0xf0(0x04)
	float TargetLength; // 0xf4(0x04)
	struct ABP_em0700_Base_C* em0700Base; // 0xf8(0x08)
	struct FVector StartLocation; // 0x100(0x0c)
	float TargetToLength; // 0x10c(0x04)
	float addZ; // 0x110(0x04)
	struct FVector TargetLocation; // 0x114(0x0c)
	float TargetZ; // 0x120(0x04)
	float Rate; // 0x124(0x04)
	float LariatHeight; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct TArray<struct AActor*> IgnoreActors; // 0x130(0x10)
	float MoveSpeed; // 0x140(0x04)
	float TargetDistance; // 0x144(0x04)
	float FlyHeight; // 0x148(0x04)
	float DefaultAdjust; // 0x14c(0x04)
	float CheckRadius; // 0x150(0x04)
	float CheckHalfHeight; // 0x154(0x04)
	bool bHit; // 0x158(0x01)

	void Update(struct APawn* Pawn, float DeltaSec); // Function BP_Attack_LariatAttackLoop_em0700.BP_Attack_LariatAttackLoop_em0700_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Attack_LariatAttackLoop_em0700.BP_Attack_LariatAttackLoop_em0700_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BP_Attack_LariatAttackLoop_em0700.BP_Attack_LariatAttackLoop_em0700_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Attack_LariatAttackLoop_em0700.BP_Attack_LariatAttackLoop_em0700_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Attack_LariatAttackLoop_em0700(int32_t EntryPoint); // Function BP_Attack_LariatAttackLoop_em0700.BP_Attack_LariatAttackLoop_em0700_C.ExecuteUbergraph_BP_Attack_LariatAttackLoop_em0700 // (Final|UbergraphFunction) // @ game+0x1685580
};

