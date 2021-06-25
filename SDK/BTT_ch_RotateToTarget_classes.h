// BlueprintGeneratedClass BTT_ch_RotateToTarget.BTT_ch_RotateToTarget_C
// Size: 0xc4 (Inherited: 0xb0)
struct UBTT_ch_RotateToTarget_C : UTaskBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct FRotator LookAtRot; // 0xb8(0x0c)

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTT_ch_RotateToTarget.BTT_ch_RotateToTarget_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_ch_RotateToTarget.BTT_ch_RotateToTarget_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BTT_ch_RotateToTarget(int32_t EntryPoint); // Function BTT_ch_RotateToTarget.BTT_ch_RotateToTarget_C.ExecuteUbergraph_BTT_ch_RotateToTarget // (Final|UbergraphFunction) // @ game+0x1685580
};

