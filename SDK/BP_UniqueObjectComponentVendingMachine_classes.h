// BlueprintGeneratedClass BP_UniqueObjectComponentVendingMachine.BP_UniqueObjectComponentVendingMachine_C
// Size: 0xb49 (Inherited: 0xaa3)
struct UBP_UniqueObjectComponentVendingMachine_C : UBP_UniqueObjectComponentBase_C {
	bool bBreakable; // 0xaa3(0x01)
	bool bBreak; // 0xaa4(0x01)
	char pad_AA5[0x3]; // 0xaa5(0x03)
	struct FVector BreakVec; // 0xaa8(0x0c)
	struct FVector BreakVecCover; // 0xab4(0x0c)
	float BreakValue; // 0xac0(0x04)
	char pad_AC4[0x4]; // 0xac4(0x04)
	struct TSoftClassPtr<UObject> PsyObjCoverSoft; // 0xac8(0x28)
	struct ABP_PsychicObjectBasic_C* PsyObjCover; // 0xaf0(0x08)
	struct FName backupProfileName; // 0xaf8(0x08)
	float ReboundHeightBase; // 0xb00(0x04)
	float ReboundHeightMin; // 0xb04(0x04)
	float ReboundHeightMax; // 0xb08(0x04)
	float ReboundSideBase; // 0xb0c(0x04)
	float ReboundSideMin; // 0xb10(0x04)
	float ReboundSideMax; // 0xb14(0x04)
	float ReboundSideAngleMin; // 0xb18(0x04)
	float ReboundSideAngleMax; // 0xb1c(0x04)
	float ReboundHeight; // 0xb20(0x04)
	float ReboundSide; // 0xb24(0x04)
	float ReboundSideAngle; // 0xb28(0x04)
	struct FVector ReboundPos; // 0xb2c(0x0c)
	struct FVector ReboundPosCover; // 0xb38(0x0c)
	float ClearDelarDeathWaitTime; // 0xb44(0x04)
	bool bEventCancelVM; // 0xb48(0x01)

	void SetEventSetting(bool event start in); // Function BP_UniqueObjectComponentVendingMachine.BP_UniqueObjectComponentVendingMachine_C.SetEventSetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCaptureUnqObj(bool flag in, bool success in); // Function BP_UniqueObjectComponentVendingMachine.BP_UniqueObjectComponentVendingMachine_C.SetCaptureUnqObj // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PostEventCancel(); // Function BP_UniqueObjectComponentVendingMachine.BP_UniqueObjectComponentVendingMachine_C.PostEventCancel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrevEventCancel(); // Function BP_UniqueObjectComponentVendingMachine.BP_UniqueObjectComponentVendingMachine_C.PrevEventCancel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAsyncCommon(bool dummy); // Function BP_UniqueObjectComponentVendingMachine.BP_UniqueObjectComponentVendingMachine_C.UpdateAsyncCommon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckDelayDeath(); // Function BP_UniqueObjectComponentVendingMachine.BP_UniqueObjectComponentVendingMachine_C.CheckDelayDeath // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckInputControl(bool dummy); // Function BP_UniqueObjectComponentVendingMachine.BP_UniqueObjectComponentVendingMachine_C.CheckInputControl // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void vibration(struct FString VibrationName); // Function BP_UniqueObjectComponentVendingMachine.BP_UniqueObjectComponentVendingMachine_C.vibration // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPhaseDestroyUnqObj(bool dunmy); // Function BP_UniqueObjectComponentVendingMachine.BP_UniqueObjectComponentVendingMachine_C.SetPhaseDestroyUnqObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetUniqueObjectCameraLookAtPos(float look rate in, struct FVector Pos); // Function BP_UniqueObjectComponentVendingMachine.BP_UniqueObjectComponentVendingMachine_C.GetUniqueObjectCameraLookAtPos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetTimeDilationAttackUnqObj(bool flag in, bool dummy); // Function BP_UniqueObjectComponentVendingMachine.BP_UniqueObjectComponentVendingMachine_C.SetTimeDilationAttackUnqObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckTimeDilation(bool return); // Function BP_UniqueObjectComponentVendingMachine.BP_UniqueObjectComponentVendingMachine_C.CheckTimeDilation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCheckDestroy(bool dummy); // Function BP_UniqueObjectComponentVendingMachine.BP_UniqueObjectComponentVendingMachine_C.UpdateCheckDestroy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void checkId(bool parent in, bool cover in, bool return); // Function BP_UniqueObjectComponentVendingMachine.BP_UniqueObjectComponentVendingMachine_C.checkId // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetUnqObjCamTargetPos(struct FVector Pos); // Function BP_UniqueObjectComponentVendingMachine.BP_UniqueObjectComponentVendingMachine_C.GetUnqObjCamTargetPos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetInputSetting(bool dummy); // Function BP_UniqueObjectComponentVendingMachine.BP_UniqueObjectComponentVendingMachine_C.SetInputSetting // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSeHit(); // Function BP_UniqueObjectComponentVendingMachine.BP_UniqueObjectComponentVendingMachine_C.SetSeHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetUniqueObjectPlayerMontage(enum class EPsychicObjectUniqueMontageIndex MontageIndexIn, bool bLeft, bool bMaleHero, struct UAnimMontage* Montage); // Function BP_UniqueObjectComponentVendingMachine.BP_UniqueObjectComponentVendingMachine_C.GetUniqueObjectPlayerMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void CancelInput(bool Skip); // Function BP_UniqueObjectComponentVendingMachine.BP_UniqueObjectComponentVendingMachine_C.CancelInput // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInputDelayCancel(bool dummy); // Function BP_UniqueObjectComponentVendingMachine.BP_UniqueObjectComponentVendingMachine_C.SetInputDelayCancel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetGuidePos(bool Input in, float pos rate in, struct FVector guide pos); // Function BP_UniqueObjectComponentVendingMachine.BP_UniqueObjectComponentVendingMachine_C.GetGuidePos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetInputFailure(bool dummy); // Function BP_UniqueObjectComponentVendingMachine.BP_UniqueObjectComponentVendingMachine_C.SetInputFailure // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttack(bool dummy); // Function BP_UniqueObjectComponentVendingMachine.BP_UniqueObjectComponentVendingMachine_C.SetAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FVector GetReboundPos(bool sign in); // Function BP_UniqueObjectComponentVendingMachine.BP_UniqueObjectComponentVendingMachine_C.GetReboundPos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetReboundParameter(); // Function BP_UniqueObjectComponentVendingMachine.BP_UniqueObjectComponentVendingMachine_C.SetReboundParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackThrow(bool dummy); // Function BP_UniqueObjectComponentVendingMachine.BP_UniqueObjectComponentVendingMachine_C.SetAttackThrow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FinalizeUniqueObject(bool dummy); // Function BP_UniqueObjectComponentVendingMachine.BP_UniqueObjectComponentVendingMachine_C.FinalizeUniqueObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInputSuccess(bool dummy); // Function BP_UniqueObjectComponentVendingMachine.BP_UniqueObjectComponentVendingMachine_C.SetInputSuccess // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHitUnqObj(bool hit enemy in, bool hit background in, struct FHCHitResult hit result in, struct FHitResult hit result bg in, bool dummy); // Function BP_UniqueObjectComponentVendingMachine.BP_UniqueObjectComponentVendingMachine_C.SetHitUnqObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitialParameter(bool flag in, bool first time in, bool dummy); // Function BP_UniqueObjectComponentVendingMachine.BP_UniqueObjectComponentVendingMachine_C.InitialParameter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitialComponent(bool dummy); // Function BP_UniqueObjectComponentVendingMachine.BP_UniqueObjectComponentVendingMachine_C.InitialComponent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

