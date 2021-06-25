// BlueprintGeneratedClass BP_IntroTutorialManager.BP_IntroTutorialManager_C
// Size: 0x290 (Inherited: 0x280)
struct ABP_IntroTutorialManager_C : AIntroTutorialManager {
	struct USceneComponent* DefaultSceneRoot; // 0x280(0x08)
	struct ARSBattlePlayer_C* BattlePlayer; // 0x288(0x08)

	bool RestrictPlayerLaunchAttack(bool IsOn); // Function BP_IntroTutorialManager.BP_IntroTutorialManager_C.RestrictPlayerLaunchAttack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetTutrialPKGaugeRecovery(bool IsOn); // Function BP_IntroTutorialManager.BP_IntroTutorialManager_C.SetTutrialPKGaugeRecovery // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool RestrictPlayerSpecialAttack(bool IsOn); // Function BP_IntroTutorialManager.BP_IntroTutorialManager_C.RestrictPlayerSpecialAttack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool RestrictPlayerPsychic(bool IsOn); // Function BP_IntroTutorialManager.BP_IntroTutorialManager_C.RestrictPlayerPsychic // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool RestrictPlayerAttack(bool IsOn); // Function BP_IntroTutorialManager.BP_IntroTutorialManager_C.RestrictPlayerAttack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool RemoveEnemysNoDead(int32_t GroupID, int32_t SubGroupID); // Function BP_IntroTutorialManager.BP_IntroTutorialManager_C.RemoveEnemysNoDead // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool EndIntroTutorial(); // Function BP_IntroTutorialManager.BP_IntroTutorialManager_C.EndIntroTutorial // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool BeginIntroTutorial(); // Function BP_IntroTutorialManager.BP_IntroTutorialManager_C.BeginIntroTutorial // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

