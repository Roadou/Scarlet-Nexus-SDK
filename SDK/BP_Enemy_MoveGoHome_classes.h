// BlueprintGeneratedClass BP_Enemy_MoveGoHome.BP_Enemy_MoveGoHome_C
// Size: 0xbc (Inherited: 0xb0)
struct UBP_Enemy_MoveGoHome_C : UTaskBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	int32_t Index; // 0xb8(0x04)

	struct FVector GetDirectionXYVector(struct FVector From, struct FVector To); // Function BP_Enemy_MoveGoHome.BP_Enemy_MoveGoHome_C.GetDirectionXYVector // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Enemy_MoveGoHome.BP_Enemy_MoveGoHome_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Enemy_MoveGoHome(int32_t EntryPoint); // Function BP_Enemy_MoveGoHome.BP_Enemy_MoveGoHome_C.ExecuteUbergraph_BP_Enemy_MoveGoHome // (Final|UbergraphFunction) // @ game+0x1685580
};

