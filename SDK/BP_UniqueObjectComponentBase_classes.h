// BlueprintGeneratedClass BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C
// Size: 0xaa3 (Inherited: 0xc0)
struct UBP_UniqueObjectComponentBase_C : UActorComponent {
	struct UBP_PsychicComponentMain_C* PsyCompMain; // 0xc0(0x08)
	struct UBP_PsychicObjectComponent_C* PsyObjComp; // 0xc8(0x08)
	struct FUniqueObjectCommonParameter UnqObjParameter; // 0xd0(0x30)
	bool bInputWaitNotify; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	float InputDelayTime; // 0x104(0x04)
	float InputWaitTime; // 0x108(0x04)
	float InputDilationRate; // 0x10c(0x04)
	bool bInputWait; // 0x110(0x01)
	bool bInputPause; // 0x111(0x01)
	bool bInputWaitEnable; // 0x112(0x01)
	bool bInputWaitCancel; // 0x113(0x01)
	bool bCallUniqueInputStart; // 0x114(0x01)
	bool bInputSuccess; // 0x115(0x01)
	bool bInputSuccessWaitAttack; // 0x116(0x01)
	bool bInputFailure; // 0x117(0x01)
	bool bInputCancel; // 0x118(0x01)
	bool bInputCancelSkip; // 0x119(0x01)
	bool bInputDelay; // 0x11a(0x01)
	bool bRequestAsyncInputDelay; // 0x11b(0x01)
	bool bAsyncInputDelay; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
	struct FGameTimer InputDelayTimer; // 0x120(0x0c)
	bool bRequestAsyncInputWait; // 0x12c(0x01)
	bool bAsyncInputWait; // 0x12d(0x01)
	bool bInputWaitSkipUpdateTimer; // 0x12e(0x01)
	char pad_12F[0x1]; // 0x12f(0x01)
	struct FGameTimer InputWaitTimer; // 0x130(0x0c)
	float InputTimeDilationRate; // 0x13c(0x04)
	struct FString InputTimeDailtionName; // 0x140(0x10)
	bool bUniqueAttackInputSignOld; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	struct TArray<enum class EPsychicObjectUniqueInputButton> UniqueAttackInputButton; // 0x158(0x10)
	struct TArray<enum class EPsychicObjectUniqueInputType> UniqueAttackIputType; // 0x168(0x10)
	struct TArray<bool> UniqueAttackInputSuccess; // 0x178(0x10)
	bool bCheckInputReturn; // 0x188(0x01)
	bool bCheckInputSuccess; // 0x189(0x01)
	bool bLastThrow; // 0x18a(0x01)
	bool bDelayDeath; // 0x18b(0x01)
	float DelayDeathTime; // 0x18c(0x04)
	struct FGameTimer DelayDeathTimer; // 0x190(0x0c)
	bool bRequestAsyncCommon; // 0x19c(0x01)
	bool bAsyncCommon; // 0x19d(0x01)
	bool bInputObject; // 0x19e(0x01)
	char pad_19F[0x1]; // 0x19f(0x01)
	struct TArray<bool> CommonFlag; // 0x1a0(0x10)
	int32_t InputStep; // 0x1b0(0x04)
	int32_t InputSectorMax; // 0x1b4(0x04)
	int32_t InputSector; // 0x1b8(0x04)
	bool bInputStepDir; // 0x1bc(0x01)
	bool bInputTypeRapid; // 0x1bd(0x01)
	char pad_1BE[0x2]; // 0x1be(0x02)
	int32_t InputRapidMax; // 0x1c0(0x04)
	int32_t InputRapidCount; // 0x1c4(0x04)
	bool bInputEnableTime; // 0x1c8(0x01)
	char pad_1C9[0x3]; // 0x1c9(0x03)
	float InputEnableTime; // 0x1cc(0x04)
	struct FGameTimer InputEnableTimer; // 0x1d0(0x0c)
	bool bInputSetting; // 0x1dc(0x01)
	char pad_1DD[0x3]; // 0x1dd(0x03)
	int32_t InputIndex; // 0x1e0(0x04)
	int32_t InputMax; // 0x1e4(0x04)
	bool bInputGuide; // 0x1e8(0x01)
	bool bInputGuidePos; // 0x1e9(0x01)
	char pad_1EA[0x2]; // 0x1ea(0x02)
	struct FVector InputGuidePos; // 0x1ec(0x0c)
	float GuideTargetRateInput; // 0x1f8(0x04)
	float GuideTargetRateAttack; // 0x1fc(0x04)
	bool bGuideDirectInput; // 0x200(0x01)
	bool bGuideDirectAttack; // 0x201(0x01)
	bool bGuideDirectInputProc; // 0x202(0x01)
	bool bGuideDirectAttackProc; // 0x203(0x01)
	bool bInputGuideAutoOff; // 0x204(0x01)
	bool bInputGuideToWait; // 0x205(0x01)
	bool bGuideUseActorPos; // 0x206(0x01)
	char pad_207[0x1]; // 0x207(0x01)
	float GuideLerpTimeInput; // 0x208(0x04)
	float GuideLerpTimeAttack; // 0x20c(0x04)
	bool bInputExtra; // 0x210(0x01)
	bool bInputExtraProc; // 0x211(0x01)
	bool bInputExtraFirst; // 0x212(0x01)
	char pad_213[0x1]; // 0x213(0x01)
	float InputExtraTime; // 0x214(0x04)
	float InputExtraTimeTotal; // 0x218(0x04)
	struct FGameTimer InputExtraTimer; // 0x21c(0x0c)
	bool bDbPrintInputExtra; // 0x228(0x01)
	bool bDbPrintInputRotate; // 0x229(0x01)
	bool bDbPrintAttackCheck; // 0x22a(0x01)
	bool bDbPrintCancel; // 0x22b(0x01)
	bool bDbCheckDestroy; // 0x22c(0x01)
	bool bDebugDrawUniqueRideCapsule; // 0x22d(0x01)
	bool bDebugDrawUniqueRideLocRot; // 0x22e(0x01)
	bool bDebugDrawInputWait; // 0x22f(0x01)
	bool bDebugPrintFloatSuspension; // 0x230(0x01)
	bool bInputTypeHold; // 0x231(0x01)
	bool bCheckInputHold; // 0x232(0x01)
	bool bInputMoveMouse; // 0x233(0x01)
	bool bInputStickTriggerLt; // 0x234(0x01)
	bool bInputStickTriggerRt; // 0x235(0x01)
	bool bInputExtraCancel; // 0x236(0x01)
	bool bUniqueRebound; // 0x237(0x01)
	bool bUniqueReboundTargetBase; // 0x238(0x01)
	bool bUniqueReboundTargetTop; // 0x239(0x01)
	char pad_23A[0x2]; // 0x23a(0x02)
	struct FVector UniqueReboundPosOffset; // 0x23c(0x0c)
	struct FVector UniqueReboundPos; // 0x248(0x0c)
	struct FVector UniqueReboundDirection; // 0x254(0x0c)
	bool bInputDelayToGuide; // 0x260(0x01)
	bool bInputDelayCancel; // 0x261(0x01)
	bool bDelayDeathCheckHitOld; // 0x262(0x01)
	bool bInputTypeRotate; // 0x263(0x01)
	bool bGuideCheckHit; // 0x264(0x01)
	char pad_265[0x3]; // 0x265(0x03)
	float GuideHitCheckTime; // 0x268(0x04)
	struct FGameTimer GuideHitCheckTimer; // 0x26c(0x0c)
	bool bAttackCheck; // 0x278(0x01)
	bool bHitTarget; // 0x279(0x01)
	bool bHitTargetSingle; // 0x27a(0x01)
	bool bNextAttackUnique; // 0x27b(0x01)
	bool bAnimNotifyFirstAttack; // 0x27c(0x01)
	bool bAttackCheckSkip; // 0x27d(0x01)
	char pad_27E[0x2]; // 0x27e(0x02)
	float AttackCheckTime; // 0x280(0x04)
	struct FGameTimer AttackCheckTimer; // 0x284(0x0c)
	bool InputExtraSkipTimeDilation; // 0x290(0x01)
	bool InputExtraSkipPostProcess; // 0x291(0x01)
	bool bInputWaitSkipTimeDilation; // 0x292(0x01)
	bool bInputWaitSkipPostProcess; // 0x293(0x01)
	bool bInputTypeRepeat; // 0x294(0x01)
	bool bInputTypeRepeatFirst; // 0x295(0x01)
	char pad_296[0x2]; // 0x296(0x02)
	int32_t InputRepeatMax; // 0x298(0x04)
	int32_t InputRepeatCount; // 0x29c(0x04)
	bool bLinearDamp; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	float LinearDampBackUp; // 0x2a4(0x04)
	float LinearDampValue; // 0x2a8(0x04)
	float LinearDampTime; // 0x2ac(0x04)
	struct FGameTimer LinearDampTimer; // 0x2b0(0x0c)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct FString AttackRowNameKey; // 0x2c0(0x10)
	struct TArray<struct FName> AttackRowNameList; // 0x2d0(0x10)
	int32_t AttackInfoIndex; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct TArray<struct FHCCollisionCommonInfo> AttackCommonInfoList; // 0x2e8(0x10)
	struct TArray<struct FHCSkillCommonInfo> AttackSkillInfoList; // 0x2f8(0x10)
	struct TArray<struct FUniqueObjectAttackInfo> AttackInfoList; // 0x308(0x10)
	enum class EPsychicObjectUniqueInputType InputLeftType; // 0x318(0x01)
	enum class EPsychicObjectUniqueInputType InputCentreType; // 0x319(0x01)
	enum class EPsychicObjectUniqueInputType InputRightType; // 0x31a(0x01)
	enum class EPsychicObjectUniqueInputButton InputLeftButton; // 0x31b(0x01)
	enum class EPsychicObjectUniqueInputButton InputCentreButton; // 0x31c(0x01)
	enum class EPsychicObjectUniqueInputButton InputRightButton; // 0x31d(0x01)
	char pad_31E[0x2]; // 0x31e(0x02)
	struct UAnimMontage* MontageCancel; // 0x320(0x08)
	bool bUniquePress; // 0x328(0x01)
	bool bUniquePressHit; // 0x329(0x01)
	bool bUniquePressTargetLocation; // 0x32a(0x01)
	bool bUniquePressFixHeight; // 0x32b(0x01)
	bool bUniquePressTraceHeight; // 0x32c(0x01)
	bool bUniquePressUpdateHeight; // 0x32d(0x01)
	char pad_32E[0x2]; // 0x32e(0x02)
	struct UCurveFloat* UniquePressPosCurve; // 0x330(0x08)
	bool bUniquePressHeightRange; // 0x338(0x01)
	char pad_339[0x3]; // 0x339(0x03)
	float UniquePressHeightRange; // 0x33c(0x04)
	float UniquePressHeight; // 0x340(0x04)
	float UniquePressRotLerpTime; // 0x344(0x04)
	struct FGameTimer UniquePressTimer; // 0x348(0x0c)
	struct FGameTimer UniquePressRotTimer; // 0x354(0x0c)
	float UniquePressHeightStt; // 0x360(0x04)
	float UniquePressHeightEnd; // 0x364(0x04)
	struct FVector WorkLerpPosStt; // 0x368(0x0c)
	struct FRotator WorkLerpRotStt; // 0x374(0x0c)
	struct FVector WorkLerpPosEnd; // 0x380(0x0c)
	struct FRotator WorkLerpRotEnd; // 0x38c(0x0c)
	struct FVector WorkObjPos; // 0x398(0x0c)
	struct FRotator WorkObjRot; // 0x3a4(0x0c)
	bool bUniqueExplosion; // 0x3b0(0x01)
	char pad_3B1[0x3]; // 0x3b1(0x03)
	float UniqueExplosionTime; // 0x3b4(0x04)
	float UniqueExplosionRadius; // 0x3b8(0x04)
	struct FGameTimer UniqueExplosionTimer; // 0x3bc(0x0c)
	bool bWaitAttackNotify; // 0x3c8(0x01)
	char pad_3C9[0x3]; // 0x3c9(0x03)
	struct FVector UniquePressPos; // 0x3cc(0x0c)
	bool bUniquePressVibrate; // 0x3d8(0x01)
	bool bUniquePressVibrateLoop; // 0x3d9(0x01)
	bool bUniquePressVibrateLoopProc; // 0x3da(0x01)
	char pad_3DB[0x5]; // 0x3db(0x05)
	struct UCurveVector* UniquePressVibrateLoopCurve; // 0x3e0(0x08)
	struct FVector UniquePressVibrateLoopScale; // 0x3e8(0x0c)
	float UniquePressVibrateLoopTimer; // 0x3f4(0x04)
	float UniquePressVibrateLoopTime; // 0x3f8(0x04)
	float UniquePressVibrateLoopTimeRate; // 0x3fc(0x04)
	bool bUniquePressVibrateLoopHit; // 0x400(0x01)
	char pad_401[0x3]; // 0x401(0x03)
	struct FGameTimer UniquePressVibrateLoopHitTimer; // 0x404(0x0c)
	struct FVector UniquePressVibrateLoopHitScale; // 0x410(0x0c)
	float UniquePressVibrateLoopHitTimeRate; // 0x41c(0x04)
	float UniquePressVibrateLoopHitTime; // 0x420(0x04)
	bool bUseNewCancel; // 0x424(0x01)
	bool bUseNewFailure; // 0x425(0x01)
	bool bUniqueBend; // 0x426(0x01)
	bool bUniqueBendProc; // 0x427(0x01)
	bool bUniqueBendSelf; // 0x428(0x01)
	bool bUniqueBended; // 0x429(0x01)
	char pad_42A[0x6]; // 0x42a(0x06)
	struct UCurveFloat* UniqueBendAngleCurve; // 0x430(0x08)
	float UniqueBendAngleRate; // 0x438(0x04)
	float UniqueBendTimeRate; // 0x43c(0x04)
	struct FGameTimer UniqueBendTimer; // 0x440(0x0c)
	float UniqueBendTime; // 0x44c(0x04)
	float UniqueBendRate; // 0x450(0x04)
	float UniqueBendHeightMax; // 0x454(0x04)
	float UniqueBendHeight; // 0x458(0x04)
	struct FVector UniqueBendAxis; // 0x45c(0x0c)
	struct FVector UniqueBendPos; // 0x468(0x0c)
	struct FVector UniqueBendPosOffsetStt; // 0x474(0x0c)
	struct FVector UniqueBendPosOffsetEnd; // 0x480(0x0c)
	struct FRotator UniqueBendRotStt; // 0x48c(0x0c)
	struct FRotator UniqueBendRotEnd; // 0x498(0x0c)
	struct FRotator UniqueBendRot; // 0x4a4(0x0c)
	struct TArray<struct AActor*> UnqObjStateEnemyList; // 0x4b0(0x10)
	bool bUniquePressVibrateDir; // 0x4c0(0x01)
	char pad_4C1[0x3]; // 0x4c1(0x03)
	float UniquePressVibrateTimeMin; // 0x4c4(0x04)
	float UniquePressVibrateTimeMax; // 0x4c8(0x04)
	float UniquePressVibrateSpeedMin; // 0x4cc(0x04)
	float UniquePressVibrateSpeedMax; // 0x4d0(0x04)
	float UniquePressVibrateSpeed; // 0x4d4(0x04)
	float UniquePressVibrateRangeMin; // 0x4d8(0x04)
	float UniquePressVibrateRangeMax; // 0x4dc(0x04)
	float UniquePressVibrateRange; // 0x4e0(0x04)
	struct FGameTimer UniquePressVibrateTimer; // 0x4e4(0x0c)
	float UniquePressVibrateOffset; // 0x4f0(0x04)
	struct FVector UniquePressVibrateOffset2; // 0x4f4(0x0c)
	struct TArray<float> DamageMaterialValueList; // 0x500(0x10)
	int32_t DamageMaterialLevel; // 0x510(0x04)
	char pad_514[0x4]; // 0x514(0x04)
	struct ARsBattleHero_C* CameraOwner; // 0x518(0x08)
	struct FName CameraRowName; // 0x520(0x08)
	struct FUniqueObjectCameraParameter CameraParameter; // 0x528(0x38)
	struct FCameraUniqueObjectParameter UniqueObjectCameraParameter; // 0x560(0x58)
	bool bUniqueCameraTypeNormal; // 0x5b8(0x01)
	bool bUniqueCameraTypeSocket; // 0x5b9(0x01)
	bool bUniqueCameraTypeControl; // 0x5ba(0x01)
	bool bUniqueCameraTypeRemote; // 0x5bb(0x01)
	bool bUniqueCameraTriggerInfo; // 0x5bc(0x01)
	bool bUniqueCameraBackupRootLerp; // 0x5bd(0x01)
	bool bUniqueCameraBackupLockRoot; // 0x5be(0x01)
	char pad_5BF[0x1]; // 0x5bf(0x01)
	float UniqueCameraResetTime; // 0x5c0(0x04)
	int32_t UniqueCameraSideIndex; // 0x5c4(0x04)
	struct FVector UniqueCameraTargetPos; // 0x5c8(0x0c)
	bool bUniqueCameraCheck; // 0x5d4(0x01)
	bool bInputTypeDuel; // 0x5d5(0x01)
	bool bInputTypeControl; // 0x5d6(0x01)
	bool bDelayDeathCheckSuccess; // 0x5d7(0x01)
	bool bDelayDeathCheckLastHit; // 0x5d8(0x01)
	bool bDelayDeathCheckSkip; // 0x5d9(0x01)
	char pad_5DA[0x2]; // 0x5da(0x02)
	struct FVector WeightGaugePosOffset; // 0x5dc(0x0c)
	bool bCapturePos; // 0x5e8(0x01)
	char pad_5E9[0x7]; // 0x5e9(0x07)
	struct UCurveVector* CapturePosCurve; // 0x5f0(0x08)
	struct FVector CapturePosRate; // 0x5f8(0x0c)
	struct FVector CapturePosOffset; // 0x604(0x0c)
	bool bCaptureVibratePos; // 0x610(0x01)
	char pad_611[0x7]; // 0x611(0x07)
	struct UCurveVector* CaptureVibratePosCurve; // 0x618(0x08)
	struct FVector CaptureVibratePosRate; // 0x620(0x0c)
	struct FVector CaptureVibratePosOffset; // 0x62c(0x0c)
	bool bCaptureVibrateRot; // 0x638(0x01)
	char pad_639[0x7]; // 0x639(0x07)
	struct UCurveVector* CaptureVibrateRotCurve; // 0x640(0x08)
	struct FVector CaptureVibrateRotRate; // 0x648(0x0c)
	struct FRotator CaptureVibrateRotOffset; // 0x654(0x0c)
	bool bCaptureWaitAttack; // 0x660(0x01)
	bool bUseNewCommon; // 0x661(0x01)
	bool bGroundSlope; // 0x662(0x01)
	bool bGroundSlopeNextLocation; // 0x663(0x01)
	bool bGroundSlopeFailed; // 0x664(0x01)
	bool bGroundSlopeFloat; // 0x665(0x01)
	bool bGroundSlopeFall; // 0x666(0x01)
	char pad_667[0x1]; // 0x667(0x01)
	struct TArray<struct FVector> GroundSlopeOffsetList; // 0x668(0x10)
	struct FVector GroundSlopeFrontDirHz; // 0x678(0x0c)
	struct FVector GroundSlopeNormal; // 0x684(0x0c)
	struct FVector GroundSlopeLocation; // 0x690(0x0c)
	struct FVector GroundSlopeLocationNext; // 0x69c(0x0c)
	bool bUniqueRide; // 0x6a8(0x01)
	char pad_6A9[0x3]; // 0x6a9(0x03)
	float UniqueRideSpeed; // 0x6ac(0x04)
	float UniqueRideSpeedMax; // 0x6b0(0x04)
	float UniqueRideAccel; // 0x6b4(0x04)
	bool bUniqueRideDecel; // 0x6b8(0x01)
	char pad_6B9[0x3]; // 0x6b9(0x03)
	float UniqueRideDecel; // 0x6bc(0x04)
	bool bUniqueRideDecelStop; // 0x6c0(0x01)
	char pad_6C1[0x3]; // 0x6c1(0x03)
	float UniqueRideDecelStopTime; // 0x6c4(0x04)
	struct FGameTimer UniqueRideDecelStopTimer; // 0x6c8(0x0c)
	float UniqueRideDecelStopSpeedStt; // 0x6d4(0x04)
	enum class EEasingFunc UniqueRideDecelStopEaseFunction; // 0x6d8(0x01)
	char pad_6D9[0x3]; // 0x6d9(0x03)
	float UniqueRideDecelStopEaseBlendExp; // 0x6dc(0x04)
	float UniqueRideTurnSpeed; // 0x6e0(0x04)
	float UniqueRideTurnSpeedMax; // 0x6e4(0x04)
	float UniqueRideTurnAccel; // 0x6e8(0x04)
	float UniqueRideTurnDecel; // 0x6ec(0x04)
	float UniqueRideTurnRate; // 0x6f0(0x04)
	struct FVector UniqueRidePos; // 0x6f4(0x0c)
	struct FVector UniqueRidePosOffset; // 0x700(0x0c)
	struct FRotator UniqueRideRot; // 0x70c(0x0c)
	bool bUniqueRideCheckBg; // 0x718(0x01)
	bool bUniqueRideChkBgHit; // 0x719(0x01)
	char pad_71A[0x2]; // 0x71a(0x02)
	struct FVector UniqueRideChkBgAdjustPos; // 0x71c(0x0c)
	float UniqueRideChkBgAdjustAngle; // 0x728(0x04)
	bool bInputRotateFirst; // 0x72c(0x01)
	bool bThrowMontageCancelCheck; // 0x72d(0x01)
	bool bThrowMontageCancel; // 0x72e(0x01)
	char pad_72F[0x1]; // 0x72f(0x01)
	struct FGameTimer ThrowMontageCancelTimer; // 0x730(0x0c)
	float ThrowMontageCancelTime; // 0x73c(0x04)
	bool bUniqueCameraHitLerp; // 0x740(0x01)
	char pad_741[0x3]; // 0x741(0x03)
	struct FGameTimer UniqueCameraHitLerpTimer; // 0x744(0x0c)
	float UniqueCameraHitLerpTime; // 0x750(0x04)
	float UniqueCameraHitLerpStt; // 0x754(0x04)
	float UniqueCameraHitLerpEnd; // 0x758(0x04)
	enum class EEasingFunc UniqueCameraHitLerpEaseType; // 0x75c(0x01)
	char pad_75D[0x3]; // 0x75d(0x03)
	struct URSAtomComponentBase* SeCompInputGuage; // 0x760(0x08)
	bool bNewElectricPole; // 0x768(0x01)
	bool bDispHitDamageMesh; // 0x769(0x01)
	char pad_76A[0x6]; // 0x76a(0x06)
	struct TArray<struct UStaticMesh*> HitDamageMeshList; // 0x770(0x10)
	struct UStaticMesh* HitBackupMesh; // 0x780(0x08)
	bool bCallUniqueObjectEnd; // 0x788(0x01)
	char pad_789[0x7]; // 0x789(0x07)
	struct USoundAtomCue* SoundInputStart; // 0x790(0x08)
	struct USoundAtomCue* SoundInputRepeat; // 0x798(0x08)
	struct USoundAtomCue* SoundInputRotate; // 0x7a0(0x08)
	struct TArray<float> PlayerLerpAngleList; // 0x7a8(0x10)
	float PlayerLerpTraceDistance; // 0x7b8(0x04)
	float PlayerLerpDistance; // 0x7bc(0x04)
	float EnemyLerpDistance; // 0x7c0(0x04)
	float EnemyLerpRate; // 0x7c4(0x04)
	bool bUniqueRideImpactOverWrite; // 0x7c8(0x01)
	char pad_7C9[0x3]; // 0x7c9(0x03)
	float UniqueRideImpactMass; // 0x7cc(0x04)
	float UniqueRideObjMass; // 0x7d0(0x04)
	bool bUniqueRideTimer; // 0x7d4(0x01)
	char pad_7D5[0x3]; // 0x7d5(0x03)
	struct FGameTimer UniqueRideTimer; // 0x7d8(0x0c)
	float UniqueRideTime; // 0x7e4(0x04)
	bool bInputTypeOneRepeat; // 0x7e8(0x01)
	bool bFirstAttackThrow; // 0x7e9(0x01)
	bool bSkipAddGauge; // 0x7ea(0x01)
	bool bCallAddGaugeEnable; // 0x7eb(0x01)
	bool bNewUnqObjCam; // 0x7ec(0x01)
	char pad_7ED[0x3]; // 0x7ed(0x03)
	struct TMap<int32_t, struct FString> CommonIndex; // 0x7f0(0x50)
	bool bLookAtObjUseSelfDelay; // 0x840(0x01)
	bool bLookAtObjEndDelay; // 0x841(0x01)
	char pad_842[0x2]; // 0x842(0x02)
	float UniqueReboundInterpolationSpeed; // 0x844(0x04)
	float GroundSlopeTraceUp; // 0x848(0x04)
	float GroundSlopeTraceDn; // 0x84c(0x04)
	float UniqueRideDropSpeed; // 0x850(0x04)
	float UniqueRideDropSpeedMax; // 0x854(0x04)
	float UniqueRideDropAccel; // 0x858(0x04)
	float UniqueRideDropAccelSecond; // 0x85c(0x04)
	struct FName SocketPlayerName; // 0x860(0x08)
	bool bDebugPrintGroundSlope; // 0x868(0x01)
	bool bEmKarenObj; // 0x869(0x01)
	bool bHitTargetInvincible; // 0x86a(0x01)
	bool bUniqueScaleChange; // 0x86b(0x01)
	struct FGameTimer UniqueScaleChangeTimer; // 0x86c(0x0c)
	bool bScaleChanged; // 0x878(0x01)
	char pad_879[0x7]; // 0x879(0x07)
	struct UCurveFloat* UniqueScaleChangeCurve; // 0x880(0x08)
	float NowUniqueScaleValue; // 0x888(0x04)
	struct FVector BackupMeshCompScale; // 0x88c(0x0c)
	float UniqueScaleCurveMaxTime; // 0x898(0x04)
	bool bUniqueReboundCheckHeight; // 0x89c(0x01)
	char pad_89D[0x3]; // 0x89d(0x03)
	float UniqueReboundCheckHeightOffset; // 0x8a0(0x04)
	bool bUniqueReboundResultHeight; // 0x8a4(0x01)
	char pad_8A5[0x3]; // 0x8a5(0x03)
	float UniqueReboundResultHeight; // 0x8a8(0x04)
	float EmKarenEndUniqueObjectStateWaitTime; // 0x8ac(0x04)
	int32_t EnemyTargetActorFixUniqueId; // 0x8b0(0x04)
	char pad_8B4[0x4]; // 0x8b4(0x04)
	struct UCapsuleComponent* UniqueRideCapsule; // 0x8b8(0x08)
	bool bUniqueRideCapsule; // 0x8c0(0x01)
	char pad_8C1[0x3]; // 0x8c1(0x03)
	float UniqueRideCapsuleRadius; // 0x8c4(0x04)
	float UniqueRideCapsuleHalfHeight; // 0x8c8(0x04)
	struct FRotator UniqueRideCapsuleBaseRot; // 0x8cc(0x0c)
	struct FVector UniqueRideCapsuleRelativePos; // 0x8d8(0x0c)
	struct FRotator UniqueRideCapsuleRelativeRot; // 0x8e4(0x0c)
	enum class ECollisionEnabled UnqiueRideCapsuleOwnerCharaCollision; // 0x8f0(0x01)
	enum class ECollisionEnabled UnqiueRideCapsuleOwnerCapCollision; // 0x8f1(0x01)
	bool bUniqueRideCapsuleApply; // 0x8f2(0x01)
	bool bUniqueRideCapsuleReset; // 0x8f3(0x01)
	bool bUniqueRideCapsuleShape; // 0x8f4(0x01)
	char pad_8F5[0x3]; // 0x8f5(0x03)
	struct FVector UniqueRideCapsuleShapePos; // 0x8f8(0x0c)
	struct FRotator UniqueRideCapsuleShapeRot; // 0x904(0x0c)
	struct FName FlyingClaimantName; // 0x910(0x08)
	float ThrowMontageCancelBaseTime; // 0x918(0x04)
	char pad_91C[0x4]; // 0x91c(0x04)
	struct FCameraUniqueObjectParameter UniqueObjectCameraParameterCh0200; // 0x920(0x58)
	bool bInputRotateCheckFirst; // 0x978(0x01)
	bool bInputRotateCheckMouse; // 0x979(0x01)
	char pad_97A[0x2]; // 0x97a(0x02)
	int32_t InputRotateKbStep; // 0x97c(0x04)
	bool bInputRotateKbStepLt; // 0x980(0x01)
	bool bInputRotateKbStepRt; // 0x981(0x01)
	bool bInputUIKeyboardType; // 0x982(0x01)
	bool bClearDelayDeathWait; // 0x983(0x01)
	struct FGameTimer ClearDelayDeathWaitTimer; // 0x984(0x0c)
	bool bCheckEnemyLerp; // 0x990(0x01)
	bool bAchievementCheckUniqueInput; // 0x991(0x01)
	char pad_992[0x2]; // 0x992(0x02)
	struct FVector AttackCapsuleOffsetUnq; // 0x994(0x0c)
	bool bUniquePressHandle; // 0x9a0(0x01)
	bool bUniquePressHandleApply; // 0x9a1(0x01)
	char pad_9A2[0x2]; // 0x9a2(0x02)
	struct FVector UniquePressHandleOffset; // 0x9a4(0x0c)
	struct TArray<int32_t> EffectUniqueHitCopyMaterialIndexList; // 0x9b0(0x10)
	struct TArray<int32_t> EffectUniqueHitTargetMaterialIndexList; // 0x9c0(0x10)
	bool bUniquePressLiftUp; // 0x9d0(0x01)
	char pad_9D1[0x7]; // 0x9d1(0x07)
	struct UCurveFloat* UniquePressLiftUpCurve; // 0x9d8(0x08)
	struct FGameTimer UniquePressLiftUpTimer; // 0x9e0(0x0c)
	float RespawnRestrictRadiusUq; // 0x9ec(0x04)
	float PlayerPullDistance; // 0x9f0(0x04)
	float PlayerPullMoveDistMax; // 0x9f4(0x04)
	bool bCallEndUniqueObjectStateWait; // 0x9f8(0x01)
	char pad_9F9[0x3]; // 0x9f9(0x03)
	struct FGameTimer CallEndUniqueObjectStateWaitTimer; // 0x9fc(0x0c)
	bool bEventCancelEnable; // 0xa08(0x01)
	bool bInputReserve; // 0xa09(0x01)
	bool bInputReserveSuccess; // 0xa0a(0x01)
	bool bInputReserveWait; // 0xa0b(0x01)
	bool bInputReserveSkipAutoOff; // 0xa0c(0x01)
	bool bUseInputReserveButton; // 0xa0d(0x01)
	enum class EPsychicObjectUniqueInputType InputReserveType; // 0xa0e(0x01)
	enum class EPsychicObjectUniqueInputButton InputReserveButton; // 0xa0f(0x01)
	bool bInputSuccessDelay; // 0xa10(0x01)
	bool bInputSuccessReserve; // 0xa11(0x01)
	char pad_A12[0x2]; // 0xa12(0x02)
	float InputReserveDelaytime; // 0xa14(0x04)
	struct FGameTimer InputReserveDelayTimer; // 0xa18(0x0c)
	bool bDebugPrintInputReserve; // 0xa24(0x01)
	bool bEventCancelInputDelay; // 0xa25(0x01)
	char pad_A26[0x2]; // 0xa26(0x02)
	float InputSuccessDelayTime; // 0xa28(0x04)
	struct FGameTimer InputSuccessDelayTimer; // 0xa2c(0x0c)
	bool bCaptureSkipLookAtObj; // 0xa38(0x01)
	bool bCaptureCancelSas; // 0xa39(0x01)
	char pad_A3A[0x2]; // 0xa3a(0x02)
	float FloatDampLimit; // 0xa3c(0x04)
	float FloatDampRange; // 0xa40(0x04)
	float FloatDampCoefficients; // 0xa44(0x04)
	float FloatDampEaseBlendExp; // 0xa48(0x04)
	float FloatSpringRange; // 0xa4c(0x04)
	bool bFloatInertia; // 0xa50(0x01)
	char pad_A51[0x3]; // 0xa51(0x03)
	float FloatInertia; // 0xa54(0x04)
	float FloatInertiaCoefficients; // 0xa58(0x04)
	float FloatInertiaPrevHeight; // 0xa5c(0x04)
	bool bUseFloatSuspension; // 0xa60(0x01)
	bool bInputModeAutoLock; // 0xa61(0x01)
	bool bDebugPrintAutoLockInputMode; // 0xa62(0x01)
	bool bInputModeAutoSkip; // 0xa63(0x01)
	bool bSkeletonUpdateEnable; // 0xa64(0x01)
	bool bNoSkeletonUpdateUq; // 0xa65(0x01)
	char pad_A66[0x2]; // 0xa66(0x02)
	struct TArray<struct FName> SkeletonUpdateRefList; // 0xa68(0x10)
	struct TArray<float> InputWaitTimeList; // 0xa78(0x10)
	bool bSkipPsychicObjectUse; // 0xa88(0x01)
	char pad_A89[0x3]; // 0xa89(0x03)
	float UniquePressTraceRadius; // 0xa8c(0x04)
	struct TArray<enum class E_SASKind> CancelSasList; // 0xa90(0x10)
	bool bInputMoveMouseValue; // 0xaa0(0x01)
	bool bEnableInputMouseIcon; // 0xaa1(0x01)
	bool bSelfCallUnqObjEnd; // 0xaa2(0x01)

	void ForceWarpPartyMember(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.ForceWarpPartyMember // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NeedsEndSASCutin(bool bNeedsEndCutin); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.NeedsEndSASCutin // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CancelSAS(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.CancelSAS // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUniquePressFailure(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetUniquePressFailure // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEventSetting(bool event start in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetEventSetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMaterialParameterMeshList(struct TArray<struct ABP_PsychicObjectBasic_C*> child list in, struct TArray<struct UMeshComponent*> mesh list); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.GetMaterialParameterMeshList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInputWaitTime(int32_t indexIn); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetInputWaitTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearInputReserveSkipAutoOff(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.ClearInputReserveSkipAutoOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSimulateControlAwakeUnqObj(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetSimulateControlAwakeUnqObj // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSkeletalMeshParam(bool flag in, struct FName ref name in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetSkeletalMeshParam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitialSkeletalMeshParam(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.InitialSkeletalMeshParam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLockInputMode(bool flag in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetLockInputMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEventCancelInputDelay(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetEventCancelInputDelay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInputSuccessDelay(bool flag in, float time in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetInputSuccessDelay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearInputReserveWait(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.ClearInputReserveWait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateInputReserve(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.UpdateInputReserve // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInputReserve(bool flag in, bool reserve wait in, bool skip auto off in, bool use reserve button, enum class EPsychicObjectUniqueInputButton reserve button in, enum class EPsychicObjectUniqueInputType reserve type in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetInputReserve // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndEventCancel(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.EndEventCancel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartEventCancel(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.StartEventCancel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PostEventCancel(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.PostEventCancel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrevEventCancel(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.PrevEventCancel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCallEndUniqueObjectStateWait(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.UpdateCallEndUniqueObjectStateWait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCallEndUniqueObjectStateWait(bool FlagIn, float waitTimeIn); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetCallEndUniqueObjectStateWait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDuelType(bool duel type in, bool return); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetDuelType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAttackDirectionUnqObj(bool return, struct FVector Direction); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.GetAttackDirectionUnqObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUniquePressLiftUpParameter(struct UCurveFloat* lift up curve in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetUniquePressLiftUpParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUniquePressLiftUp(bool flag in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetUniquePressLiftUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckAchievementUniqueInput(bool return); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.CheckAchievementUniqueInput // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAchievementUniqueInput(bool force in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetAchievementUniqueInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckAchievementThrowObject(bool return); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.CheckAchievementThrowObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUniqueRideCapsuleHit(struct UPrimitiveComponent* prim comp in, struct FVector hit normal in, struct FHitResult hit result in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetUniqueRideCapsuleHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetOwnerLocationRotation(struct FVector location in, struct FRotator rotation in, bool sweep in, bool add capsule height in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetOwnerLocationRotation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateClearDelayDeathWait(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.UpdateClearDelayDeathWait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetClearDelayDeathWait(bool FlagIn, float waitTimeIn); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetClearDelayDeathWait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMeshCompHitUnqObj(struct UPrimitiveComponent* prim comp in, struct FVector normal in, struct FHitResult hit result in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetMeshCompHitUnqObj // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetUniqueObjectCameraParameter(struct FCameraUniqueObjectParameter return ); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.GetUniqueObjectCameraParameter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetPlayerFlying(bool flag in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetPlayerFlying // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSocketCapsuleTransform(struct FTransform return); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.GetSocketCapsuleTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetUniqueRideCapsuleShape(bool flag in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetUniqueRideCapsuleShape // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUniqueRideCapsuleLocationRotation(struct FVector location in, struct FRotator rotation in, bool teleport in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetUniqueRideCapsuleLocationRotation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUniqueRideCapsuleCollision(enum class ECollisionEnabled collision in, bool simulate in, bool gravity in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetUniqueRideCapsuleCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateUniqueRideCapsule(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.UpdateUniqueRideCapsule // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUniqueRideCapsule(bool flag in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetUniqueRideCapsule // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitUniqueRideCapsule(struct UCapsuleComponent* capsule in, float radius in, float half height in, struct FRotator rot in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.InitUniqueRideCapsule // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSocketPlayerTransform(struct FTransform return); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.GetSocketPlayerTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void TraceMultiCapsule(struct FVector pos in, float offset up in, float offset dn in, float radius in, bool return, float hit height); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.TraceMultiCapsule // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SearchEnemyTargetActorFix(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SearchEnemyTargetActorFix // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckUniqueReboundHeight(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.CheckUniqueReboundHeight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetUniqueScaleChange(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.ResetUniqueScaleChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateUniqueScaleChange(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.UpdateUniqueScaleChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUniqueScaleChange(bool FlagIn, struct UCurveFloat* curveIn); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetUniqueScaleChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetUniqueObjectCamera(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.ResetUniqueObjectCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUniqueObjectCameraRemoteOption(bool flag in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetUniqueObjectCameraRemoteOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUniqueObjectCameraTriggerInfo(bool flag in, struct FCameraTriggerInfo trigger info in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetUniqueObjectCameraTriggerInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndUniqueObjectCamera(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.EndUniqueObjectCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartUniqueObjectCamera(bool socket type in, bool control type in, bool remote type in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.StartUniqueObjectCamera // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsUniqueRideTimerOver(bool return); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.IsUniqueRideTimerOver // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateUniqueRideTimer(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.UpdateUniqueRideTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUniqueRideTimer(bool flag in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetUniqueRideTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPursuitIconStickButtonPercent(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetPursuitIconStickButtonPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetUniqueRideRot(struct FRotator Location); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.GetUniqueRideRot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetUniqueRidePos(struct FVector Location); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.GetUniqueRidePos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetUniqueRideTransform(struct FTransform Location); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.GetUniqueRideTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetUniqueRideFrontDir(struct FVector front dir); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.GetUniqueRideFrontDir // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ApplyUniqueRideLocationRotation(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.ApplyUniqueRideLocationRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PostAsyncInputWaitEnemy(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.PostAsyncInputWaitEnemy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrevAsyncInputWaitEnemy(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.PrevAsyncInputWaitEnemy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInputWaitEnemy(bool flag in, bool success in, bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetInputWaitEnemy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUniqueAttackCollision(bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetUniqueAttackCollision // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetUniqueObjectCameraOwnerRotation(struct FRotator Rotation); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.GetUniqueObjectCameraOwnerRotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Get Unique Move Look at Target Pos(struct FVector targetPos); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.Get Unique Move Look at Target Pos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetMoveVelocity(struct FVector velocityOut); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.GetMoveVelocity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetUniqueObjectCameraLookAtPos(float look rate in, struct FVector Pos); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.GetUniqueObjectCameraLookAtPos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void LoadEffectParameter(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.LoadEffectParameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CallUniqueAddGauge(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.CallUniqueAddGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPursuitIconStickRollStart(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetPursuitIconStickRollStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPursuitIconRushPercent(float rate in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetPursuitIconRushPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPursuitIconStickHoldPercent(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetPursuitIconStickHoldPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPursuitIconStickHold(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetPursuitIconStickHold // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSeInputRotate(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetSeInputRotate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSeInputRepeat(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetSeInputRepeat // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CallUniqueObjectEnd(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.CallUniqueObjectEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CallUniqueInputStart(bool force in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.CallUniqueInputStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackInterpolate(float interpolate time in, bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetAttackInterpolate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPlayerMontageFirstAttack(bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetPlayerMontageFirstAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHitDamageMesh(bool reset in, bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetHitDamageMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPursuitIconStickRollSuccess(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetPursuitIconStickRollSuccess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSeInputGauge(bool flag in, bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetSeInputGauge // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSeInputFailure(bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetSeInputFailure // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateUniqueCameraHitLerp(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.UpdateUniqueCameraHitLerp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUniqueCameraHitLerp(bool flag in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetUniqueCameraHitLerp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UniqueCameraHitCheck(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.UniqueCameraHitCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUniqueCameraHitCheck(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetUniqueCameraHitCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateThrowMontageCancel(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.UpdateThrowMontageCancel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetThrowMontageCancel(bool flag in, float time in, bool cancel in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetThrowMontageCancel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CallAttackThrowCancel(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.CallAttackThrowCancel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTimeDilationAttackUnqObj(bool flag in, bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetTimeDilationAttackUnqObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckTimeDilation(bool return); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.CheckTimeDilation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateUniqueRideCheckBg(bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.UpdateUniqueRideCheckBg // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateUniqueRide(bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.UpdateUniqueRide // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateUniqueRidePrev(bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.UpdateUniqueRidePrev // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUniqueRide(bool flag in, bool Update); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetUniqueRide // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateGroundSlope(bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.UpdateGroundSlope // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetGroundSlope(bool flag in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetGroundSlope // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckInputControl(bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.CheckInputControl // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCaptureVibrateRot(bool flag in, struct UCurveVector* curve in, struct FVector rate in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetCaptureVibrateRot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCaptureVibratePos(bool flag in, struct UCurveVector* curve in, struct FVector rate in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetCaptureVibratePos // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCapturePos(bool flag in, struct UCurveVector* curve in, struct FVector rate in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetCapturePos // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCaptureUnqObj(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.UpdateCaptureUnqObj // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCaptureUnqObj(bool flag in, bool success in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetCaptureUnqObj // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMeshCompUnqObj(bool return, struct UStaticMesh* mesh comp, struct FVector Scale); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.GetMeshCompUnqObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetWeightGaugePosUnqObj(bool return, struct FVector Pos); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.GetWeightGaugePosUnqObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearDelayDeath(bool forceIn); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.ClearDelayDeath // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckDelayDeath(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.CheckDelayDeath // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckInputDuel(bool Success); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.CheckInputDuel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void LoadUniqueObjectCameraParameter(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.LoadUniqueObjectCameraParameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUniqueObjectCameraOld(bool flag in, int32_t side index in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetUniqueObjectCameraOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetUnqObjCamTargetPos(struct FVector Pos); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.GetUnqObjCamTargetPos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetDamageMaterial(bool reset in, int32_t damage level in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetDamageMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDamageMaterialValue(struct TArray<float> value list in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetDamageMaterialValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUniquePressVibrateLoopHit(bool flag in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetUniquePressVibrateLoopHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUniquePressVibrateLoop(bool flag in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetUniquePressVibrateLoop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUniquePressVibrateLoopParam(int32_t attack info index in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetUniquePressVibrateLoopParam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackInfoIndex(int32_t index in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetAttackInfoIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEffectUniqueHit(struct FVector eft pos in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetEffectUniqueHit // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetObjectShakeUnqObj(struct UCurveVector* shake curve, struct FVector shake loop scale, float shake loop time rate, struct FVector shake scale, float shake time rate, float shake time); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.GetObjectShakeUnqObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCameraShakeUnqObj(struct UCameraShake* camera shake, float camera shake scale); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.GetCameraShakeUnqObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEffectHit(struct TArray<struct TSoftObjectPtr<UParticleSystem>> UniqueEffectList, struct TArray<struct FName> UniqueEffectSocketList, struct TArray<struct FVector> UniqueEffectScaleList, struct TArray<bool> UniqueEffectApplyThrowRotList, bool SkipNormalEffect); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.GetEffectHit // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void LoadAttackInfo(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.LoadAttackInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CallEndUniqueObjectState(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.CallEndUniqueObjectState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RequestEndUniqueObjectState(struct AActor* actor in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.RequestEndUniqueObjectState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEffectUniqueBend(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetEffectUniqueBend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUniqueBendCapture(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetUniqueBendCapture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUniqueBendSetting(struct UCurveFloat* angle curve in, float angle rate in, float time rate in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetUniqueBendSetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateUniqueBend(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.UpdateUniqueBend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUniqueBend(bool flag in, bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetUniqueBend // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUniquePressOffsetHeight(float offset height in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetUniquePressOffsetHeight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUniqueReboundImpulse(float impulse in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetUniqueReboundImpulse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUniquePressVibrateParam(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetUniquePressVibrateParam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUniquePressVibrate(bool flag in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetUniquePressVibrate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUniquePressHit(bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetUniquePressHit // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInputGuideCancelOld(bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetInputGuideCancelOld // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInputWaitPause(bool flag in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetInputWaitPause // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckInputStickTrigger(bool left in, bool right in, float tolerance in, bool return); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.CheckInputStickTrigger // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitInputStickTrigger(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.InitInputStickTrigger // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetInputMoveValue(float value x, float value y); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.GetInputMoveValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateUniqueExplosion(bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.UpdateUniqueExplosion // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUniqueExplosion(bool flag in, float explode time in, float explode radius in, bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetUniqueExplosion // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateUniquePress(bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.UpdateUniquePress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUniquePress(bool flag in, float offset height in, struct UCurveFloat* pos curve in, float rot lerp time in, bool target enemy weak point in, bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetUniquePress // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAttackCountMontageIndex(enum class EPsychicObjectUniqueMontageIndex Montage); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.GetAttackCountMontageIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void UpdateSplineUnqObj(float in rate, bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.UpdateSplineUnqObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSplineUnqObj(bool flag in, bool dunnmy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetSplineUnqObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeDataTable(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.InitializeDataTable // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadAttackParameter(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.LoadAttackParameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInputSetting(bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetInputSetting // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePullOutUnqObj(bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.UpdatePullOutUnqObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPhasePullOutUnqObj(bool flag in, bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetPhasePullOutUnqObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetUniqueCaptureTime(struct TArray<float> CaptureTimeList); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.GetUniqueCaptureTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetAnimationDirect(struct UAnimSequence* AnimSequence); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.GetAnimationDirect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAttackParameter(struct FHCCollisionCommonInfo commonInfo, struct FHCSkillCommonInfo skillInfo); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.GetAttackParameter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetUniqueObjectPlayerMontage(enum class EPsychicObjectUniqueMontageIndex MontageIndexIn, bool bLeft, bool bMaleHero, struct UAnimMontage* Montage); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.GetUniqueObjectPlayerMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetExtraTypeUnqObj(struct TArray<enum class HCSkillExtraType> extra type); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetExtraTypeUnqObj // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePsyObjLinearDamp(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.UpdatePsyObjLinearDamp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsyObjLinearDamp(bool flag in, float value in, float time in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetPsyObjLinearDamp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAttackCheck(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.UpdateAttackCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackCheck(bool flag in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetAttackCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHitGuideOld(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetHitGuideOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateGuideHitCheckOld(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.UpdateGuideHitCheckOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetGuideHitCheckOld(bool flag in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetGuideHitCheckOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDelayDeathHitCheckOld(bool flag in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetDelayDeathHitCheckOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInputDelayCancel(bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetInputDelayCancel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateUniqueReboundPos(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.UpdateUniqueReboundPos // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateUniqueRebound(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.UpdateUniqueRebound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUniqueRebound(bool flag in, struct FVector pos in, bool set rot in, struct FRotator rot in, bool target in, bool target top in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetUniqueRebound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSeInputSuccess(bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetSeInputSuccess // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSeInputStart(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetSeInputStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCameraLookAtPos(struct FVector Pos); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.GetCameraLookAtPos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetTopParent(struct ABP_PsychicObjectBasic_C* top parent); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.GetTopParent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCheckDestroyUnqObj(bool flag in, bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetCheckDestroyUnqObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPhaseDestroyUnqObj(bool dunmy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetPhaseDestroyUnqObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInputExtraSuccess(bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetInputExtraSuccess // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetGuidePos(bool Input in, float pos rate in, struct FVector guide pos); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.GetGuidePos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateInputGuideOld(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.UpdateInputGuideOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInputGuideOld(bool flag in, struct AActor* target actor in, struct FVector target pos in, bool reverse lerp in, bool direct in, bool auto off in, bool to wait in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetInputGuideOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCheckDestroy(bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.UpdateCheckDestroy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEffectHitUnqObj(bool hit enemy in, bool hit background in, struct FHCHitResult hit result in, struct FHitResult hit result bg in, bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetEffectHitUnqObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckCommonFlag(int32_t index in, bool return); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.CheckCommonFlag // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetCommonFlag(int32_t index in, bool flag in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetCommonFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetCommonFlag(int32_t length in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.ResetCommonFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDestroyUnqObj(bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetDestroyUnqObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateInputEnableTime(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.UpdateInputEnableTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInputEnableTime(bool flag in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetInputEnableTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInputFailure(bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetInputFailure // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BulletDestroyReport(struct ABP_PsychicObjectBasic_C* bullet obj in, bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.BulletDestroyReport // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBulletAppear(bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetBulletAppear // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDelayDeathOld(bool flag in, bool force in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetDelayDeathOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackPursueChild(bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetAttackPursueChild // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackPursue(bool flag in, bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetAttackPursue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackSpline(bool flag in, bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetAttackSpline // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckInputRotate(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.CheckInputRotate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInputWaitNotify(bool flag in, bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetInputWaitNotify // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitialInstanceParameter(bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.InitialInstanceParameter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CancelInput(bool Skip); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.CancelInput // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttack(bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDelayDeathOld(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.UpdateDelayDeathOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackThrow(bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetAttackThrow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInputSuccess(bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetInputSuccess // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttractUnique(bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetAttractUnique // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAnimationIndex(int32_t anim index); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.GetAnimationIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CheckInput(bool return); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.CheckInput // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PostAsyncInputWait(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.PostAsyncInputWait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAsyncInputWait(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.UpdateAsyncInputWait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrevAsyncInputWait(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.PrevAsyncInputWait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInputWait(bool flag in, bool success in, bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetInputWait // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PostAsyncInputDelayOld(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.PostAsyncInputDelayOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAsyncInputDelay(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.UpdateAsyncInputDelay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrevAsyncInputDelayOld(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.PrevAsyncInputDelayOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInputDelay(bool flag in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetInputDelay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PostAsyncAttackUnique(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.PostAsyncAttackUnique // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAsyncAttackUnique(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.UpdateAsyncAttackUnique // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrevAsyncAttackUnique(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.PrevAsyncAttackUnique // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackUnique(bool flag in, bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetAttackUnique // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHitUnqObj(bool hit enemy in, bool hit background in, struct FHCHitResult hit result in, struct FHitResult hit result bg in, bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetHitUnqObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PostAsyncCommon(bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.PostAsyncCommon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAsyncCommon(bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.UpdateAsyncCommon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrevAsyncCommon(bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.PrevAsyncCommon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCaptureLevel(bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetCaptureLevel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PostAsyncCapture(bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.PostAsyncCapture // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAsyncCapture(bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.UpdateAsyncCapture // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrevAsyncCapture(bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.PrevAsyncCapture // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAsyncCapture(bool flag in, bool capture success in, bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.SetAsyncCapture // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitialParameter(bool flag in, bool first time in, bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.InitialParameter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitialComponent(bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.InitialComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FinalizeUniqueObject(bool dummy); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.FinalizeUniqueObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateUniqueObject(); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.UpdateUniqueObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeUniqueObject(struct UBP_PsychicObjectComponent_C* psy obj comp in, struct UBP_PsychicComponentMain_C* psy comp main in); // Function BP_UniqueObjectComponentBase.BP_UniqueObjectComponentBase_C.InitializeUniqueObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

