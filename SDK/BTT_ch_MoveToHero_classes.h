// BlueprintGeneratedClass BTT_ch_MoveToHero.BTT_ch_MoveToHero_C
// Size: 0x188 (Inherited: 0x180)
struct UBTT_ch_MoveToHero_C : UBTT_ch_Base_MoveTo_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x180(0x08)

	void OnFail_C14E9F8C4732F69BE243A5A042B98021(enum class EPathFollowingResult MovementResult); // Function BTT_ch_MoveToHero.BTT_ch_MoveToHero_C.OnFail_C14E9F8C4732F69BE243A5A042B98021 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSuccess_C14E9F8C4732F69BE243A5A042B98021(enum class EPathFollowingResult MovementResult); // Function BTT_ch_MoveToHero.BTT_ch_MoveToHero_C.OnSuccess_C14E9F8C4732F69BE243A5A042B98021 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_ch_MoveToHero.BTT_ch_MoveToHero_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BTT_ch_MoveToHero(int32_t EntryPoint); // Function BTT_ch_MoveToHero.BTT_ch_MoveToHero_C.ExecuteUbergraph_BTT_ch_MoveToHero // (Final|UbergraphFunction) // @ game+0x1685580
};

