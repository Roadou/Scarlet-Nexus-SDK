// BlueprintGeneratedClass BTT_ch_MoveCircle.BTT_ch_MoveCircle_C
// Size: 0x1a5 (Inherited: 0x180)
struct UBTT_ch_MoveCircle_C : UBTT_ch_Base_MoveTo_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x180(0x08)
	float TimeMin; // 0x188(0x04)
	float TimeMax; // 0x18c(0x04)
	struct FGameTimer GameTimer; // 0x190(0x0c)
	bool bExecAIMoveTo; // 0x19c(0x01)
	enum class EPlayerAIMoveMode MoveMode; // 0x19d(0x01)
	char pad_19E[0x2]; // 0x19e(0x02)
	float lTimeRate; // 0x1a0(0x04)
	bool bEnableDistanceRate; // 0x1a4(0x01)

	void OnFail_B4F2C567467115C1D6ACF18928FEAB55(enum class EPathFollowingResult MovementResult); // Function BTT_ch_MoveCircle.BTT_ch_MoveCircle_C.OnFail_B4F2C567467115C1D6ACF18928FEAB55 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSuccess_B4F2C567467115C1D6ACF18928FEAB55(enum class EPathFollowingResult MovementResult); // Function BTT_ch_MoveCircle.BTT_ch_MoveCircle_C.OnSuccess_B4F2C567467115C1D6ACF18928FEAB55 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTT_ch_MoveCircle.BTT_ch_MoveCircle_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_ch_MoveCircle.BTT_ch_MoveCircle_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BTT_ch_MoveCircle(int32_t EntryPoint); // Function BTT_ch_MoveCircle.BTT_ch_MoveCircle_C.ExecuteUbergraph_BTT_ch_MoveCircle // (Final|UbergraphFunction) // @ game+0x1685580
};

