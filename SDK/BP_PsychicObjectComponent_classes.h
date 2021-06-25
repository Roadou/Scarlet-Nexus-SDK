// BlueprintGeneratedClass BP_PsychicObjectComponent.BP_PsychicObjectComponent_C
// Size: 0x17e9 (Inherited: 0xd0)
struct UBP_PsychicObjectComponent_C : URSAsyncTaskActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	enum class EPsychicObjectID PsychicObjectID; // 0xd8(0x01)
	enum class EPsychicObjectUniqueType PsychicObjectUniqueType; // 0xd9(0x01)
	enum class EPsychicObjectSizeType PsychicObjectSize; // 0xda(0x01)
	bool bAsync; // 0xdb(0x01)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct AHUDMainGame_C* HudMain; // 0xe0(0x08)
	struct ARsBattleHero_C* CaptureOwner; // 0xe8(0x08)
	struct APsychicAnimObject_C* AnimOwner; // 0xf0(0x08)
	struct AActor* TargetActor; // 0xf8(0x08)
	struct AActor* TargetActorFix; // 0x100(0x08)
	bool bPsychicObjectActive; // 0x108(0x01)
	enum class EPsychicObjectProcedure ProcedurePhase; // 0x109(0x01)
	enum class EPsychicObjectState PsychicObjectState; // 0x10a(0x01)
	bool bEnemyOwner; // 0x10b(0x01)
	bool bNpcOwner; // 0x10c(0x01)
	bool bMetamophosisOwner; // 0x10d(0x01)
	bool bUniqueCommon; // 0x10e(0x01)
	char pad_10F[0x1]; // 0x10f(0x01)
	struct TArray<struct FName> AsyncCommonRefList; // 0x110(0x10)
	bool bRequestAsyncCommon; // 0x120(0x01)
	bool bAsyncCommon; // 0x121(0x01)
	bool bSkipNormalCapture; // 0x122(0x01)
	bool bUniqueCapture; // 0x123(0x01)
	bool bDispDamageMesh; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
	float PsychicObjectMass; // 0x128(0x04)
	bool bCaptureVibrate; // 0x12c(0x01)
	bool bComboCapture; // 0x12d(0x01)
	char pad_12E[0x2]; // 0x12e(0x02)
	int32_t CaptureTypeNo; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	struct TArray<struct FName> TickNameList; // 0x138(0x10)
	bool bUniqueObject; // 0x148(0x01)
	bool bParentObj; // 0x149(0x01)
	bool bChildObj; // 0x14a(0x01)
	bool bUseAttackCapsule; // 0x14b(0x01)
	bool bChildDestroy; // 0x14c(0x01)
	char pad_14D[0x3]; // 0x14d(0x03)
	int32_t BulletNum; // 0x150(0x04)
	bool bBulletParent; // 0x154(0x01)
	char pad_155[0x3]; // 0x155(0x03)
	struct TArray<struct ABP_PsychicObjectBasic_C*> BulletList; // 0x158(0x10)
	bool bBulletObj; // 0x168(0x01)
	bool bCheckBulletCollProfile; // 0x169(0x01)
	char pad_16A[0x6]; // 0x16a(0x06)
	struct ABP_PsychicObjectBasic_C* BulletParentObj; // 0x170(0x08)
	int32_t BulletIndex; // 0x178(0x04)
	enum class EPsychicObjectUniqueMontageType UniqueMontageType; // 0x17c(0x01)
	bool bCopyPsyObj; // 0x17d(0x01)
	bool bFloatObject; // 0x17e(0x01)
	char pad_17F[0x1]; // 0x17f(0x01)
	float FloatObjectLinearDamping; // 0x180(0x04)
	float FloatObjectAngularDamping; // 0x184(0x04)
	float FloatObjectLinearDampingBackup; // 0x188(0x04)
	float FloatObjectAngularDampingBackup; // 0x18c(0x04)
	bool bNoRespawnObj; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)
	struct TArray<struct ABP_PsychicObjectBasic_C*> ChildObjList; // 0x198(0x10)
	struct FGameTimer CaptureTimer; // 0x1a8(0x0c)
	float CaptureTime; // 0x1b4(0x04)
	struct FString CaptureTimeDailtionName; // 0x1b8(0x10)
	enum class E_SASKind CaptureSasKind; // 0x1c8(0x01)
	char pad_1C9[0x3]; // 0x1c9(0x03)
	float CaptureRate; // 0x1cc(0x04)
	float CaptureRateEx; // 0x1d0(0x04)
	float CapturePassTime; // 0x1d4(0x04)
	bool bCaptureLevel; // 0x1d8(0x01)
	bool bDebugDisplay; // 0x1d9(0x01)
	char pad_1DA[0x2]; // 0x1da(0x02)
	float LiftUpTime; // 0x1dc(0x04)
	float LiftUpHeight; // 0x1e0(0x04)
	char pad_1E4[0x4]; // 0x1e4(0x04)
	struct UBP_PsychicComponentMain_C* pcm; // 0x1e8(0x08)
	bool bLiftUp; // 0x1f0(0x01)
	bool bLiftUpSe; // 0x1f1(0x01)
	bool bRequestAsyncLiftUp; // 0x1f2(0x01)
	bool bAsyncLiftUp; // 0x1f3(0x01)
	struct FGameTimer LiftUpTimer; // 0x1f4(0x0c)
	float LiftUpRate; // 0x200(0x04)
	char pad_204[0x4]; // 0x204(0x04)
	struct TArray<struct UMeshComponent*> FocusMeshList; // 0x208(0x10)
	struct TArray<struct UMeshComponent*> CaptureMeshList; // 0x218(0x10)
	struct TArray<struct UMeshComponent*> AuraMeshList; // 0x228(0x10)
	struct TArray<struct ABP_PsychicObjectBasic_C*> CaptureChildList; // 0x238(0x10)
	struct TArray<struct UMeshComponent*> DestroyEffectMeshList; // 0x248(0x10)
	bool bCurrentDeltaSecond; // 0x258(0x01)
	char pad_259[0x3]; // 0x259(0x03)
	float CurrentDeltaSecond; // 0x25c(0x04)
	bool bCameraTransform; // 0x260(0x01)
	char pad_261[0x3]; // 0x261(0x03)
	struct FVector cameraPos; // 0x264(0x0c)
	struct FRotator CameraRot; // 0x270(0x0c)
	struct FVector cameraDir; // 0x27c(0x0c)
	struct TArray<float> InstanceValueList; // 0x288(0x10)
	struct FVector WorkPsyObjPos; // 0x298(0x0c)
	struct FRotator WorkPsyObjRot; // 0x2a4(0x0c)
	struct FVector WorkLerpPosStt; // 0x2b0(0x0c)
	struct FVector WorkLerpPosEnd; // 0x2bc(0x0c)
	struct FVector WorkLerpPos; // 0x2c8(0x0c)
	struct FRotator WorkLerpRotStt; // 0x2d4(0x0c)
	struct FRotator WorkLerpRotEnd; // 0x2e0(0x0c)
	struct FRotator WorkLerpRot; // 0x2ec(0x0c)
	float WorkRate; // 0x2f8(0x04)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct UMeshComponent* MeshComp; // 0x300(0x08)
	struct USceneComponent* ArrowComp; // 0x308(0x08)
	enum class EEasingFunc LiftUpPosEaseType; // 0x310(0x01)
	enum class EEasingFunc LiftUpRotEaseType; // 0x311(0x01)
	char pad_312[0x2]; // 0x312(0x02)
	float ThrowAccelTime; // 0x314(0x04)
	bool bAttackUnique; // 0x318(0x01)
	bool bAttackCombo; // 0x319(0x01)
	bool bAttackBrainField; // 0x31a(0x01)
	bool bAttackSwing; // 0x31b(0x01)
	bool bSkipAttack; // 0x31c(0x01)
	bool bRequestAsyncAttack; // 0x31d(0x01)
	bool bAsyncAttack; // 0x31e(0x01)
	bool bAttackThrow; // 0x31f(0x01)
	bool bAttackSkipAttach; // 0x320(0x01)
	char pad_321[0x3]; // 0x321(0x03)
	struct FGameTimer ThrowAccelTimer; // 0x324(0x0c)
	struct FGameTimer ThrowLimitTimer; // 0x330(0x0c)
	struct FVector ThrowVector; // 0x33c(0x0c)
	float ThrowSpeedStt; // 0x348(0x04)
	float ThrowSpeedMax; // 0x34c(0x04)
	float ThrowSpeed; // 0x350(0x04)
	bool bAttackComboParam; // 0x354(0x01)
	bool bAirCombo; // 0x355(0x01)
	char pad_356[0x2]; // 0x356(0x02)
	int32_t ComboLevel; // 0x358(0x04)
	int32_t ComboIndex; // 0x35c(0x04)
	float ThrowSpeedNormal; // 0x360(0x04)
	float ThrowSpeedCombo; // 0x364(0x04)
	float ThrowSpeedUnique; // 0x368(0x04)
	float ThrowSpeedCopy; // 0x36c(0x04)
	float ThrowSpeedNormalEnemy; // 0x370(0x04)
	float ThrowSpeedComboEnemy; // 0x374(0x04)
	float ThrowSpeedBrnFieldEnemy; // 0x378(0x04)
	float ThrowSpeedPsyFieldEnemy; // 0x37c(0x04)
	float ThrowSpeedEnemyObj; // 0x380(0x04)
	float ThrowSpeedEnemyRate; // 0x384(0x04)
	float ThrowSpeedIntercept; // 0x388(0x04)
	float ThrowSpeedInterceptEm0100; // 0x38c(0x04)
	float ThrowSpeedInterceptEm0200; // 0x390(0x04)
	float ThrowSpeedInterceptEm8200; // 0x394(0x04)
	enum class EEasingFunc ThrowSpeedEaseType; // 0x398(0x01)
	char pad_399[0x3]; // 0x399(0x03)
	float ThrowLimitTime; // 0x39c(0x04)
	float AttractTime; // 0x3a0(0x04)
	bool bAttractEnemy; // 0x3a4(0x01)
	bool bAttractNoAttach; // 0x3a5(0x01)
	bool bAttractAttackBlend; // 0x3a6(0x01)
	bool bAttractSwingArrow; // 0x3a7(0x01)
	bool bRequestAsyncAttract; // 0x3a8(0x01)
	bool bAsyncAttract; // 0x3a9(0x01)
	char pad_3AA[0x2]; // 0x3aa(0x02)
	struct FGameTimer AttractTimer; // 0x3ac(0x0c)
	enum class EEasingFunc AttractPosEaseType; // 0x3b8(0x01)
	enum class EEasingFunc AttractRotEaseType; // 0x3b9(0x01)
	char pad_3BA[0x2]; // 0x3ba(0x02)
	float AttackSphereRadius; // 0x3bc(0x04)
	float AttackCapsuleRadius; // 0x3c0(0x04)
	float AttackCapsuleHalfHeight; // 0x3c4(0x04)
	struct FVector AttackComboOffset; // 0x3c8(0x0c)
	float AttackLerpTime; // 0x3d4(0x04)
	enum class EEasingFunc AttackLerpEaseType; // 0x3d8(0x01)
	char pad_3D9[0x3]; // 0x3d9(0x03)
	float SpinSpeedMax; // 0x3dc(0x04)
	float AttackEndTime; // 0x3e0(0x04)
	char pad_3E4[0x4]; // 0x3e4(0x04)
	struct TArray<enum class EPsychicObjectUniqueInputType> UniqueAttackIputTypeOld; // 0x3e8(0x10)
	struct TArray<enum class EPsychicObjectUniqueInputButton> UniqueAttackInputButtonOld; // 0x3f8(0x10)
	struct TArray<bool> UniqueAttackInputSuccessOld; // 0x408(0x10)
	float InputEndTimeOld; // 0x418(0x04)
	struct FGameTimer InputEndTimerOld; // 0x41c(0x0c)
	float InputWaitTimeOld; // 0x428(0x04)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct FString UniqueTimeDailtionName; // 0x430(0x10)
	float UniqueTimeDilationRateOld; // 0x440(0x04)
	float DestroyEffectTime; // 0x444(0x04)
	bool bDbDispStatusID; // 0x448(0x01)
	bool bDbDispStatusSize; // 0x449(0x01)
	bool bDbDispStatusActive; // 0x44a(0x01)
	bool bDbDispStatusPhase; // 0x44b(0x01)
	bool bDbDispStatusState; // 0x44c(0x01)
	bool bDbDispStatusPhysic; // 0x44d(0x01)
	bool bDbDispStatusProfile; // 0x44e(0x01)
	bool bDbDispStatusCapture; // 0x44f(0x01)
	bool bDbDispStatusLiftUp; // 0x450(0x01)
	bool bDbDispStatusAttract; // 0x451(0x01)
	bool bDbDispAttackSphere; // 0x452(0x01)
	bool bDbDispChild; // 0x453(0x01)
	bool bDbDispAttackCollision; // 0x454(0x01)
	bool bDbDrawAsyncCommon; // 0x455(0x01)
	bool bDebugDrawTickActor; // 0x456(0x01)
	bool bDebugDrawTickComponent; // 0x457(0x01)
	bool bDebugDrawInUse; // 0x458(0x01)
	bool bDebugPrintSimulate; // 0x459(0x01)
	bool bDebugPrintSimulateCheck; // 0x45a(0x01)
	bool bDbDrawPhysicForce; // 0x45b(0x01)
	bool bDbPrintEffect; // 0x45c(0x01)
	bool bDbPrintSound; // 0x45d(0x01)
	bool bAbolishMainSimulate; // 0x45e(0x01)
	char pad_45F[0x1]; // 0x45f(0x01)
	struct FString DebugLastAnimationName; // 0x460(0x10)
	bool bDbDispStatusVibrateOld; // 0x470(0x01)
	bool bDbOptionLiftUpOld; // 0x471(0x01)
	char pad_472[0x2]; // 0x472(0x02)
	struct FGameTimer DestroyEffectTimer; // 0x474(0x0c)
	struct FVector AttractOffset; // 0x480(0x0c)
	struct FVector AttractOffsetEm; // 0x48c(0x0c)
	bool bDbOptionKeepAttractOld; // 0x498(0x01)
	char pad_499[0x3]; // 0x499(0x03)
	struct FGameTimer AttackLerpTimer; // 0x49c(0x0c)
	int32_t CaptureType; // 0x4a8(0x04)
	int32_t CaptureLevelMax; // 0x4ac(0x04)
	int32_t CaptureLevel; // 0x4b0(0x04)
	struct FGameTimer InputWaitTimerOld; // 0x4b4(0x0c)
	struct UMeshComponent* BackupComp; // 0x4c0(0x08)
	struct UMeshComponent* WreckageComp; // 0x4c8(0x08)
	struct ABP_PsychicObjectBasic_C* PsyObjOwner; // 0x4d0(0x08)
	struct USphereComponent* AttackSphere; // 0x4d8(0x08)
	struct UCapsuleComponent* AttackCapsule; // 0x4e0(0x08)
	struct UPrimitiveComponent* AttackPrimitive; // 0x4e8(0x08)
	struct UPhysicsHandleComponent* PhysicsHandle; // 0x4f0(0x08)
	struct UBP_UniqueObjectComponentBase_C* UnqObjComp; // 0x4f8(0x08)
	struct USplineComponent* SplineComp; // 0x500(0x08)
	int32_t UniqueAttackCount; // 0x508(0x04)
	int32_t UniqueAttackMax; // 0x50c(0x04)
	bool bRequestAsyncAttackUnique; // 0x510(0x01)
	bool bAsyncAttackUnique; // 0x511(0x01)
	bool bUniqueAttackInputSign; // 0x512(0x01)
	bool bWeightGauge; // 0x513(0x01)
	bool bAttackEnd; // 0x514(0x01)
	char pad_515[0x3]; // 0x515(0x03)
	struct FGameTimer AttackEndTimer; // 0x518(0x0c)
	bool bAttackSpin; // 0x524(0x01)
	char pad_525[0x3]; // 0x525(0x03)
	struct FGameTimer RotLerpTimer; // 0x528(0x0c)
	float RotLerpTime; // 0x534(0x04)
	bool bAttackThrowSkipActor; // 0x538(0x01)
	bool bCheckHitFloor; // 0x539(0x01)
	bool bCheckHitWall; // 0x53a(0x01)
	bool bCheckHitCeiling; // 0x53b(0x01)
	bool bHitFloor; // 0x53c(0x01)
	bool bHitCelling; // 0x53d(0x01)
	bool bHitWall; // 0x53e(0x01)
	bool bSkipCheckWall; // 0x53f(0x01)
	bool bCheckHitAttackEnd; // 0x540(0x01)
	char pad_541[0x3]; // 0x541(0x03)
	struct FVector AttackPosPrev; // 0x544(0x0c)
	struct FVector AttackPosNow; // 0x550(0x0c)
	float CaptureTimeNormal; // 0x55c(0x04)
	float CaptureTimeCombo; // 0x560(0x04)
	char pad_564[0x4]; // 0x564(0x04)
	struct UCurveVector* CapturePosCurve; // 0x568(0x08)
	struct UCurveFloat* CaptureHeightCurve; // 0x570(0x08)
	struct UCurveFloat* CaptureRotCurve; // 0x578(0x08)
	bool bVibrate; // 0x580(0x01)
	bool bVibrateProc; // 0x581(0x01)
	bool bVibrateHandle; // 0x582(0x01)
	bool bVibrateAngle; // 0x583(0x01)
	bool bRequestAsyncVibrate; // 0x584(0x01)
	bool bAsyncVibrate; // 0x585(0x01)
	char pad_586[0x2]; // 0x586(0x02)
	struct FGameTimer VibrateTimer; // 0x588(0x0c)
	float VibrateTime; // 0x594(0x04)
	int32_t VibrateSignType; // 0x598(0x04)
	float VibrateStartTime; // 0x59c(0x04)
	float VibrateEndTime; // 0x5a0(0x04)
	float VibrateRangeMin; // 0x5a4(0x04)
	float VibrateRangeMax; // 0x5a8(0x04)
	float VibrateSpeedRate; // 0x5ac(0x04)
	float VibrateRate; // 0x5b0(0x04)
	float LiftUpStartTime; // 0x5b4(0x04)
	float LiftUpEndTime; // 0x5b8(0x04)
	float LiftUpRangeMin; // 0x5bc(0x04)
	float LiftUpRangeMax; // 0x5c0(0x04)
	struct FVector VibratePosOffset; // 0x5c4(0x0c)
	struct FVector LiftUpOffset; // 0x5d0(0x0c)
	bool bSkipHoming; // 0x5dc(0x01)
	char pad_5DD[0x3]; // 0x5dd(0x03)
	float HomingSpeedNormal; // 0x5e0(0x04)
	float HomingSpeedCombo; // 0x5e4(0x04)
	float HomingSpeedUnique; // 0x5e8(0x04)
	float HomingSpeedCopy; // 0x5ec(0x04)
	float HomingSpeedNormalEnemy; // 0x5f0(0x04)
	float HomingSpeedComboEnemy; // 0x5f4(0x04)
	float HomingSpeedBrnFieldEnemy; // 0x5f8(0x04)
	float HomingSpeedEnemyObj; // 0x5fc(0x04)
	float HomingSpeedEnemyRate; // 0x600(0x04)
	float HomingSpeedIntercept; // 0x604(0x04)
	float HomingSpeedInterceptEm0100; // 0x608(0x04)
	float HomingSpeedInterceptEm0200; // 0x60c(0x04)
	float HomingSpeedInterceptEm8200; // 0x610(0x04)
	float HomingSpeed; // 0x614(0x04)
	float VibrateAngleSpeedVt; // 0x618(0x04)
	float VibrateAngleSpeedHz; // 0x61c(0x04)
	float VibrateAngleRange; // 0x620(0x04)
	float VibrateAngleVt; // 0x624(0x04)
	float VibrateAngleHz; // 0x628(0x04)
	float VibrateAngleRate; // 0x62c(0x04)
	struct FVector VibrateAngleOffsetStt; // 0x630(0x0c)
	struct FVector VibrateAngleOffsetEnd; // 0x63c(0x0c)
	struct FVector VibrateAngleOffsetEx; // 0x648(0x0c)
	struct FVector VibrateAxisVt; // 0x654(0x0c)
	struct FVector VibrateAxisHz; // 0x660(0x0c)
	struct FVector VibrateAxisEnd; // 0x66c(0x0c)
	enum class enum_ui_pk_weight_gauge_button WeightGaugeButtonType; // 0x678(0x01)
	char pad_679[0x7]; // 0x679(0x07)
	struct TArray<float> CaptureLevelTime; // 0x680(0x10)
	bool bDbAttractAttackPl; // 0x690(0x01)
	bool bDbUniqueAnim; // 0x691(0x01)
	char pad_692[0x2]; // 0x692(0x02)
	struct FGameTimer CheckHitTimer; // 0x694(0x0c)
	float CheckHitTime; // 0x6a0(0x04)
	bool bHandleGrab; // 0x6a4(0x01)
	bool bHandleGrabLock; // 0x6a5(0x01)
	bool bHandleGrabRot; // 0x6a6(0x01)
	bool bUseHandleGrabCenter; // 0x6a7(0x01)
	float HandleLinearDamping; // 0x6a8(0x04)
	bool bExtendLerp; // 0x6ac(0x01)
	bool bExtendLerpPos; // 0x6ad(0x01)
	char pad_6AE[0x2]; // 0x6ae(0x02)
	struct FVector ExtendLerpPosCalc; // 0x6b0(0x0c)
	struct FVector ExtendLerpPosAnim; // 0x6bc(0x0c)
	struct FVector ExtendLerpPosTgt; // 0x6c8(0x0c)
	struct FGameTimer ExtendLerpTimer; // 0x6d4(0x0c)
	float ExtendLerpTime; // 0x6e0(0x04)
	float ExtendLerpRate; // 0x6e4(0x04)
	bool bTestPhysCaptureProc; // 0x6e8(0x01)
	char pad_6E9[0x3]; // 0x6e9(0x03)
	struct FVector PhysCapturePos; // 0x6ec(0x0c)
	struct FGameTimer PhysCapLiftUpTimer; // 0x6f8(0x0c)
	struct FGameTimer PhysCapThrowTimer; // 0x704(0x0c)
	bool bPhysCapLiftUp; // 0x710(0x01)
	char pad_711[0x3]; // 0x711(0x03)
	float PhysCaptureRandAngle; // 0x714(0x04)
	float PhysCaptureRandAngleZ; // 0x718(0x04)
	struct FVector PhysCaptureRandAxisZ; // 0x71c(0x0c)
	float PhysCapLiftUpForce; // 0x728(0x04)
	float PhysCapLiftUpForceBase; // 0x72c(0x04)
	float PhysCapLiftUpForceMin; // 0x730(0x04)
	float PhysCapLiftUpForceMax; // 0x734(0x04)
	float PhysCapLiftUpForceTime; // 0x738(0x04)
	enum class EEasingFunc PhysCapLiftUpForceEase; // 0x73c(0x01)
	char pad_73D[0x3]; // 0x73d(0x03)
	float PhysCapThrowForce; // 0x740(0x04)
	float PhysCapThrowForceBase; // 0x744(0x04)
	float PhysCapThrowForceMin; // 0x748(0x04)
	float PhysCapThrowForceMax; // 0x74c(0x04)
	float PhysCapThrowForceTime; // 0x750(0x04)
	enum class EEasingFunc PhysCapThrowForceEase; // 0x754(0x01)
	char pad_755[0x3]; // 0x755(0x03)
	struct FVector AnimObjPos; // 0x758(0x0c)
	struct FRotator AnimObjRot; // 0x764(0x0c)
	struct TArray<int32_t> AttackTypeList; // 0x770(0x10)
	int32_t AttackTypeIndex; // 0x780(0x04)
	float AttractAttackRate; // 0x784(0x04)
	bool bAttractAttackStart; // 0x788(0x01)
	bool bAttractSkipAttack; // 0x789(0x01)
	bool bCallAttractSuccess; // 0x78a(0x01)
	char pad_78B[0x1]; // 0x78b(0x01)
	struct FVector WorkLerpPosStt_1; // 0x78c(0x0c)
	struct FVector WorkLerpPosEnd_1; // 0x798(0x0c)
	struct FVector WorkLerpPos_1; // 0x7a4(0x0c)
	struct FRotator WorkLerpRotStt_1; // 0x7b0(0x0c)
	struct FRotator WorkLerpRotEnd_1; // 0x7bc(0x0c)
	struct FRotator WorkLerpRot_1; // 0x7c8(0x0c)
	char pad_7D4[0x4]; // 0x7d4(0x04)
	struct UCurveFloat* CurveAttractPos; // 0x7d8(0x08)
	struct UCurveFloat* CurveAttractRot; // 0x7e0(0x08)
	struct URSParticleSystemComponentBase* EffectAttack; // 0x7e8(0x08)
	struct URSParticleSystemComponentBase* EffectWreckage; // 0x7f0(0x08)
	bool bDestroyDelay; // 0x7f8(0x01)
	char pad_7F9[0x3]; // 0x7f9(0x03)
	struct FGameTimer DestroyDelayTimer; // 0x7fc(0x0c)
	float DestroyDelayTime; // 0x808(0x04)
	float DestroyDelayTimeRateCopy; // 0x80c(0x04)
	float DestroyDelayTimeEnemy; // 0x810(0x04)
	bool bDestroyEffect; // 0x814(0x01)
	char pad_815[0x3]; // 0x815(0x03)
	struct UParticleSystem* EmitterAttackDirectDrop; // 0x818(0x08)
	struct TArray<struct URSParticleSystemComponentBase*> ParticleChildCapture; // 0x820(0x10)
	bool bEffectAttack; // 0x830(0x01)
	char pad_831[0x7]; // 0x831(0x07)
	struct FPsychicObjectSoundData2 SoundData; // 0x838(0x48)
	bool bUpdateFocusPos; // 0x880(0x01)
	char pad_881[0x7]; // 0x881(0x07)
	struct UAnimSequence* AttackComboAnimSeq; // 0x888(0x08)
	bool PartsParent; // 0x890(0x01)
	char pad_891[0x7]; // 0x891(0x07)
	struct TArray<struct ABP_PsychicObjectBasic_C*> PartsObjList; // 0x898(0x10)
	bool bPartsObj; // 0x8a8(0x01)
	char pad_8A9[0x7]; // 0x8a9(0x07)
	struct ABP_PsychicObjectBasic_C* PartsParentObj; // 0x8b0(0x08)
	bool bBackupAttackParam; // 0x8b8(0x01)
	enum class EPsychicObjectSizeType BackupAttackSize; // 0x8b9(0x01)
	enum class PsychicObjectAttackType BackupAttackType; // 0x8ba(0x01)
	char pad_8BB[0x1]; // 0x8bb(0x01)
	float BackupAttackRadius; // 0x8bc(0x04)
	bool bCheckDestroy; // 0x8c0(0x01)
	bool bCheckDestroyProc; // 0x8c1(0x01)
	bool bEffectDestroySkip; // 0x8c2(0x01)
	bool bEffectDestroySkipOnce; // 0x8c3(0x01)
	bool bDestroyExplosion; // 0x8c4(0x01)
	char pad_8C5[0x3]; // 0x8c5(0x03)
	struct TArray<float> BrainFieldDropRadius; // 0x8c8(0x10)
	struct TArray<float> BrainFieldSwingRadius; // 0x8d8(0x10)
	struct TArray<float> BrainFieldSwingHalfHeight; // 0x8e8(0x10)
	struct TArray<struct FVector> BrainFieldSwingPosOffset; // 0x8f8(0x10)
	struct FVector BrainFieldSwingPosRandomMin; // 0x908(0x0c)
	struct FVector BrainFieldSwingPosRandomMax; // 0x914(0x0c)
	bool bBrainFieldObjRandom; // 0x920(0x01)
	char pad_921[0x3]; // 0x921(0x03)
	struct FVector BrainFieldSwingPosRandom; // 0x924(0x0c)
	struct FRotator BrainFieldSwingRotRandom; // 0x930(0x0c)
	bool bBrainFieldObj; // 0x93c(0x01)
	bool bBrainFieldGrab; // 0x93d(0x01)
	bool bBrainFieldAttackCollision; // 0x93e(0x01)
	bool bResetBrainFieldPos; // 0x93f(0x01)
	enum class EPsychicObjectBrainFieldAttackType BrainFieldAttackType; // 0x940(0x01)
	char pad_941[0x3]; // 0x941(0x03)
	int32_t BrainFieldAttackLevel; // 0x944(0x04)
	int32_t BrainFieldObjMax; // 0x948(0x04)
	int32_t BrainFieldIndex; // 0x94c(0x04)
	int32_t BrainFieldAttackIndex; // 0x950(0x04)
	struct FVector BrainFieldOffset; // 0x954(0x0c)
	bool bAppear; // 0x960(0x01)
	char pad_961[0x3]; // 0x961(0x03)
	float AppearTime; // 0x964(0x04)
	struct FGameTimer AppearTimer; // 0x968(0x0c)
	float HandleLinearStiffness; // 0x974(0x04)
	float HandleAngularDamping; // 0x978(0x04)
	float HandleAngularStiffness; // 0x97c(0x04)
	float HandleInterpolationSpeed; // 0x980(0x04)
	float HandleLinearStiffnessFix; // 0x984(0x04)
	float HandleAngularStiffnessFix; // 0x988(0x04)
	float HandleInterpolationSpeedFix; // 0x98c(0x04)
	float HandleInterpolationSpeedBrainField; // 0x990(0x04)
	float PhysCapMass; // 0x994(0x04)
	struct FVector HandleGrabPos; // 0x998(0x0c)
	struct FRotator HandleGrabRot; // 0x9a4(0x0c)
	struct FVector HandleTargetPos; // 0x9b0(0x0c)
	struct FRotator HandleTargetRot; // 0x9bc(0x0c)
	bool bPhysicInitialized; // 0x9c8(0x01)
	enum class ECollisionEnabled PhysicCollision; // 0x9c9(0x01)
	bool bPhysicSimulate; // 0x9ca(0x01)
	bool bPhysicGravity; // 0x9cb(0x01)
	bool bCommonSpline; // 0x9cc(0x01)
	bool bSplineHandle; // 0x9cd(0x01)
	bool bSplineRotDist; // 0x9ce(0x01)
	bool bSplineObj; // 0x9cf(0x01)
	bool bAttractEnemyProc; // 0x9d0(0x01)
	bool bAttackDropDirect; // 0x9d1(0x01)
	bool bAttackDropDirectCall; // 0x9d2(0x01)
	char pad_9D3[0x5]; // 0x9d3(0x05)
	struct UCurveFloat* SplineDistCurve; // 0x9d8(0x08)
	struct TArray<struct FVector> SplinePointList; // 0x9e0(0x10)
	struct TArray<struct FRotator> SplineRotList; // 0x9f0(0x10)
	enum class ESplineCoordinateSpace SplineCoordinateSpace; // 0xa00(0x01)
	char pad_A01[0x3]; // 0xa01(0x03)
	int32_t SplinePointNum; // 0xa04(0x04)
	float SplineDistance; // 0xa08(0x04)
	float SplineRate; // 0xa0c(0x04)
	struct FVector SplineDirection; // 0xa10(0x0c)
	int32_t SplineIndex; // 0xa1c(0x04)
	struct FGameTimer SplineTimer; // 0xa20(0x0c)
	bool bCommonAttract; // 0xa2c(0x01)
	char pad_A2D[0x3]; // 0xa2d(0x03)
	float AttractTimeSwing; // 0xa30(0x04)
	char pad_A34[0x4]; // 0xa34(0x04)
	struct FString AnimationName; // 0xa38(0x10)
	struct FVector AnimScale; // 0xa48(0x0c)
	bool bUpdateAnimObj; // 0xa54(0x01)
	bool bAnimNotifyReturn; // 0xa55(0x01)
	bool bAttackDrop; // 0xa56(0x01)
	bool bAttackDropWait; // 0xa57(0x01)
	bool bAttackDropSkipThrow; // 0xa58(0x01)
	bool bAttackDropAnimation; // 0xa59(0x01)
	bool bAttackDropAnimVector; // 0xa5a(0x01)
	char pad_A5B[0x1]; // 0xa5b(0x01)
	float AttackDropHeightOffset; // 0xa5c(0x04)
	bool bDropSpline; // 0xa60(0x01)
	char pad_A61[0x3]; // 0xa61(0x03)
	struct FVector VecDropSpline; // 0xa64(0x0c)
	float AngleDropSpline; // 0xa70(0x04)
	enum class EEasingFunc EaseTypeDropSpline; // 0xa74(0x01)
	char pad_A75[0x3]; // 0xa75(0x03)
	float EaseRateDropSpline; // 0xa78(0x04)
	struct FGameTimer DropDelayTimer; // 0xa7c(0x0c)
	float DropDelayTime; // 0xa88(0x04)
	bool bCheckChildParent; // 0xa8c(0x01)
	char pad_A8D[0x3]; // 0xa8d(0x03)
	struct TArray<struct ABP_PsychicObjectBasic_C*> CheckChildObjList; // 0xa90(0x10)
	bool bCheckChildObj; // 0xaa0(0x01)
	bool bCheckChildCollProfile; // 0xaa1(0x01)
	bool bCheckChildFocus; // 0xaa2(0x01)
	bool bCheckChildCapture; // 0xaa3(0x01)
	bool bCollisionProfileIgnore; // 0xaa4(0x01)
	bool bCollisionProfileNoCollision; // 0xaa5(0x01)
	bool bCollisionProfileTemp; // 0xaa6(0x01)
	char pad_AA7[0x1]; // 0xaa7(0x01)
	struct FName ProfileNamePsyObj; // 0xaa8(0x08)
	struct FName ProfileNameIgnore; // 0xab0(0x08)
	struct FName ProfileNameNoCollision; // 0xab8(0x08)
	struct FName ProfileNameCurrent; // 0xac0(0x08)
	struct FName ProfileNameBackup; // 0xac8(0x08)
	struct FName ProfileNameTemp; // 0xad0(0x08)
	bool bEffectAttackSkip; // 0xad8(0x01)
	char pad_AD9[0x3]; // 0xad9(0x03)
	float CaptureHeight; // 0xadc(0x04)
	bool bEffectAttackKeep; // 0xae0(0x01)
	bool bEnpcObject; // 0xae1(0x01)
	bool bPullOut; // 0xae2(0x01)
	bool bPullOutCurve; // 0xae3(0x01)
	bool bCaptureToPullOut; // 0xae4(0x01)
	bool bPullOutHandle; // 0xae5(0x01)
	bool bPullOutCurveRot; // 0xae6(0x01)
	char pad_AE7[0x1]; // 0xae7(0x01)
	struct UCurveVector* PullOutPosCurve; // 0xae8(0x08)
	struct UCurveFloat* PullOutAngleCurve; // 0xaf0(0x08)
	struct UCurveVector* PullOutRotCurve; // 0xaf8(0x08)
	float PullOutTime; // 0xb00(0x04)
	struct FGameTimer PullOutTimer; // 0xb04(0x0c)
	struct FVector PullOutObjDir; // 0xb10(0x0c)
	struct FVector PullOutOffset; // 0xb1c(0x0c)
	float PullOutAngle; // 0xb28(0x04)
	struct FVector PullOutPosStt; // 0xb2c(0x0c)
	struct FRotator PullOutRotStt; // 0xb38(0x0c)
	struct FRotator PullOutRot; // 0xb44(0x0c)
	float SplineTimeRate; // 0xb50(0x04)
	bool bSplineAboveEnemy; // 0xb54(0x01)
	bool bSplineRotLerp; // 0xb55(0x01)
	char pad_B56[0x2]; // 0xb56(0x02)
	struct FVector AboveEnemyPosEndOffset; // 0xb58(0x0c)
	float AboveEnemyAngleOffsetHz; // 0xb64(0x04)
	struct ARSBattleCharacter_C* EnemyOwner; // 0xb68(0x08)
	bool bEnemyOccupied; // 0xb70(0x01)
	bool bEnemyTypeEm0900; // 0xb71(0x01)
	bool bEnemyRandomObj; // 0xb72(0x01)
	bool bEnemyDirectShot; // 0xb73(0x01)
	bool bUseEnemyAttackParameter; // 0xb74(0x01)
	char pad_B75[0x3]; // 0xb75(0x03)
	struct FHCCollisionCommonInfo EnemyCommonInfo; // 0xb78(0x70)
	struct FHCSkillCommonInfo EnemySkillInfo; // 0xbe8(0xe8)
	bool bHandleBackup; // 0xcd0(0x01)
	enum class ECollisionEnabled HandleBackupCollision; // 0xcd1(0x01)
	bool bHandleBackupSimulate; // 0xcd2(0x01)
	bool bHandleBackupGravity; // 0xcd3(0x01)
	struct FVector MeshOffset; // 0xcd4(0x0c)
	bool bSplineFollowTarget; // 0xce0(0x01)
	char pad_CE1[0x3]; // 0xce1(0x03)
	struct FVector SplineFollowTargetPos; // 0xce4(0x0c)
	bool bCopyProc; // 0xcf0(0x01)
	bool bCopyDirectDrop; // 0xcf1(0x01)
	bool bCopyCombo; // 0xcf2(0x01)
	bool bCopyDelay; // 0xcf3(0x01)
	bool bCopyAppear; // 0xcf4(0x01)
	bool bCopyAppearProc; // 0xcf5(0x01)
	bool bCopyAttack; // 0xcf6(0x01)
	char pad_CF7[0x1]; // 0xcf7(0x01)
	struct ABP_PsychicObjectBasic_C* CopyParentObj; // 0xcf8(0x08)
	float CopyDelayTime; // 0xd00(0x04)
	float CopyAppearTime; // 0xd04(0x04)
	float CopyAttackTime; // 0xd08(0x04)
	struct FGameTimer CopyDelayTimer; // 0xd0c(0x0c)
	struct FGameTimer CopyAppearTimer; // 0xd18(0x0c)
	struct FGameTimer CopyAttackTimer; // 0xd24(0x0c)
	int32_t CopyIndex; // 0xd30(0x04)
	char pad_D34[0x4]; // 0xd34(0x04)
	struct FPsychicGrabMovementSizeData GrabMovementSizeData; // 0xd38(0xb0)
	struct FVector CaptureHandleTargetPos; // 0xde8(0x0c)
	bool bAttackDropTargetLocation; // 0xdf4(0x01)
	bool bAttackThrowTargetLocation; // 0xdf5(0x01)
	bool bNewCommon; // 0xdf6(0x01)
	char pad_DF7[0x1]; // 0xdf7(0x01)
	struct FVector CopyParentStartPos; // 0xdf8(0x0c)
	struct FVector CopyStartPos; // 0xe04(0x0c)
	struct FVector CopyThrowDir; // 0xe10(0x0c)
	float CopySpeedRateMax; // 0xe1c(0x04)
	float CopySpeedMax; // 0xe20(0x04)
	struct FVector AttackSphereOffset; // 0xe24(0x0c)
	bool bAttackIntercept; // 0xe30(0x01)
	bool bEnemyIntercept; // 0xe31(0x01)
	bool bInterceptReserve; // 0xe32(0x01)
	char pad_E33[0x1]; // 0xe33(0x01)
	struct FVector AttackCapsuleOffset; // 0xe34(0x0c)
	struct FRotator AttackCapsuleBaseRot; // 0xe40(0x0c)
	float AttackDropTimeRateDirect; // 0xe4c(0x04)
	float AttackDropTimeRateBrain; // 0xe50(0x04)
	struct FVector PullOutForwardDir; // 0xe54(0x0c)
	struct ABP_PsychicObjectDestructibleBasic_C* DestructibleClass; // 0xe60(0x08)
	struct ABP_PsychicObjectDestructibleBasic_C* DestructibleActor; // 0xe68(0x08)
	bool bDestructibleAuto; // 0xe70(0x01)
	char pad_E71[0x3]; // 0xe71(0x03)
	float DestructibleImpulse; // 0xe74(0x04)
	bool ChildPsyObj; // 0xe78(0x01)
	char pad_E79[0x7]; // 0xe79(0x07)
	struct ABP_PsychicObjectBasic_C* ChildPsyObjParentObj; // 0xe80(0x08)
	float VibrateRangeZ; // 0xe88(0x04)
	char pad_E8C[0x4]; // 0xe8c(0x04)
	struct UCurveFloat* AttackDropSplineDistance; // 0xe90(0x08)
	bool bAttackDirectDrop; // 0xe98(0x01)
	char pad_E99[0x7]; // 0xe99(0x07)
	struct UAnimMontage* AttackDirectDropMontage; // 0xea0(0x08)
	struct UCurveFloat* AttackDirectDropSplineDistanceCurve; // 0xea8(0x08)
	struct UCurveFloat* AttackDirectDropSpinCurve; // 0xeb0(0x08)
	float AttackDirectDropSpinSpeedMax; // 0xeb8(0x04)
	struct FVector AttackDirectDropOffset; // 0xebc(0x0c)
	struct FRotator AttackDirectDropRot; // 0xec8(0x0c)
	struct FVector AttackDirectDropAxis; // 0xed4(0x0c)
	bool bPullOutEndPos; // 0xee0(0x01)
	char pad_EE1[0x3]; // 0xee1(0x03)
	struct FVector PullOutPosEnd; // 0xee4(0x0c)
	bool bPullOutEndRot; // 0xef0(0x01)
	char pad_EF1[0x3]; // 0xef1(0x03)
	struct FRotator PullOutRotEnd; // 0xef4(0x0c)
	bool bEffectAppear; // 0xf00(0x01)
	bool bEffectAppearReverse; // 0xf01(0x01)
	char pad_F02[0x2]; // 0xf02(0x02)
	float EffectAppearTime; // 0xf04(0x04)
	struct FGameTimer EffectAppearTimer; // 0xf08(0x0c)
	float BrainFieldRandomAngleMin; // 0xf14(0x04)
	float BrainFieldRandomAngleMax; // 0xf18(0x04)
	float BrainFieldRandomDistanceMin; // 0xf1c(0x04)
	float BrainFieldRandomDistanceMax; // 0xf20(0x04)
	float BrainFieldRandomHeightMin; // 0xf24(0x04)
	float BrainFieldRandomHeightMax; // 0xf28(0x04)
	float BrainFieldSpawnHeightMin; // 0xf2c(0x04)
	float BrainFieldSpawnHeightMax; // 0xf30(0x04)
	bool bBrainFieldDropAttack; // 0xf34(0x01)
	char pad_F35[0x3]; // 0xf35(0x03)
	struct FVector BrainFieldDropOffset; // 0xf38(0x0c)
	bool bBrainFieldDropCamera; // 0xf44(0x01)
	bool bCheckTimeDilationApply; // 0xf45(0x01)
	bool bCheckTimeDilationAttack; // 0xf46(0x01)
	bool bCheckTimeDilationSkip; // 0xf47(0x01)
	float CheckTimeDilationValue; // 0xf48(0x04)
	bool bTimeDilationCapture; // 0xf4c(0x01)
	bool bTimeDilationPull; // 0xf4d(0x01)
	char pad_F4E[0x2]; // 0xf4e(0x02)
	struct FGameTimer TimeDilationPullLerpTimer; // 0xf50(0x0c)
	float TimeDilationPullLerpTime; // 0xf5c(0x04)
	struct FVector TimeDilationPullPosStt; // 0xf60(0x0c)
	struct FVector TimeDilationPullPosEnd; // 0xf6c(0x0c)
	struct FRotator TimeDilationPullRotStt; // 0xf78(0x0c)
	struct FRotator TimeDilationPullRotEnd; // 0xf84(0x0c)
	enum class EEasingFunc TimeDilationPullEaseType; // 0xf90(0x01)
	char pad_F91[0x3]; // 0xf91(0x03)
	float TimeDilationPullEaseBlend; // 0xf94(0x04)
	struct FVector CaptureMeshPosStt; // 0xf98(0x0c)
	struct FVector CaptureMeshPosEnd; // 0xfa4(0x0c)
	struct FRotator CaptureMeshRotStt; // 0xfb0(0x0c)
	char pad_FBC[0x4]; // 0xfbc(0x04)
	struct UCurveVector* CaptureMeshRotCurve; // 0xfc0(0x08)
	float CaptureMeshRotCurveTime; // 0xfc8(0x04)
	float CaptureMeshRotCurveSpeed; // 0xfcc(0x04)
	float CaptureMeshRotCurveRate; // 0xfd0(0x04)
	float CaptureMeshRotCurveAlpha; // 0xfd4(0x04)
	float CaptureRateBase; // 0xfd8(0x04)
	float CaptureRateRange; // 0xfdc(0x04)
	bool bCaptureLimit; // 0xfe0(0x01)
	char pad_FE1[0x3]; // 0xfe1(0x03)
	float CaptureLimitDistance; // 0xfe4(0x04)
	int32_t CaptureLimitCountMax; // 0xfe8(0x04)
	int32_t CaptureLimitCount; // 0xfec(0x04)
	bool bBoundsOffset; // 0xff0(0x01)
	char pad_FF1[0x3]; // 0xff1(0x03)
	struct FVector BoundsOffset; // 0xff4(0x0c)
	struct TArray<struct URSParticleSystemComponentBase*> EffectCompList; // 0x1000(0x10)
	bool bCaptureSkipEffectRelease; // 0x1010(0x01)
	bool bNewElectricPole; // 0x1011(0x01)
	bool bBackupSimulate; // 0x1012(0x01)
	bool bSimulateDefault; // 0x1013(0x01)
	enum class ECollisionEnabled BackupPhysicCollision; // 0x1014(0x01)
	bool bBackupPhysicSimulate; // 0x1015(0x01)
	bool bBackupPhysicGravity; // 0x1016(0x01)
	bool bMaterialCaptureStart; // 0x1017(0x01)
	struct FSPsychicCaptureMaterial MaterialParamNormal; // 0x1018(0xa0)
	struct FSPsychicCaptureMaterial MaterialParamFire; // 0x10b8(0xa0)
	struct FSPsychicCaptureMaterial MaterialParamThunder; // 0x1158(0xa0)
	struct UCurveVector* MaterialCurveNormal; // 0x11f8(0x08)
	struct UCurveVector* MaterialCurveFire; // 0x1200(0x08)
	struct UCurveVector* MaterialCurveThunder; // 0x1208(0x08)
	struct FSPsychicCaptureMaterial MaterialCaptureStartParam; // 0x1210(0xa0)
	struct UCurveVector* MaterialCaptureStartCurve; // 0x12b0(0x08)
	float MaterialCaptureStartTimer; // 0x12b8(0x04)
	char pad_12BC[0x4]; // 0x12bc(0x04)
	struct TArray<enum class E_SASKind> SasKindList; // 0x12c0(0x10)
	bool bSplineUnqRot; // 0x12d0(0x01)
	char pad_12D1[0x7]; // 0x12d1(0x07)
	struct FMulticastInlineDelegate OnSetEffectFocus; // 0x12d8(0x10)
	bool bHitBackGroundDelay; // 0x12e8(0x01)
	char pad_12E9[0x3]; // 0x12e9(0x03)
	struct FHitResult HitResultBackGround; // 0x12ec(0x88)
	float CaptureTimeComboAir; // 0x1374(0x04)
	bool bPullOutSkipFirstAttack; // 0x1378(0x01)
	bool bAsyncAttractSkip; // 0x1379(0x01)
	char pad_137A[0x6]; // 0x137a(0x06)
	struct FMulticastInlineDelegate DispatcherGimmickObjectEnd; // 0x1380(0x10)
	float BrainFieldDropLookAtPosRate; // 0x1390(0x04)
	bool bBrainFieldDropLookAtUpdate; // 0x1394(0x01)
	bool bBrainFieldDropLookAtOnce; // 0x1395(0x01)
	char pad_1396[0x2]; // 0x1396(0x02)
	struct FVector BrainFieldDropLookAtPos; // 0x1398(0x0c)
	bool bDirectSwingCollision; // 0x13a4(0x01)
	char pad_13A5[0x3]; // 0x13a5(0x03)
	float DirectSwingCollisionOffset; // 0x13a8(0x04)
	bool bPsychicFieldObj; // 0x13ac(0x01)
	bool bPsychicFieldExtraObj; // 0x13ad(0x01)
	bool bPsychicFieldSpawnObj; // 0x13ae(0x01)
	char pad_13AF[0x1]; // 0x13af(0x01)
	int32_t PsychicFieldAttackIndex; // 0x13b0(0x04)
	char pad_13B4[0x4]; // 0x13b4(0x04)
	struct FPsychicObjectSizeParameter SizeParameter; // 0x13b8(0x118)
	struct TArray<enum class HCSkillExtraType> ExtendExtraType; // 0x14d0(0x10)
	struct TArray<struct UAnimSequence*> PsychicFieldAnimList; // 0x14e0(0x10)
	struct FTransform ArrangeMeshTransformOld; // 0x14f0(0x30)
	enum class E_SASKind EnemySasKind; // 0x1520(0x01)
	bool bUniqueAttackCollision; // 0x1521(0x01)
	char pad_1522[0x2]; // 0x1522(0x02)
	float CaptureTimeNormalEnemy; // 0x1524(0x04)
	float CaptureTimeComboEnemy; // 0x1528(0x04)
	float CaptureTimeComboAirEnemy; // 0x152c(0x04)
	int32_t PsychicFieldObjNum; // 0x1530(0x04)
	struct FName EnemyAttackRowName; // 0x1534(0x08)
	bool bUseAttackEffectInfo; // 0x153c(0x01)
	char pad_153D[0x3]; // 0x153d(0x03)
	struct FHCHitEffectInfo AttackEffectInfo; // 0x1540(0x08)
	struct APsychicObjectManager_C* PsyObjMan; // 0x1548(0x08)
	bool bAttackThrowAnimation; // 0x1550(0x01)
	bool bAnimObjLerped; // 0x1551(0x01)
	char pad_1552[0x2]; // 0x1552(0x02)
	float AnimObjUpdateTime; // 0x1554(0x04)
	struct FGameTimer AnimObjUpdateTimer; // 0x1558(0x0c)
	float AnimObjLerpTime; // 0x1564(0x04)
	struct FGameTimer AnimObjLerpTimer; // 0x1568(0x0c)
	struct FVector AnimObjLerpPosStt; // 0x1574(0x0c)
	struct FVector AnimObjLerpPosEnd; // 0x1580(0x0c)
	struct FRotator AnimObjLerpRotStt; // 0x158c(0x0c)
	struct FRotator AnimObjLerpRotEnd; // 0x1598(0x0c)
	bool bAttackJustDodge; // 0x15a4(0x01)
	bool bAttackComboType; // 0x15a5(0x01)
	bool bUseAttackActorPos; // 0x15a6(0x01)
	bool bInterceptObject; // 0x15a7(0x01)
	struct AActor* InterceptEnmObj; // 0x15a8(0x08)
	struct FVector AnimScaleIntercept; // 0x15b0(0x0c)
	struct FVector AttractAnimScaleFix; // 0x15bc(0x0c)
	bool bAttractAnimStart; // 0x15c8(0x01)
	bool bAttractAnimFixScale; // 0x15c9(0x01)
	bool bEnemyDrop; // 0x15ca(0x01)
	bool bDestroyExplosionProc; // 0x15cb(0x01)
	struct FGameTimer DestroyExplosionTimer; // 0x15cc(0x0c)
	int32_t DataRevision; // 0x15d8(0x04)
	bool bAnimScaleLerp; // 0x15dc(0x01)
	char pad_15DD[0x3]; // 0x15dd(0x03)
	struct FGameTimer AnimScaleLerpTimer; // 0x15e0(0x0c)
	float AnimScaleLerpTime; // 0x15ec(0x04)
	struct FVector AnimScaleLerpStt; // 0x15f0(0x0c)
	struct FVector AnimScaleLerpEnd; // 0x15fc(0x0c)
	bool bAttractSkipEndMontage; // 0x1608(0x01)
	char pad_1609[0x3]; // 0x1609(0x03)
	float AttractEnemyDistance; // 0x160c(0x04)
	bool bAttackThrowFixAngular; // 0x1610(0x01)
	bool bPullOutAttackCheck; // 0x1611(0x01)
	bool bKillZ; // 0x1612(0x01)
	bool bAttractTargetRot; // 0x1613(0x01)
	bool bAttractDecel; // 0x1614(0x01)
	char pad_1615[0x3]; // 0x1615(0x03)
	float AttractDecelSpeedStt; // 0x1618(0x04)
	struct FVector AttractDecelVector; // 0x161c(0x0c)
	float AttractDecelTime; // 0x1628(0x04)
	struct FGameTimer AttractDecelTimer; // 0x162c(0x0c)
	float AttractDecelSpeed; // 0x1638(0x04)
	float AttractTimeIntercept; // 0x163c(0x04)
	float AttractTimeInterceptEnm; // 0x1640(0x04)
	float CheckHitSideDist; // 0x1644(0x04)
	bool bDebugNewTick; // 0x1648(0x01)
	bool bDebugNewDestroy; // 0x1649(0x01)
	bool bDebugNewCheckDestroy; // 0x164a(0x01)
	char pad_164B[0x5]; // 0x164b(0x05)
	struct ATriggerEffectManager* TrgEffMgr; // 0x1650(0x08)
	struct TArray<struct UAnimSequence*> PsychicFieldAnimListCh0200; // 0x1658(0x10)
	bool bCheckMeshCompHitBg; // 0x1668(0x01)
	bool bExecMeshCompHitBg; // 0x1669(0x01)
	bool bMeshCompHitBg; // 0x166a(0x01)
	bool bPullOutCheckWall; // 0x166b(0x01)
	bool bPullOutSign; // 0x166c(0x01)
	char pad_166D[0x3]; // 0x166d(0x03)
	float PullOutCheckWallRange; // 0x1670(0x04)
	bool bAttackDropSplineForce; // 0x1674(0x01)
	char pad_1675[0x3]; // 0x1675(0x03)
	struct FVector BrainFieldDropLookAtPosEnd; // 0x1678(0x0c)
	bool bAttractBrainFieldThrow; // 0x1684(0x01)
	bool bSplineAboveEnemyActorLocation; // 0x1685(0x01)
	char pad_1686[0x2]; // 0x1686(0x02)
	float DirectSwingCollisionEndOffset; // 0x1688(0x04)
	bool bBrainFieldSwingLerpEnable; // 0x168c(0x01)
	bool bBrainFieldSwingLerp; // 0x168d(0x01)
	char pad_168E[0x2]; // 0x168e(0x02)
	float BrainFieldSwingLerpTime; // 0x1690(0x04)
	float BrainFieldSwingUpdateTime; // 0x1694(0x04)
	struct UCurveFloat* CurveAttractRotBase; // 0x1698(0x08)
	struct UCurveFloat* CurveAttractRotItcEnm; // 0x16a0(0x08)
	struct UCurveFloat* CurveAttractRotSocketDir; // 0x16a8(0x08)
	struct FVector InterceptEnmNormal; // 0x16b0(0x0c)
	struct FGameTimer HomingForceTimer; // 0x16bc(0x0c)
	float HomingFroceTime; // 0x16c8(0x04)
	struct FGameTimer CopyHomingForceTimer; // 0x16cc(0x0c)
	bool bKeepSimulate; // 0x16d8(0x01)
	char pad_16D9[0x3]; // 0x16d9(0x03)
	float KeepSimulateTime; // 0x16dc(0x04)
	struct FGameTimer KeepSimulateTimer; // 0x16e0(0x0c)
	char pad_16EC[0x4]; // 0x16ec(0x04)
	struct UCapsuleComponent* PhysicsCapsuleComp; // 0x16f0(0x08)
	bool bEventBackup; // 0x16f8(0x01)
	enum class ECollisionEnabled EventBackupCollision; // 0x16f9(0x01)
	bool bEventBackupSimulate; // 0x16fa(0x01)
	bool bEventBackupGravity; // 0x16fb(0x01)
	bool bUseTempCollisionProfile; // 0x16fc(0x01)
	char pad_16FD[0x3]; // 0x16fd(0x03)
	struct FHCSkillCommonInfo SkillInfoBackUp; // 0x1700(0xe8)
	bool bAddAchievementFlag; // 0x17e8(0x01)

	void GetEnemyThrowParameter(bool brain field in, float throw speed, float homing speed); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.GetEnemyThrowParameter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetInterceptThrowParameter(float throw speed, float homing speed); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.GetInterceptThrowParameter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetTenpCollisionProfile(bool flag in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetTenpCollisionProfile // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsInterceptFail(bool bFail); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.IsInterceptFail // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetPsyObjDistanceDestroy(bool return); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetPsyObjDistanceDestroy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsyObjCollisionEnable(enum class ECollisionEnabled mesh collision in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetPsyObjCollisionEnable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDestructibleVisibility(bool FlagIn); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetDestructibleVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEventBackupPhysic(bool flag in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetEventBackupPhysic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEventSetting(bool event start in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetEventSetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EnemyPhysicsCollisionOnHitComponentFunc(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.EnemyPhysicsCollisionOnHitComponentFunc // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyPhysicsCollisionActive(bool FlagIn); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetEnemyPhysicsCollisionActive // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicObjectSimulateControlAwake(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetPsychicObjectSimulateControlAwake // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicObjectSimulateControl(bool flag in, bool capture success in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetPsychicObjectSimulateControl // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateKeepSimulate(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdateKeepSimulate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetKeepSimulate(bool flag in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetKeepSimulate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitSimulateDefault(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.InitSimulateDefault // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDraw(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.DebugDraw // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateEnemyInterceptRot(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdateEnemyInterceptRot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsCompTickEnable(bool return); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.IsCompTickEnable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetRespawnRestrictRadius(float Radius); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.GetRespawnRestrictRadius // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetAttackDirection(bool return, struct FVector Direction); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.GetAttackDirection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAttractBrainField(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdateAttractBrainField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAchievementThrowObject(bool force in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetAchievementThrowObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyPsychicObjectThrow(struct AActor* target actor in, float throw speed in, float homing speed in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetEnemyPsychicObjectThrow // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetFloatObject(bool flag in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetFloatObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEnemyAttackThrowTargetPoint(struct FVector targetPos); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.GetEnemyAttackThrowTargetPoint // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsyObjDestroy(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetPsyObjDestroy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RemoveAuraMesh(struct UMeshComponent* mesh comp in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.RemoveAuraMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddAuraMesh(struct UMeshComponent* mesh comp in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.AddAuraMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAttractDecel(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdateAttractDecel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttractDecel(bool flag in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetAttractDecel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetThrowHoming(bool flag in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetThrowHoming // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckStillInWorld(float KillZ in, bool return); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.CheckStillInWorld // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetFellOutOfWorld(struct UDamageType* dmg type in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetFellOutOfWorld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsCaptureOwnerMale(bool return, bool male); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.IsCaptureOwnerMale // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetAnimationScaleIntercept(float letp time in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetAnimationScaleIntercept // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetAnimationScaleLerp(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.ResetAnimationScaleLerp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAnimationScaleLerp(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdateAnimationScaleLerp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAnimationScaleLerp(float letp time in, struct FVector dst scale in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetAnimationScaleLerp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDestroyExplosionProc(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdateDestroyExplosionProc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDestroyExplosionProc(bool flag in, bool return); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetDestroyExplosionProc // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDestroyExplosion(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetDestroyExplosion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCaptureOwnerHalfHeight(float half height); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.GetCaptureOwnerHalfHeight // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CallEnemyIntercpetableThrow(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.CallEnemyIntercpetableThrow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInterceptObjectActive(bool flag in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetInterceptObjectActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitInterceptObject(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.InitInterceptObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInterceptEnemy(bool flag in, struct AActor* enemy obj in, struct ARSBattleCharacter_C* owner in, struct ARSBattleCharacter_C* target in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetInterceptEnemy // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetIntercept(struct ARSBattleCharacter_C* owner in, struct ARSBattleCharacter_C* target in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetIntercept // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetJustDodge(struct ARSBattleCharacter_C* owner in, struct ARSBattleCharacter_C* target in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetJustDodge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainFieldSwingLerp(bool flag in, float lerp time in, float update time in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetBrainFieldSwingLerp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBrainFieldAttachOffset(int32_t attack index in, struct FVector offset pos); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.GetBrainFieldAttachOffset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetAnimationBrainField(enum class EPsychicObjectBrainFieldAttackType brain field attack type in, bool return, struct UAnimSequence* anim sequence); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.GetAnimationBrainField // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackEffectInfo(struct FHCHitEffectInfo effect info in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetAttackEffectInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEnemyWeakPoint(struct FVector weak pos); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.GetEnemyWeakPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitPsychicFieldSpawn(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.InitPsychicFieldSpawn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyPsychicObjectActive(bool active in, struct FVector obj pos in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetEnemyPsychicObjectActive // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitEnemyPsychicObject(struct ARSBattleCharacter_C* enemy owner in, enum class E_SASKind sas kind in, bool drop type in, bool random obj in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.InitEnemyPsychicObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyEffectSas(enum class E_SASKind sas kind in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetEnemyEffectSas // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsParent(bool return); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.IsParent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetDestroyComp(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetDestroyComp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetNoRespawn(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetNoRespawn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddExtendExtraType(enum class HCSkillExtraType extra type in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.AddExtendExtraType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicFieldSetting(int32_t attack index in, int32_t obj num in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetPsychicFieldSetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDirectSwingCollision(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetDirectSwingCollision // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainFieldSetting(enum class EPsychicObjectBrainFieldAttackType brain field attack type in, int32_t attack index in, struct TArray<struct FVector> swing pos list in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetBrainFieldSetting // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBrainFieldDropLookAtPos(struct FVector Pos); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.GetBrainFieldDropLookAtPos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetMeshBoundCentrePos(struct FVector Pos); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.GetMeshBoundCentrePos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetAnimOwner(bool flag in, bool attach in, struct ABP_PsychicObjectBasic_C* psy obj in, struct ARsBattleHero_C* hero in, struct APsychicAnimObject_C* anim owner); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetAnimOwner // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCaptureOwner(struct ARsBattleHero_C* capture owner in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetCaptureOwner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMaterialCaptureStartInstance(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetMaterialCaptureStartInstance // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicObjectSound(bool flag in, struct URSAtomComponentBase* atom comp in, struct USoundAtomCue* sound atom in, bool attach, struct USceneComponent* attach comp in, struct FName attach socket in, bool Location, struct FVector location in, struct URSAtomComponentBase* rs atom comp); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetPsychicObjectSound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddExtraType(struct TArray<enum class HCSkillExtraType> extra type in, enum class HCSkillExtraType add type in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.AddExtraType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackSkillInfo(struct FHCSkillCommonInfo skill info in, struct FHCSkillCommonInfo skill info); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetAttackSkillInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMIParameterAura(float rate in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetMIParameterAura // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearMaterialCaptureStart(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.ClearMaterialCaptureStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateMaterialCaptureStart(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdateMaterialCaptureStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMaterialCaptureStart(bool flag in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetMaterialCaptureStart // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMaterialCaptureStartCurve(enum class E_SASKind sas kind in, struct UCurveVector* material curve); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.GetMaterialCaptureStartCurve // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetMaterialCaptureStartParam(enum class E_SASKind sas kind in, struct FSPsychicCaptureMaterial material param); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.GetMaterialCaptureStartParam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void LoadMaterialCaptureStartCurve(struct FSPsychicCaptureMaterial SPsychicCaptureMaterial, struct UCurveVector* AsCurve Vector); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.LoadMaterialCaptureStartCurve // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitMaterialCaptureStartParam(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.InitMaterialCaptureStartParam // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBackUpSimulatePhysics(bool flag in, enum class ECollisionEnabled mesh collision in, bool simulate in, bool gravity in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetBackUpSimulatePhysics // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAcceleratorValid(bool return); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.IsAcceleratorValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ClearPsychicObjectEffect(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.ClearPsychicObjectEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePsychicObjectEffect(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdatePsychicObjectEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct URSParticleSystemComponentBase* SetPsychicObjectEffect(bool flag in, struct UParticleSystem* emitter in, struct URSParticleSystemComponentBase* effect component in, bool attach in, struct USceneComponent* attach comp in, struct FName attach socket in, bool location in, struct FTransform transform in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetPsychicObjectEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTimeDilationAttack(bool flag in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetTimeDilationAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHandleTargetNew(struct FVector pos in, bool set rot in, struct FRotator rot in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetHandleTargetNew // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHandleGrabNew(bool flag in, bool pull in, bool set pos in, struct FVector pos in, bool set rot in, struct FRotator rot in, float interpolate speed in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetHandleGrabNew // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateTimeDilationPull(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdateTimeDilationPull // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTimeDilationPull(bool flag in, struct FVector target pos in, bool set rot in, struct FRotator rot in, float interpolate speed in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetTimeDilationPull // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTimeDilationApply(bool flag in, bool Updated); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetTimeDilationApply // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCaptureTimeDilation(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdateCaptureTimeDilation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCaptureTimeDilation(bool flag in, bool success in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetCaptureTimeDilation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBoundsOffset(struct FVector Offset); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.GetBoundsOffset // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateCheckTimeDilation(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdateCheckTimeDilation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CallAttackDirectDrop(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.CallAttackDirectDrop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainFieldAttackCollision(bool flag in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetBrainFieldAttackCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckBrainFieldAttackCollision(bool return ); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.CheckBrainFieldAttackCollision // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainFieldObjPosRot(struct FVector Pos); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetBrainFieldObjPosRot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateEffectAppear(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdateEffectAppear // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEffectAppear(bool flag in, bool reverse in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetEffectAppear // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPullOutOption(bool use end pos in, struct FVector end pos in, bool use end rot in, struct FRotator end rot in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetPullOutOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RestoreSimulatePhysics(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.RestoreSimulatePhysics // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHitDestructible(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetHitDestructible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DestroyDestructibleActor(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.DestroyDestructibleActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnDestructibleActor(struct FVector impulse dir in, float impulse value in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SpawnDestructibleActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDestructibleSetting(struct ABP_PsychicObjectDestructibleBasic_C* class in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetDestructibleSetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEnemyCapsuleRadius(float Radius); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.GetEnemyCapsuleRadius // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetMeshComp(struct UStaticMesh* mesh comp, struct FVector Scale); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.GetMeshComp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RemoveCaptureMesh(struct UMeshComponent* mesh comp in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.RemoveCaptureMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddCaptureMesh(struct UMeshComponent* mesh comp in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.AddCaptureMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RemoveFocusMesh(struct UMeshComponent* mesh comp in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.RemoveFocusMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddFocusMesh(struct UMeshComponent* mesh comp in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.AddFocusMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InterceptCancel(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.InterceptCancel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InterceptAttack(struct ARSBattleCharacter_C* interceprter in, struct ARSBattleCharacter_C* new target in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.InterceptAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InterceptReserve(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.InterceptReserve // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPhaseAttract(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.EndPhaseAttract // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicObjectAnimation(struct UAnimationAsset* animation in, bool loop in, float play rate in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetPsychicObjectAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetDeltaSecond(float delta second); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.GetDeltaSecond // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateCopyAttackThrow(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdateCopyAttackThrow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCopyAttackThrow(bool flag in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetCopyAttackThrow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHandleGrabLock(bool flag in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetHandleGrabLock // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAttackParameterIndex(int32_t attack index); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.GetAttackParameterIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHandleFixAngular(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetHandleFixAngular // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetParameterCopy(float rate in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetParameterCopy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMeshVisibility(struct UMeshComponent* mesh in, bool flag in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetMeshVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCameraShakeData(struct UCameraShake* CameraShakeType, float CameraShakeScale); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.GetCameraShakeData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttackCopyPsychicObject(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.AttackCopyPsychicObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCopyAppear(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdateCopyAppear // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCopyAppear(bool flag in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetCopyAppear // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupCopyPsychicObject(struct ABP_PsychicObjectBasic_C* parent obj in, struct FVector pos in, bool direct drop in, bool combo in, int32_t combo level in, int32_t copy index in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetupCopyPsychicObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsCopyPsychicObject(bool return); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.IsCopyPsychicObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeCopyPsychicObject(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.InitializeCopyPsychicObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSplineFollowTarget(bool flag in, struct FVector pos in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetSplineFollowTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHandlePosRot(struct FVector pos in, struct FRotator rot in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetHandlePosRot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHandleSimulatePhysics(bool flag in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetHandleSimulatePhysics // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHandleFix(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetHandleFix // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyAttackParameter(bool flag in, struct FHCCollisionCommonInfo common info in, struct FHCSkillCommonInfo skill info in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetEnemyAttackParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackCollisionNew(bool flag in, enum class EPsychicObjectBrainFieldAttackType brain field attack type in, float radius in, bool use capsule in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetAttackCollisionNew // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcSplineAboveEnemy(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.CalcSplineAboveEnemy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSplineAboveEnemy(bool flag in, struct FVector dst pos offest in, struct UCurveFloat* dist curve in, float dst angle offset in, bool actor location in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetSplineAboveEnemy // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDrawSpline(float time in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.DebugDrawSpline // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSplinePointEx(struct FVector pos in, struct FVector tangent in, struct FRotator rot in, enum class ESplinePointType type in, bool update in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetSplinePointEx // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetUniqueObjectPlayerMontage(enum class EPsychicObjectUniqueMontageIndex montage index in, bool left in, struct UAnimMontage* Montage); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.GetUniqueObjectPlayerMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePullOutCurve(bool End); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdatePullOutCurve // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPullOut(bool capture to pull out in, struct UCurveVector* pos curve in, struct UCurveFloat* angle curve in, bool handle in, struct UCurveVector* rot curve in, bool check wall in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetPullOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCaptureVibrateAngle(float vt speed in, float hz speed in, float angle range in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetCaptureVibrateAngle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCaptureVibrate(bool flag in, bool handle in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetCaptureVibrate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckPsychicObjectUniqueType(enum class EPsychicObjectUniqueType unique type in, bool return); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.CheckPsychicObjectUniqueType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetPsychicObjectUniqueType(enum class EPsychicObjectUniqueType unique type in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetPsychicObjectUniqueType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePullOut(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdatePullOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPhasePullOut(bool flag in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetPhasePullOut // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnpcObject(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetEnpcObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSkipAttack(bool flag in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetSkipAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckAttackType(bool direct drop in, enum class EPsychicObjectBrainFieldAttackType attack type in, int32_t level in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.CheckAttackType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetPsyObjCollisionProfile(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.ResetPsyObjCollisionProfile // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsyObjCollisionProfileNoColl(bool flag in, bool skip check obj type in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetPsyObjCollisionProfileNoColl // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CallUniqueAttackSuccess(enum class EPsychicObjectUniqueMontageIndex montage index in, bool left in, bool return); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.CallUniqueAttackSuccess // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsyObjLocationRotation(bool location in, struct FVector pos in, bool rotation in, struct FRotator rot in, bool mesh in, struct UMeshComponent* mesh comp in, bool center in, bool swing center in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetPsyObjLocationRotation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCameraLookAtPos(struct FVector Pos); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.GetCameraLookAtPos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetPsyObjCollisionProfileIgnore(bool flag in, bool skip check obj type in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetPsyObjCollisionProfileIgnore // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddCheckChildObj(struct ABP_PsychicObjectBasic_C* child obj in, bool coll profile in, bool focus in, bool capture in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.AddCheckChildObj // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBackupAttackParamOld(bool flag in, enum class EPsychicObjectBrainFieldAttackType attack type in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetBackupAttackParamOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEnemyTopWeakPoint(struct FVector weak pos); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.GetEnemyTopWeakPoint // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecAttackDrop(int32_t drop level in, bool attack collision in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.ExecAttackDrop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAnimNotifyReturn(bool flag in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetAnimNotifyReturn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCommonAttract(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdateCommonAttract // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCommonAttract(bool flag in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetCommonAttract // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackSwing(bool flag in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetAttackSwing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcAttackDropSpline(bool force in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.CalcAttackDropSpline // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackDrop(bool flag in, bool drop arrow rot in, float drop time rate in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetAttackDrop // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSplinePoint(struct FVector pos in, bool update in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetSplinePoint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetSplinePoint(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.ResetSplinePoint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCommonSpline(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdateCommonSpline // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PostAsyncSpline(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.PostAsyncSpline // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAsyncSpline(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdateAsyncSpline // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PreAsyncSpline(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.PreAsyncSpline // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCommonSpline(bool flag in, struct UCurveFloat* dist curve in, float time rate in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetCommonSpline // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainFieldAttackType(enum class EPsychicObjectBrainFieldAttackType attack type in, int32_t level in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetBrainFieldAttackType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMeshPosRot(struct FVector pos in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetMeshPosRot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBrainFieldPos(bool reset random in, struct FVector Pos); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.GetBrainFieldPos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateBrainField(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdateBrainField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAppearOld(bool flag in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetAppearOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainFieldGrab(bool flag in, struct ARsBattleHero_C* hero in, int32_t max in, int32_t index in, struct FVector offset pos in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetBrainFieldGrab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitBrainFieldObjOld(int32_t index in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.InitBrainFieldObjOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHitBarrier(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetHitBarrier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHitDestroy(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetHitDestroy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetParameterEffectFade(float rate in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetParameterEffectFade // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddDestroyEffectMeshList(struct UMeshComponent* mesh comp in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.AddDestroyEffectMeshList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetDestroyEffectMeshList(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.ResetDestroyEffectMeshList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCheckDestroy(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdateCheckDestroy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCheckDestroy(bool flag in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetCheckDestroy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEffectHit(bool hit enemy in, bool hit background in, struct FHCHitResult hit result in, struct FHitResult hit result bg in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetEffectHit // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDrawAsyncCommon(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.DebugDrawAsyncCommon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPartsObjList(int32_t index in, struct ABP_PsychicObjectBasic_C* parts obj); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.GetPartsObjList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddPartsObjList(struct ABP_PsychicObjectBasic_C* parts obj in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.AddPartsObjList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearPartsObjList(bool destroy in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.ClearPartsObjList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPartsObj3(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetPartsObj3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPartsObj2(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetPartsObj2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPartsObj1(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetPartsObj1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitPartsObj(struct ABP_PsychicObjectBasic_C* parent obj in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.InitPartsObj // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckFocusable(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.CheckFocusable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugPrintError(struct FString func str in, struct FString msg str in, bool screen in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.DebugPrintError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugPrintString(bool flag in, struct FString str in, bool obj name in, bool draw in, bool on player in, bool screen in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.DebugPrintString // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSeAttack(bool throw in, int32_t index in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetSeAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSeLiftUp(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetSeLiftUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSeHit(bool hit enemy in, bool hit background in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetSeHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetPsyObjCompTick(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.ResetPsyObjCompTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSasKind(bool flag in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetSasKind // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPsychicBulletList(struct TArray<struct ABP_PsychicObjectBasic_C*> bullet obj); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.GetPsychicBulletList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void AddPsychicBulletList(struct ABP_PsychicObjectBasic_C* bullet obj in, int32_t index in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.AddPsychicBulletList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearPsychicBulletList(bool destroy in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.ClearPsychicBulletList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetTargetAttackPoint(float safety height in, struct FVector player front in, struct FVector camera front in, struct FVector Pos); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.GetTargetAttackPoint // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SearchEnemyAround(struct AActor* target actor in, int32_t search num in, float radius in, float height in, struct TArray<struct AActor*> search list); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SearchEnemyAround // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChkPsyObjMan(bool return); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.ChkPsyObjMan // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void Check Unique Object(struct UBP_UniqueObjectComponentBase_C* unq obj comp in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.Check Unique Object // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IncrementDataRevision(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.IncrementDataRevision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetDataRevision(int32_t Revision); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.GetDataRevision // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetDataRevision(int32_t revision in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetDataRevision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetInstanceValue(int32_t index in, bool return, float Value); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.GetInstanceValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInstanceValue(int32_t index in, float value in, bool return); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetInstanceValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetMaterialParameter(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.ResetMaterialParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCommonParameter(struct FPsychicObjectCommonParameter common param in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetCommonParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAsyncCommon(struct FName ref name in, bool flag in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetAsyncCommon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMeshCompHit(struct UPrimitiveComponent* prim comp in, struct FVector normal in, struct FHitResult hit result in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetMeshCompHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicObjectTick(bool flag in, bool return); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetPsychicObjectTick // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcCircleArrangment(int32_t sector num in, int32_t index in, float radius min in, float radius max in, float valid angle rate in, float height min in, float height max in, float Radius, float Angle, float Height); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.CalcCircleArrangment // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicBulletIndex(int32_t num in, int32_t index in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetPsychicBulletIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetChildObj(struct ABP_PsychicObjectBasic_C* child obj in, bool flag in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetChildObj // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackSpline(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetAttackSpline // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCaptureChild(struct ARsBattleHero_C* capture owner in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetCaptureChild // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsyObjVisibility(bool flag in, bool keep effect attack in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetPsyObjVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckChildDestroy(float delay time in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.CheckChildDestroy // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DeleteHandle(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.DeleteHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateHandle(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.CreateHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicBulletParent(struct ABP_PsychicObjectBasic_C* parent obj in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetPsychicBulletParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitPsychicBullet(struct ABP_PsychicObjectBasic_C* parent obj in, int32_t index in, int32_t num in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.InitPsychicBullet // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWeightGaugeEnable(bool flag in, bool unq obj in, bool check in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetWeightGaugeEnable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAttackCollision(struct UPrimitiveComponent* attack collision); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.GetAttackCollision // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyReaction(int32_t attack type in, struct AActor* target actor in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetEnemyReaction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RemoveCaptureChild(struct ABP_PsychicObjectBasic_C* psy obj in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.RemoveCaptureChild // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddCaptureChild(struct ABP_PsychicObjectBasic_C* psy obj in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.AddCaptureChild // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEffectCaptureWreckageOld(bool flag in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetEffectCaptureWreckageOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMeshSimulatePhysics(struct UMeshComponent* mesh in, enum class ECollisionEnabled mesh collision in, bool simulate in, bool gravity in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetMeshSimulatePhysics // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitWreckageMesh(struct UMeshComponent* wreckage mesh in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.InitWreckageMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEffectAura(bool flag in, bool instance on in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetEffectAura // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEffectAttack(bool flag in, enum class E_SASKind sas kind in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetEffectAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDamageMesh(bool flag in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetDamageMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitDamageMesh(struct UMeshComponent* damage comp in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.InitDamageMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetWeightGaugePos(struct FVector gauge pos); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.GetWeightGaugePos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcAttackSide(bool return); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.CalcAttackSide // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDisplayAttackCollision(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.DebugDisplayAttackCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDisplayChild(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.DebugDisplayChild // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDisplayAttackSphere(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.DebugDisplayAttackSphere // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDisplayState(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.DebugDisplayState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHandleTarget(struct FVector pos in, bool set rot in, struct FRotator rot in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetHandleTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsyObjSimulatePhysics(enum class ECollisionEnabled mesh collision in, bool simulate in, bool gravity in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetPsyObjSimulatePhysics // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDestroyChild(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetDestroyChild // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetChildObjList(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.ResetChildObjList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RemoveChildObj(struct ABP_PsychicObjectBasic_C* child obj in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.RemoveChildObj // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddChildObjList(struct ABP_PsychicObjectBasic_C* child obj in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.AddChildObjList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPhaseInput(bool flag in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetPhaseInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentAttackType(int32_t attack type); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.GetCurrentAttackType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void DebugDrawRotArrow(struct FVector pos in, struct FRotator rot in, float len in, float size in, float time in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.DebugDrawRotArrow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAnimation(struct UAnimSequence* anim sequence); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.GetAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetPsyObjCompTick(bool flag in, struct FName name in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetPsyObjCompTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PostAsyncCommon(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.PostAsyncCommon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAsyncCommon(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdateAsyncCommon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrevAsyncCommon(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.PrevAsyncCommon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCaptureLevel(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetCaptureLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcCaptureRate(int32_t Level, float capture rate); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.CalcCaptureRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCaptureTimer(bool Finish); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdateCaptureTimer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitCaptureTimer(bool combo in, bool bAirIn); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.InitCaptureTimer // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateThrowVectorHoming(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdateThrowVectorHoming // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCapture(bool flag in, bool capture success in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetCapture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAttractExtendLerp(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdateAttractExtendLerp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHandleGrab(bool flag in, bool throw interpolation in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetHandleGrab // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCheckHit(bool check floor in, bool check wall in, bool check ceiling in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetCheckHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEffectCaptureParam(enum class E_SASKind SAS Kind, bool Capture, float Rate, struct FVector Size, float rateAura, struct FVector sizeAura); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.GetEffectCaptureParam // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DetachAttackCombo(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.DetachAttackCombo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAsyncLiftUp(bool flag in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetAsyncLiftUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAsyncVibrate(bool flag in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetAsyncVibrate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PostAsyncCapture(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.PostAsyncCapture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAsyncCapture(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdateAsyncCapture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrevAsyncCapture(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.PrevAsyncCapture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetMeshPosRot(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.ResetMeshPosRot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PostAsyncVibrate(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.PostAsyncVibrate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAsyncVibrate(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdateAsyncVibrate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrevAsyncVibrate(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.PrevAsyncVibrate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckHitBackGround(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.CheckHitBackGround // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEffectAttackThrow(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetEffectAttackThrow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackThrowAnim(float throw speed in, float homing speed in, bool enemy direct shot in, struct FName enemy attack row name in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetAttackThrowAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetHUD(struct AHUDMainGame_C* hud main); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.GetHUD // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEffectCapture(bool flag in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetEffectCapture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCaptureLiftUpOld(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetCaptureLiftUpOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLerpLiftUp(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetLerpLiftUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTimeDilation(bool flag in, struct FString name in, float rate in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetTimeDilation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PostAsyncAttackUnique(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.PostAsyncAttackUnique // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAsyncAttackUnique(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdateAsyncAttackUnique // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrevAsyncAttackUnique(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.PrevAsyncAttackUnique // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackUnique(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetAttackUnique // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CanUniqueAttack(bool return); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.CanUniqueAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetAttackCollisionParam(bool flag in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetAttackCollisionParam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackCollisionSphereOld(bool flag in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetAttackCollisionSphereOld // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateInput(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdateInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateWeightGauge(int32_t level in, float percent in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdateWeightGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWeightGauge(bool flag in, bool capture success in, bool show button in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetWeightGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetUniqueMontageType(enum class EPsychicObjectUniqueMontageType montage type); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.GetUniqueMontageType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsPsychicObjectUnique(bool return); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.IsPsychicObjectUnique // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateEffectDestroy(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdateEffectDestroy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEffectDestroy(bool flag in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetEffectDestroy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDestroy(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdateDestroy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPhaseDestroy(bool flag in, float delay time in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetPhaseDestroy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckProcedurePhase(enum class EPsychicObjectProcedure phase in, bool return); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.CheckProcedurePhase // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetProcedurePhase(enum class EPsychicObjectProcedure return); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.GetProcedurePhase // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetProcedurePhase(enum class EPsychicObjectProcedure phase in, bool return); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetProcedurePhase // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackThrow(bool flag in, float throw speed in, float homing speed in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetAttackThrow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PostAsyncLiftUp(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.PostAsyncLiftUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPsychicObjectState(enum class EPsychicObjectState return); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.GetPsychicObjectState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetPsychicObjectState(enum class EPsychicObjectState state in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetPsychicObjectState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckPsychicObjectState(enum class EPsychicObjectState state in, bool return); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.CheckPsychicObjectState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsCapturing(bool return); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.IsCapturing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void PostAsyncAttract(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.PostAsyncAttract // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAsyncAttract(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdateAsyncAttract // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrevAsyncAttract(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.PrevAsyncAttract // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAttract(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdateAttract // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CanAttract(bool return); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.CanAttract // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetPsychicObjectAttract(struct ARsBattleHero_C* capture owner in, float attract time in, bool return); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetPsychicObjectAttract // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHit(bool hit enemy in, bool hit background in, struct FHCHitResult hit result in, struct FHitResult hit result bg in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackCollisionOld(bool flag in, bool throw in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetAttackCollisionOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackCombo(bool flag in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetAttackCombo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPhaseAttract(bool flag in, float attract time in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetPhaseAttract // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PostAsyncAttackCombo(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.PostAsyncAttackCombo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAsyncAttackCombo(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdateAsyncAttackCombo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrevAsyncAttackCombo(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.PrevAsyncAttackCombo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAttackCombo(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdateAttackCombo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PostAsyncAttackThrow(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.PostAsyncAttackThrow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsyObjPosRot(struct FVector pos in, struct FRotator rot in, bool actor pos in, bool actor rot in, bool use swing arrow in, bool sweep in, bool teleport in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetPsyObjPosRot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCameraTransform(struct FVector Location, struct FRotator Rotate, struct FVector Direction); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.GetCameraTransform // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAsyncAttackThrow(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdateAsyncAttackThrow // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrevAsyncAttackThrow(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.PrevAsyncAttackThrow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetActorPosRot(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.ResetActorPosRot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeComponent(struct UMeshComponent* mesh comp in, struct USceneComponent* arrow comp in, struct USphereComponent* attack sphere in, struct UCapsuleComponent* attack capsule in, struct UCapsuleComponent* physics capsule in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.InitializeComponent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ApplyLerpResult(bool actor pos in, bool actor rot in, bool use swing arrow in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.ApplyLerpResult // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLerpStart(bool actor pos in, bool actor rot in, bool use swing arrow in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetLerpStart // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAsyncLiftUp(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdateAsyncLiftUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrevAsyncLiftUp(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.PrevAsyncLiftUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAsync(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdateAsync // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrevAsync(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.PrevAsync // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAttackThrow(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdateAttackThrow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPhaseAttack(bool flag in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetPhaseAttack // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CanAttack(bool return); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.CanAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateLiftUp(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdateLiftUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPhaseLiftUpOld(bool flag in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetPhaseLiftUpOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicObjectAttack(struct AActor* target actor in, bool direct drop in, bool unique in, bool combo in, bool air combo in, bool enemy direct shot in, bool brain field in, int32_t combo level in, int32_t combo index in, float attract time in, struct UAnimSequence* anim seq in, enum class EPsychicObjectBrainFieldAttackType attack type in, bool return); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetPsychicObjectAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEffectFocus(bool flag in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetEffectFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetFocus(bool flag in, bool wait gauge in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDisplay(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.DebugDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicObjectCapture(bool flag in, struct ARsBattleHero_C* capture owner in, bool capture success in, bool combo in, bool air in, bool psychic field in, bool return); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetPsychicObjectCapture // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCapture(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.UpdateCapture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPhaseCapture(bool flag in, bool capture success in, bool combo in, bool air in, bool psychic field in); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetPhaseCapture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CanCapture(bool return); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.CanCapture // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsFocusable(bool return); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.IsFocusable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void InitializeParameter(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.InitializeParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicObjectActive(bool flag in, bool flag only); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.SetPsychicObjectActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPsychicObjectActive(bool return); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.IsPsychicObjectActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Finalize(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.Finalize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.Initialize // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PsychicObjectComponent(int32_t EntryPoint); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.ExecuteUbergraph_BP_PsychicObjectComponent // (Final|UbergraphFunction) // @ game+0x1685580
	void DispatcherGimmickObjectEnd__DelegateSignature(); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.DispatcherGimmickObjectEnd__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSetEffectFocus__DelegateSignature(bool FlagIn); // Function BP_PsychicObjectComponent.BP_PsychicObjectComponent_C.OnSetEffectFocus__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

