// BlueprintGeneratedClass BP_PsychicComponentMain.BP_PsychicComponentMain_C
// Size: 0xc4c (Inherited: 0xc0)
struct UBP_PsychicComponentMain_C : UActorComponent {
	struct UMeshComponent* MeshComp; // 0xc0(0x08)
	struct UMeshComponent* AuraComp; // 0xc8(0x08)
	struct UMeshComponent* ShadowComp; // 0xd0(0x08)
	struct USceneComponent* directionComp; // 0xd8(0x08)
	struct UPrimitiveComponent* hitPrimitiveCompOld; // 0xe0(0x08)
	struct UPrimitiveComponent* attackPrimitiveComp; // 0xe8(0x08)
	struct UPrimitiveComponent* dodgePrimitiveComp; // 0xf0(0x08)
	struct UInertialMoveComponent_C* InertialMoveComp; // 0xf8(0x08)
	struct UProjectileMovementComponent* OwnerMovement; // 0x100(0x08)
	struct ARsBattleHero_C* grabOwner; // 0x108(0x08)
	struct APsychicGrabAttachment_C* GrabAttach; // 0x110(0x08)
	struct ABP_PsychicObjectBasic_C* ObjOwner; // 0x118(0x08)
	struct AActor* TargetActor; // 0x120(0x08)
	struct USceneComponent* MeshOwner; // 0x128(0x08)
	struct UBP_PlayerFixParamater_C* PlayerFixParam; // 0x130(0x08)
	int32_t RegNo; // 0x138(0x04)
	int32_t requestIndex; // 0x13c(0x04)
	int32_t grabIndex; // 0x140(0x04)
	int32_t brainIndex; // 0x144(0x04)
	enum class PsychicObjectGroupID DataGroup; // 0x148(0x01)
	enum class EPsychicObjectID ObjectID; // 0x149(0x01)
	enum class EPsychicObjectSizeType ObjectSize; // 0x14a(0x01)
	enum class EPsychicObjectSizeType EffectSize; // 0x14b(0x01)
	enum class PsychicObjectAttackSwingType SwingType; // 0x14c(0x01)
	enum class PsychicObjectSoundGroup SoundGroup; // 0x14d(0x01)
	char pad_14E[0x2]; // 0x14e(0x02)
	struct FName GrabAttachSocket; // 0x150(0x08)
	bool bPsychicActive; // 0x158(0x01)
	bool bCheckRegister; // 0x159(0x01)
	bool bCheckFixParam; // 0x15a(0x01)
	bool bSkipInitPhysics; // 0x15b(0x01)
	bool bStaticMesh; // 0x15c(0x01)
	bool bSkeletalMesh; // 0x15d(0x01)
	bool bUnique; // 0x15e(0x01)
	bool bBrainFieldSpawn; // 0x15f(0x01)
	bool bTransferObj; // 0x160(0x01)
	bool bGrabMove; // 0x161(0x01)
	bool bAccelerateFilter; // 0x162(0x01)
	bool bGrab; // 0x163(0x01)
	bool bNoReuse; // 0x164(0x01)
	enum class E_SASKind SasKind; // 0x165(0x01)
	char pad_166[0x2]; // 0x166(0x02)
	struct TArray<enum class E_SASKind> SasKindList; // 0x168(0x10)
	bool bBulletObj; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)
	struct FTransform ActorArrangeTransform; // 0x180(0x30)
	struct FTransform MeshArrangeTransform; // 0x1b0(0x30)
	float psychicDeltaSecond; // 0x1e0(0x04)
	float psychicDeltaRate; // 0x1e4(0x04)
	bool bGrabGauge; // 0x1e8(0x01)
	char pad_1E9[0x3]; // 0x1e9(0x03)
	float GrabGaugeAdd; // 0x1ec(0x04)
	float GrabGaugeBase; // 0x1f0(0x04)
	float grabGauge; // 0x1f4(0x04)
	struct UCurveFloat* LiftUpHeightCurve; // 0x1f8(0x08)
	bool bLiftUp; // 0x200(0x01)
	char pad_201[0x3]; // 0x201(0x03)
	float LiftStartTime; // 0x204(0x04)
	float liftStartTimer; // 0x208(0x04)
	float LiftUpHeight; // 0x20c(0x04)
	float LiftUpTime; // 0x210(0x04)
	float liftRate; // 0x214(0x04)
	float liftHeightStt; // 0x218(0x04)
	struct FVector LiftPosCen; // 0x21c(0x0c)
	struct FRotator LiftRotStt; // 0x228(0x0c)
	char pad_234[0x4]; // 0x234(0x04)
	struct UCurveFloat* GrabMoveHeightCurve; // 0x238(0x08)
	struct UCurveFloat* GrabMoveSpeedCurve; // 0x240(0x08)
	struct UCurveFloat* GrabMoveRotateCurve; // 0x248(0x08)
	struct UCurveFloat* GrabMoveDecelCurve; // 0x250(0x08)
	struct UCurveFloat* GrabMoveReturnCurve; // 0x258(0x08)
	struct UCurveFloat* GrabReloadSpeedCurve; // 0x260(0x08)
	struct UCurveFloat* GrabReloadHeightCurve; // 0x268(0x08)
	bool bGrabMoving; // 0x270(0x01)
	bool bGrabMoveCurve; // 0x271(0x01)
	bool bGrabReload; // 0x272(0x01)
	bool bGrabMoveDecel; // 0x273(0x01)
	bool bGrabMoveReturn; // 0x274(0x01)
	bool bGrabMoveAttack; // 0x275(0x01)
	char pad_276[0x2]; // 0x276(0x02)
	float GrabMoveTime; // 0x278(0x04)
	float grabMoveTimer; // 0x27c(0x04)
	float GrabMoveHeight; // 0x280(0x04)
	float grabMoveRate; // 0x284(0x04)
	struct FVector grabMovePosStt; // 0x288(0x0c)
	struct FRotator grabMoveRotStt; // 0x294(0x0c)
	struct FVector grabMovePosCen; // 0x2a0(0x0c)
	struct FRotator grabMoveRotCen; // 0x2ac(0x0c)
	float GrabMoveDecelTime; // 0x2b8(0x04)
	float GrabMoveReturnTime; // 0x2bc(0x04)
	float grabMoveBounceTimer; // 0x2c0(0x04)
	float GrabMoveSlopeDistSq; // 0x2c4(0x04)
	float GrabMoveSlopeMax; // 0x2c8(0x04)
	struct FVector grabMoveSpeed; // 0x2cc(0x0c)
	struct FVector grabDecelSpeedStt; // 0x2d8(0x0c)
	float GrabReloadTime; // 0x2e4(0x04)
	float BrainReloadTime; // 0x2e8(0x04)
	float ComboReloadTime; // 0x2ec(0x04)
	struct UCurveVector* GrabFloatPosCurve; // 0x2f0(0x08)
	struct UCurveVector* GrabFloatAngleCurve; // 0x2f8(0x08)
	bool bGrabFloat; // 0x300(0x01)
	char pad_301[0x3]; // 0x301(0x03)
	float GrabFloatLength; // 0x304(0x04)
	struct FVector GrabFloatPosRange; // 0x308(0x0c)
	struct FVector GrabFloatAngleRange; // 0x314(0x0c)
	float grabFloatTimer; // 0x320(0x04)
	float GrabFloatSpeedRate; // 0x324(0x04)
	struct FVector GrabFloatPosRate; // 0x328(0x0c)
	struct FVector GrabFloatRotRate; // 0x334(0x0c)
	struct UMaterialInstanceDynamic* AuraMaterialInstance; // 0x340(0x08)
	struct UMaterialInstanceDynamic* FlashMaterialInstance; // 0x348(0x08)
	bool bAura; // 0x350(0x01)
	bool bAuraOn; // 0x351(0x01)
	bool bStencilOn; // 0x352(0x01)
	char pad_353[0x1]; // 0x353(0x01)
	float AuraGrowTime; // 0x354(0x04)
	int32_t StencilValue; // 0x358(0x04)
	float auraRate; // 0x35c(0x04)
	float AttackCollisionRadius; // 0x360(0x04)
	int32_t AttackCountMax; // 0x364(0x04)
	int32_t AttackCount; // 0x368(0x04)
	bool bAttackExec; // 0x36c(0x01)
	bool bPsychicCombo; // 0x36d(0x01)
	bool bPsychicEx; // 0x36e(0x01)
	bool bAttackDelay; // 0x36f(0x01)
	bool bAttackStart; // 0x370(0x01)
	bool bCheckHit; // 0x371(0x01)
	bool bAttackHit; // 0x372(0x01)
	bool bHitFloor; // 0x373(0x01)
	bool bHitWall; // 0x374(0x01)
	bool bHitCelling; // 0x375(0x01)
	bool bCheckDrop; // 0x376(0x01)
	enum class PsychicObjectAttackType AttackType; // 0x377(0x01)
	struct TArray<enum class HCSkillExtraType> SkillInfoExtraTypeList; // 0x378(0x10)
	struct FGameTimer AttackDelayTimer; // 0x388(0x0c)
	bool bEffectAttack; // 0x394(0x01)
	char pad_395[0x3]; // 0x395(0x03)
	struct UParticleSystem* EffectAttack; // 0x398(0x08)
	float effectAttackTimer; // 0x3a0(0x04)
	float effectAttackDelay; // 0x3a4(0x04)
	float effectAttackParticleRate; // 0x3a8(0x04)
	char pad_3AC[0x4]; // 0x3ac(0x04)
	struct UCameraShake* CameraShakeTypeThrow; // 0x3b0(0x08)
	struct UCameraShake* CameraShakeTypeDrop; // 0x3b8(0x08)
	struct UCameraShake* CameraShakeTypeSwing; // 0x3c0(0x08)
	float CameraShakeScale; // 0x3c8(0x04)
	bool bThrow; // 0x3cc(0x01)
	char pad_3CD[0x3]; // 0x3cd(0x03)
	struct FVector throwDirection; // 0x3d0(0x0c)
	float ThrowSpeed; // 0x3dc(0x04)
	float ThrowLimitTime; // 0x3e0(0x04)
	float ThrowLimitTimer; // 0x3e4(0x04)
	struct UCurveFloat* ThrowSpeedCurve; // 0x3e8(0x08)
	struct UCurveFloat* ThrowAngleCurve; // 0x3f0(0x08)
	float ThrowRotSpeed; // 0x3f8(0x04)
	float ThrowTime; // 0x3fc(0x04)
	struct FVector ThrowDirectionFront; // 0x400(0x0c)
	float ThrowNormalTimeSecond; // 0x40c(0x04)
	bool bThrowAnim; // 0x410(0x01)
	char pad_411[0x3]; // 0x411(0x03)
	float ThrowAnimTime; // 0x414(0x04)
	float throwAnimTimer; // 0x418(0x04)
	struct FVector vecThrowStt; // 0x41c(0x0c)
	bool bWeakPoint; // 0x428(0x01)
	char pad_429[0x3]; // 0x429(0x03)
	int32_t weakPointIndex; // 0x42c(0x04)
	bool bDestroy; // 0x430(0x01)
	bool bNoFade; // 0x431(0x01)
	bool bDestroyFade; // 0x432(0x01)
	bool bApplyDamp; // 0x433(0x01)
	bool bDispose; // 0x434(0x01)
	char pad_435[0x3]; // 0x435(0x03)
	float DestroyDelay; // 0x438(0x04)
	float DestroyTime; // 0x43c(0x04)
	float destroyTimer; // 0x440(0x04)
	float dampValue; // 0x444(0x04)
	bool bDbDispName; // 0x448(0x01)
	bool bDbDispIndex; // 0x449(0x01)
	bool bDbDispState; // 0x44a(0x01)
	bool bDbDispSearchInfo; // 0x44b(0x01)
	bool bDbDispDistance; // 0x44c(0x01)
	bool bDbDispPos; // 0x44d(0x01)
	bool bDbDispGauge; // 0x44e(0x01)
	bool bDbDispHit; // 0x44f(0x01)
	bool bDbDispAttack; // 0x450(0x01)
	bool bDbDispArrow; // 0x451(0x01)
	bool bDbDispAura; // 0x452(0x01)
	bool bDbUseInertialMove; // 0x453(0x01)
	char pad_454[0x4]; // 0x454(0x04)
	struct USoundAtomCue* SoundLiftUp; // 0x458(0x08)
	struct TArray<struct USoundAtomCue*> SoundAttack; // 0x460(0x10)
	struct USoundAtomCue* SoundAttackThrow; // 0x470(0x08)
	struct USoundAtomCue* SoundAttackCombo; // 0x478(0x08)
	struct USoundAtomCue* SoundHitGround; // 0x480(0x08)
	struct USoundAtomCue* SoundHitEnemy; // 0x488(0x08)
	struct UCurveFloat* GrabStartSpeedCurve; // 0x490(0x08)
	struct UCurveFloat* GrabStartRotateCurve; // 0x498(0x08)
	struct TArray<float> GrabStartTimeRange; // 0x4a0(0x10)
	struct TArray<float> GrabStartSpeedRange; // 0x4b0(0x10)
	struct TArray<float> GrabStartRotateRange; // 0x4c0(0x10)
	float GrabStartMoveTime; // 0x4d0(0x04)
	float GrabStartRotateTime; // 0x4d4(0x04)
	bool bGrabStartRight; // 0x4d8(0x01)
	bool bGrabStart; // 0x4d9(0x01)
	char pad_4DA[0x2]; // 0x4da(0x02)
	struct FVector vecGrabStart; // 0x4dc(0x0c)
	struct FVector posGrabStart; // 0x4e8(0x0c)
	float grabStartRate; // 0x4f4(0x04)
	float grabStartTimeRate; // 0x4f8(0x04)
	float grabStartSpeedRate; // 0x4fc(0x04)
	float grabStartRotateRate; // 0x500(0x04)
	bool bDeformable; // 0x504(0x01)
	enum class PsychicObjectDeformType DeformType; // 0x505(0x01)
	char pad_506[0x2]; // 0x506(0x02)
	float DeformRange; // 0x508(0x04)
	float DeformRate; // 0x50c(0x04)
	float DeformRandom; // 0x510(0x04)
	struct FVector posImpact; // 0x514(0x0c)
	bool bDbDispDeform; // 0x520(0x01)
	char pad_521[0x3]; // 0x521(0x03)
	struct FVector posPrevThrow; // 0x524(0x0c)
	struct UCurveFloat* ThrowStartAngleCurve; // 0x530(0x08)
	float ThrowStartRotSpeed; // 0x538(0x04)
	float ThrowStartInitAngle; // 0x53c(0x04)
	bool bThrowStart; // 0x540(0x01)
	char pad_541[0x3]; // 0x541(0x03)
	float throwStartRate; // 0x544(0x04)
	struct UCurveFloat* ThrowAllHeightCurve; // 0x548(0x08)
	float ThrowAllHeight; // 0x550(0x04)
	bool bThrowAll; // 0x554(0x01)
	bool bThrowAllTarget; // 0x555(0x01)
	char pad_556[0x2]; // 0x556(0x02)
	struct FVector throwAllTargetPos; // 0x558(0x0c)
	float throwAllTimer; // 0x564(0x04)
	int32_t throwAllIndex; // 0x568(0x04)
	struct FVector throwAllVector; // 0x56c(0x0c)
	struct FVector throwAllOffset; // 0x578(0x0c)
	float throwAllAngle; // 0x584(0x04)
	float throwAllAngleExt; // 0x588(0x04)
	float throwAllRadius; // 0x58c(0x04)
	float throwAllRadiusExt; // 0x590(0x04)
	float BrainFloatTime; // 0x594(0x04)
	float BrainFloatHeightBase; // 0x598(0x04)
	float BrainFloatHeightRange; // 0x59c(0x04)
	float BrainFloatSlopeDistSq; // 0x5a0(0x04)
	float BrainFloatSlopeMax; // 0x5a4(0x04)
	float BrainFloatSlopeMin; // 0x5a8(0x04)
	struct FVector BrainFloatPos; // 0x5ac(0x0c)
	bool bBrainFloat; // 0x5b8(0x01)
	char pad_5B9[0x3]; // 0x5b9(0x03)
	struct FRotator rotBrainFloatStt; // 0x5bc(0x0c)
	struct FVector posBrainFloatEnd; // 0x5c8(0x0c)
	float brainFloatTimer; // 0x5d4(0x04)
	float brainFloatSlope; // 0x5d8(0x04)
	bool bFacetsApparition; // 0x5dc(0x01)
	char pad_5DD[0x3]; // 0x5dd(0x03)
	struct FVector FacetAffectPoint; // 0x5e0(0x0c)
	float FacetTime; // 0x5ec(0x04)
	float FacetTimer; // 0x5f0(0x04)
	float FacetTimerSign; // 0x5f4(0x04)
	float FacetDistance; // 0x5f8(0x04)
	float FacetAxisOffset; // 0x5fc(0x04)
	float FacetBulgeOffset; // 0x600(0x04)
	float FacetBulgeDistacne; // 0x604(0x04)
	float FacetTurn; // 0x608(0x04)
	float FacetScaleMin; // 0x60c(0x04)
	float FacetAffectPointTop; // 0x610(0x04)
	float FacetAffectPointBtm; // 0x614(0x04)
	bool bBrainAppear; // 0x618(0x01)
	bool bBrainDisappear; // 0x619(0x01)
	char pad_61A[0x2]; // 0x61a(0x02)
	float BrainAppearTime; // 0x61c(0x04)
	bool bBrainFieldAttack; // 0x620(0x01)
	char pad_621[0x3]; // 0x621(0x03)
	float BrainFieldAttackWaitTime; // 0x624(0x04)
	float BrainFieldAttackWaitTimer; // 0x628(0x04)
	float FadeInTime; // 0x62c(0x04)
	float FadeOutTime; // 0x630(0x04)
	bool bFade; // 0x634(0x01)
	bool bFadeOut; // 0x635(0x01)
	char pad_636[0x2]; // 0x636(0x02)
	float FadeTimer; // 0x638(0x04)
	float ParticleRateCapture; // 0x63c(0x04)
	float ParticleRateCaptureAura; // 0x640(0x04)
	float ParticleRateFire; // 0x644(0x04)
	float ParticleRateThunder; // 0x648(0x04)
	float ParticleRateCopy; // 0x64c(0x04)
	struct USoundAtomCueSheet* SoundCueSheet; // 0x650(0x08)
	bool bTeleport; // 0x658(0x01)
	bool bTeleportStart; // 0x659(0x01)
	bool bTeleportAttach; // 0x65a(0x01)
	char pad_65B[0x1]; // 0x65b(0x01)
	struct FVector TeleportOffset; // 0x65c(0x0c)
	float TeleportTime; // 0x668(0x04)
	float TeleportTimer; // 0x66c(0x04)
	float TeleportStt; // 0x670(0x04)
	float TeleportEnd; // 0x674(0x04)
	float TeleportRate; // 0x678(0x04)
	bool bAdjustAttach; // 0x67c(0x01)
	char pad_67D[0x3]; // 0x67d(0x03)
	float AdjustTime; // 0x680(0x04)
	float AdjustTimer; // 0x684(0x04)
	struct FVector AdjustSPosStt; // 0x688(0x0c)
	struct FRotator AdjustRotStt; // 0x694(0x0c)
	bool bCaptureMaterial; // 0x6a0(0x01)
	char pad_6A1[0x3]; // 0x6a1(0x03)
	float CaptureMaterialRate; // 0x6a4(0x04)
	bool bDbDispCollision; // 0x6a8(0x01)
	enum class E_SASKind SasKindPrev; // 0x6a9(0x01)
	bool bStealth; // 0x6aa(0x01)
	bool bStealthLerp; // 0x6ab(0x01)
	bool bStealthStart; // 0x6ac(0x01)
	char pad_6AD[0x3]; // 0x6ad(0x03)
	float StealthTime; // 0x6b0(0x04)
	float StealthTimer; // 0x6b4(0x04)
	float StealthStt; // 0x6b8(0x04)
	float StealthEnd; // 0x6bc(0x04)
	float StealthRate; // 0x6c0(0x04)
	bool bFullHoming; // 0x6c4(0x01)
	char pad_6C5[0x3]; // 0x6c5(0x03)
	float HomingRoll; // 0x6c8(0x04)
	char pad_6CC[0x4]; // 0x6cc(0x04)
	struct ABP_PsychicObjectBasic_C* CopyObjSource; // 0x6d0(0x08)
	struct ABP_PsychicObjectBasic_C* CopyObj; // 0x6d8(0x08)
	bool bCopyObj; // 0x6e0(0x01)
	bool bCopyCombo; // 0x6e1(0x01)
	bool bCopyAppear; // 0x6e2(0x01)
	bool bCopyObjUpdate; // 0x6e3(0x01)
	struct FGameTimer CopyEffectTimer; // 0x6e4(0x0c)
	float CopyEffectRate; // 0x6f0(0x04)
	float CopyEffectTime; // 0x6f4(0x04)
	bool bTransferAppear; // 0x6f8(0x01)
	char pad_6F9[0x3]; // 0x6f9(0x03)
	float TransferTime; // 0x6fc(0x04)
	float TransferTimer; // 0x700(0x04)
	struct FVector posCenPrev; // 0x704(0x0c)
	float CopyDelayTime; // 0x710(0x04)
	struct FGameTimer CopyDelayTimer; // 0x714(0x0c)
	struct FVector CopyOffsetPos; // 0x720(0x0c)
	bool bNewAttach; // 0x72c(0x01)
	char pad_72D[0x3]; // 0x72d(0x03)
	struct ARSBattleCharacter_C* EmPsyObjOwner; // 0x730(0x08)
	struct ARSBattleCharacter_C* EmPsyObjAttacker; // 0x738(0x08)
	bool EmPsyObjOccupiedMain; // 0x740(0x01)
	bool bIntercepted; // 0x741(0x01)
	char pad_742[0x2]; // 0x742(0x02)
	struct FVector ParticleSizeCapture; // 0x744(0x0c)
	struct FVector ParticleSizeCaptureAura; // 0x750(0x0c)
	struct FVector ParticleSizeFire; // 0x75c(0x0c)
	struct FVector ParticleSizeThunder; // 0x768(0x0c)
	struct FVector ParticleSizeCopy; // 0x774(0x0c)
	bool bEffectSas; // 0x780(0x01)
	char pad_781[0x3]; // 0x781(0x03)
	float EffectSasTimer; // 0x784(0x04)
	struct FSPsychicCaptureMaterial MaterialParamNormal; // 0x788(0xa0)
	struct FSPsychicCaptureMaterial MaterialParamFire; // 0x828(0xa0)
	struct FSPsychicCaptureMaterial MaterialParamThunder; // 0x8c8(0xa0)
	struct FSPsychicCaptureMaterial MaterialParamStart; // 0x968(0xa0)
	struct UCurveVector* MaterialCurveNormal; // 0xa08(0x08)
	struct UCurveVector* MaterialCurveFire; // 0xa10(0x08)
	struct UCurveVector* MaterialCurveThunder; // 0xa18(0x08)
	struct UCurveVector* MaterialCurveStart; // 0xa20(0x08)
	bool bThrowDirect; // 0xa28(0x01)
	bool bLiftUpDirect; // 0xa29(0x01)
	char pad_A2A[0x2]; // 0xa2a(0x02)
	struct FGameTimer LiftUpDirectTimer; // 0xa2c(0x0c)
	float LiftUpDirectTime; // 0xa38(0x04)
	float LiftUpDirectHeight; // 0xa3c(0x04)
	struct FVector WorkPosStt; // 0xa40(0x0c)
	struct FVector WorkPosEnd; // 0xa4c(0x0c)
	struct FRotator WorkRotStt; // 0xa58(0x0c)
	struct FRotator WorkRotEnd; // 0xa64(0x0c)
	struct FTransform PreviousTransform; // 0xa70(0x30)
	struct FTransform UpdateLastTransform; // 0xaa0(0x30)
	bool bKeepAttackCollision; // 0xad0(0x01)
	char pad_AD1[0x7]; // 0xad1(0x07)
	struct TArray<struct UMeshComponent*> CaptureMeshListOld; // 0xad8(0x10)
	bool bSkipInitVisibility; // 0xae8(0x01)
	char pad_AE9[0x7]; // 0xae9(0x07)
	struct FHCCollisionCommonInfo EnemyCommonInfo; // 0xaf0(0x70)
	struct FHCSkillCommonInfo EnemySkillInfo; // 0xb60(0xe8)
	bool bUseEnemyInfo; // 0xc48(0x01)
	bool bInterceptReserve; // 0xc49(0x01)
	bool bSkipInitPhysics2; // 0xc4a(0x01)
	bool bAbolishMainSimulate; // 0xc4b(0x01)

	void DebugPrintCheckSimulate(struct FString str in, bool skip screen in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.DebugPrintCheckSimulate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugPrintAbolishString(struct FString func name in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.DebugPrintAbolishString // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InterceptCancel(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.InterceptCancel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InterceptReserve(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.InterceptReserve // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyPsychicObjectInfoMain(struct FHCCollisionCommonInfo InCommonInfo, struct FHCSkillCommonInfo InSkillInfo); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetEnemyPsychicObjectInfoMain // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddCaptureMeshList(struct UMeshComponent* mesh in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.AddCaptureMeshList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMaterialCaptureStartOld(bool flag in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetMaterialCaptureStartOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackSkillInfoExtraType(struct TArray<enum class HCSkillExtraType> extra type list in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetAttackSkillInfoExtraType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateLiftUpDirect(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.UpdateLiftUpDirect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLiftUpDirect(bool flag in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetLiftUpDirect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackThrowDirect(struct ARsBattleHero_C* grab owner in, struct AActor* target actor in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetAttackThrowDirect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicActive(bool flag in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetPsychicActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMaterialCurve(enum class E_SASKind sas kind in, struct UCurveVector* material curve); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.GetMaterialCurve // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetMaterialParam(enum class E_SASKind sas kind in, struct FSPsychicCaptureMaterial material param); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.GetMaterialParam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void LoadMaterialCurve(struct FSPsychicCaptureMaterial SPsychicCaptureMaterial, struct UCurveVector* AsCurve Vector); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.LoadMaterialCurve // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateEffectSasOld(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.UpdateEffectSasOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackPsychicBulletOld(struct ARsBattleHero_C* grab owner in, struct AActor* target actor in, float spread angle in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetAttackPsychicBulletOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitPsychicBulletOld(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.InitPsychicBulletOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPsychicObjectID(enum class EPsychicObjectID psychic object id); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.GetPsychicObjectID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CheckPsychicObjectID(struct TArray<enum class EPsychicObjectID> check list in, bool return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.CheckPsychicObjectID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetCopyObjUpdate(bool flag in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetCopyObjUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackCount(int32_t attack count in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetAttackCount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSwingType(enum class PsychicObjectAttackSwingType swing type in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetSwingType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetDisplayName(struct FString Name); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.GetDisplayName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetCameraShakeData(struct UCameraShake* camera shake, float Scale); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.GetCameraShakeData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InterceptAttack(struct ARSBattleCharacter_C* intercepter in, struct ARSBattleCharacter_C* new target in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.InterceptAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyPsychicObjectThrowMain(struct AActor* target actor in, float throw speed in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetEnemyPsychicObjectThrowMain // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyPsychicObjectActiveMain(bool active in, struct FVector obj pos in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetEnemyPsychicObjectActiveMain // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyPsychicObjectOccupiedMain(bool occupied); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.IsEnemyPsychicObjectOccupiedMain // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void InitEnemyPsychicObjectMain(struct ARSBattleCharacter_C* owner in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.InitEnemyPsychicObjectMain // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsNewAttach(bool return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.IsNewAttach // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void InitPsychicCluster(struct ABP_PsychicObjectBasic_C* core psy obj in, int32_t index in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.InitPsychicCluster // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMIParameterCopy(float value in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetMIParameterCopy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void setEffectCopy(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.setEffectCopy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCollisionProfileOld(bool bCaptured); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetCollisionProfileOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetGrabCopy(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetGrabCopy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPsychicObjectPosInfo(struct FVector posPrev, struct FVector posNow); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.GetPsychicObjectPosInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetAttachRush(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetAttachRush // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsCheckBackground(bool return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.IsCheckBackground // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetHitBarrier(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetHitBarrier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicActionCommon(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetPsychicActionCommon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicActionCopy(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetPsychicActionCopy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicActionEnemy(enum class PsychicObjectAttackType attack type in, struct AActor* target actor in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetPsychicActionEnemy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateEffectCopy(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.UpdateEffectCopy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCopyObject(struct ABP_PsychicObjectBasic_C* copy obj in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetCopyObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateEffectTransfer(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.UpdateEffectTransfer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTransferObjectAppear(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetTransferObjectAppear // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitTransferObject(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.InitTransferObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAttackDelay(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.UpdateAttackDelay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackDelay(struct ARsBattleHero_C* grab owner in, float delay time in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetAttackDelay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAttackDelay(bool Delay); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.IsAttackDelay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsTickOn(bool return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.IsTickOn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateCopyObj(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.UpdateCopyObj // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCopyObjAppear(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetCopyObjAppear // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitCopyObj(struct ABP_PsychicObjectBasic_C* src psy obj in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.InitCopyObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAttackAction(enum class PsychicObjectAttackType return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.GetAttackAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetAttackType(enum class PsychicObjectAttackType action type in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetAttackType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FinalizePsychicComponent(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.FinalizePsychicComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetObjectSize(enum class EPsychicObjectSizeType Object Size); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.GetObjectSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdatePsychicComponent(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.UpdatePsychicComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateMain(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.UpdateMain // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateSystem(float delta second in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.UpdateSystem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMIParameterStealth(float value in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetMIParameterStealth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateEffectStealth(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.UpdateEffectStealth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSasStealth(bool flag in, float time in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetSasStealth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSasEffectOld(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetSasEffectOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSas(enum class E_SASKind sas kind in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetSas // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackCollisionSize(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetAttackCollisionSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDrawPrimitive(struct UPrimitiveComponent* prim comp in, int32_t segment in, struct FLinearColor color in, float duration in, float thickness in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.DebugDrawPrimitive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDisplayCollision(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.DebugDisplayCollision // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void isAllAttackEnable(bool return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.isAllAttackEnable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetPsychicActionNew(enum class PsychicObjectAttackType attack type in, struct AActor* target actor in, bool psychic combo in, bool psychic ex in, bool Remove); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetPsychicActionNew // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHitSEOld(bool hit enemy in, bool hit background in, bool return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetHitSEOld // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDispose(bool is Unique in, bool is brain in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetDispose // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Finalize(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.Finalize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackCollisionParam(bool flag in, struct UPrimitiveComponent* attack prim in, struct ABP_PsychicObjectBasic_C* psy obj in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetAttackCollisionParam // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackCollision(bool flag in, struct USkeletalMeshComponent* skeletal mesh in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetAttackCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAnimNotifyReturnMove(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetAnimNotifyReturnMove // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAnimNotifyEnablePsychic(bool flag in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetAnimNotifyEnablePsychic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAnimNotifyInputPsychic(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetAnimNotifyInputPsychic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAdjust(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.UpdateAdjust // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAdjust(float time in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetAdjust // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackInfo(struct AActor* target actor in, bool psychic combo in, bool psychic ex in, bool set time limit in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetAttackInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSasCopy(bool flag in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetSasCopy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicSimulatePhysics(enum class ECollisionEnabled mesh collision in, bool simulate in, bool gravity in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetPsychicSimulatePhysics // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAnimationLength(float Length); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.GetAnimationLength // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RequestPsychicCombo(bool return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.RequestPsychicCombo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAttackCollision(bool throw in, struct UPrimitiveComponent* attack collision); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.GetAttackCollision // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHitEffect(bool hit enemy in, bool hit background in, struct FVector eft pos in, bool return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetHitEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHit(bool hit enemy in, bool hit background in, struct FHCHitResult result in, struct FVector eft pos in, bool return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetHit // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAttackDirection(bool is swing direction, bool return, struct FVector attack direction); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.GetAttackDirection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicAction(struct AActor* target actor in, bool psychic combo in, bool rwmove); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetPsychicAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializePsychicComponent(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.InitializePsychicComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMIParameterTeleport(float value in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetMIParameterTeleport // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateEffectTeleport(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.UpdateEffectTeleport // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSasTeleport(bool flag in, float time in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetSasTeleport // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCollisionPsyObj(bool flag in, bool is capsule, bool return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetCollisionPsyObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetVisibilityPsyObj(bool flag in, bool mesh only, bool return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetVisibilityPsyObj // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetGrabMesh(bool no adjust in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetGrabMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrintErrorString(struct FString err str in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.PrintErrorString // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckAttackType(enum class PsychicObjectAttackType attack type in, bool return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.CheckAttackType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetBrainFloatSwing(bool flag in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetBrainFloatSwing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetGrabSource(bool Flag); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetGrabSource // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void isPsychicActive(bool return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.isPsychicActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetActivePsyObj(bool flag in, bool return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetActivePsyObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDisplayIndex(struct FString str in, struct FString str out); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.DebugDisplayIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitAreaChange(int32_t grab index in, struct FVector grab pos in, enum class E_SASKind sas kind in, int32_t attack count in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.InitAreaChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void isRequest(bool return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.isRequest // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetNoReuse(bool flag in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetNoReuse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TerminateSound(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.TerminateSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsyObjPosRot(struct FVector pos in, struct FRotator rot in, bool root pos, bool root rot, bool sweep, bool Teleport); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetPsyObjPosRot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetRegNo(int32_t reg no out); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.GetRegNo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetRegNo(int32_t reg no in, bool return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetRegNo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateEffect(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.UpdateEffect // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEffectPsychicGaugeOld(bool flag in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetEffectPsychicGaugeOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCollisionResponse(enum class ECollisionResponse response in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetCollisionResponse // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void isFadeProcessing(bool Flag); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.isFadeProcessing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void isFadeFinish(bool return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.isFadeFinish // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateEffectFade(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.UpdateEffectFade // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetFade(bool fade out in, float fade time in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetFade // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void isBrainCapture(bool return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.isBrainCapture // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateBrainFieldAttack(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.UpdateBrainFieldAttack // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainFieldAttack(struct ARsBattleHero_C* grab owner in, float wait time in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetBrainFieldAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMIParameterImpactPos(struct FVector impact pos in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetMIParameterImpactPos // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMIParameterDeformFlag(float value in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetMIParameterDeformFlag // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMIParameterEmission(float value in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetMIParameterEmission // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMIParameterAura(float value in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetMIParameterAura // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMIParameterFadeOut(float value in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetMIParameterFadeOut // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainAppearPosOld(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetBrainAppearPosOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateBrainAppear(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.UpdateBrainAppear // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainAppear(bool flag in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetBrainAppear // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetFacetApparitionMaterial(struct UPrimitiveComponent* mesh in, struct FVector affect pos in, struct FVector up vec in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetFacetApparitionMaterial // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetFacetApparition(bool flag in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetFacetApparition // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateFacetsApparition(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.UpdateFacetsApparition // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHitThrow(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetHitThrow // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUniqueGrab(bool flag in, struct ARsBattleHero_C* grab owner in, int32_t grab index in, struct FName socket name); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetUniqueGrab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeBrainField(float float height base in, float float height range in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.InitializeBrainField // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRequestFromBrain(int32_t request index in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetRequestFromBrain // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRequestFromSearch(int32_t request index in, float grab gauge in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetRequestFromSearch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetReloadGrab(struct ARsBattleHero_C* grab owner in, int32_t grab index in, bool flag in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetReloadGrab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEffectAuraGrow(bool flag in, bool force off, bool instance on); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetEffectAuraGrow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateBrainFloatOld(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.UpdateBrainFloatOld // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainGrab(bool flag in, int32_t brain index in, struct ARsBattleHero_C* grab owner in, struct FVector brain pos in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetBrainGrab // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEffectAuraFlashOld(bool Flag); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetEffectAuraFlashOld // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcCharacterHitRadius(struct ARSBattleCharacter_C* Character, bool bHorizontal, float Radius); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.CalcCharacterHitRadius // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetCharacterHitOrigin(struct ARSBattleCharacter_C* Character, struct FVector capsule pos); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.GetCharacterHitOrigin // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetCharacterHitCapsule(struct ARSBattleCharacter_C* Character, struct UCapsuleComponent* Capsule); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.GetCharacterHitCapsule // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateThrowAll(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.UpdateThrowAll // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackThrowAll(struct AActor* target actor, int32_t throw all index, float throw all angle, struct FVector throw all offset); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetAttackThrowAll // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAttackPos(struct FVector attack pos); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.GetAttackPos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void convVectorToActorFrontVector(struct FVector world vector, struct FVector actor vector); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.convVectorToActorFrontVector // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void isHitBackground(bool return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.isHitBackground // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetAttackAttributeOld(enum class E_SASKind attribute in, bool Force); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetAttackAttributeOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetGrabAttackAttributeOld(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetGrabAttackAttributeOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckAttackAtrribute(enum class E_SASKind attribute in, bool return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.CheckAttackAtrribute // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeDataTableOld(enum class PsychicObjectID PsychicObjectID in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.InitializeDataTableOld // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDisplayDeform(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.DebugDisplayDeform // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetArrowDirection(struct FVector Direction); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.GetArrowDirection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void InitializeDeform(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.InitializeDeform // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetImpactPos(struct FVector impact pos in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetImpactPos // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEffectHitEnemyThrow(bool check background); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetEffectHitEnemyThrow // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetGrabAttachMain(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetGrabAttachMain // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackSkillInfo(struct FHCSkillCommonInfo workSkillInfo, struct FHCSkillCommonInfo return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetAttackSkillInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSasAttributeOld(enum class E_SASKind SasKind, bool Force); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetSasAttributeOld // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttach(bool bAttach, bool bForce); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetAttach // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckAttach(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.CheckAttach // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeGrabStart(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.InitializeGrabStart // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeSoundGroup(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.InitializeSoundGroup // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CallHitEnemySE(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.CallHitEnemySE // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CallHitGroundSE(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.CallHitGroundSE // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetGrabGauge(bool flag in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetGrabGauge // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateGrabStart(bool return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.UpdateGrabStart // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetGrabStart(bool bRight, struct FVector vec start); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetGrabStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void isDestroy(bool return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.isDestroy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CallAttackSE(bool bForceThrow, bool bPsychicCombo, int32_t Index); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.CallAttackSE // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeDataGroup(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.InitializeDataGroup // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeAura(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.InitializeAura // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CanThrow(bool return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.CanThrow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdatePsychicDelta(float delta second); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.UpdatePsychicDelta // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetActionCount(int32_t count, bool bPress); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetActionCount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateThrowSnapOld(float delta second); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.UpdateThrowSnapOld // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CallLiftUpSE(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.CallLiftUpSE // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetOutline(bool flag in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetOutline // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void setAccelerateFilter(bool Flag); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.setAccelerateFilter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateEffectAttackOld(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.UpdateEffectAttackOld // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddForce(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.AddForce // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcDeltaSecond(float delta second, float calc delta second); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.CalcDeltaSecond // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDestroy(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.UpdateDestroy // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDestroyMain(bool Force, bool no fade in, bool return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetDestroyMain // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEffectDestroy(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetEffectDestroy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEffectAttackOld(bool Flag, enum class PsychicObjectAttackType attack type); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetEffectAttackOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetGrabMove(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetGrabMove // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPsychicDeltaSecond(bool bPsychicSpeed, bool bGetRate, float delta second, float Rate); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.GetPsychicDeltaSecond // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void DebugDisplayAura(struct FString str, struct FString return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.DebugDisplayAura // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateEffectAura(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.UpdateEffectAura // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetGrabOwnerTarget(struct AActor* Target); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.GetGrabOwnerTarget // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetAttachPos(struct FVector grab pos); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.GetAttachPos // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdatePosRot(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.UpdatePosRot // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void initParam(bool force clear); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.initParam // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetVectorToCentre(struct FVector Vector); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.GetVectorToCentre // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ReloadGrab(int32_t new grab index, bool bCombo); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.ReloadGrab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckGrabIndex(int32_t grabIndex, bool return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.CheckGrabIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateLiftUp(bool bDone); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.UpdateLiftUp // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLiftUp(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetLiftUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void decAttackCount(int32_t count); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.decAttackCount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetImpactPos(struct FVector posImpact); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.GetImpactPos // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckThrowLimit(float InputPin); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.CheckThrowLimit // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckHitBackGround(bool check floor, bool check wall, bool check celling, bool return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.CheckHitBackGround // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void isHoming(bool return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.isHoming // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateThrowRotate(float DeltaSecond); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.UpdateThrowRotate // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateThrowSpeed(float DeltaSecond); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.UpdateThrowSpeed // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateThrow(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.UpdateThrow // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateThrowCurve(float DeltaSeconds); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.UpdateThrowCurve // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcDirectionVectorHoming(struct FVector Vector, struct FVector Rot); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.CalcDirectionVectorHoming // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetActiveComponent(bool bActive); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetActiveComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackParam(bool flag in, bool set time limit in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetAttackParam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CanPsyAction(bool return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.CanPsyAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void DebugDisplayArrow(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.DebugDisplayArrow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDisplayAttack(struct FString str, struct FString return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.DebugDisplayAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDisplayHit(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.DebugDisplayHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(struct UMeshComponent* mesh comp, struct UMeshComponent* aura comp, struct UMeshComponent* shadow comp, struct USceneComponent* dir comp, struct UInertialMoveComponent_C* inertial move comp, struct UPrimitiveComponent* hit primitive, struct UPrimitiveComponent* attack primitive, enum class PsychicObjectID PsychicObjectID in, bool is static, bool is skeletal); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetGrab(bool flag in, struct ARsBattleHero_C* grab owner in, int32_t grab index in); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetGrab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDisplayGauge(struct FString str, struct FString return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.DebugDisplayGauge // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDisplayPos(struct FString str, struct FString return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.DebugDisplayPos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDisplayDistance(struct FString str, struct FString return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.DebugDisplayDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDisplaySearchInfo(struct FString str, struct FString return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.DebugDisplaySearchInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDisplayState(struct FString str in, struct FString return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.DebugDisplayState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDisplayName(struct FString str in, struct FString return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.DebugDisplayName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartGrabMove(bool bForce, bool bReload, bool bCombo); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.StartGrabMove // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateGrabMove(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.UpdateGrabMove // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDisplay(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.DebugDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateGrabGauge(bool return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.UpdateGrabGauge // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackThrow(struct AActor* TargetActor, bool force throw, bool psychic combo, bool psychic ex in, bool check attach); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetAttackThrow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FVector CalcDirectionVectorToTarget(bool bPlayerTarget, bool bNowRot, bool return); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.CalcDirectionVectorToTarget // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void StartMoveThrow(); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.StartMoveThrow // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateThrowLinear(float DeltaSeconds); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.UpdateThrowLinear // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(float delta second); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupComponentParam(struct UMeshComponent* meah comp, struct UMeshComponent* aura comp, struct UMeshComponent* shadow comp, struct USceneComponent* dir comp, struct UInertialMoveComponent_C* inertial move comp, struct UPrimitiveComponent* hit primitive, struct UPrimitiveComponent* attack primitive); // Function BP_PsychicComponentMain.BP_PsychicComponentMain_C.SetupComponentParam // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

