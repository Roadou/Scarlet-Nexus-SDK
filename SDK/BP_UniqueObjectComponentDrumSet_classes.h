// BlueprintGeneratedClass BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C
// Size: 0xea1 (Inherited: 0xaa3)
struct UBP_UniqueObjectComponentDrumSet_C : UBP_UniqueObjectComponentBase_C {
	char pad_AA3[0x5]; // 0xaa3(0x05)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xaa8(0x08)
	struct TSoftClassPtr<UObject> PartsSoftClass; // 0xab0(0x28)
	struct TSoftClassPtr<UObject> BulletSoftClass; // 0xad8(0x28)
	struct TSoftClassPtr<UObject> PartsSoftClass02; // 0xb00(0x28)
	struct TSoftClassPtr<UObject> BulletSoftClass02; // 0xb28(0x28)
	int32_t AsyncCommonProc; // 0xb50(0x04)
	bool bSprut; // 0xb54(0x01)
	bool bSprutVisibility; // 0xb55(0x01)
	char pad_B56[0x2]; // 0xb56(0x02)
	struct UCurveVector* SprutPosCurve; // 0xb58(0x08)
	struct UCurveFloat* SprutRadiusCurve; // 0xb60(0x08)
	struct UCurveFloat* SplineDistCurve; // 0xb68(0x08)
	struct FVector SprutImpactOffset; // 0xb70(0x0c)
	bool bCheckSprut; // 0xb7c(0x01)
	char pad_B7D[0x3]; // 0xb7d(0x03)
	struct FGameTimer SprutTimer; // 0xb80(0x0c)
	struct FVector SprutPosStt; // 0xb8c(0x0c)
	struct FVector SprutPosEnd; // 0xb98(0x0c)
	struct FRotator SprutRot; // 0xba4(0x0c)
	float SprutPosRadius; // 0xbb0(0x04)
	bool bSprutDelay; // 0xbb4(0x01)
	char pad_BB5[0x3]; // 0xbb5(0x03)
	struct FGameTimer SprutDelayTimer; // 0xbb8(0x0c)
	float SprutImpactValueMin; // 0xbc4(0x04)
	float SprutImpactValueMax; // 0xbc8(0x04)
	float SprutDelayTimeMin; // 0xbcc(0x04)
	float SprutDelayTimeMax; // 0xbd0(0x04)
	float SprutDelayTime; // 0xbd4(0x04)
	float SprutHeightRateMin; // 0xbd8(0x04)
	float SprutHeightRateMax; // 0xbdc(0x04)
	float SprutHeightRate; // 0xbe0(0x04)
	int32_t CmnIdxSprut; // 0xbe4(0x04)
	struct UParticleSystem* EffectSprutOld; // 0xbe8(0x08)
	bool bThrowDrum; // 0xbf0(0x01)
	bool bAttackReady; // 0xbf1(0x01)
	bool bSplineMove; // 0xbf2(0x01)
	bool bSplineCheck; // 0xbf3(0x01)
	bool bSplineFinish; // 0xbf4(0x01)
	char pad_BF5[0x3]; // 0xbf5(0x03)
	struct FVector SplinePosStt; // 0xbf8(0x0c)
	struct FVector SplinePosEnd; // 0xc04(0x0c)
	struct FVector SplinePosRelay; // 0xc10(0x0c)
	float SprutImpactValue; // 0xc1c(0x04)
	float SplineHeightMin; // 0xc20(0x04)
	float SplineHeightMax; // 0xc24(0x04)
	struct FVector SplinePos; // 0xc28(0x0c)
	float SplineMoveTime; // 0xc34(0x04)
	int32_t SplineIndex; // 0xc38(0x04)
	int32_t SplineZone; // 0xc3c(0x04)
	float SplineZoneTime; // 0xc40(0x04)
	float SplineZoneDist; // 0xc44(0x04)
	struct TArray<float> SplineTimeList; // 0xc48(0x10)
	float SplineTimeBase; // 0xc58(0x04)
	char pad_C5C[0x4]; // 0xc5c(0x04)
	struct TArray<float> SplineDistList; // 0xc60(0x10)
	float SplineDistBase; // 0xc70(0x04)
	char pad_C74[0x4]; // 0xc74(0x04)
	struct TArray<int32_t> AttackIndexList; // 0xc78(0x10)
	struct FGameTimer InputNextTimer; // 0xc88(0x0c)
	bool bInputNext; // 0xc94(0x01)
	char pad_C95[0x3]; // 0xc95(0x03)
	struct UStaticMeshComponent* CoverMesh; // 0xc98(0x08)
	bool bAttackPos; // 0xca0(0x01)
	char pad_CA1[0x3]; // 0xca1(0x03)
	struct FVector AttackPos; // 0xca4(0x0c)
	bool bDropAttack; // 0xcb0(0x01)
	char pad_CB1[0x7]; // 0xcb1(0x07)
	struct UParticleSystem* EffectHitBackGround; // 0xcb8(0x08)
	bool bCheckBulletHit; // 0xcc0(0x01)
	bool bLiquidGather; // 0xcc1(0x01)
	char pad_CC2[0x2]; // 0xcc2(0x02)
	float LiquidGatherTime; // 0xcc4(0x04)
	struct FGameTimer LiquidGatherTimer; // 0xcc8(0x0c)
	struct FVector LiquidGatherPosOffset; // 0xcd4(0x0c)
	struct FVector LiquidGatherPos; // 0xce0(0x0c)
	float LiquidGatherHeight; // 0xcec(0x04)
	float LiquidGatherRadiusMin; // 0xcf0(0x04)
	float LiquidGatherRadiusMax; // 0xcf4(0x04)
	float LiquidGatherGuideTime; // 0xcf8(0x04)
	char pad_CFC[0x4]; // 0xcfc(0x04)
	struct UParticleSystem* EmitterHitDrum; // 0xd00(0x08)
	struct UParticleSystem* EmitterSprut; // 0xd08(0x08)
	struct UParticleSystem* EmitterLiquidSingle; // 0xd10(0x08)
	struct UParticleSystem* EmitterLiquidGather; // 0xd18(0x08)
	struct UParticleSystem* EmitterDisappear; // 0xd20(0x08)
	struct UParticleSystem* EmitterHitLiquid; // 0xd28(0x08)
	struct TArray<struct URSParticleSystemComponentBase*> EffectSingleList; // 0xd30(0x10)
	struct TArray<struct URSParticleSystemComponentBase*> EffectDisappearList; // 0xd40(0x10)
	bool bWaterType; // 0xd50(0x01)
	char pad_D51[0x7]; // 0xd51(0x07)
	struct URSParticleSystemComponentBase* EffectHitDrum; // 0xd58(0x08)
	int32_t ReboundIndex; // 0xd60(0x04)
	float ReboundAngleBase; // 0xd64(0x04)
	struct FVector ReboundPosOffset; // 0xd68(0x0c)
	float ReboundRadius; // 0xd74(0x04)
	float ReboundHeight; // 0xd78(0x04)
	struct FVector ReboundPos; // 0xd7c(0x0c)
	struct FVector GatherPosStt; // 0xd88(0x0c)
	struct FVector GatherPosEnd; // 0xd94(0x0c)
	struct FVector GatherPosOffset; // 0xda0(0x0c)
	struct FGameTimer GatherLerpTimer; // 0xdac(0x0c)
	bool bGatherDelay; // 0xdb8(0x01)
	char pad_DB9[0x3]; // 0xdb9(0x03)
	float GatherDelayTime; // 0xdbc(0x04)
	struct FGameTimer GatherDelayTimer; // 0xdc0(0x0c)
	float GatherRotSpeedMin; // 0xdcc(0x04)
	float GatherRotSpeedMax; // 0xdd0(0x04)
	float GatherRotSpeed; // 0xdd4(0x04)
	float GatherRotDir; // 0xdd8(0x04)
	char pad_DDC[0x4]; // 0xddc(0x04)
	struct TArray<struct FVector> GatherPosSttList; // 0xde0(0x10)
	struct TArray<struct FVector> GatherPosEndList; // 0xdf0(0x10)
	struct TArray<struct FVector> GatherPosOffsetList; // 0xe00(0x10)
	float GatherLerpTimeExtraOld; // 0xe10(0x04)
	float GatherLerpTimeOld; // 0xe14(0x04)
	bool bLiquidGrow; // 0xe18(0x01)
	bool bLiquidGrowFinish; // 0xe19(0x01)
	char pad_E1A[0x2]; // 0xe1a(0x02)
	float LiquidGrowTime; // 0xe1c(0x04)
	struct FGameTimer LiquidGrowTimer; // 0xe20(0x0c)
	float InputWaitTimeBase_1; // 0xe2c(0x04)
	struct URSParticleSystemComponentBase* EffectSingle; // 0xe30(0x08)
	struct URSParticleSystemComponentBase* EffectGrow; // 0xe38(0x08)
	bool bDisappearBullet; // 0xe40(0x01)
	char pad_E41[0x7]; // 0xe41(0x07)
	struct UCurveFloat* DisappearDropCurve; // 0xe48(0x08)
	struct FVector DisappearPosBullet; // 0xe50(0x0c)
	float DisappearTimeBullet; // 0xe5c(0x04)
	struct FGameTimer DisappearTimerBullet; // 0xe60(0x0c)
	char pad_E6C[0x4]; // 0xe6c(0x04)
	struct URSParticleSystemComponentBase* EffectDisappear; // 0xe70(0x08)
	bool bAfterInputWait; // 0xe78(0x01)
	bool bCheckAttackDrop; // 0xe79(0x01)
	bool bBreak; // 0xe7a(0x01)
	bool bLiquidHit; // 0xe7b(0x01)
	bool bBulletActive; // 0xe7c(0x01)
	char pad_E7D[0x3]; // 0xe7d(0x03)
	struct FVector UnqObjCamLookAtPosDS; // 0xe80(0x0c)
	char pad_E8C[0x4]; // 0xe8c(0x04)
	struct TArray<struct FVector> DisappearPosBulletList; // 0xe90(0x10)
	bool bEventCancelDS; // 0xea0(0x01)

	void SetPhaseDestroyUnqObj(bool dunmy); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetPhaseDestroyUnqObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PostEventCancel(); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.PostEventCancel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrevEventCancel(); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.PrevEventCancel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInputWaitEnemy(bool flag in, bool success in, bool dummy); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetInputWaitEnemy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetUniqueObjectCameraLookAtPos(float look rate in, struct FVector Pos); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.GetUniqueObjectCameraLookAtPos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateDisappear(); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.UpdateDisappear // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDisappear(bool flag in); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetDisappear // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTimeDilationAttackUnqObj(bool flag in, bool dummy); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetTimeDilationAttackUnqObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckTimeDilation(bool return); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.CheckTimeDilation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FinalizeUniqueObject(bool dummy); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.FinalizeUniqueObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetUnqObjCamTargetPos(struct FVector Pos); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.GetUnqObjCamTargetPos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetBreakCancel(); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetBreakCancel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInputGuideCancelOld(bool dummy); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetInputGuideCancelOld // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEffectSingleNew(bool flag in, struct FVector pos in); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetEffectSingleNew // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInputSetting(bool dummy); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetInputSetting // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBreak(); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetBreak // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEffectHitLiquidOld(struct FVector eft pos in); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetEffectHitLiquidOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSeHit(); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetSeHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSeGather(); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetSeGather // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSeVibrate(); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetSeVibrate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetUniqueObjectPlayerMontage(enum class EPsychicObjectUniqueMontageIndex MontageIndexIn, bool bLeft, bool bMaleHero, struct UAnimMontage* Montage); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.GetUniqueObjectPlayerMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void UpdateDisappearBulletOld(); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.UpdateDisappearBulletOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDisappearBulletOld(bool flag in); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetDisappearBulletOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInputDelayCancel(bool dummy); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetInputDelayCancel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEffectAttackOff(); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetEffectAttackOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackDrop(); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetAttackDrop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCancelDestroy(); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetCancelDestroy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CancelInput(bool Skip); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.CancelInput // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCheckDestroyUnqObj(bool flag in, bool dummy); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetCheckDestroyUnqObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDestroyUnqObj(bool dummy); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetDestroyUnqObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateGatherHitDelay(); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.UpdateGatherHitDelay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetGatherHitDelay(bool flag in); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetGatherHitDelay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEffectDisappearOld(); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetEffectDisappearOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInputFailure(bool dummy); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetInputFailure // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEffectGrow(bool flag in); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetEffectGrow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLiquidGrowBullet(bool flag in); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetLiquidGrowBullet // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateLiquidGrow(); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.UpdateLiquidGrow // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLiquidGrow(bool flag in); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetLiquidGrow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInputExtraSuccess(bool dummy); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetInputExtraSuccess // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLiquidGatherBullet(bool flag in, struct FVector pos in); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetLiquidGatherBullet // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEffectSingleOld(bool flag in, struct FVector pos in); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetEffectSingleOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEffectHitDrumOld(bool flag in, struct FVector eft pos in); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetEffectHitDrumOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetGuidePos(bool Input in, float pos rate in, struct FVector guide pos); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.GetGuidePos // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateLiquidGather(); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.UpdateLiquidGather // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLiquidGather(bool flag in); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetLiquidGather // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInputSuccess(bool dummy); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetInputSuccess // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDestroyPartsObj(); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetDestroyPartsObj // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCheckSprut(); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.UpdateCheckSprut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCheckSprut(bool flag in); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetCheckSprut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInputWait(bool flag in, bool success in, bool dummy); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetInputWait // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCheckDestroy(bool dummy); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.UpdateCheckDestroy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCheckBulletHit(); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.UpdateCheckBulletHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCheckBulletHit(bool flag in); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetCheckBulletHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEffectHitUnqObj(bool hit enemy in, bool hit background in, struct FHCHitResult hit result in, struct FHitResult hit result bg in, bool dummy); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetEffectHitUnqObj // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackThrow(bool dummy); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetAttackThrow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSprutCover(); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetSprutCover // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCheckInputNext(); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.UpdateCheckInputNext // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCheckInputNext(bool flag in); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetCheckInputNext // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCheckSpline(); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.UpdateCheckSpline // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCheckSpline(bool flag in); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetCheckSpline // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcSplinePoint(); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.CalcSplinePoint // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PostAsyncSplineMove(); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.PostAsyncSplineMove // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAsyncSplineMove(); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.UpdateAsyncSplineMove // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrevAsyncSplineMove(); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.PrevAsyncSplineMove // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSplineMove(bool flag in); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetSplineMove // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHitUnqObj(bool hit enemy in, bool hit background in, struct FHCHitResult hit result in, struct FHitResult hit result bg in, bool dummy); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetHitUnqObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEffectSprutOld(); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetEffectSprutOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PostAsyncSprut(); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.PostAsyncSprut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAsyncSprut(); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.UpdateAsyncSprut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrevAsyncSprut(); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.PrevAsyncSprut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSprut(bool flag in); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetSprut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSprutDelay(bool flag in); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetSprutDelay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttack(bool dummy); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PostAsyncCommon(bool dummy); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.PostAsyncCommon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAsyncCommon(bool dummy); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.UpdateAsyncCommon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrevAsyncCommon(bool dummy); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.PrevAsyncCommon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAsyncCapture(bool flag in, bool capture success in, bool dummy); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.SetAsyncCapture // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitialParameter(bool flag in, bool first time in, bool dummy); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.InitialParameter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitialComponent(bool dummy); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.InitialComponent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void VibrationDelay(float DelayTime, struct FString VibrationName); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.VibrationDelay // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_UniqueObjectComponentDrumSet(int32_t EntryPoint); // Function BP_UniqueObjectComponentDrumSet.BP_UniqueObjectComponentDrumSet_C.ExecuteUbergraph_BP_UniqueObjectComponentDrumSet // (Final|UbergraphFunction) // @ game+0x1685580
};

