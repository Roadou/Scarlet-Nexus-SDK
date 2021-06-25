// BlueprintGeneratedClass BTD_ch_CheckDistanceToPlayer.BTD_ch_CheckDistanceToPlayer_C
// Size: 0xac (Inherited: 0xa0)
struct UBTD_ch_CheckDistanceToPlayer_C : UDecoratorBase_C {
	float Distance; // 0xa0(0x04)
	bool bCheckDistanceZ; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	float DistanceZ; // 0xa8(0x04)

	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTD_ch_CheckDistanceToPlayer.BTD_ch_CheckDistanceToPlayer_C.PerformConditionCheckAI // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

