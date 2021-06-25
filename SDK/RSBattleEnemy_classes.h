// BlueprintGeneratedClass RSBattleEnemy.RSBattleEnemy_C
// Size: 0x2088 (Inherited: 0xfed)
struct ARSBattleEnemy_C : ARSBattleCharacter_C {
	char pad_FED[0x3]; // 0xfed(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xff0(0x08)
	struct UEnemyScrollCheckComponent* EnemyTargetLookCheck; // 0xff8(0x08)
	struct UEnemyPathAreaCheckComponent* EnemyPathAreaCheck; // 0x1000(0x08)
	struct UEnemyCalcGoalComponent* EnemyCalcGoal; // 0x1008(0x08)
	struct UChangeWeakStateComponent_C* ChangeWeakStateComponent; // 0x1010(0x08)
	struct UBP_EnemyGoalComponent_C* BP_EnemyGoalComponent; // 0x1018(0x08)
	struct UBP_EnemyChangePlayRate_C* BP_EnemyChangePlayRate; // 0x1020(0x08)
	struct UBP_EnemyChangeTimeDilationComponent_C* BP_EnemyChangeTimeDilationComponent; // 0x1028(0x08)
	struct UEnemyScriptComponent* EnemyScript; // 0x1030(0x08)
	struct UBP_EnemyAroundWeakEffectComponent_C* BP_EnemyAroundWeakEffectComponent; // 0x1038(0x08)
	struct UEnemyLookCheckComponent* EnemyLookCheck; // 0x1040(0x08)
	struct UBP_Discover_Component_C* BP_Discover_Component; // 0x1048(0x08)
	struct UBP_EnemyAddDamageShakeComponent_C* BP_EnemyAddDamageShakeComponent; // 0x1050(0x08)
	struct UBP_EnemyDamageRagdollComponent_C* BP_EnemyDamageRagdollComponent; // 0x1058(0x08)
	struct UBP_EnemyDamageMoveComponent_C* BP_EnemyDamageMoveComponent; // 0x1060(0x08)
	struct UBP_EnemySpawnComponent_C* BP_EnemySpawnComponent; // 0x1068(0x08)
	struct UBP_EnemyDeadMoveComponent_C* BP_EnemyDeadMoveComponent; // 0x1070(0x08)
	struct UBP_EnemyAvatarMaterial_C* BP_EnemyAvatarMaterial; // 0x1078(0x08)
	struct UBP_EnemyAvatar_C* BP_EnemyAvatar; // 0x1080(0x08)
	struct UStealthWeakComponent_C* StealthWeakComponent; // 0x1088(0x08)
	struct USearchingComponent* Searching; // 0x1090(0x08)
	struct UEnemyDatatableAccessorComponent_C* EnemyDatatableAccessorComponent; // 0x1098(0x08)
	struct UEnemyAnimControllerComponent* AnimCon; // 0x10a0(0x08)
	struct UAIAttackedInfoComponent_C* AIAttackedInfoComponent; // 0x10a8(0x08)
	struct UVanishEnemyComponent_C* VanishComponent; // 0x10b0(0x08)
	struct FName BBKey_BattleAIState; // 0x10b8(0x08)
	struct FName EnemyStatusRowName; // 0x10c0(0x08)
	float SleepAIDistance; // 0x10c8(0x04)
	struct FName DefaultStatusClaimantName; // 0x10cc(0x08)
	struct FName EnemyClaimantName; // 0x10d4(0x08)
	struct FName EnemyDeadClaimantName; // 0x10dc(0x08)
	float DeadEmissiveSec; // 0x10e4(0x04)
	float DeadVanishSec; // 0x10e8(0x04)
	bool bDeadStaging; // 0x10ec(0x01)
	char pad_10ED[0x3]; // 0x10ed(0x03)
	float DeadStagingPastSec; // 0x10f0(0x04)
	float DeadVanishEffectSec; // 0x10f4(0x04)
	float DeadStagingTotalSec; // 0x10f8(0x04)
	char pad_10FC[0x4]; // 0x10fc(0x04)
	struct USoundAtomCue* DeadFinishSE; // 0x1100(0x08)
	float CapsuleRad; // 0x1108(0x04)
	float SearchRange; // 0x110c(0x04)
	float SearchAngle; // 0x1110(0x04)
	float SensingArea; // 0x1114(0x04)
	struct FVector InitPos; // 0x1118(0x0c)
	bool IsFirstAttack; // 0x1124(0x01)
	bool IsInitLayout; // 0x1125(0x01)
	enum class EnemyInitLayoutAnimKind InitLayout; // 0x1126(0x01)
	char pad_1127[0x1]; // 0x1127(0x01)
	struct ATargetPoint* targetPos; // 0x1128(0x08)
	float TargetRange; // 0x1130(0x04)
	bool IsWander; // 0x1134(0x01)
	char pad_1135[0x3]; // 0x1135(0x03)
	float TargetRangeCheck; // 0x1138(0x04)
	bool IsBattleFinish; // 0x113c(0x01)
	bool IsNotSearchTableData; // 0x113d(0x01)
	char pad_113E[0x2]; // 0x113e(0x02)
	float EnableMoveArea; // 0x1140(0x04)
	float DistanceFromEnemyInitToPlayer; // 0x1144(0x04)
	float SpeedScale; // 0x1148(0x04)
	float ShortDistance; // 0x114c(0x04)
	bool IsBrainAccess; // 0x1150(0x01)
	char pad_1151[0x7]; // 0x1151(0x07)
	struct TArray<struct UDamagePartCollisionComponent*> DamagePartComponents; // 0x1158(0x10)
	bool IsBoss; // 0x1168(0x01)
	char pad_1169[0x3]; // 0x1169(0x03)
	float LongDistance; // 0x116c(0x04)
	bool IsBrainSuccess; // 0x1170(0x01)
	bool IsMoveEnable; // 0x1171(0x01)
	bool IsHitDamage; // 0x1172(0x01)
	char pad_1173[0x1]; // 0x1173(0x01)
	float DownTime; // 0x1174(0x04)
	float DownTimer; // 0x1178(0x04)
	bool IsLandCheck; // 0x117c(0x01)
	bool IsBlowOnce; // 0x117d(0x01)
	bool bNoNavMove; // 0x117e(0x01)
	char pad_117F[0x1]; // 0x117f(0x01)
	struct FRotator DamageRot; // 0x1180(0x0c)
	bool IsNotDamageAngle; // 0x118c(0x01)
	char pad_118D[0x3]; // 0x118d(0x03)
	float NoNavMoveInterpSpeed; // 0x1190(0x04)
	bool IsFreeCheck; // 0x1194(0x01)
	bool IsCreateWeapon; // 0x1195(0x01)
	char pad_1196[0x2]; // 0x1196(0x02)
	float TargetDistance; // 0x1198(0x04)
	float MotionFootParam; // 0x119c(0x04)
	bool IsMotionFootParamUse; // 0x11a0(0x01)
	char pad_11A1[0x7]; // 0x11a1(0x07)
	struct TArray<bool> MotionFootParamCheck; // 0x11a8(0x10)
	struct TArray<struct FName> MotionFootParamName; // 0x11b8(0x10)
	struct TArray<struct FTransform> MotionFootParam_Trans; // 0x11c8(0x10)
	struct TArray<float> MotionFootParam_Alpha; // 0x11d8(0x10)
	float DeadTimer; // 0x11e8(0x04)
	bool IsBossDead; // 0x11ec(0x01)
	char pad_11ED[0x3]; // 0x11ed(0x03)
	struct TArray<float> MotionFootParam_Timer; // 0x11f0(0x10)
	float MotionFootParam_Time; // 0x1200(0x04)
	bool IsRagdollEnable; // 0x1204(0x01)
	bool IsRagdoll; // 0x1205(0x01)
	bool IsRagdollDownEnable; // 0x1206(0x01)
	bool IsRagdollDown; // 0x1207(0x01)
	struct FName RagdollDownBoneName; // 0x1208(0x08)
	float RagdollDownBlend; // 0x1210(0x04)
	float RagdollDownBackToTime; // 0x1214(0x04)
	struct FName RagdollBoneName; // 0x1218(0x08)
	float RagdollBlend; // 0x1220(0x04)
	float RagdollBackToTime; // 0x1224(0x04)
	struct FName RagdollPowerBoneName; // 0x1228(0x08)
	struct FVector RagdollPowerObj; // 0x1230(0x0c)
	float RagdollPowerObjS; // 0x123c(0x04)
	float RagdollPowerObjM; // 0x1240(0x04)
	float RagdollPowerObjL; // 0x1244(0x04)
	float RagdollPowerObjScale; // 0x1248(0x04)
	bool IsBerserk; // 0x124c(0x01)
	char pad_124D[0x3]; // 0x124d(0x03)
	float FlyUpTimer; // 0x1250(0x04)
	float FlyUpTime; // 0x1254(0x04)
	float FlyUpHeight; // 0x1258(0x04)
	char pad_125C[0x4]; // 0x125c(0x04)
	struct UCurveFloat* FlyUpCurve; // 0x1260(0x08)
	float FlyGroundHeight; // 0x1268(0x04)
	char pad_126C[0x4]; // 0x126c(0x04)
	struct UDataTable* AiDataTable; // 0x1270(0x08)
	bool IsBattleEnemy; // 0x1278(0x01)
	bool IsFlyMove; // 0x1279(0x01)
	bool IsJumpEnd; // 0x127a(0x01)
	bool IsDamageMotionEnd; // 0x127b(0x01)
	bool IsFoodedFlg; // 0x127c(0x01)
	bool IsMoveAnim; // 0x127d(0x01)
	bool IsBrainCrashDead; // 0x127e(0x01)
	bool IsWait; // 0x127f(0x01)
	bool IsHitCheck; // 0x1280(0x01)
	char pad_1281[0x3]; // 0x1281(0x03)
	int32_t WeakNo; // 0x1284(0x04)
	bool IsWeakEffect; // 0x1288(0x01)
	char pad_1289[0x3]; // 0x1289(0x03)
	float WeakMaterialEmissiveScale; // 0x128c(0x04)
	float WeakMaterialEmissiveTimer; // 0x1290(0x04)
	bool IsHitWeakMaterial; // 0x1294(0x01)
	bool WeakMaterialRateMax; // 0x1295(0x01)
	bool IsMotionCancel; // 0x1296(0x01)
	char pad_1297[0x1]; // 0x1297(0x01)
	struct UCurveVector* WeakMaterialEmissiveCurve; // 0x1298(0x08)
	float MoveTimer; // 0x12a0(0x04)
	float MoveTime; // 0x12a4(0x04)
	bool IsWeakObjectRecommend; // 0x12a8(0x01)
	bool IsWeakDamage; // 0x12a9(0x01)
	char pad_12AA[0x2]; // 0x12aa(0x02)
	float BrainCrashEffectOffset; // 0x12ac(0x04)
	struct TArray<struct FWeakObjectEntryEnemy> WeakObjectEntry; // 0x12b0(0x10)
	struct FWeakObjectRecommendEnemy WeakPoint; // 0x12c0(0x2c)
	struct FName WeakName; // 0x12ec(0x08)
	float DistanceFromEnemyToPlayer; // 0x12f4(0x04)
	int32_t WeakEffectNum; // 0x12f8(0x04)
	char pad_12FC[0x4]; // 0x12fc(0x04)
	struct FCharactersParameterBasic CharactersParameterBasicData; // 0x1300(0x68)
	float OldWeakMaterialRate; // 0x1368(0x04)
	float OldWeakEffectRate; // 0x136c(0x04)
	bool IsWeakUiDamageHit; // 0x1370(0x01)
	char pad_1371[0x3]; // 0x1371(0x03)
	float MoveDistance; // 0x1374(0x04)
	bool IsMoveWalk; // 0x1378(0x01)
	char pad_1379[0x7]; // 0x1379(0x07)
	struct UAnimMontage* BaseMontage; // 0x1380(0x08)
	struct TArray<struct UAnimMontage*> BaseMontageOld; // 0x1388(0x10)
	struct UAnimMontage* BaseDamageMontage; // 0x1398(0x08)
	bool IsMontageDamageData; // 0x13a0(0x01)
	char pad_13A1[0x3]; // 0x13a1(0x03)
	int32_t ArmorNo; // 0x13a4(0x04)
	struct TArray<struct UDamagePartCollisionComponent*> WeakComponent; // 0x13a8(0x10)
	bool MoveFlyToFail; // 0x13b8(0x01)
	char pad_13B9[0x3]; // 0x13b9(0x03)
	float FlyMoveTimer; // 0x13bc(0x04)
	struct TArray<enum class EObjectTypeQuery> eEnemyCollisionType; // 0x13c0(0x10)
	bool IsBeginPlayEnd; // 0x13d0(0x01)
	char pad_13D1[0x3]; // 0x13d1(0x03)
	float StealthTimer; // 0x13d4(0x04)
	float StealthTime; // 0x13d8(0x04)
	bool IsCheckGround; // 0x13dc(0x01)
	char pad_13DD[0x3]; // 0x13dd(0x03)
	float CheckGroundHeightTop; // 0x13e0(0x04)
	float CheckGroundHeightBottom; // 0x13e4(0x04)
	struct UParticleSystem* BrainCrashHitWeak; // 0x13e8(0x08)
	bool IsBattleStart; // 0x13f0(0x01)
	char pad_13F1[0x3]; // 0x13f1(0x03)
	float ArmorFlashTimer; // 0x13f4(0x04)
	float ArmorFlashScale; // 0x13f8(0x04)
	struct FName StealthRateName; // 0x13fc(0x08)
	struct FName StealthVanishName; // 0x1404(0x08)
	struct FName SeeThroughStealthRateName; // 0x140c(0x08)
	char pad_1414[0x4]; // 0x1414(0x04)
	struct FString SeeThroughWeakSphereUse; // 0x1418(0x10)
	struct FString SeeThroughWeakSphereLocation; // 0x1428(0x10)
	bool IsDeadStartNotify; // 0x1438(0x01)
	char pad_1439[0x3]; // 0x1439(0x03)
	struct FVector DamageDir; // 0x143c(0x0c)
	enum class EEnemyStealthState StealthState; // 0x1448(0x01)
	bool bIsInvisibleHPGauge; // 0x1449(0x01)
	bool IsBranchAction; // 0x144a(0x01)
	char pad_144B[0x1]; // 0x144b(0x01)
	float IgnoreAiMoveSeconds; // 0x144c(0x04)
	struct TArray<struct FName> AvatarMaterialNames; // 0x1450(0x10)
	struct FName AddBaseColor_OilName; // 0x1460(0x08)
	float StealthStartHP; // 0x1468(0x04)
	bool IsBT_ForceBreak; // 0x146c(0x01)
	char pad_146D[0x3]; // 0x146d(0x03)
	struct FVector StealthRunAwayTarget; // 0x1470(0x0c)
	bool bCollisionHitWall; // 0x147c(0x01)
	bool bUniqueAction; // 0x147d(0x01)
	bool bDebugEnableEnsure_TableNotFound; // 0x147e(0x01)
	enum class EEnemyFormType FormType; // 0x147f(0x01)
	struct UParticleSystem* CommonDeadEffect; // 0x1480(0x08)
	struct UParticleSystem* BrainCrashDeadEffect; // 0x1488(0x08)
	struct UParticleSystem* AvatarDeadEffect; // 0x1490(0x08)
	struct UParticleSystem* BrainCrashAvatarDeadEffect; // 0x1498(0x08)
	bool bNotVanish; // 0x14a0(0x01)
	bool IsCoreDrop; // 0x14a1(0x01)
	bool CanDropData; // 0x14a2(0x01)
	char pad_14A3[0x5]; // 0x14a3(0x05)
	struct TSoftObjectPtr<UParticleSystem> BrainCrashHitWeakEffectSoftRef; // 0x14a8(0x28)
	struct TSoftObjectPtr<UParticleSystem> CommonDeadEffectSoftRef; // 0x14d0(0x28)
	struct TSoftObjectPtr<UParticleSystem> BrainCrashDeadEffectSoftRef; // 0x14f8(0x28)
	struct TSoftObjectPtr<UParticleSystem> AvatarDeadEffectSoftRef; // 0x1520(0x28)
	struct TSoftObjectPtr<UParticleSystem> BrainCrashAvatarDeadEffectSoftRef; // 0x1548(0x28)
	bool IsEventWait; // 0x1570(0x01)
	bool IsEventBerserk; // 0x1571(0x01)
	bool IsSpawn; // 0x1572(0x01)
	char pad_1573[0x1]; // 0x1573(0x01)
	float SpawnStartDistance; // 0x1574(0x04)
	enum class EnemyActionAnimKind ActionSpawn; // 0x1578(0x01)
	char pad_1579[0x7]; // 0x1579(0x07)
	struct TArray<enum class ECollisionEnabled> CollisionState; // 0x1580(0x10)
	bool IsSpawnTarget; // 0x1590(0x01)
	enum class EnemyKind SpawnEnemyKind; // 0x1591(0x01)
	bool IsBeforeBrainAccess; // 0x1592(0x01)
	char pad_1593[0x1]; // 0x1593(0x01)
	float ProgressBerserkProbability; // 0x1594(0x04)
	bool IsDelayDead; // 0x1598(0x01)
	char pad_1599[0x3]; // 0x1599(0x03)
	float DelayDeadTime; // 0x159c(0x04)
	struct FHCHitResult DeadBeforeHitResult; // 0x15a0(0x1b8)
	float targetAngle; // 0x1758(0x04)
	char pad_175C[0x4]; // 0x175c(0x04)
	struct ARSBattleCharacter_C* TargetCharacter; // 0x1760(0x08)
	bool IsHeightCheck; // 0x1768(0x01)
	char pad_1769[0x7]; // 0x1769(0x07)
	struct TArray<bool> IsTickEnableComponentArray; // 0x1770(0x10)
	float TickIntervalCounter; // 0x1780(0x04)
	float TickIntervalMax; // 0x1784(0x04)
	float TickIntervalDefault; // 0x1788(0x04)
	char pad_178C[0x4]; // 0x178c(0x04)
	struct TArray<struct FBadStateParticleData> EnemyBadStateFlameParticleData; // 0x1790(0x10)
	struct TArray<struct URSParticleSystemComponentBase*> EnemyBadStateFlameParticleHandles; // 0x17a0(0x10)
	struct TArray<struct FBadStateParticleData> EnemyBadStateElecParticleData; // 0x17b0(0x10)
	struct TArray<struct URSParticleSystemComponentBase*> EnemyBadStateElecParticleHandles; // 0x17c0(0x10)
	struct TArray<struct FBadStateParticleData> EnemyBadStateOilParticleData; // 0x17d0(0x10)
	struct TArray<struct URSParticleSystemComponentBase*> EnemyBadStateOilParticleHandles; // 0x17e0(0x10)
	struct TArray<struct FBadStateParticleData> EnemyBadStateFloodedParticleData; // 0x17f0(0x10)
	struct TArray<struct URSParticleSystemComponentBase*> EnemyBadStateFloodedParticleHandles; // 0x1800(0x10)
	enum class EPlayerID TargetID; // 0x1810(0x01)
	char pad_1811[0x3]; // 0x1811(0x03)
	int32_t TargetIndex; // 0x1814(0x04)
	float DamageRatio; // 0x1818(0x04)
	bool IsBendsDirection; // 0x181c(0x01)
	bool IsOverWriteMotion; // 0x181d(0x01)
	bool IsMotionReception; // 0x181e(0x01)
	char pad_181F[0x1]; // 0x181f(0x01)
	struct UEnemyAnimControllerComponent* EnemyAnimConRef; // 0x1820(0x08)
	struct UAnimMontage* BlendingOutMontage; // 0x1828(0x08)
	struct UAnimMontage* UseBlendOutMontage; // 0x1830(0x08)
	bool IsStealthInfinite; // 0x1838(0x01)
	char pad_1839[0x3]; // 0x1839(0x03)
	float DownBonusScale; // 0x183c(0x04)
	bool HideWeak; // 0x1840(0x01)
	char pad_1841[0x3]; // 0x1841(0x03)
	float TickIntervalMaxSimple; // 0x1844(0x04)
	float TickIntervalDefaultSimple; // 0x1848(0x04)
	bool IsSpawnNow; // 0x184c(0x01)
	char pad_184D[0x3]; // 0x184d(0x03)
	float SpawnWaitDelayTime; // 0x1850(0x04)
	float SpawnStartDelayTime; // 0x1854(0x04)
	float SpawnUpdateTime; // 0x1858(0x04)
	enum class Enum_EnemySpawnState SpawnState; // 0x185c(0x01)
	char pad_185D[0x3]; // 0x185d(0x03)
	struct TMap<char, struct FAiParamEnemy> AiTableDataMap; // 0x1860(0x50)
	float DeadEnemyHitStopSeconds; // 0x18b0(0x04)
	float DeadEnemyHitStopRate; // 0x18b4(0x04)
	enum class EPlayerHitStopType HitStop_Type; // 0x18b8(0x01)
	char pad_18B9[0x3]; // 0x18b9(0x03)
	float HitStop_Seconds; // 0x18bc(0x04)
	float HitStop_Rate; // 0x18c0(0x04)
	bool HitStop_IsStart; // 0x18c4(0x01)
	char pad_18C5[0x3]; // 0x18c5(0x03)
	float HitStop_StartDelayTime; // 0x18c8(0x04)
	bool HitStop_IsTarget; // 0x18cc(0x01)
	bool HitStop_AllThrow; // 0x18cd(0x01)
	char pad_18CE[0x2]; // 0x18ce(0x02)
	float DamageAngle; // 0x18d0(0x04)
	char pad_18D4[0x4]; // 0x18d4(0x04)
	struct TArray<struct TSoftObjectPtr<USoundAtomCueSheet>> CueSheetRefs; // 0x18d8(0x10)
	struct TArray<struct USoundAtomCueSheet*> CueSheetObjs; // 0x18e8(0x10)
	bool IsReturn; // 0x18f8(0x01)
	bool IsReturnNow; // 0x18f9(0x01)
	char pad_18FA[0x2]; // 0x18fa(0x02)
	float ReturnupdateTime; // 0x18fc(0x04)
	enum class Enum_EnemySpawnState ReturnState; // 0x1900(0x01)
	char pad_1901[0x3]; // 0x1901(0x03)
	float SpawnCurrentWaitDelayTime; // 0x1904(0x04)
	float SpawnCurrentStartDelayTime; // 0x1908(0x04)
	float SpawnCurrentUpdateTime; // 0x190c(0x04)
	float ReturnCurrentUpdateTime; // 0x1910(0x04)
	enum class Enum_EnemySound SoundType; // 0x1914(0x01)
	bool IsReverseBlowMotion; // 0x1915(0x01)
	char pad_1916[0x2]; // 0x1916(0x02)
	struct TSoftObjectPtr<ULevelSequence> BrainCrashSequenceReference; // 0x1918(0x28)
	struct TSoftObjectPtr<ULevelSequence> BrainCrashSequenceReference2; // 0x1940(0x28)
	struct ULevelSequence* BrainCrashSequenceInstance; // 0x1968(0x08)
	bool IsBlowTurnaround; // 0x1970(0x01)
	bool IsDownTurnaround; // 0x1971(0x01)
	char pad_1972[0x2]; // 0x1972(0x02)
	float FlyUpWaitTimer; // 0x1974(0x04)
	float FlyUpWaitTime; // 0x1978(0x04)
	enum class EnemyActionAnimKind BerserkSignAction; // 0x197c(0x01)
	bool IsReleaseDelayDeath; // 0x197d(0x01)
	char pad_197E[0x2]; // 0x197e(0x02)
	int32_t ReleaseDelayDeathWait; // 0x1980(0x04)
	bool bCrashChanceDown; // 0x1984(0x01)
	bool HitCrashDamage; // 0x1985(0x01)
	bool IsChangingCrashDamageMaterial; // 0x1986(0x01)
	char pad_1987[0x1]; // 0x1987(0x01)
	struct UCurveVector* CrashDamageMaterialVectorCurve; // 0x1988(0x08)
	float CrashDamageMaterialTime; // 0x1990(0x04)
	float possibleBrainCrashRange; // 0x1994(0x04)
	float CrashDamageMaterialScale; // 0x1998(0x04)
	bool IsUniqueBadState; // 0x199c(0x01)
	bool IsDamageRotation; // 0x199d(0x01)
	char pad_199E[0x2]; // 0x199e(0x02)
	float DamageMoveScale; // 0x19a0(0x04)
	struct FVector DamageLocation; // 0x19a4(0x0c)
	struct FRotator CrashChanceBrainRotate; // 0x19b0(0x0c)
	float CrashDamageHighRate; // 0x19bc(0x04)
	bool IsNewLaunch; // 0x19c0(0x01)
	char pad_19C1[0x7]; // 0x19c1(0x07)
	struct UAnimMontage* AnimMontage; // 0x19c8(0x08)
	bool IsEnableLaunch; // 0x19d0(0x01)
	bool IsRequestAddDamageMontage; // 0x19d1(0x01)
	char pad_19D2[0x2]; // 0x19d2(0x02)
	float WeakHitReactionSRate; // 0x19d4(0x04)
	float WeakHitReactionLRate; // 0x19d8(0x04)
	float WeakHitDownRate; // 0x19dc(0x04)
	bool bIsDispHp; // 0x19e0(0x01)
	char pad_19E1[0x3]; // 0x19e1(0x03)
	float DispHpTimer; // 0x19e4(0x04)
	float CurrentDispHpTimer; // 0x19e8(0x04)
	float EnemyCameraShakeRangeL; // 0x19ec(0x04)
	float EnemyCameraShakeRangeM; // 0x19f0(0x04)
	float EnemyCameraShakeRangeS; // 0x19f4(0x04)
	struct USoundAtomCue* ArmorBreakSE; // 0x19f8(0x08)
	bool bDebugReactionLFlash; // 0x1a00(0x01)
	bool bNotReflectContainer; // 0x1a01(0x01)
	bool bCrashChanceFly; // 0x1a02(0x01)
	enum class HCSkillAttribute CurBadStateMaterial; // 0x1a03(0x01)
	bool IsWinceCounter; // 0x1a04(0x01)
	char pad_1A05[0x3]; // 0x1a05(0x03)
	int32_t WinceCounter; // 0x1a08(0x04)
	bool IsPressDown; // 0x1a0c(0x01)
	bool EnablePressDown; // 0x1a0d(0x01)
	bool IsAcceptKnockBackCounter; // 0x1a0e(0x01)
	bool EnableKnockBackCounter; // 0x1a0f(0x01)
	bool EnableWinceCounter; // 0x1a10(0x01)
	char pad_1A11[0x3]; // 0x1a11(0x03)
	int32_t WinceCount; // 0x1a14(0x04)
	bool isKnockBackCounter; // 0x1a18(0x01)
	char pad_1A19[0x7]; // 0x1a19(0x07)
	struct ULevelSequence* BrainCrashSequenceInstance2; // 0x1a20(0x08)
	bool bDiscoveredTarget; // 0x1a28(0x01)
	char pad_1A29[0x3]; // 0x1a29(0x03)
	float DiscoverIconOffsetHeight; // 0x1a2c(0x04)
	bool bEnableFitGround; // 0x1a30(0x01)
	char pad_1A31[0x3]; // 0x1a31(0x03)
	float FitGroundSpeed; // 0x1a34(0x04)
	float FitGroundAngleLimit; // 0x1a38(0x04)
	bool bChangingWeakDamageMaterial; // 0x1a3c(0x01)
	char pad_1A3D[0x3]; // 0x1a3d(0x03)
	float WeakDamageMaterialTime; // 0x1a40(0x04)
	float WeakDamageMaterialScale; // 0x1a44(0x04)
	struct FName WeakMaterialSlotName; // 0x1a48(0x08)
	struct UMaterialInstanceDynamic* WeakMaterialInst; // 0x1a50(0x08)
	struct UCurveVector* WeakDamageMaterialVectorCurve; // 0x1a58(0x08)
	bool bBeforeUniqueObjState; // 0x1a60(0x01)
	bool bUniqueObjState; // 0x1a61(0x01)
	char pad_1A62[0x2]; // 0x1a62(0x02)
	float AvoidInvalidLength; // 0x1a64(0x04)
	struct TArray<enum class EnemyAliveAnimKind> AvoidEnableActionKind; // 0x1a68(0x10)
	struct TArray<float> AvoidProbabilityList; // 0x1a78(0x10)
	bool bEnableAvoidObject; // 0x1a88(0x01)
	char pad_1A89[0x7]; // 0x1a89(0x07)
	struct ABP_co2000Base_C* BrainCoreReference; // 0x1a90(0x08)
	struct TSoftObjectPtr<ULevelSequence> BossBrainCrashSequenceReference; // 0x1a98(0x28)
	struct TSoftObjectPtr<ULevelSequence> BossBrainCrashSequenceReference2; // 0x1ac0(0x28)
	struct ULevelSequence* BossBrainCrashSequenceInstance; // 0x1ae8(0x08)
	struct ULevelSequence* BossBrainCrashSequenceInstance2; // 0x1af0(0x08)
	bool IsLastBossBrainCrash; // 0x1af8(0x01)
	char pad_1AF9[0x3]; // 0x1af9(0x03)
	float MaxCrashResistance; // 0x1afc(0x04)
	bool bPressDownLoop; // 0x1b00(0x01)
	char pad_1B01[0x3]; // 0x1b01(0x03)
	float PressLoopTime; // 0x1b04(0x04)
	float TargetHeight; // 0x1b08(0x04)
	float HeightFromEnemyToPlayer; // 0x1b0c(0x04)
	float HeightFromEnemyInitToPlayer; // 0x1b10(0x04)
	bool bEnableDiscoverIcon; // 0x1b14(0x01)
	char pad_1B15[0x3]; // 0x1b15(0x03)
	float CheckCapsuleRadius; // 0x1b18(0x04)
	bool bEnableRequestIK; // 0x1b1c(0x01)
	char pad_1B1D[0x3]; // 0x1b1d(0x03)
	struct UCurveFloat* WeakMaterialRateCurveData; // 0x1b20(0x08)
	enum class EDeadFactor MyDeadFactor; // 0x1b28(0x01)
	char pad_1B29[0x7]; // 0x1b29(0x07)
	struct TArray<bool> bStartWeakAroundEffect; // 0x1b30(0x10)
	bool bEnableLookAt; // 0x1b40(0x01)
	bool bUpdateBadStateMaterial; // 0x1b41(0x01)
	char pad_1B42[0x2]; // 0x1b42(0x02)
	float BadStateMaterialCurveTime; // 0x1b44(0x04)
	bool bBrainCrashMiss; // 0x1b48(0x01)
	bool IsChangeCharacterCollision; // 0x1b49(0x01)
	char pad_1B4A[0x6]; // 0x1b4a(0x06)
	struct UCurveFloat* MoveScaleCurveData; // 0x1b50(0x08)
	bool bReceivedNotifyLookAt; // 0x1b58(0x01)
	bool bEnableWander; // 0x1b59(0x01)
	char pad_1B5A[0x2]; // 0x1b5a(0x02)
	float CoreWeakEffect_CommonRate; // 0x1b5c(0x04)
	float CoreWeakEffect_AttachRate; // 0x1b60(0x04)
	float LaunchDownTime; // 0x1b64(0x04)
	bool IsLaunchDown; // 0x1b68(0x01)
	char pad_1B69[0x7]; // 0x1b69(0x07)
	struct UCurveFloat* CurBadStateCurve; // 0x1b70(0x08)
	struct UCurveFloat* BadStateCurveFlame; // 0x1b78(0x08)
	struct UCurveFloat* BadStateCurveElec; // 0x1b80(0x08)
	struct TArray<struct FName> DebugPrintSlotName; // 0x1b88(0x10)
	struct TArray<char> DebugIgnoreActions; // 0x1b98(0x10)
	int32_t BadStateStartDamageMotion; // 0x1ba8(0x04)
	bool bEnableFitGroundTmp; // 0x1bac(0x01)
	bool EndFitGround; // 0x1bad(0x01)
	bool IsStartHideArmor; // 0x1bae(0x01)
	bool bBrainFieldSealWeakParticle; // 0x1baf(0x01)
	struct FName BrainFieldClaimantName; // 0x1bb0(0x08)
	bool bDamageFloating; // 0x1bb8(0x01)
	char pad_1BB9[0x7]; // 0x1bb9(0x07)
	struct TArray<float> SaveBodyEmissiveValue; // 0x1bc0(0x10)
	bool bExecLowProcess; // 0x1bd0(0x01)
	char pad_1BD1[0x3]; // 0x1bd1(0x03)
	struct FVector BrainInitPos; // 0x1bd4(0x0c)
	enum class EnemyMoveAnimKind DownUpMoveAnimKind; // 0x1be0(0x01)
	char pad_1BE1[0x3]; // 0x1be1(0x03)
	float ReactionChangeDilationTimer; // 0x1be4(0x04)
	struct FName TopHeightSocketName; // 0x1be8(0x08)
	bool bIdleMove; // 0x1bf0(0x01)
	char pad_1BF1[0x7]; // 0x1bf1(0x07)
	struct URSParticleSystemComponentBase* DeadEffectHandle; // 0x1bf8(0x08)
	bool bDisableWeakAroundEffect; // 0x1c00(0x01)
	bool bLaunchIgnorePriority; // 0x1c01(0x01)
	enum class EnemyDamageDownAnimKind SavedDamageDown; // 0x1c02(0x01)
	char pad_1C03[0x5]; // 0x1c03(0x05)
	struct FBadStateAddParticleData EnemyBadStateAddFlameParticleData; // 0x1c08(0x28)
	struct FBadStateAddParticleData EnemyBadStateAddElecParticleData; // 0x1c30(0x28)
	struct FBadStateAddParticleData EnemyBadStateAddOilParticleData; // 0x1c58(0x28)
	struct FBadStateAddParticleData EnemyBadStateAddFloodedParticleData; // 0x1c80(0x28)
	float BadStateAddEffectOffset; // 0x1ca8(0x04)
	float TickIntervalSeconds; // 0x1cac(0x04)
	bool bEnableEnemyGoal; // 0x1cb0(0x01)
	bool bAdjustCharaCapsule; // 0x1cb1(0x01)
	char pad_1CB2[0x2]; // 0x1cb2(0x02)
	struct FName AdjustCharaCapsuleName; // 0x1cb4(0x08)
	struct FVector AdjustCharaCapsuleOffset; // 0x1cbc(0x0c)
	float AdjustCharaCapsuleInterpTime; // 0x1cc8(0x04)
	float CurrentAdjustCharaCapsuleInterpTime; // 0x1ccc(0x04)
	bool bAdjustInterpCharaCapsule; // 0x1cd0(0x01)
	char pad_1CD1[0x7]; // 0x1cd1(0x07)
	struct TArray<struct FName> WeakTargetSocketName; // 0x1cd8(0x10)
	struct UParticleSystem* CrashChanceLoopEffect; // 0x1ce8(0x08)
	struct TSoftObjectPtr<UParticleSystem> CrashChanceLoopEffectSoftReference; // 0x1cf0(0x28)
	struct URSParticleSystemComponentBase* CrashChanceLoopEffectHandle; // 0x1d18(0x08)
	bool bNewDamageFloating; // 0x1d20(0x01)
	bool IsLaunchTurnaround; // 0x1d21(0x01)
	char pad_1D22[0x2]; // 0x1d22(0x02)
	struct FName EyeSocketName; // 0x1d24(0x08)
	struct FEnemyFindChangeParam FindChangeParam; // 0x1d2c(0x10)
	enum class EEnemyFindPlayerType LastDetectIcon; // 0x1d3c(0x01)
	bool IsSpecialDownFlyRot; // 0x1d3d(0x01)
	char ChangeCharaCollisionNo; // 0x1d3e(0x01)
	char pad_1D3F[0x1]; // 0x1d3f(0x01)
	struct TArray<struct UCapsuleComponent*> CharaCollisionList; // 0x1d40(0x10)
	bool bInvincible; // 0x1d50(0x01)
	char pad_1D51[0x3]; // 0x1d51(0x03)
	float BaseMontageStartTime; // 0x1d54(0x04)
	bool PreviousMaterialSwitchStealth; // 0x1d58(0x01)
	char pad_1D59[0x7]; // 0x1d59(0x07)
	struct FMaterialSwitchCache MaterialSwitchCache; // 0x1d60(0x10)
	enum class EnemyMoveAnimKind SpawnMoveAnim; // 0x1d70(0x01)
	char pad_1D71[0x3]; // 0x1d71(0x03)
	struct FName UniqueName; // 0x1d74(0x08)
	bool IsHiddenFirstDiscoverIcon; // 0x1d7c(0x01)
	bool IsStartOnStealth; // 0x1d7d(0x01)
	bool IsIgnoreRestrictAttackOther; // 0x1d7e(0x01)
	bool IsIgnoreAllowance; // 0x1d7f(0x01)
	bool IsNoCheckCaptureArea; // 0x1d80(0x01)
	bool IsChangeSearchAngle; // 0x1d81(0x01)
	char pad_1D82[0x2]; // 0x1d82(0x02)
	float ChangeSearchAngle; // 0x1d84(0x04)
	bool IsAlwaysChangeSearchAngle; // 0x1d88(0x01)
	bool IsChangeSearchRange; // 0x1d89(0x01)
	char pad_1D8A[0x2]; // 0x1d8a(0x02)
	float ChangeSearchRange; // 0x1d8c(0x04)
	bool IsAlwaysChangeSearchRange; // 0x1d90(0x01)
	bool IsChangeSensingArea; // 0x1d91(0x01)
	char pad_1D92[0x2]; // 0x1d92(0x02)
	float ChangeSensingArea; // 0x1d94(0x04)
	bool IsAlwaysSensingArea; // 0x1d98(0x01)
	bool IsChangeCaptureArea; // 0x1d99(0x01)
	char pad_1D9A[0x2]; // 0x1d9a(0x02)
	float ChangeCaptureArea; // 0x1d9c(0x04)
	bool IsAlwaysCaptureArea; // 0x1da0(0x01)
	bool IsChangeTerritoryArea; // 0x1da1(0x01)
	char pad_1DA2[0x2]; // 0x1da2(0x02)
	float ChangeTerritoryArea; // 0x1da4(0x04)
	bool IsAlwaysTerritoryArea; // 0x1da8(0x01)
	bool IsChangeRepopTime; // 0x1da9(0x01)
	char pad_1DAA[0x2]; // 0x1daa(0x02)
	float ChangeRepopTime; // 0x1dac(0x04)
	bool IsChangeRepopRange; // 0x1db0(0x01)
	char pad_1DB1[0x3]; // 0x1db1(0x03)
	float ChangeRepopRange; // 0x1db4(0x04)
	bool IsChangeRepopTimeTerritory; // 0x1db8(0x01)
	char pad_1DB9[0x3]; // 0x1db9(0x03)
	float ChangeRepopTimeTerritory; // 0x1dbc(0x04)
	float DamageStealthHalfTime; // 0x1dc0(0x04)
	bool IsStealthHalfNeedUpdate; // 0x1dc4(0x01)
	char pad_1DC5[0x3]; // 0x1dc5(0x03)
	float StealthHalfParam; // 0x1dc8(0x04)
	bool IsStealthHalfParamUp; // 0x1dcc(0x01)
	bool IsNotAddedBattleManager; // 0x1dcd(0x01)
	bool IsHitWeek; // 0x1dce(0x01)
	char pad_1DCF[0x1]; // 0x1dcf(0x01)
	struct TArray<enum class HCSkillExtraType> SkillExtraType; // 0x1dd0(0x10)
	struct URSParticleSystemComponentBase* DetectIconEffect; // 0x1de0(0x08)
	struct FGameTimer DetectIconTimer; // 0x1de8(0x0c)
	bool IsDownSasFlagIgnoreDownTrigger; // 0x1df4(0x01)
	bool IsKnockbackSasFlagIgnoreKnockbackTrigger; // 0x1df5(0x01)
	bool IsDownSasFlagIgnoreDownTriggerFlag; // 0x1df6(0x01)
	bool IsKnockbackSasFlagIgnoreKnockbackTriggerFlag; // 0x1df7(0x01)
	bool bEnableWeak; // 0x1df8(0x01)
	char pad_1DF9[0x7]; // 0x1df9(0x07)
	struct UAnimMontage* ReserveMontage; // 0x1e00(0x08)
	struct UBP_EnemyFixParam_C* EnemyFixParam; // 0x1e08(0x08)
	bool IsChangeSearchParam; // 0x1e10(0x01)
	char pad_1E11[0x3]; // 0x1e11(0x03)
	int32_t ET_StopID; // 0x1e14(0x04)
	struct FGameTimer LostActionTimer; // 0x1e18(0x0c)
	float EnableLostActionTime; // 0x1e24(0x04)
	bool bDisableLostAction; // 0x1e28(0x01)
	char pad_1E29[0x3]; // 0x1e29(0x03)
	float LostActionProbability; // 0x1e2c(0x04)
	struct TArray<struct FST_emLostActionInfo> LostActionInfoList; // 0x1e30(0x10)
	float ActivityAreaOutTimer; // 0x1e40(0x04)
	float ActivityAreaOutDistance; // 0x1e44(0x04)
	struct FVector InitGroundPos; // 0x1e48(0x0c)
	float LostMoveTimeMin; // 0x1e54(0x04)
	float LostMoveTime_Max; // 0x1e58(0x04)
	float LostMoveRotationRate; // 0x1e5c(0x04)
	bool bUseDefaultSpawnSearchParam; // 0x1e60(0x01)
	char pad_1E61[0x7]; // 0x1e61(0x07)
	struct TSoftObjectPtr<ULevelSequence> GeneralBrainCrashSequenceReference; // 0x1e68(0x28)
	struct ULevelSequence* GeneralBrainCrashSequenceInstance; // 0x1e90(0x08)
	struct ARSLevelSequenceActor* GeneralBcSequencerActor; // 0x1e98(0x08)
	struct UCurveFloat* NormalWeakMaterialRateCurveData; // 0x1ea0(0x08)
	float NormalWeakMaterialScale; // 0x1ea8(0x04)
	char pad_1EAC[0x4]; // 0x1eac(0x04)
	struct UCurveFloat* NormalWeakMaterialEmissiveCurve; // 0x1eb0(0x08)
	float NormalWeakMaterialEmissiveMax; // 0x1eb8(0x04)
	float NormalWeakMaterialEmissiveMin; // 0x1ebc(0x04)
	float NormalWeakMaterialRateMax; // 0x1ec0(0x04)
	float NormalWeakMaterialRateMin; // 0x1ec4(0x04)
	bool bStopWeakEmissive; // 0x1ec8(0x01)
	bool bEnemyArmorBreak; // 0x1ec9(0x01)
	bool bNoBrainCore; // 0x1eca(0x01)
	bool bHitReactionTrigger; // 0x1ecb(0x01)
	char pad_1ECC[0x4]; // 0x1ecc(0x04)
	struct UCurveFloat* BadStateCurveFlameEnd; // 0x1ed0(0x08)
	struct UCurveFloat* BadStateCurveElecEnd; // 0x1ed8(0x08)
	struct ABP_EnemyManager_C* LEnemyManager; // 0x1ee0(0x08)
	enum class Enum_EnemyAiType CurrentAiType; // 0x1ee8(0x01)
	char pad_1EE9[0x7]; // 0x1ee9(0x07)
	struct TMap<enum class Enum_EnemyAiType, struct FST_emChangeAiTypeInfo> ChangeAiTypeInfoList; // 0x1ef0(0x50)
	enum class EMovementMode SpawnMovementMode; // 0x1f40(0x01)
	char pad_1F41[0x3]; // 0x1f41(0x03)
	float NormalWeakMaterialEmissivePowerMin; // 0x1f44(0x04)
	float NormalWeakMaterialEmissivePowerMax; // 0x1f48(0x04)
	float WeakMaterialEmissivePowerMax; // 0x1f4c(0x04)
	float WeakMaterialPointRateMax; // 0x1f50(0x04)
	enum class EAssassinAttackHit AssassinAttackHitType; // 0x1f54(0x01)
	bool IsRepop; // 0x1f55(0x01)
	char pad_1F56[0x2]; // 0x1f56(0x02)
	float RepopTime; // 0x1f58(0x04)
	float RepopRange; // 0x1f5c(0x04)
	int32_t RepopProbability; // 0x1f60(0x04)
	bool IsAreaOut; // 0x1f64(0x01)
	char pad_1F65[0x3]; // 0x1f65(0x03)
	struct FGameTimer AreaOutTimer; // 0x1f68(0x0c)
	int32_t areaOutSequence; // 0x1f74(0x04)
	bool IsStealthEndLaunch; // 0x1f78(0x01)
	bool IsStealthEndLaunchEdit; // 0x1f79(0x01)
	bool EnableDeadEffect; // 0x1f7a(0x01)
	bool bNoDisplayDiscoverIcon; // 0x1f7b(0x01)
	char pad_1F7C[0x4]; // 0x1f7c(0x04)
	struct TArray<enum class EnemyMoveAnimKind> GoHomeAminKind; // 0x1f80(0x10)
	struct FName RowNameAnimScaleHitStop; // 0x1f90(0x08)
	bool IsAnimScaleChangingHitStop; // 0x1f98(0x01)
	bool IsAnimScaleChangingHitStopSlow; // 0x1f99(0x01)
	bool bDiscoveredOnce; // 0x1f9a(0x01)
	bool bDiscoverClosed; // 0x1f9b(0x01)
	bool IsBrainCrashDamageDown; // 0x1f9c(0x01)
	bool IsUseBrainCrashAfterMotion; // 0x1f9d(0x01)
	char pad_1F9E[0x2]; // 0x1f9e(0x02)
	struct FGameTimer PathAreaOutTimer; // 0x1fa0(0x0c)
	enum class EEnemyTickPriorityType TickProirity; // 0x1fac(0x01)
	char pad_1FAD[0x3]; // 0x1fad(0x03)
	float TickSumRealSeconds; // 0x1fb0(0x04)
	float TickRealSeconds; // 0x1fb4(0x04)
	bool ExecTick; // 0x1fb8(0x01)
	char pad_1FB9[0x3]; // 0x1fb9(0x03)
	float TickSumActorSeconds; // 0x1fbc(0x04)
	float TickActorSeconds; // 0x1fc0(0x04)
	bool IsOutOfBattlefield; // 0x1fc4(0x01)
	bool bDefeatedMainPlayer; // 0x1fc5(0x01)
	char pad_1FC6[0x2]; // 0x1fc6(0x02)
	float UroOffLength; // 0x1fc8(0x04)
	bool UpdateWeakMaterialEnable; // 0x1fcc(0x01)
	char pad_1FCD[0x3]; // 0x1fcd(0x03)
	struct TArray<struct FString> WeakSlotNameList; // 0x1fd0(0x10)
	float OldWeakMaterialEmissiveTime; // 0x1fe0(0x04)
	bool EnableUpdateSeeThrought; // 0x1fe4(0x01)
	bool EndSetSpawnParam; // 0x1fe5(0x01)
	bool SimpleEnemy; // 0x1fe6(0x01)
	enum class Enum_EnemyBrainFieldProgress BrainFieldProgress; // 0x1fe7(0x01)
	bool bUseWaitNoInterpolation; // 0x1fe8(0x01)
	char pad_1FE9[0x3]; // 0x1fe9(0x03)
	struct FRotator InitRotationRate; // 0x1fec(0x0c)
	bool DisableCheckAreaOut; // 0x1ff8(0x01)
	bool StopUpdateEnemyTickEnable; // 0x1ff9(0x01)
	bool StopUpdateAreaCheck; // 0x1ffa(0x01)
	char pad_1FFB[0x1]; // 0x1ffb(0x01)
	struct FName HitStop_Skillname; // 0x1ffc(0x08)
	bool HitStop_SlowOnce; // 0x2004(0x01)
	char pad_2005[0x3]; // 0x2005(0x03)
	float NoAttackTargetChangeSecond; // 0x2008(0x04)
	bool SetHideWeakEffect; // 0x200c(0x01)
	bool SetVisibleWeakEffect; // 0x200d(0x01)
	char pad_200E[0x2]; // 0x200e(0x02)
	float MaxEvDitherTime; // 0x2010(0x04)
	float CurrentEvDitherTime; // 0x2014(0x04)
	bool bEvDitherDisp; // 0x2018(0x01)
	char pad_2019[0x7]; // 0x2019(0x07)
	struct ABP_TriggerEffectManager_C* TrgEffMgr; // 0x2020(0x08)
	char EnumBossBattleBegineAction; // 0x2028(0x01)
	bool IsHideCoreTimingOld; // 0x2029(0x01)
	bool IsCrashChanceLoopStart; // 0x202a(0x01)
	bool IsDuringEventSpawnNow; // 0x202b(0x01)
	char pad_202C[0x4]; // 0x202c(0x04)
	struct UAnimMontage* DeadMontage; // 0x2030(0x08)
	struct UAnimMontage* DownDeadMontage; // 0x2038(0x08)
	float UniqueTickEnableRange; // 0x2040(0x04)
	float AreaOutTime; // 0x2044(0x04)
	bool IsDeadMainTick; // 0x2048(0x01)
	char pad_2049[0x3]; // 0x2049(0x03)
	float HitFloorTimer; // 0x204c(0x04)
	bool bEnableTickMeshOnly; // 0x2050(0x01)
	char pad_2051[0x3]; // 0x2051(0x03)
	float AreaOutOffsetRange; // 0x2054(0x04)
	float AllowanceWaitSeconds; // 0x2058(0x04)
	bool IsTickMove; // 0x205c(0x01)
	bool bAlreadyDroppedItem; // 0x205d(0x01)
	bool bEnableDeadCleanup_DroppedItem; // 0x205e(0x01)
	bool IsEventDeath; // 0x205f(0x01)
	bool bUpDownWait; // 0x2060(0x01)
	bool NoChangeAnimRateCrashChanceAccelerate; // 0x2061(0x01)
	char pad_2062[0x2]; // 0x2062(0x02)
	int32_t NowMinTickCount; // 0x2064(0x04)
	struct UActorComponent* DebugEnemyBtlLog; // 0x2068(0x08)
	int32_t ActorLocationID; // 0x2070(0x04)
	int32_t ActorAreaID; // 0x2074(0x04)
	bool IsRepopping; // 0x2078(0x01)
	bool IsCheckSameFloor; // 0x2079(0x01)
	bool bPlayedPressKillMontage; // 0x207a(0x01)
	char pad_207B[0x5]; // 0x207b(0x05)
	struct ABP_PsychicObjectBasic_C* StateUniqueObject; // 0x2080(0x08)

	bool GetAndUpdateContinuousSameDamageReaction(); // Function RSBattleEnemy.RSBattleEnemy_C.GetAndUpdateContinuousSameDamageReaction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsNeedResetStateMachine(float ElapsedTime, float ResetSecond); // Function RSBattleEnemy.RSBattleEnemy_C.IsNeedResetStateMachine // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void getEmPosDiscover(struct FVector discoverPos); // Function RSBattleEnemy.RSBattleEnemy_C.getEmPosDiscover // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void em1130_EnableWeak(bool bEnable, bool return); // Function RSBattleEnemy.RSBattleEnemy_C.em1130_EnableWeak // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8310_IsMaskMan(bool bMaskMan); // Function RSBattleEnemy.RSBattleEnemy_C.Em8310_IsMaskMan // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void StartCriticalHitSlow(struct FHCHitResult InHitResult, bool return); // Function RSBattleEnemy.RSBattleEnemy_C.StartCriticalHitSlow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyUpDownWait(bool bUpDownWait); // Function RSBattleEnemy.RSBattleEnemy_C.IsEnemyUpDownWait // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyUpDownWait(bool DownWait, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.SetEnemyUpDownWait // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsSwitchAttackCollisionInfo(bool IsSwitch); // Function RSBattleEnemy.RSBattleEnemy_C.IsSwitchAttackCollisionInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsBrainFieldEnemyAlive(bool bEnemyAlive); // Function RSBattleEnemy.RSBattleEnemy_C.IsBrainFieldEnemyAlive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em1400_GetSpawnTransform(struct FTransform SpawTransform); // Function RSBattleEnemy.RSBattleEnemy_C.Em1400_GetSpawnTransform // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em1400_SetSpawnTransform(struct FTransform SpawnTransform, bool return); // Function RSBattleEnemy.RSBattleEnemy_C.Em1400_SetSpawnTransform // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em1400_UpdateDither(enum class EEasingFunc EasingFunc, float DeltaSec, bool return); // Function RSBattleEnemy.RSBattleEnemy_C.Em1400_UpdateDither // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em1400_EndDither(bool return); // Function RSBattleEnemy.RSBattleEnemy_C.Em1400_EndDither // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em1400_StartDither(float TotalDuration, bool return); // Function RSBattleEnemy.RSBattleEnemy_C.Em1400_StartDither // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em0700_EnableInvalidDamage(bool bEnable); // Function RSBattleEnemy.RSBattleEnemy_C.Em0700_EnableInvalidDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyDiscoveredOnceInterface(bool bDiscoverd); // Function RSBattleEnemy.RSBattleEnemy_C.IsEnemyDiscoveredOnceInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartReactionDilation(char ReactionKind, bool AddDamage, bool return); // Function RSBattleEnemy.RSBattleEnemy_C.StartReactionDilation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyTickDisableCondition(bool bDisableCondition); // Function RSBattleEnemy.RSBattleEnemy_C.IsEnemyTickDisableCondition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void em1210_AddPSychicFlyObj(struct ABP_PsychicObjectBasic_C* FlyObj, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.em1210_AddPSychicFlyObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void em1200_ChangePhaseParamSetting(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.em1200_ChangePhaseParamSetting // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsNotFindPlayer(bool bNotFind); // Function RSBattleEnemy.RSBattleEnemy_C.IsNotFindPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsChangeAiTypeAction(enum class Enum_EnemyAiType InAiType, bool bPossible); // Function RSBattleEnemy.RSBattleEnemy_C.IsChangeAiTypeAction // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckChangeAiTypeForHpRate(bool Failed); // Function RSBattleEnemy.RSBattleEnemy_C.CheckChangeAiTypeForHpRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeAiType(enum class Enum_EnemyAiType ChangeAiType, bool bFailed); // Function RSBattleEnemy.RSBattleEnemy_C.ChangeAiType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEnemyBrainFieldCutChange(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.OnEnemyBrainFieldCutChange // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyBrainFieldMoveNormal(bool MoveBrainField, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.SetEnemyBrainFieldMoveNormal // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyBrainFieldMoveInner(bool MoveBrainField, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.SetEnemyBrainFieldMoveInner // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEnemyBrainFieldResetStatus(bool bMoveBrainField, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.OnEnemyBrainFieldResetStatus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEnemyBrainFieldFinishWeapon(bool bMoveBrainField, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.OnEnemyBrainFieldFinishWeapon // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEnemyBrainFieldResetAction(bool bMoveBrainField, bool bReset); // Function RSBattleEnemy.RSBattleEnemy_C.OnEnemyBrainFieldResetAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSpawnMoveStart(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.OnSpawnMoveStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCoreCollision(struct UDamagePartCollisionComponent* CoreCollision); // Function RSBattleEnemy.RSBattleEnemy_C.GetCoreCollision // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDisableLostAction(bool bDisable); // Function RSBattleEnemy.RSBattleEnemy_C.IsDisableLostAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemySpawnNow(bool SpawnNow); // Function RSBattleEnemy.RSBattleEnemy_C.IsEnemySpawnNow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsPossibleTargetAttack(struct AActor* attacker, bool bPossible); // Function RSBattleEnemy.RSBattleEnemy_C.IsPossibleTargetAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEndCrashChance(bool bEnd); // Function RSBattleEnemy.RSBattleEnemy_C.OnEndCrashChance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStartCrashChance(bool bStart); // Function RSBattleEnemy.RSBattleEnemy_C.OnStartCrashChance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsRealThings(bool bReal); // Function RSBattleEnemy.RSBattleEnemy_C.IsRealThings // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetMainPlayerDistance(float Distance); // Function RSBattleEnemy.RSBattleEnemy_C.GetMainPlayerDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetMoveToTargetAnim(enum class EnemyMoveAnimKind MoveAnim); // Function RSBattleEnemy.RSBattleEnemy_C.GetMoveToTargetAnim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SwitchDispCore(bool DisplayOn, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.SwitchDispCore // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsUniqueObjState(bool ReturnState); // Function RSBattleEnemy.RSBattleEnemy_C.IsUniqueObjState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckUniqueObjState(struct FHCHitResult HitResult, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.CheckUniqueObjState // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartUniqueObjState(struct ABP_PsychicObjectBasic_C* AttackObject, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.StartUniqueObjState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndUniqueObjState(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.EndUniqueObjState // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyPressDownEnd(bool Dammy); // Function RSBattleEnemy.RSBattleEnemy_C.SetEnemyPressDownEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcCameraShake(struct UCameraShake* InputShakeClass, float InputScale, struct FVector ShakeLocation, struct UCameraShake* OutputShakeClass, float OutputScale); // Function RSBattleEnemy.RSBattleEnemy_C.CalcCameraShake // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyStateFloating(bool IsFloating); // Function RSBattleEnemy.RSBattleEnemy_C.IsEnemyStateFloating // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBrainCore(struct ABP_co2000Base_C* CoreObject); // Function RSBattleEnemy.RSBattleEnemy_C.GetBrainCore // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetTargetKind(enum class RSPartyPlayerKind TargetKind); // Function RSBattleEnemy.RSBattleEnemy_C.GetTargetKind // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAttacking(bool IsAttack); // Function RSBattleEnemy.RSBattleEnemy_C.IsAttacking // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBrainCrashSequence(bool IsUnique, struct ULevelSequence* Sequence); // Function RSBattleEnemy.RSBattleEnemy_C.GetBrainCrashSequence // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void ReturnStart(bool return); // Function RSBattleEnemy.RSBattleEnemy_C.ReturnStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsHideWeak(bool IsHideWeak); // Function RSBattleEnemy.RSBattleEnemy_C.IsHideWeak // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnStart(bool return); // Function RSBattleEnemy.RSBattleEnemy_C.SpawnStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsFlyEnemyCheck(bool NewParam); // Function RSBattleEnemy.RSBattleEnemy_C.IsFlyEnemyCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetHeightCheckFlag(bool NewParam); // Function RSBattleEnemy.RSBattleEnemy_C.GetHeightCheckFlag // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetEnemySpawn(bool return); // Function RSBattleEnemy.RSBattleEnemy_C.GetEnemySpawn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetEnemySpawn(bool Spawn, bool return); // Function RSBattleEnemy.RSBattleEnemy_C.SetEnemySpawn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EnemyDataDrop(struct FVector SpawnLocation, struct FVector SpawnDir, bool IsDrop); // Function RSBattleEnemy.RSBattleEnemy_C.EnemyDataDrop // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayerActionForEnemyReaction(enum class EPsychicObjectAttackType PsychicObjectType, struct FVector PsychicObjLocation, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.PlayerActionForEnemyReaction // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetTargetDistance(float Distance); // Function RSBattleEnemy.RSBattleEnemy_C.GetTargetDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetDistanceToPlayer(float Distance); // Function RSBattleEnemy.RSBattleEnemy_C.GetDistanceToPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsEnableEnemyMoveRange(bool bReturn); // Function RSBattleEnemy.RSBattleEnemy_C.IsEnableEnemyMoveRange // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsBossEnemy(bool bBoss); // Function RSBattleEnemy.RSBattleEnemy_C.IsBossEnemy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetEnemyStealthSeeEnable(bool on, bool ShadowChange, bool return); // Function RSBattleEnemy.RSBattleEnemy_C.SetEnemyStealthSeeEnable // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyBrainCrashParam(float BrainCrashTimer, float BrainCrashMissScale, bool return); // Function RSBattleEnemy.RSBattleEnemy_C.SetEnemyBrainCrashParam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSwitchVisibleBrainFieldLevel(bool Visible, bool Unused); // Function RSBattleEnemy.RSBattleEnemy_C.OnSwitchVisibleBrainFieldLevel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyWait(bool NewParam); // Function RSBattleEnemy.RSBattleEnemy_C.SetEnemyWait // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetEnemyWait(bool NewParam); // Function RSBattleEnemy.RSBattleEnemy_C.ResetEnemyWait // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEnemyGroundTransform(struct FTransform Transform, struct FTransform return); // Function RSBattleEnemy.RSBattleEnemy_C.GetEnemyGroundTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyBrainFieldStart(bool MoveBrainField, bool NewParam); // Function RSBattleEnemy.RSBattleEnemy_C.SetEnemyBrainFieldStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyBrainFieldEnd(bool MoveBrainField, bool NewParam); // Function RSBattleEnemy.RSBattleEnemy_C.SetEnemyBrainFieldEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyDamageReaction(bool NewParam); // Function RSBattleEnemy.RSBattleEnemy_C.SetEnemyDamageReaction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyTarget(bool NewParam); // Function RSBattleEnemy.RSBattleEnemy_C.SetEnemyTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetEnemyTarget(bool NewParam); // Function RSBattleEnemy.RSBattleEnemy_C.ResetEnemyTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyActive(bool return); // Function RSBattleEnemy.RSBattleEnemy_C.IsEnemyActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetEnemyBrainCrashPerformance(bool return); // Function RSBattleEnemy.RSBattleEnemy_C.SetEnemyBrainCrashPerformance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyBossActive(bool return); // Function RSBattleEnemy.RSBattleEnemy_C.IsEnemyBossActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyStateDamageDown(bool return); // Function RSBattleEnemy.RSBattleEnemy_C.IsEnemyStateDamageDown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyStateMove(bool return); // Function RSBattleEnemy.RSBattleEnemy_C.IsEnemyStateMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyStateAttack(bool return); // Function RSBattleEnemy.RSBattleEnemy_C.IsEnemyStateAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyStateDamage(bool return); // Function RSBattleEnemy.RSBattleEnemy_C.IsEnemyStateDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyStateAction(bool return); // Function RSBattleEnemy.RSBattleEnemy_C.IsEnemyStateAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void isEnemyDamageLaunch(bool bool); // Function RSBattleEnemy.RSBattleEnemy_C.isEnemyDamageLaunch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyDamageknockBack(bool bool); // Function RSBattleEnemy.RSBattleEnemy_C.IsEnemyDamageknockBack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void isEnemyDamageBlow(bool bool); // Function RSBattleEnemy.RSBattleEnemy_C.isEnemyDamageBlow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginEnemyAction(enum class EnemyActionAnimKind Action, bool bool); // Function RSBattleEnemy.RSBattleEnemy_C.BeginEnemyAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyAction(enum class EnemyActionAnimKind Action, bool bool); // Function RSBattleEnemy.RSBattleEnemy_C.IsEnemyAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyAttack(enum class EnemyAttackAnimKind Attack, bool bool); // Function RSBattleEnemy.RSBattleEnemy_C.IsEnemyAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginEnemyMove(enum class EnemyMoveAnimKind move, bool bool); // Function RSBattleEnemy.RSBattleEnemy_C.BeginEnemyMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyMove(enum class EnemyMoveAnimKind move, bool bool); // Function RSBattleEnemy.RSBattleEnemy_C.IsEnemyMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyDamageWince(bool bool); // Function RSBattleEnemy.RSBattleEnemy_C.IsEnemyDamageWince // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyDamageDown(bool bool); // Function RSBattleEnemy.RSBattleEnemy_C.IsEnemyDamageDown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginEnemyAttack(enum class EnemyAttackAnimKind Attack, bool bool); // Function RSBattleEnemy.RSBattleEnemy_C.BeginEnemyAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEnemyInterfaceSound(enum class Enum_EnemySound Enum); // Function RSBattleEnemy.RSBattleEnemy_C.GetEnemyInterfaceSound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	enum class EEnemyTribe GetEnemyTribe(); // Function RSBattleEnemy.RSBattleEnemy_C.GetEnemyTribe // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsEnemyConsiderDownDead(); // Function RSBattleEnemy.RSBattleEnemy_C.IsEnemyConsiderDownDead // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool SetEnemyConsiderDownDead(bool bEnable); // Function RSBattleEnemy.RSBattleEnemy_C.SetEnemyConsiderDownDead // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsCheckSameCompareGroundLoaction(); // Function RSBattleEnemy.RSBattleEnemy_C.IsCheckSameCompareGroundLoaction // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsInvincible_Native(); // Function RSBattleEnemy.RSBattleEnemy_C.IsInvincible_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsSuspendFollowAttackInterface(); // Function RSBattleEnemy.RSBattleEnemy_C.IsSuspendFollowAttackInterface // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsDisableDownMotionInterface(); // Function RSBattleEnemy.RSBattleEnemy_C.IsDisableDownMotionInterface // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsSpawned(); // Function RSBattleEnemy.RSBattleEnemy_C.IsSpawned // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool SetTickEnableMeshOnly(bool bMeshOnly); // Function RSBattleEnemy.RSBattleEnemy_C.SetTickEnableMeshOnly // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsCheckLookScrollTick(struct FVector Start, struct FVector End); // Function RSBattleEnemy.RSBattleEnemy_C.IsCheckLookScrollTick // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	bool IsBossEnemy_CallFromCPP(); // Function RSBattleEnemy.RSBattleEnemy_C.IsBossEnemy_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	float GetUniqueTickEnableRange(); // Function RSBattleEnemy.RSBattleEnemy_C.GetUniqueTickEnableRange // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsUniqueAroundEffectPause(); // Function RSBattleEnemy.RSBattleEnemy_C.IsUniqueAroundEffectPause // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool StartReactionDilation_CallFromCPP(char ReactionKind, bool bAddDamage); // Function RSBattleEnemy.RSBattleEnemy_C.StartReactionDilation_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsEnemyDamageDown_CallFromCPP(); // Function RSBattleEnemy.RSBattleEnemy_C.IsEnemyDamageDown_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsNotFindPlayer_CallFromCPP(); // Function RSBattleEnemy.RSBattleEnemy_C.IsNotFindPlayer_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsFlyEnemyCheck_Native(); // Function RSBattleEnemy.RSBattleEnemy_C.IsFlyEnemyCheck_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsWeakUiDamageHit_CallFromCPP(); // Function RSBattleEnemy.RSBattleEnemy_C.IsWeakUiDamageHit_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool EnemyEndEvDitherNative(bool bDisp); // Function RSBattleEnemy.RSBattleEnemy_C.EnemyEndEvDitherNative // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool EnemyStartEvDitherNative(bool bDisp, float DitherTime); // Function RSBattleEnemy.RSBattleEnemy_C.EnemyStartEvDitherNative // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool EnemyUpdateEvDitherNative(float DeltaSec); // Function RSBattleEnemy.RSBattleEnemy_C.EnemyUpdateEvDitherNative // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool UpdateMoveMaxSpeed(); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateMoveMaxSpeed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	bool OnEndCrashChance_Native(); // Function RSBattleEnemy.RSBattleEnemy_C.OnEndCrashChance_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsEnemyStateAttack_CallFromCPP(); // Function RSBattleEnemy.RSBattleEnemy_C.IsEnemyStateAttack_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsPossibleTargetAttack_CallFromCPP(struct AActor* Actor); // Function RSBattleEnemy.RSBattleEnemy_C.IsPossibleTargetAttack_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool BrainCrashLock_Native(); // Function RSBattleEnemy.RSBattleEnemy_C.BrainCrashLock_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CallDead_Native(); // Function RSBattleEnemy.RSBattleEnemy_C.CallDead_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CallFuncDamageDownEnd_Native(); // Function RSBattleEnemy.RSBattleEnemy_C.CallFuncDamageDownEnd_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CallFuncDamageDownLoop_Native(); // Function RSBattleEnemy.RSBattleEnemy_C.CallFuncDamageDownLoop_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CallFuncDamageDownStart_Native(); // Function RSBattleEnemy.RSBattleEnemy_C.CallFuncDamageDownStart_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CameraAttentionEnd_Native(struct UCurveFloat* FovCurveOut); // Function RSBattleEnemy.RSBattleEnemy_C.CameraAttentionEnd_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckNpcDrive_Native(enum class ENpcDriveCheckType CheckType, struct AActor* EnemyActor); // Function RSBattleEnemy.RSBattleEnemy_C.CheckNpcDrive_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckSASHologramAttack_Native(enum class ESASHologramAttackTiming Timing, struct ARSCharacterBase* RequestCharacter); // Function RSBattleEnemy.RSBattleEnemy_C.CheckSASHologramAttack_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool DamageFloatEnd_Native(); // Function RSBattleEnemy.RSBattleEnemy_C.DamageFloatEnd_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool DamageMotionEnd_Native(float DeltaTime); // Function RSBattleEnemy.RSBattleEnemy_C.DamageMotionEnd_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool DeadStart_Native(); // Function RSBattleEnemy.RSBattleEnemy_C.DeadStart_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool DisableFitGroundTmp_Native(); // Function RSBattleEnemy.RSBattleEnemy_C.DisableFitGroundTmp_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool DropFlyingEnemy_Native(struct AActor* Enemy); // Function RSBattleEnemy.RSBattleEnemy_C.DropFlyingEnemy_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool EnableAllWeak_Native(bool bEnable); // Function RSBattleEnemy.RSBattleEnemy_C.EnableAllWeak_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool EnableFitGroundTmp_Native(); // Function RSBattleEnemy.RSBattleEnemy_C.EnableFitGroundTmp_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool EndDamageFloating_Native(); // Function RSBattleEnemy.RSBattleEnemy_C.EndDamageFloating_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool EntryBrainCrashAccess_Native(struct ARSCharacterBase* Character); // Function RSBattleEnemy.RSBattleEnemy_C.EntryBrainCrashAccess_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FlyDown_Native(bool IsEnd); // Function RSBattleEnemy.RSBattleEnemy_C.FlyDown_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct UCapsuleComponent* GetCapsuleComponent_Native(); // Function RSBattleEnemy.RSBattleEnemy_C.GetCapsuleComponent_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetCurrentActionTime_Native(float ActionTime); // Function RSBattleEnemy.RSBattleEnemy_C.GetCurrentActionTime_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool GetDebugEnemyDownInfinity_Native(); // Function RSBattleEnemy.RSBattleEnemy_C.GetDebugEnemyDownInfinity_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	float GetDownTimer_Native(); // Function RSBattleEnemy.RSBattleEnemy_C.GetDownTimer_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	enum class EnemyMoveAnimKind GetDownUpMoveAnimKind_Native(); // Function RSBattleEnemy.RSBattleEnemy_C.GetDownUpMoveAnimKind_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool GetFailedFall_Native(); // Function RSBattleEnemy.RSBattleEnemy_C.GetFailedFall_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool GetFall_Native(); // Function RSBattleEnemy.RSBattleEnemy_C.GetFall_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct UHateTargetComponent* GetHateTarget_Native(); // Function RSBattleEnemy.RSBattleEnemy_C.GetHateTarget_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetHitObjectType_Native(struct TArray<enum class EObjectTypeQuery> ObjectType); // Function RSBattleEnemy.RSBattleEnemy_C.GetHitObjectType_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool GetIsJumpEnd(); // Function RSBattleEnemy.RSBattleEnemy_C.GetIsJumpEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool GetIsLandCheck(); // Function RSBattleEnemy.RSBattleEnemy_C.GetIsLandCheck // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetLostActionInfoList_Native(struct TArray<struct FEmLostActionInfo> LostActionInfo); // Function RSBattleEnemy.RSBattleEnemy_C.GetLostActionInfoList_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetLostData_Native(float LostMoveTimeMin, float LostMoveTimeMax, float LostMoveRotationRate, float SpeedScale, bool IsNoMoveAnim); // Function RSBattleEnemy.RSBattleEnemy_C.GetLostData_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool GetNewDamageFloating_Native(); // Function RSBattleEnemy.RSBattleEnemy_C.GetNewDamageFloating_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool GetPressDownLoop_Native(); // Function RSBattleEnemy.RSBattleEnemy_C.GetPressDownLoop_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	struct USearchingComponent* GetSearchingComponent_Native(); // Function RSBattleEnemy.RSBattleEnemy_C.GetSearchingComponent_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct AActor* GetTargetCharacter_Native(); // Function RSBattleEnemy.RSBattleEnemy_C.GetTargetCharacter_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsBrainCrashMiss_Native(bool IsMiss); // Function RSBattleEnemy.RSBattleEnemy_C.IsBrainCrashMiss_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsBrainSuccess_Native(); // Function RSBattleEnemy.RSBattleEnemy_C.IsBrainSuccess_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsDamageMotionEnd_Native(); // Function RSBattleEnemy.RSBattleEnemy_C.IsDamageMotionEnd_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsEnemyLandingCheck_Native(bool bHit); // Function RSBattleEnemy.RSBattleEnemy_C.IsEnemyLandingCheck_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsIgnoreLandingCheck_Native(bool bIgnoreLandingCheck); // Function RSBattleEnemy.RSBattleEnemy_C.IsIgnoreLandingCheck_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsLaunchDown_Native(); // Function RSBattleEnemy.RSBattleEnemy_C.IsLaunchDown_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsMotionEnd_Native(); // Function RSBattleEnemy.RSBattleEnemy_C.IsMotionEnd_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsPressDown_Native(); // Function RSBattleEnemy.RSBattleEnemy_C.IsPressDown_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool KickCrashChanceLoopEffect_Native(); // Function RSBattleEnemy.RSBattleEnemy_C.KickCrashChanceLoopEffect_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LaunchDown_Native(bool IsEnd); // Function RSBattleEnemy.RSBattleEnemy_C.LaunchDown_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool LeaveBrainCrashAccess_Native(struct ARSCharacterBase* Character); // Function RSBattleEnemy.RSBattleEnemy_C.LeaveBrainCrashAccess_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OutputLogCrashChanceEnd_Native(); // Function RSBattleEnemy.RSBattleEnemy_C.OutputLogCrashChanceEnd_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceivedNotifyAnimEnd_Native(bool Received); // Function RSBattleEnemy.RSBattleEnemy_C.ReceivedNotifyAnimEnd_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ResetCore_Native(struct AActor* Enemy, bool RemoveCore); // Function RSBattleEnemy.RSBattleEnemy_C.ResetCore_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ResetStateReceivedExecuteAi_Native(); // Function RSBattleEnemy.RSBattleEnemy_C.ResetStateReceivedExecuteAi_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool RestoreWeakEmissive_Native(struct FString WeakSlotName); // Function RSBattleEnemy.RSBattleEnemy_C.RestoreWeakEmissive_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool RestoreWeakState_Native(); // Function RSBattleEnemy.RSBattleEnemy_C.RestoreWeakState_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SafeDestroy_Native(struct AActor* Actor); // Function RSBattleEnemy.RSBattleEnemy_C.SafeDestroy_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetDamageCollisionDisable_Native(struct FName ClaimantName); // Function RSBattleEnemy.RSBattleEnemy_C.SetDamageCollisionDisable_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetDownTimer_Native(float NewTime); // Function RSBattleEnemy.RSBattleEnemy_C.SetDownTimer_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetHp_Native(int32_t HP); // Function RSBattleEnemy.RSBattleEnemy_C.SetHp_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetIdleMove_Native(bool IsIdle); // Function RSBattleEnemy.RSBattleEnemy_C.SetIdleMove_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetIsBrainAccess_Native(bool NewIsBrainAccess); // Function RSBattleEnemy.RSBattleEnemy_C.SetIsBrainAccess_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetIsLandCheck_Native(bool NewIsLandCheck); // Function RSBattleEnemy.RSBattleEnemy_C.SetIsLandCheck_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetIsLaunchDown_Native(bool NewIsLaunchDown); // Function RSBattleEnemy.RSBattleEnemy_C.SetIsLaunchDown_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetIsMoveAnim_Native(bool NewIsMoveAnim); // Function RSBattleEnemy.RSBattleEnemy_C.SetIsMoveAnim_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetLanding_Native(bool bLanding); // Function RSBattleEnemy.RSBattleEnemy_C.SetLanding_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetReserveAction_Native(char Action, float Param00, float Param01); // Function RSBattleEnemy.RSBattleEnemy_C.SetReserveAction_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetUseWaitNoInterpolation_Native(bool Use); // Function RSBattleEnemy.RSBattleEnemy_C.SetUseWaitNoInterpolation_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetWeakEmissiveOff_Native(struct FString WeakSlotName); // Function RSBattleEnemy.RSBattleEnemy_C.SetWeakEmissiveOff_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool StartDamageFloating_Native(); // Function RSBattleEnemy.RSBattleEnemy_C.StartDamageFloating_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool StartVanish_Native(float VanishSec, float StartVanish, float EndVanish); // Function RSBattleEnemy.RSBattleEnemy_C.StartVanish_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool StopCrashChanceLoopEffect_Native(); // Function RSBattleEnemy.RSBattleEnemy_C.StopCrashChanceLoopEffect_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool StoreWeakState_Native(); // Function RSBattleEnemy.RSBattleEnemy_C.StoreWeakState_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SwitchDispCore_Native(bool DisplayOn); // Function RSBattleEnemy.RSBattleEnemy_C.SwitchDispCore_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDamageAnim_Native(bool DamageEnd, bool DamageDownEnd); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateDamageAnim_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool UpdateFall_Native(); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateFall_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ResetAction_Native(); // Function RSBattleEnemy.RSBattleEnemy_C.ResetAction_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct UEnemyAnimControllerComponent* GetEnemyAnimControllerComponent(); // Function RSBattleEnemy.RSBattleEnemy_C.GetEnemyAnimControllerComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsCheckLookTargetTick(struct FVector Start, struct FVector End); // Function RSBattleEnemy.RSBattleEnemy_C.IsCheckLookTargetTick // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsDisableUroAction_Interface(); // Function RSBattleEnemy.RSBattleEnemy_C.IsDisableUroAction_Interface // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsCheckHeightChangeTick(); // Function RSBattleEnemy.RSBattleEnemy_C.IsCheckHeightChangeTick // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsEnemyFalling_Interface(); // Function RSBattleEnemy.RSBattleEnemy_C.IsEnemyFalling_Interface // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsEnemySpawn_Interface(); // Function RSBattleEnemy.RSBattleEnemy_C.IsEnemySpawn_Interface // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsTickDisableCondition(); // Function RSBattleEnemy.RSBattleEnemy_C.IsTickDisableCondition // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsUpdateEnemySpawn(); // Function RSBattleEnemy.RSBattleEnemy_C.IsUpdateEnemySpawn // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsUpdateEnemyTickEnable(); // Function RSBattleEnemy.RSBattleEnemy_C.IsUpdateEnemyTickEnable // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	struct UEnemyScriptComponent* GetEnemyScriptComponent(); // Function RSBattleEnemy.RSBattleEnemy_C.GetEnemyScriptComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	struct UEnemyAiComponentBase* GetEnemyAiComponent(); // Function RSBattleEnemy.RSBattleEnemy_C.GetEnemyAiComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	struct FVector GetTopHeightLocation(); // Function RSBattleEnemy.RSBattleEnemy_C.GetTopHeightLocation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsExecLowProcess(); // Function RSBattleEnemy.RSBattleEnemy_C.IsExecLowProcess // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsReflectContainer(); // Function RSBattleEnemy.RSBattleEnemy_C.IsReflectContainer // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	struct AActor* GetCurrentTarget(); // Function RSBattleEnemy.RSBattleEnemy_C.GetCurrentTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	struct FVector GetDamageHitDirectionIF(); // Function RSBattleEnemy.RSBattleEnemy_C.GetDamageHitDirectionIF // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void OnEndAnimDieIF(bool bDummy); // Function RSBattleEnemy.RSBattleEnemy_C.OnEndAnimDieIF // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartFallIfFlyingIF(bool bDummy); // Function RSBattleEnemy.RSBattleEnemy_C.StartFallIfFlyingIF // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsDebugInvincible(); // Function RSBattleEnemy.RSBattleEnemy_C.IsDebugInvincible // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetDeadBeforeHitResult(struct FHCHitResult HitResult); // Function RSBattleEnemy.RSBattleEnemy_C.SetDeadBeforeHitResult // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDeadBeforeHitResultByDirectAttack(struct FHCHitResult HitResult); // Function RSBattleEnemy.RSBattleEnemy_C.SetDeadBeforeHitResultByDirectAttack // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsUseBattleFieldFence(bool return); // Function RSBattleEnemy.RSBattleEnemy_C.IsUseBattleFieldFence // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetGroupID(int32_t NewGroupID); // Function RSBattleEnemy.RSBattleEnemy_C.SetGroupID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetLocationAreaID(int32_t LocationId, int32_t areaId); // Function RSBattleEnemy.RSBattleEnemy_C.GetLocationAreaID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void OnHitDamage(struct FHCHitResult Result, bool return); // Function RSBattleEnemy.RSBattleEnemy_C.OnHitDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBattlefieldFenceAppearRate(float FenceBattleRate); // Function RSBattleEnemy.RSBattleEnemy_C.SetBattlefieldFenceAppearRate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DirectAttack(bool UseFixDamage, int32_t fixDamage, struct UDataTable* DataTable, struct FName SkillName, struct AActor* attacker, struct AActor* AttackerOwner, bool IgnoreInvalid, struct FHCHitEffectInfo Effect Info, bool UseHitPosition, struct FVector hitPosition, bool NoDamageDisplay); // Function RSBattleEnemy.RSBattleEnemy_C.DirectAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsPsychicFieldDamageRateToBoss(); // Function RSBattleEnemy.RSBattleEnemy_C.IsPsychicFieldDamageRateToBoss // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPlayerOutOfBattleFieldFence(bool return); // Function RSBattleEnemy.RSBattleEnemy_C.IsPlayerOutOfBattleFieldFence // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void UniqueBossLostActionAbort(bool IsUniqueAbort); // Function RSBattleEnemy.RSBattleEnemy_C.UniqueBossLostActionAbort // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsNotAbleBrainCrashTarget(); // Function RSBattleEnemy.RSBattleEnemy_C.IsNotAbleBrainCrashTarget // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void AreaStart(); // Function RSBattleEnemy.RSBattleEnemy_C.AreaStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAllowanceWaitSeconds(); // Function RSBattleEnemy.RSBattleEnemy_C.SetAllowanceWaitSeconds // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckAttractSelf(struct FHCHitResult HitResult); // Function RSBattleEnemy.RSBattleEnemy_C.CheckAttractSelf // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InBrainFieldProgress(bool InBrainField); // Function RSBattleEnemy.RSBattleEnemy_C.InBrainFieldProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetET_StopWaitMontage(struct UAnimMontage* WaitMontage); // Function RSBattleEnemy.RSBattleEnemy_C.GetET_StopWaitMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckExecuteNotifyKind(struct AActor* Owner, enum class ECharaExecuteNotifyKind ExecuteKind, bool IsExecute); // Function RSBattleEnemy.RSBattleEnemy_C.CheckExecuteNotifyKind // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAreaOutActorLocation(struct FVector NewLocation, bool return); // Function RSBattleEnemy.RSBattleEnemy_C.SetAreaOutActorLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartSpawn(); // Function RSBattleEnemy.RSBattleEnemy_C.StartSpawn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FrameDamage(float sec); // Function RSBattleEnemy.RSBattleEnemy_C.FrameDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartUpdateAreaOut(); // Function RSBattleEnemy.RSBattleEnemy_C.StartUpdateAreaOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyEnableOutOfNotBossBattlefield(bool SetEnable); // Function RSBattleEnemy.RSBattleEnemy_C.SetEnemyEnableOutOfNotBossBattlefield // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetNoCollisionAndStopAiFade(bool bNoColAndStopAi, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.SetNoCollisionAndStopAiFade // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsHitAttackArmor(struct FHCHitResult HitResult, bool bHit); // Function RSBattleEnemy.RSBattleEnemy_C.IsHitAttackArmor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void LostSightInBattle(); // Function RSBattleEnemy.RSBattleEnemy_C.LostSightInBattle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUpNativeParam(); // Function RSBattleEnemy.RSBattleEnemy_C.SetUpNativeParam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDeadMontage(bool bEnableConsiderFlag); // Function RSBattleEnemy.RSBattleEnemy_C.SetDeadMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool EventManagerStart(bool EnableTick, bool Visibility); // Function RSBattleEnemy.RSBattleEnemy_C.EventManagerStart // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetArmorFlashControl(struct FHCHitResult Result, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.SetArmorFlashControl // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetFormType(enum class EEnemyFormType FormType); // Function RSBattleEnemy.RSBattleEnemy_C.SetFormType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnDamageArmorBreak(bool bDummy); // Function RSBattleEnemy.RSBattleEnemy_C.OnDamageArmorBreak // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyEnableOutOfBossBattlefield(bool SetEnable); // Function RSBattleEnemy.RSBattleEnemy_C.SetEnemyEnableOutOfBossBattlefield // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBrainCrashSequenceEm8300(bool IsUnique, struct ULevelSequence* Sequence); // Function RSBattleEnemy.RSBattleEnemy_C.GetBrainCrashSequenceEm8300 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetBattleStart(bool IsBattleStart); // Function RSBattleEnemy.RSBattleEnemy_C.GetBattleStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool EventManagerEnd(bool RestoreEnableTick, bool RestoreVisibility); // Function RSBattleEnemy.RSBattleEnemy_C.EventManagerEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnableOutOfBattleField(bool SetEnable, int32_t GroupID, bool BossField); // Function RSBattleEnemy.RSBattleEnemy_C.SetEnableOutOfBattleField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSpawnState(enum class Enum_EnemySpawnState SpawnState); // Function RSBattleEnemy.RSBattleEnemy_C.SetSpawnState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBattleStart(bool IsBattleStart); // Function RSBattleEnemy.RSBattleEnemy_C.SetBattleStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWander(bool IsWander); // Function RSBattleEnemy.RSBattleEnemy_C.SetWander // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBT_ForceBreak(bool IsBT_ForceBreak); // Function RSBattleEnemy.RSBattleEnemy_C.SetBT_ForceBreak // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Set Event Wait(bool IsEventWait); // Function RSBattleEnemy.RSBattleEnemy_C.Set Event Wait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDisableWeakAroundEffect(int32_t Index, bool isDisable); // Function RSBattleEnemy.RSBattleEnemy_C.SetDisableWeakAroundEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Is Disable Weak Around Effect(int32_t Index, bool isDisable); // Function RSBattleEnemy.RSBattleEnemy_C.Is Disable Weak Around Effect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsStopWeakEmissive(bool IsStop); // Function RSBattleEnemy.RSBattleEnemy_C.IsStopWeakEmissive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetStopWeakEmissive(bool IsStop); // Function RSBattleEnemy.RSBattleEnemy_C.SetStopWeakEmissive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableWeak(bool bEnableWeak); // Function RSBattleEnemy.RSBattleEnemy_C.IsEnableWeak // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SpawnStartChangeCharaCondition(); // Function RSBattleEnemy.RSBattleEnemy_C.SpawnStartChangeCharaCondition // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetArmorPartsList(struct TArray<int32_t> Armor); // Function RSBattleEnemy.RSBattleEnemy_C.GetArmorPartsList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsBossHpDisp(bool isDisp); // Function RSBattleEnemy.RSBattleEnemy_C.IsBossHpDisp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void RestoreInitRotationRate(); // Function RSBattleEnemy.RSBattleEnemy_C.RestoreInitRotationRate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentActionRotationScaleRate(float Scale); // Function RSBattleEnemy.RSBattleEnemy_C.GetCurrentActionRotationScaleRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetInitRotationRate(struct FRotator Rotation); // Function RSBattleEnemy.RSBattleEnemy_C.GetInitRotationRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetUseWaitNoInterpolation(bool bUse, bool bDummy); // Function RSBattleEnemy.RSBattleEnemy_C.SetUseWaitNoInterpolation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsUseWaitNoInterpolation(bool bUse); // Function RSBattleEnemy.RSBattleEnemy_C.IsUseWaitNoInterpolation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetBrainFieldProgress(enum class Enum_EnemyBrainFieldProgress Progress); // Function RSBattleEnemy.RSBattleEnemy_C.GetBrainFieldProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void CallFuncDamageDownEnd(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.CallFuncDamageDownEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckSimpleEnemy(); // Function RSBattleEnemy.RSBattleEnemy_C.CheckSimpleEnemy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitUpdateSeeThrought(); // Function RSBattleEnemy.RSBattleEnemy_C.InitUpdateSeeThrought // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitCheckUpdateWeakMaterial(); // Function RSBattleEnemy.RSBattleEnemy_C.InitCheckUpdateWeakMaterial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MainTickSometime(float DeltaSeconds, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.MainTickSometime // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsExecSometimeTick(bool bExec); // Function RSBattleEnemy.RSBattleEnemy_C.IsExecSometimeTick // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetTickIntervalSeconds(enum class EEnemyTickPriorityType PriorityType, float DefaultSeconds, float MaxSeconds); // Function RSBattleEnemy.RSBattleEnemy_C.GetTickIntervalSeconds // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void CalcTickSeconds(float DeltaSeconds, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.CalcTickSeconds // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrioritizeTick(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.PrioritizeTick // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateUro(); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateUro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitUro(); // Function RSBattleEnemy.RSBattleEnemy_C.InitUro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnDamaging(struct FHCHitResult HitResult, float DamageValue, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.OnDamaging // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckStealthCriticalHitSlow(struct FHCHitResult HitResult); // Function RSBattleEnemy.RSBattleEnemy_C.CheckStealthCriticalHitSlow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDiscoveredOnce(bool DiscoverdOnce); // Function RSBattleEnemy.RSBattleEnemy_C.IsDiscoveredOnce // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CheckMapGimmickHitSlow(struct FHCHitResult HitResult); // Function RSBattleEnemy.RSBattleEnemy_C.CheckMapGimmickHitSlow // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBaseMontagePlayRate(float PlayRate); // Function RSBattleEnemy.RSBattleEnemy_C.SetBaseMontagePlayRate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetRowNameAnimScaleHitStop(enum class EnemyDamageAnimKind DamageAnimKind, struct FName RowName); // Function RSBattleEnemy.RSBattleEnemy_C.GetRowNameAnimScaleHitStop // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReSetAnimScaleHitStop(); // Function RSBattleEnemy.RSBattleEnemy_C.ReSetAnimScaleHitStop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAnimScaleHitStopSlow(); // Function RSBattleEnemy.RSBattleEnemy_C.SetAnimScaleHitStopSlow // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAnimScaleHitStopProduct(); // Function RSBattleEnemy.RSBattleEnemy_C.SetAnimScaleHitStopProduct // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAnimScaleHitStop(enum class EnemyDamageAnimKind DamageAnimKind); // Function RSBattleEnemy.RSBattleEnemy_C.SetAnimScaleHitStop // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DisplayEnemyHp(float DisplaySeconds, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.DisplayEnemyHp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartBrainTalkOnBadState(struct AActor* attacker, enum class EHCBadState BadState); // Function RSBattleEnemy.RSBattleEnemy_C.StartBrainTalkOnBadState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CopyParamToAvatar(struct ARSBattleEnemy_C* Original, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.CopyParamToAvatar // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetNoDisplayDiscoverIcon(bool Enable, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.SetNoDisplayDiscoverIcon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartBrainTalkEffectiveSas(enum class E_SASKindNative SasKind); // Function RSBattleEnemy.RSBattleEnemy_C.StartBrainTalkEffectiveSas // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetReasonBattleEnd(enum class EReasonBattleEnd reason); // Function RSBattleEnemy.RSBattleEnemy_C.GetReasonBattleEnd // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckEmphasisCrashGauge(struct FHCHitResult HitResult); // Function RSBattleEnemy.RSBattleEnemy_C.CheckEmphasisCrashGauge // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StealthEndLaunchLanding(); // Function RSBattleEnemy.RSBattleEnemy_C.StealthEndLaunchLanding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetStealthEndLaunchFlag(); // Function RSBattleEnemy.RSBattleEnemy_C.SetStealthEndLaunchFlag // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAreaOut(float DeltaTime); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateAreaOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitAreaOut(); // Function RSBattleEnemy.RSBattleEnemy_C.InitAreaOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetShell(); // Function RSBattleEnemy.RSBattleEnemy_C.ResetShell // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetAllBadStatus(); // Function RSBattleEnemy.RSBattleEnemy_C.ResetAllBadStatus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AreaOutResetParam(); // Function RSBattleEnemy.RSBattleEnemy_C.AreaOutResetParam // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PreAreaOutResetParam(); // Function RSBattleEnemy.RSBattleEnemy_C.PreAreaOutResetParam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Start Brain Talk Party Bad Status Attribute(enum class HCSkillAttribute PartyBadStatusAttribute, bool bSuccess); // Function RSBattleEnemy.RSBattleEnemy_C.Start Brain Talk Party Bad Status Attribute // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InsidePlayerCamera(struct FVector MyPos, bool IsInside); // Function RSBattleEnemy.RSBattleEnemy_C.InsidePlayerCamera // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RepopInit(); // Function RSBattleEnemy.RSBattleEnemy_C.RepopInit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RepopEntry(); // Function RSBattleEnemy.RSBattleEnemy_C.RepopEntry // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsCreateBossCore(bool bCreateBossCore); // Function RSBattleEnemy.RSBattleEnemy_C.IsCreateBossCore // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsNoMoveAnim(bool bNoMoveAnim); // Function RSBattleEnemy.RSBattleEnemy_C.IsNoMoveAnim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CallFuncDamageDownLoop(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.CallFuncDamageDownLoop // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetWeakTargetSocketName(struct TArray<struct FName> SocketName); // Function RSBattleEnemy.RSBattleEnemy_C.GetWeakTargetSocketName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void OnPathAreaOut(); // Function RSBattleEnemy.RSBattleEnemy_C.OnPathAreaOut // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateFall(); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateFall // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateEffectDispSwitch(bool bInDisp, bool bSuccess); // Function RSBattleEnemy.RSBattleEnemy_C.BadStateEffectDispSwitch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	enum class EAssassinAttackHit GetAssasinAttackHitType(); // Function RSBattleEnemy.RSBattleEnemy_C.GetAssasinAttackHitType // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void OnBrainFieldMoveInner(bool MoveBrainField, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.OnBrainFieldMoveInner // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableCharacterTick(bool bEnable); // Function RSBattleEnemy.RSBattleEnemy_C.IsEnableCharacterTick // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStartAction(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.OnStartAction // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayGeneralBrainCrashSequence(); // Function RSBattleEnemy.RSBattleEnemy_C.PlayGeneralBrainCrashSequence // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPathAreaOut(bool AreaOut); // Function RSBattleEnemy.RSBattleEnemy_C.IsPathAreaOut // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsReceiveSasEffectAttack(bool CheckAccelerator, bool ChackTelepo, bool CheckStealth, bool CheckStealthSee, bool CheckMetal, struct AActor* attackActor, bool ReceivedSas); // Function RSBattleEnemy.RSBattleEnemy_C.IsReceiveSasEffectAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void UpdateBaseMontage(); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateBaseMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReserveBaseMontage(struct UAnimMontage* BaseMontage); // Function RSBattleEnemy.RSBattleEnemy_C.ReserveBaseMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndEnableWeak(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.EndEnableWeak // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartEnableWeak(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.StartEnableWeak // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopDetectIcon(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.StopDetectIcon // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void KickDetectIcon(enum class EEnemyFindPlayerType findType, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.KickDetectIcon // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAcceptanceRadius(float AcceptanceRadius); // Function RSBattleEnemy.RSBattleEnemy_C.GetAcceptanceRadius // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsUniqueEffectiveSas(struct AActor* attackActor, bool IsEffectiveSas, float WinceRate, float KnockBackRate, float DownRate, float CrashRate); // Function RSBattleEnemy.RSBattleEnemy_C.IsUniqueEffectiveSas // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsInvisibleMiniMap(); // Function RSBattleEnemy.RSBattleEnemy_C.IsInvisibleMiniMap // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void AddBattleActor(); // Function RSBattleEnemy.RSBattleEnemy_C.AddBattleActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateIconOn(struct FBadStateAddParticleData Data, struct UParticleSystemComponent* Handle); // Function RSBattleEnemy.RSBattleEnemy_C.BadStateIconOn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetOverwriteParam(); // Function RSBattleEnemy.RSBattleEnemy_C.SetOverwriteParam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetStealthHalfTime(); // Function RSBattleEnemy.RSBattleEnemy_C.SetStealthHalfTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateStealthHalf(float DeltaTime); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateStealthHalf // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OffStealthHalf(); // Function RSBattleEnemy.RSBattleEnemy_C.OffStealthHalf // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStealthHalf(); // Function RSBattleEnemy.RSBattleEnemy_C.OnStealthHalf // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateIsChangeParameter(); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateIsChangeParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDefault_RepopTimeTerritory(); // Function RSBattleEnemy.RSBattleEnemy_C.SetDefault_RepopTimeTerritory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDefault_RepopRange(); // Function RSBattleEnemy.RSBattleEnemy_C.SetDefault_RepopRange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDefault_RepopTime(); // Function RSBattleEnemy.RSBattleEnemy_C.SetDefault_RepopTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDefault_TerritoryArea(); // Function RSBattleEnemy.RSBattleEnemy_C.SetDefault_TerritoryArea // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDefault_CaptureArea(); // Function RSBattleEnemy.RSBattleEnemy_C.SetDefault_CaptureArea // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDefault_SensingArea(); // Function RSBattleEnemy.RSBattleEnemy_C.SetDefault_SensingArea // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDefault_SearchAngle(); // Function RSBattleEnemy.RSBattleEnemy_C.SetDefault_SearchAngle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDefault_SearchRange(); // Function RSBattleEnemy.RSBattleEnemy_C.SetDefault_SearchRange // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMoveArea(float Area); // Function RSBattleEnemy.RSBattleEnemy_C.GetMoveArea // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetCaptureArea(float Area); // Function RSBattleEnemy.RSBattleEnemy_C.GetCaptureArea // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetSensingArea(float Area); // Function RSBattleEnemy.RSBattleEnemy_C.GetSensingArea // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetSearchAngle(float Angle); // Function RSBattleEnemy.RSBattleEnemy_C.GetSearchAngle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void Get Search Range(float Range); // Function RSBattleEnemy.RSBattleEnemy_C.Get Search Range // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CameraAttentionEndDelete(struct UCurveFloat* FovCurveOut, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.CameraAttentionEndDelete // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CameraAttentionStartDelete(struct UCurveFloat* ActorCurveIn, bool bChangeFov, float TargetFov, struct UCurveFloat* FovCurveIn, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.CameraAttentionStartDelete // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMaterialStealthParameterFromTime(float Time); // Function RSBattleEnemy.RSBattleEnemy_C.SetMaterialStealthParameterFromTime // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMaterialStealthParameter(float Rate); // Function RSBattleEnemy.RSBattleEnemy_C.SetMaterialStealthParameter // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SwitchMaterialStealth(bool SwitchStealth); // Function RSBattleEnemy.RSBattleEnemy_C.SwitchMaterialStealth // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventDeath(bool WatchDeath, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.EventDeath // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsNotDamageMotion(bool bNotDamageMotion); // Function RSBattleEnemy.RSBattleEnemy_C.IsNotDamageMotion // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetDownTime(float Time); // Function RSBattleEnemy.RSBattleEnemy_C.GetDownTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetSpeedScale(float SpeedScale); // Function RSBattleEnemy.RSBattleEnemy_C.GetSpeedScale // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsUniqueEnableMove(bool bEnable); // Function RSBattleEnemy.RSBattleEnemy_C.IsUniqueEnableMove // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsInvincible(bool bInvincible); // Function RSBattleEnemy.RSBattleEnemy_C.IsInvincible // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void EnableInvincible(bool bEnable, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.EnableInvincible // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugMainTick(float DeltaSec); // Function RSBattleEnemy.RSBattleEnemy_C.DebugMainTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetCharaCollision(); // Function RSBattleEnemy.RSBattleEnemy_C.ResetCharaCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateChangeCharaCollision(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateChangeCharaCollision // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddCharaCollisionList(struct UCapsuleComponent* Capsule, int32_t ListNo); // Function RSBattleEnemy.RSBattleEnemy_C.AddCharaCollisionList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EnableWeakCollision(bool bEnable, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.EnableWeakCollision // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDetectIcon(float DeltaSeconds, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateDetectIcon // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBadStateIconCameraOffset(float Value); // Function RSBattleEnemy.RSBattleEnemy_C.GetBadStateIconCameraOffset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetBadStateIconParam(enum class EHCBadState BadType, struct FBadStateAddParticleData ParamData); // Function RSBattleEnemy.RSBattleEnemy_C.GetBadStateIconParam // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	struct FEnemyFindChangeParam GetEnemyFindChangeParam(); // Function RSBattleEnemy.RSBattleEnemy_C.GetEnemyFindChangeParam // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	struct FVector GetEyePosition(); // Function RSBattleEnemy.RSBattleEnemy_C.GetEyePosition // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void DebugDisplayAiBasic(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.DebugDisplayAiBasic // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool SetActorAllTickEnabled(bool bEnabled); // Function RSBattleEnemy.RSBattleEnemy_C.SetActorAllTickEnabled // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateScouting(float DeltaSeconds, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateScouting // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopCrashChanceLoopEffect(); // Function RSBattleEnemy.RSBattleEnemy_C.StopCrashChanceLoopEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void KickCrashChanceLoopEffect(); // Function RSBattleEnemy.RSBattleEnemy_C.KickCrashChanceLoopEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetWeakTargetTransform(struct FVector AttackerPos, struct FTransform WeakTransform); // Function RSBattleEnemy.RSBattleEnemy_C.GetWeakTargetTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetAdjustCharaCapsule(bool Enable); // Function RSBattleEnemy.RSBattleEnemy_C.SetAdjustCharaCapsule // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAdjustZCharaCapsule(float DeltaSec); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateAdjustZCharaCapsule // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDrawSearchRange(); // Function RSBattleEnemy.RSBattleEnemy_C.DebugDrawSearchRange // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetHiddenCharacterAttachment(bool NewHidden); // Function RSBattleEnemy.RSBattleEnemy_C.SetHiddenCharacterAttachment // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainCrashReceive(); // Function RSBattleEnemy.RSBattleEnemy_C.SetBrainCrashReceive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartChangePlayRate(bool bAddDamage); // Function RSBattleEnemy.RSBattleEnemy_C.StartChangePlayRate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyLandingCheck(bool bHit); // Function RSBattleEnemy.RSBattleEnemy_C.IsEnemyLandingCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateUniqueObjState(); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateUniqueObjState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartChangeTimeDilation(bool bAddDamage); // Function RSBattleEnemy.RSBattleEnemy_C.StartChangeTimeDilation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentActionTime(float ActionTime); // Function RSBattleEnemy.RSBattleEnemy_C.GetCurrentActionTime // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetIdleMove(bool IsIdle); // Function RSBattleEnemy.RSBattleEnemy_C.SetIdleMove // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsIdleMove(bool IsIdle); // Function RSBattleEnemy.RSBattleEnemy_C.IsIdleMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	struct FVector GetCameraLookAtPos(); // Function RSBattleEnemy.RSBattleEnemy_C.GetCameraLookAtPos // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsUniqueDisableAvoid(bool bDisable); // Function RSBattleEnemy.RSBattleEnemy_C.IsUniqueDisableAvoid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RestoreWeakEmissive(struct FString WeakSlotName, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.RestoreWeakEmissive // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWeakEmissiveOff(struct FString WeakSlotName, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.SetWeakEmissiveOff // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitSaveBodyWeakValue(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.InitSaveBodyWeakValue // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoBattleSequencerEnd(bool bSetEnemyEvent, bool bDriveSequence, bool bDummy); // Function RSBattleEnemy.RSBattleEnemy_C.DoBattleSequencerEnd // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoBattleSequencerStart(bool bSetEnemyEvent, bool bDriveSequence, bool bDummy); // Function RSBattleEnemy.RSBattleEnemy_C.DoBattleSequencerStart // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndDamageFloating(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.EndDamageFloating // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartDamageFloating(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.StartDamageFloating // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableSlashEffect(struct FHCHitResult HitResult, bool bEnable); // Function RSBattleEnemy.RSBattleEnemy_C.IsEnableSlashEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void OnStartHideArmor(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.OnStartHideArmor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnArmorHit(struct FHCHitResult HitResult); // Function RSBattleEnemy.RSBattleEnemy_C.OnArmorHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DisableFitGroundTmp(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.DisableFitGroundTmp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EnableFitGroundTmp(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.EnableFitGroundTmp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PostTick(float DeltaSeconds, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.PostTick // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PreTick(float DeltaSeconds, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.PreTick // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugFindIgnoreAction(char Action, bool Find); // Function RSBattleEnemy.RSBattleEnemy_C.DebugFindIgnoreAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void DebugRemoveIgnoreAction(char Action, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.DebugRemoveIgnoreAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugResetIgnoreAction(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.DebugResetIgnoreAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugAddIgnoreAction(char Action, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.DebugAddIgnoreAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugIsEnableUniqueCondition(int32_t ConditionNo, bool EnableCondition); // Function RSBattleEnemy.RSBattleEnemy_C.DebugIsEnableUniqueCondition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsCurrentTarget(bool bTarget); // Function RSBattleEnemy.RSBattleEnemy_C.IsCurrentTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void DebugGetUniqueConditionText(struct TArray<struct FText> text); // Function RSBattleEnemy.RSBattleEnemy_C.DebugGetUniqueConditionText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void DebugDisplayUniqueConditionDescription(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.DebugDisplayUniqueConditionDescription // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetDebugAiTableKey(int32_t AiEnum, bool bSuccess, char ReturnKey); // Function RSBattleEnemy.RSBattleEnemy_C.GetDebugAiTableKey // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DestroyBrainCore(); // Function RSBattleEnemy.RSBattleEnemy_C.DestroyBrainCore // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DestroyEnemyWeapon(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.DestroyEnemyWeapon // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsHitWeak_ChangeDefaultEffect(bool ChangeDefault); // Function RSBattleEnemy.RSBattleEnemy_C.IsHitWeak_ChangeDefaultEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void CanTakeBrainField(bool CanTake); // Function RSBattleEnemy.RSBattleEnemy_C.CanTakeBrainField // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SwitchLookAt(bool bEnable, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.SwitchLookAt // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsHitFromMainPlayer(struct AActor* attacker, bool return); // Function RSBattleEnemy.RSBattleEnemy_C.IsHitFromMainPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetTargetAttacking(bool bAttacking); // Function RSBattleEnemy.RSBattleEnemy_C.GetTargetAttacking // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CalcMoveScale(float CurrentTime, float maxTime, float moveScale); // Function RSBattleEnemy.RSBattleEnemy_C.CalcMoveScale // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoDynamicEventEnd(bool bDummy); // Function RSBattleEnemy.RSBattleEnemy_C.DoDynamicEventEnd // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoDynamicEventStart(bool bDummy); // Function RSBattleEnemy.RSBattleEnemy_C.DoDynamicEventStart // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoStaticEventEnd(bool bDummy); // Function RSBattleEnemy.RSBattleEnemy_C.DoStaticEventEnd // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoStaticEventStart(bool bDummy); // Function RSBattleEnemy.RSBattleEnemy_C.DoStaticEventStart // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoEventEnd(bool bDummy); // Function RSBattleEnemy.RSBattleEnemy_C.DoEventEnd // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoEventStart(bool bDummy); // Function RSBattleEnemy.RSBattleEnemy_C.DoEventStart // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t GetWeakNumber(); // Function RSBattleEnemy.RSBattleEnemy_C.GetWeakNumber // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CallFuncDamageDownStart(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.CallFuncDamageDownStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsBrainCrashMiss(bool IsMiss); // Function RSBattleEnemy.RSBattleEnemy_C.IsBrainCrashMiss // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void OnBrainCrashAccessOn(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.OnBrainCrashAccessOn // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainCrashAccessOff(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.OnBrainCrashAccessOff // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateBadStateMaterial(float DeltaSeconds, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateBadStateMaterial // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateLookAt(float DeltaSeconds, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateLookAt // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetAddBlend(); // Function RSBattleEnemy.RSBattleEnemy_C.ResetAddBlend // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RequestAddDamageL(struct FHCSkillCommonInfo skill, bool IsSuccess); // Function RSBattleEnemy.RSBattleEnemy_C.RequestAddDamageL // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FinishLookAt(bool FinishRotZero, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.FinishLookAt // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartLookAt(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.StartLookAt // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LaunchDown(bool IsEnd); // Function RSBattleEnemy.RSBattleEnemy_C.LaunchDown // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateWeakAroundEffect(); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateWeakAroundEffect // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProcFellOutOfWorld(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.ProcFellOutOfWorld // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsSuspendIKCondition(bool bEnable); // Function RSBattleEnemy.RSBattleEnemy_C.IsSuspendIKCondition // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void UpdateEnableIK(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateEnableIK // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void DisableIK(); // Function RSBattleEnemy.RSBattleEnemy_C.DisableIK // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EnableIK(); // Function RSBattleEnemy.RSBattleEnemy_C.EnableIK // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsSpawnWait(bool bSpawnWait); // Function RSBattleEnemy.RSBattleEnemy_C.IsSpawnWait // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetCheckCapsuleRadius(float Radius); // Function RSBattleEnemy.RSBattleEnemy_C.GetCheckCapsuleRadius // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetEnableDiscoverIcon(bool Enable, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.SetEnableDiscoverIcon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LimitCrashAccumulation(); // Function RSBattleEnemy.RSBattleEnemy_C.LimitCrashAccumulation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckLastBossBrainCrash(); // Function RSBattleEnemy.RSBattleEnemy_C.CheckLastBossBrainCrash // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcBrainCrashDamage(int32_t Damage); // Function RSBattleEnemy.RSBattleEnemy_C.CalcBrainCrashDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAvoidAction(enum class Enum_EnemyAvoidType AvoidEnum, char AvoidAction); // Function RSBattleEnemy.RSBattleEnemy_C.GetAvoidAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateWeakDamageMaterial(float DeltaSec); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateWeakDamageMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartWeakDamageMaterial(); // Function RSBattleEnemy.RSBattleEnemy_C.StartWeakDamageMaterial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugMakeMotionInfoText(struct FText InfoText); // Function RSBattleEnemy.RSBattleEnemy_C.DebugMakeMotionInfoText // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void DebugDisplayMotionInfo(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.DebugDisplayMotionInfo // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateFitGround(float DeltaSeconds, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateFitGround // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DisableFitGround(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.DisableFitGround // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EnableFitGround(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.EnableFitGround // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUniqueSeeWeak(bool on, bool Dammy); // Function RSBattleEnemy.RSBattleEnemy_C.SetUniqueSeeWeak // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsUniqueReactionSmallCondition(struct FRotator Rot, struct FVector hitPosition, struct FVector HitDir, struct UPrimitiveComponent* Primitive, bool PsychicObjectCombo, struct FHCSkillCommonInfo skill, struct AActor* attacker, bool bReactionSmall); // Function RSBattleEnemy.RSBattleEnemy_C.IsUniqueReactionSmallCondition // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsSetWinceCounter(bool return); // Function RSBattleEnemy.RSBattleEnemy_C.IsSetWinceCounter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsCounterSuperArmor(bool SuperArmor); // Function RSBattleEnemy.RSBattleEnemy_C.IsCounterSuperArmor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	bool IsBrainCrashSuccess(); // Function RSBattleEnemy.RSBattleEnemy_C.IsBrainCrashSuccess // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsBrainCrashAccess(); // Function RSBattleEnemy.RSBattleEnemy_C.IsBrainCrashAccess // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void CheckWinceCounter(); // Function RSBattleEnemy.RSBattleEnemy_C.CheckWinceCounter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetCounterAttack(); // Function RSBattleEnemy.RSBattleEnemy_C.ResetCounterAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckCounterAttack(struct FHCSkillCommonInfo skill); // Function RSBattleEnemy.RSBattleEnemy_C.CheckCounterAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Request Press Kill(struct FHCSkillCommonInfo skill, bool IsSuccess); // Function RSBattleEnemy.RSBattleEnemy_C.Request Press Kill // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetHpGaugePoint(struct FVector Point); // Function RSBattleEnemy.RSBattleEnemy_C.GetHpGaugePoint // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetCrashChanceCursorPoint(struct FVector Point); // Function RSBattleEnemy.RSBattleEnemy_C.GetCrashChanceCursorPoint // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void UpdatePressDown(float DeltaSec); // Function RSBattleEnemy.RSBattleEnemy_C.UpdatePressDown // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RequestPressDown(struct FHCSkillCommonInfo skill, struct AActor* attacker, struct AActor* Obj, bool IsSuccess); // Function RSBattleEnemy.RSBattleEnemy_C.RequestPressDown // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateOffMaterial(enum class HCSkillAttribute attr, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.BadStateOffMaterial // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateOnMaterial(enum class HCSkillAttribute Attribute, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.BadStateOnMaterial // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartCrashChance(bool bStart); // Function RSBattleEnemy.RSBattleEnemy_C.StartCrashChance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateBrainCore(); // Function RSBattleEnemy.RSBattleEnemy_C.CreateBrainCore // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SelectShake(struct UCameraShake* ShakeClass, float Scale, struct FVector ShakeLocation, struct UCameraShake* ReturnClass, float ReturnScale); // Function RSBattleEnemy.RSBattleEnemy_C.SelectShake // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartReactionLFlash(); // Function RSBattleEnemy.RSBattleEnemy_C.StartReactionLFlash // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnArmorBreak(struct FHCHitResult HitResult, bool Dammy); // Function RSBattleEnemy.RSBattleEnemy_C.OnArmorBreak // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateEnemyWeapon(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.CreateEnemyWeapon // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	enum class ESpecialDamageTableType GetSpecialDamageTableType(); // Function RSBattleEnemy.RSBattleEnemy_C.GetSpecialDamageTableType // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void UpdateBossHpDisplay(float DeltaSec); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateBossHpDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RequestDamageShake(bool IsSuccess); // Function RSBattleEnemy.RSBattleEnemy_C.RequestDamageShake // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginAvatar(bool IsAvatar, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.BeginAvatar // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ForceDownMotion(struct AActor* attacker, enum class HCHitStopCauseType HitStopCauseType); // Function RSBattleEnemy.RSBattleEnemy_C.ForceDownMotion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RequestBlowMotion(struct FRotator Rot, struct FVector hitPosition, struct FVector HitDir, struct UPrimitiveComponent* Primitive, bool PsychicObjectCombo, struct FHCSkillCommonInfo skill, struct AActor* Actor, bool IsSuccess); // Function RSBattleEnemy.RSBattleEnemy_C.RequestBlowMotion // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RequestReactionLMotion(struct FRotator Rot, struct FVector hitPosition, struct FVector HitDir, struct UPrimitiveComponent* Primitive, bool PsychicObjectCombo, struct FHCSkillCommonInfo skill, struct AActor* Actor, bool IsSuccess); // Function RSBattleEnemy.RSBattleEnemy_C.RequestReactionLMotion // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsUniqueKnockBackCondition(struct FRotator Rot, struct FVector hitPosition, struct FVector HitDir, struct UPrimitiveComponent* Primitive, bool PsychicObjectCombo, struct FHCSkillCommonInfo skill, struct AActor* attacker, bool bKnockBack); // Function RSBattleEnemy.RSBattleEnemy_C.IsUniqueKnockBackCondition // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RequestDownMotion(struct FRotator Rot, struct FVector hitPosition, struct FVector HitDir, struct UPrimitiveComponent* Primitive, bool PsychicObjectCombo, struct FHCSkillCommonInfo skill, struct AActor* Actor, struct AActor* Obj, bool IsSuccess); // Function RSBattleEnemy.RSBattleEnemy_C.RequestDownMotion // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckReactionHitStop(struct AActor* attacker, enum class EPlayerHitStopType Type, enum class HCHitStopCauseType CauseType, bool bIgnoreTarget, struct FHCSkillCommonInfo skill); // Function RSBattleEnemy.RSBattleEnemy_C.CheckReactionHitStop // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RequestLaunchMotion(struct FHCSkillCommonInfo skill, bool IsSuccess); // Function RSBattleEnemy.RSBattleEnemy_C.RequestLaunchMotion // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDisplayHateData(); // Function RSBattleEnemy.RSBattleEnemy_C.DebugDisplayHateData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateOnHateAdd(enum class EHCBadState BadState, struct AActor* attacker); // Function RSBattleEnemy.RSBattleEnemy_C.BadStateOnHateAdd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAiUniqueCondition(char ConditionNo, bool bResult); // Function RSBattleEnemy.RSBattleEnemy_C.GetAiUniqueCondition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsBerserkCharacter(); // Function RSBattleEnemy.RSBattleEnemy_C.IsBerserkCharacter // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void OnStartDamageLarge(struct FRotator Rot, struct FVector hitPosition, struct FVector HitDir, struct UPrimitiveComponent* Primitive, struct FHCSkillCommonInfo skill, struct AActor* attacker, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.OnStartDamageLarge // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStartDamageSmall(struct FRotator Rot, struct FVector hitPosition, struct FVector HitDir, struct UPrimitiveComponent* Primitive, struct FHCSkillCommonInfo skill, struct AActor* attacker, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.OnStartDamageSmall // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStartDamageDown(struct FRotator Rot, struct FVector hitPosition, struct FVector HitDir, struct UPrimitiveComponent* Primitive, struct FHCSkillCommonInfo skill, struct AActor* attacker, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.OnStartDamageDown // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetLockOnTargetInterface(struct AActor* TargetActor); // Function RSBattleEnemy.RSBattleEnemy_C.GetLockOnTargetInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsInvisibleHPGauge(bool bInvisible); // Function RSBattleEnemy.RSBattleEnemy_C.IsInvisibleHPGauge // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsUniqueDownCondition(struct FRotator Rot, struct FVector hitPosition, struct FVector HitDir, struct UPrimitiveComponent* Primitive, bool PsychicObjectCombo, struct FHCSkillCommonInfo skill, struct AActor* attacker, bool bDown); // Function RSBattleEnemy.RSBattleEnemy_C.IsUniqueDownCondition // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsIdleResetMoveMode(bool bReset); // Function RSBattleEnemy.RSBattleEnemy_C.IsIdleResetMoveMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetMainPlayerRangeType(enum class Enum_EnemyRange RangeType); // Function RSBattleEnemy.RSBattleEnemy_C.GetMainPlayerRangeType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void CalcRangeType(float checkDistance, enum class Enum_EnemyRange RangeType); // Function RSBattleEnemy.RSBattleEnemy_C.CalcRangeType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	float GetBrainCrashRange(); // Function RSBattleEnemy.RSBattleEnemy_C.GetBrainCrashRange // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsHitCrashDamage(struct UPrimitiveComponent* Primitive, struct FHCSkillCommonInfo skillInfo, bool return); // Function RSBattleEnemy.RSBattleEnemy_C.IsHitCrashDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateCrashDamageMaterial(float DeltaSec); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateCrashDamageMaterial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartCrashDamageMaterial(); // Function RSBattleEnemy.RSBattleEnemy_C.StartCrashDamageMaterial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDelayDeath(); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateDelayDeath // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckDeadHitStop(); // Function RSBattleEnemy.RSBattleEnemy_C.CheckDeadHitStop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartFinishMove(bool IsStart); // Function RSBattleEnemy.RSBattleEnemy_C.StartFinishMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnloadSequence(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.UnloadSequence // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadSequence(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.LoadSequence // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetAction(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.ResetAction // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateReturn(float DeltaSec); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateReturn // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEnemyAssetUnload(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.OnEnemyAssetUnload // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnDestroy(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.OnDestroy // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnloadSound(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.UnloadSound // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadSound(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.LoadSound // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateHitStop(float DeltaSec); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateHitStop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDelayDeath(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.SetDelayDeath // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceivedNotifyAnimEnd(bool Received); // Function RSBattleEnemy.RSBattleEnemy_C.ReceivedNotifyAnimEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnStartUpdate(float DeltaSec, bool bEnd); // Function RSBattleEnemy.RSBattleEnemy_C.SpawnStartUpdate // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnWaitUpdate(float DeltaSec); // Function RSBattleEnemy.RSBattleEnemy_C.SpawnWaitUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateSpawn(float DeltaSec); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateSpawn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsSimpleEnemy(bool isSimple); // Function RSBattleEnemy.RSBattleEnemy_C.IsSimpleEnemy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool CalcAccumulationByDefence(float refWince, float refKnockback, float refDown, float refLaunch, float refFlame, float refElectric, float refFlooded, float refOil, float refConfusion, float refCrashScale, struct AActor* attackActor); // Function RSBattleEnemy.RSBattleEnemy_C.CalcAccumulationByDefence // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBodyMeshArray(struct TArray<struct USkeletalMeshComponent*> MeshArray); // Function RSBattleEnemy.RSBattleEnemy_C.GetBodyMeshArray // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetStealth(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.SetStealth // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupAnimController(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.SetupAnimController // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCanDropData(bool return); // Function RSBattleEnemy.RSBattleEnemy_C.GetCanDropData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCanDropData(bool CanDropData); // Function RSBattleEnemy.RSBattleEnemy_C.SetCanDropData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReplaceHitResult(struct FHCHitResult HitResult, struct FHCHitResult ReturnHitResult); // Function RSBattleEnemy.RSBattleEnemy_C.ReplaceHitResult // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsContinuityDamageMotion(enum class EnemyAliveAnimKind AliveAnimKind, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.IsContinuityDamageMotion // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsIgnoreVisionFog(); // Function RSBattleEnemy.RSBattleEnemy_C.IsIgnoreVisionFog // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetHateData(struct ARSCharacterBase* TargetActor, int32_t Index); // Function RSBattleEnemy.RSBattleEnemy_C.SetHateData // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RestoreHateData(); // Function RSBattleEnemy.RSBattleEnemy_C.RestoreHateData // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateEffectOffFlooded(bool bNoMaterial, bool bDummy); // Function RSBattleEnemy.RSBattleEnemy_C.BadStateEffectOffFlooded // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateEffectOnFlooded(bool bDummy); // Function RSBattleEnemy.RSBattleEnemy_C.BadStateEffectOnFlooded // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateEffectOffOil(bool bNoMaterial, bool bDummy); // Function RSBattleEnemy.RSBattleEnemy_C.BadStateEffectOffOil // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateEffectOnOil(bool bDummy); // Function RSBattleEnemy.RSBattleEnemy_C.BadStateEffectOnOil // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateEffectOffElec(bool bDummy); // Function RSBattleEnemy.RSBattleEnemy_C.BadStateEffectOffElec // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateEffectOnElec(bool bDummy); // Function RSBattleEnemy.RSBattleEnemy_C.BadStateEffectOnElec // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void KickBadStateEffectOne(struct FBadStateParticleData ParticleParam, bool bAttachLocationOnly, struct TArray<struct URSParticleSystemComponentBase*> OutHandles); // Function RSBattleEnemy.RSBattleEnemy_C.KickBadStateEffectOne // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopBadStateEffect(struct TArray<struct URSParticleSystemComponentBase*> ParticleHandles); // Function RSBattleEnemy.RSBattleEnemy_C.StopBadStateEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Kick Bad State Effect(struct TArray<struct FBadStateParticleData> ParticleParams, bool bAttachLocationOnly, struct TArray<struct URSParticleSystemComponentBase*> NewParam); // Function RSBattleEnemy.RSBattleEnemy_C.Kick Bad State Effect // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateEffectOffFlame(bool bDummy); // Function RSBattleEnemy.RSBattleEnemy_C.BadStateEffectOffFlame // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateEffectOnFlame(bool bDummy); // Function RSBattleEnemy.RSBattleEnemy_C.BadStateEffectOnFlame // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugResetAiData(); // Function RSBattleEnemy.RSBattleEnemy_C.DebugResetAiData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugSetAiData(int32_t AiEnum, float Probability); // Function RSBattleEnemy.RSBattleEnemy_C.DebugSetAiData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDisplayAiData(); // Function RSBattleEnemy.RSBattleEnemy_C.DebugDisplayAiData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsSkipLowPriorityTick(float DeltaSeconds, bool isSimple, bool Skip); // Function RSBattleEnemy.RSBattleEnemy_C.IsSkipLowPriorityTick // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEnemyBaseLocation(struct FVector baseLocation); // Function RSBattleEnemy.RSBattleEnemy_C.GetEnemyBaseLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void InitializeActionTable(); // Function RSBattleEnemy.RSBattleEnemy_C.InitializeActionTable // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDelayDead(bool return); // Function RSBattleEnemy.RSBattleEnemy_C.SetDelayDead // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDelayDead(float DeltaSeconds); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateDelayDead // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainCrashState(); // Function RSBattleEnemy.RSBattleEnemy_C.SetBrainCrashState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSpawnVisibility(); // Function RSBattleEnemy.RSBattleEnemy_C.SetSpawnVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSpawnCollisionState(); // Function RSBattleEnemy.RSBattleEnemy_C.SetSpawnCollisionState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitSpawn(); // Function RSBattleEnemy.RSBattleEnemy_C.InitSpawn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsTargetable(); // Function RSBattleEnemy.RSBattleEnemy_C.IsTargetable // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void InMoveArea(struct FVector CheckLocation, float AreaScale, bool InArea); // Function RSBattleEnemy.RSBattleEnemy_C.InMoveArea // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsHitWallCapsule(struct FVector CheckLocation, bool IsHit); // Function RSBattleEnemy.RSBattleEnemy_C.IsHitWallCapsule // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void ResetTargetHateEventCore(); // Function RSBattleEnemy.RSBattleEnemy_C.ResetTargetHateEventCore // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsNotVanish(bool NotVanish); // Function RSBattleEnemy.RSBattleEnemy_C.IsNotVanish // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetEnableDamageCollisions(struct TArray<struct FString> CollisionNames, enum class ECollisionEnabled CollisionEnable); // Function RSBattleEnemy.RSBattleEnemy_C.SetEnableDamageCollisions // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetRangeDistance(enum class Enum_EnemyRange RangeType, float Distance); // Function RSBattleEnemy.RSBattleEnemy_C.GetRangeDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetMoveActions(struct TArray<char> Actions); // Function RSBattleEnemy.RSBattleEnemy_C.GetMoveActions // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void DebugDisplayFront(); // Function RSBattleEnemy.RSBattleEnemy_C.DebugDisplayFront // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDisplayAction(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.DebugDisplayAction // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Dead Effect(bool IsAvatar); // Function RSBattleEnemy.RSBattleEnemy_C.Dead Effect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsCollisionHitAny(bool bHit); // Function RSBattleEnemy.RSBattleEnemy_C.IsCollisionHitAny // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void ResetCollisionHitWall(); // Function RSBattleEnemy.RSBattleEnemy_C.ResetCollisionHitWall // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsCollisionHitChara(bool bHit); // Function RSBattleEnemy.RSBattleEnemy_C.IsCollisionHitChara // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsCollisionHitWall(bool bHit); // Function RSBattleEnemy.RSBattleEnemy_C.IsCollisionHitWall // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetEnableDamageCollision(struct FString CollisionName, enum class ECollisionEnabled CollisionEnable); // Function RSBattleEnemy.RSBattleEnemy_C.SetEnableDamageCollision // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetWeakUIPoint(int32_t Index, struct FVector Point); // Function RSBattleEnemy.RSBattleEnemy_C.GetWeakUIPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void Is Brain Crash Dead State(bool IsBrainCrashDead); // Function RSBattleEnemy.RSBattleEnemy_C.Is Brain Crash Dead State // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void DeadStart(); // Function RSBattleEnemy.RSBattleEnemy_C.DeadStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsSeeThroughBreak(bool StealthSeeBreak, bool IsSeeBreak); // Function RSBattleEnemy.RSBattleEnemy_C.IsSeeThroughBreak // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsStateStealth(bool return); // Function RSBattleEnemy.RSBattleEnemy_C.IsStateStealth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetTargetCursorPoint(struct FVector Point); // Function RSBattleEnemy.RSBattleEnemy_C.GetTargetCursorPoint // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetTopTargetPoint(struct FVector Point); // Function RSBattleEnemy.RSBattleEnemy_C.GetTopTargetPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetWeakTargetPoint(struct FVector AttackerPos, struct FVector Point); // Function RSBattleEnemy.RSBattleEnemy_C.GetWeakTargetPoint // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetRangeActions(enum class Enum_EnemyRange RangeType, struct TArray<char> Actions); // Function RSBattleEnemy.RSBattleEnemy_C.GetRangeActions // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetStealthTargetActor(struct AActor* TargetActor); // Function RSBattleEnemy.RSBattleEnemy_C.GetStealthTargetActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetTargetRangeType(enum class Enum_EnemyRange RangeType); // Function RSBattleEnemy.RSBattleEnemy_C.GetTargetRangeType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void DeadAvatar(); // Function RSBattleEnemy.RSBattleEnemy_C.DeadAvatar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DeadDropItem(); // Function RSBattleEnemy.RSBattleEnemy_C.DeadDropItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInvisibleHPGauge(bool bInvisible); // Function RSBattleEnemy.RSBattleEnemy_C.SetInvisibleHPGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetInvisibleHPGauge(bool IsInvisible); // Function RSBattleEnemy.RSBattleEnemy_C.GetInvisibleHPGauge // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetRandomRangeLocationCore(struct FVector SrcLocation, struct FVector TargetLocation, float RangeMin, float RangeMax, bool CheckWall, struct ANavigationData* NaviData, struct FVector NewLocation, bool IsSuccess); // Function RSBattleEnemy.RSBattleEnemy_C.GetRandomRangeLocationCore // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetRandomRangeLocation(struct FVector SrcLocation, struct FVector TargetLocation, float RangeMin, float RangeMax, bool CheckWall, struct FVector NewLocation, bool IsSuccess); // Function RSBattleEnemy.RSBattleEnemy_C.GetRandomRangeLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsRangeArea(struct FVector HomePos, struct FVector CurPos, float Range, bool InRange); // Function RSBattleEnemy.RSBattleEnemy_C.IsRangeArea // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsHitWall(struct FVector Src, struct FVector dst, bool IsHit); // Function RSBattleEnemy.RSBattleEnemy_C.IsHitWall // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void CounterAttack(enum class HCSkillAttackType AttackType, struct AActor* attacker, bool IsHitWeek, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.CounterAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Stealth End(bool return); // Function RSBattleEnemy.RSBattleEnemy_C.Stealth End // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEnemySoundEnum(enum class Enum_EnemySound SoundEnum); // Function RSBattleEnemy.RSBattleEnemy_C.GetEnemySoundEnum // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetActionTime(char EnemyEnum, float Time); // Function RSBattleEnemy.RSBattleEnemy_C.GetActionTime // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCTTimer(char EnemyEnum, float Value); // Function RSBattleEnemy.RSBattleEnemy_C.SetCTTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCTTimer(char EnemyEnum, float LastTimer); // Function RSBattleEnemy.RSBattleEnemy_C.GetCTTimer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEnemyEnumLength(int32_t Length); // Function RSBattleEnemy.RSBattleEnemy_C.GetEnemyEnumLength // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void WeakHitStop(struct TArray<struct FHCHitResult> HitResult, bool IsMaterialChange); // Function RSBattleEnemy.RSBattleEnemy_C.WeakHitStop // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SeeThroughWeakSphereUseOnOff(bool on); // Function RSBattleEnemy.RSBattleEnemy_C.SeeThroughWeakSphereUseOnOff // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update Hit Damage Material Armor(float sec, float Time); // Function RSBattleEnemy.RSBattleEnemy_C.Update Hit Damage Material Armor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void HitDamageMaterialArmor(struct TArray<struct FHCHitResult> Result); // Function RSBattleEnemy.RSBattleEnemy_C.HitDamageMaterialArmor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LandCheck(bool IsLand); // Function RSBattleEnemy.RSBattleEnemy_C.LandCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEnemyAssetLoad(bool return); // Function RSBattleEnemy.RSBattleEnemy_C.OnEnemyAssetLoad // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRandomLocationCheckGroundHeight(float Top, float Bottom); // Function RSBattleEnemy.RSBattleEnemy_C.SetRandomLocationCheckGroundHeight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRandomLocationCheckGround(bool isCheck); // Function RSBattleEnemy.RSBattleEnemy_C.SetRandomLocationCheckGround // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsRandomLocationCheckGround(bool isCheck); // Function RSBattleEnemy.RSBattleEnemy_C.IsRandomLocationCheckGround // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeStealth(bool StealthSee, bool return); // Function RSBattleEnemy.RSBattleEnemy_C.ChangeStealth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OffStealth(bool return); // Function RSBattleEnemy.RSBattleEnemy_C.OffStealth // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsStealthEnable(bool return); // Function RSBattleEnemy.RSBattleEnemy_C.IsStealthEnable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateStealth(float sec); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateStealth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStealth(bool IsDirectly, bool return); // Function RSBattleEnemy.RSBattleEnemy_C.OnStealth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	float CalcFinalDamageByDefence(float Damage, struct AActor* attackActor); // Function RSBattleEnemy.RSBattleEnemy_C.CalcFinalDamageByDefence // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetHitObjectType(struct TArray<enum class EObjectTypeQuery> ObjectType); // Function RSBattleEnemy.RSBattleEnemy_C.GetHitObjectType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	bool IsIgnoreHitCheck(struct UPrimitiveComponent* pPrimitive, struct FVector hitPosition); // Function RSBattleEnemy.RSBattleEnemy_C.IsIgnoreHitCheck // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWeakComponent(); // Function RSBattleEnemy.RSBattleEnemy_C.SetWeakComponent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FVector GetDamagePartDir(struct UDamagePartCollisionComponent* DamagePart); // Function RSBattleEnemy.RSBattleEnemy_C.GetDamagePartDir // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void DebugWeakHitArea(); // Function RSBattleEnemy.RSBattleEnemy_C.DebugWeakHitArea // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsArmor(struct UPrimitiveComponent* Prim, bool return); // Function RSBattleEnemy.RSBattleEnemy_C.IsArmor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsMotionEnd(); // Function RSBattleEnemy.RSBattleEnemy_C.IsMotionEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetBaseMontage(struct UAnimMontage* BaseMontage); // Function RSBattleEnemy.RSBattleEnemy_C.GetBaseMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetBaseMontage(struct UAnimMontage* BaseMontage); // Function RSBattleEnemy.RSBattleEnemy_C.SetBaseMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDamageSuperArmor(bool return); // Function RSBattleEnemy.RSBattleEnemy_C.IsDamageSuperArmor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void isSuperArmor(bool bSuperArmor); // Function RSBattleEnemy.RSBattleEnemy_C.isSuperArmor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsMoveCheckDistance(bool return); // Function RSBattleEnemy.RSBattleEnemy_C.IsMoveCheckDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetMoveCheck(bool return); // Function RSBattleEnemy.RSBattleEnemy_C.SetMoveCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void WeakUiDamageHit(); // Function RSBattleEnemy.RSBattleEnemy_C.WeakUiDamageHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SubEnemyListManager(); // Function RSBattleEnemy.RSBattleEnemy_C.SubEnemyListManager // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetTargetLockHate(struct AActor* Actor); // Function RSBattleEnemy.RSBattleEnemy_C.GetTargetLockHate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ResetTargetHate(); // Function RSBattleEnemy.RSBattleEnemy_C.ResetTargetHate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetTargetHate(struct TArray<struct AActor*> Target); // Function RSBattleEnemy.RSBattleEnemy_C.GetTargetHate // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTargetHate(struct AActor* TargetActor); // Function RSBattleEnemy.RSBattleEnemy_C.SetTargetHate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHomeLocation(); // Function RSBattleEnemy.RSBattleEnemy_C.SetHomeLocation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackWeakHit(struct ARSBattlePlayer_C* Player, struct FHCHitResult Result); // Function RSBattleEnemy.RSBattleEnemy_C.SetAttackWeakHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMoveTo(); // Function RSBattleEnemy.RSBattleEnemy_C.SetMoveTo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcTick(); // Function RSBattleEnemy.RSBattleEnemy_C.CalcTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void WeakObjectUIIconUpdate(int32_t Index, bool Draw); // Function RSBattleEnemy.RSBattleEnemy_C.WeakObjectUIIconUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FVector GetBrainCrashEffectLocation(); // Function RSBattleEnemy.RSBattleEnemy_C.GetBrainCrashEffectLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	bool SetEventVisible(bool Visible); // Function RSBattleEnemy.RSBattleEnemy_C.SetEventVisible // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsTargetEnemy(); // Function RSBattleEnemy.RSBattleEnemy_C.IsTargetEnemy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void DedugDrawWeakObjectRecommend(); // Function RSBattleEnemy.RSBattleEnemy_C.DedugDrawWeakObjectRecommend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RemoveWeakObjectRecommend(struct FWeakObjectRecommendEnemy Param); // Function RSBattleEnemy.RSBattleEnemy_C.RemoveWeakObjectRecommend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddWeakObjectRecommend(struct FWeakObjectRecommendEnemy Param); // Function RSBattleEnemy.RSBattleEnemy_C.AddWeakObjectRecommend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void WeakObjectRecommend(); // Function RSBattleEnemy.RSBattleEnemy_C.WeakObjectRecommend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void WeakDamageHitCheck(struct TArray<struct FHCHitResult> Result); // Function RSBattleEnemy.RSBattleEnemy_C.WeakDamageHitCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateWeakUIDisplay(); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateWeakUIDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAiTimer(char Enum, bool return); // Function RSBattleEnemy.RSBattleEnemy_C.SetAiTimer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAiTimer(char Enum, float AiTimer); // Function RSBattleEnemy.RSBattleEnemy_C.GetAiTimer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetMoveWalk(bool return); // Function RSBattleEnemy.RSBattleEnemy_C.SetMoveWalk // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMoveRun(bool return); // Function RSBattleEnemy.RSBattleEnemy_C.SetMoveRun // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsMoveCheck(bool return); // Function RSBattleEnemy.RSBattleEnemy_C.IsMoveCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateMoveTimer(float sec); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateMoveTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DeadCleanup(); // Function RSBattleEnemy.RSBattleEnemy_C.DeadCleanup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEvent(bool return); // Function RSBattleEnemy.RSBattleEnemy_C.IsEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsNotTarget(bool return); // Function RSBattleEnemy.RSBattleEnemy_C.IsNotTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void WeakMaterialHitDamage(struct TArray<struct FHCHitResult> Result); // Function RSBattleEnemy.RSBattleEnemy_C.WeakMaterialHitDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsHitPart(struct UPrimitiveComponent* Primitive, int32_t no, bool return); // Function RSBattleEnemy.RSBattleEnemy_C.IsHitPart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsHitWeak(struct UPrimitiveComponent* Primitive, struct FHCSkillCommonInfo skillInfo, bool return); // Function RSBattleEnemy.RSBattleEnemy_C.IsHitWeak // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void WeakMaterialEmissiveRate(float sec); // Function RSBattleEnemy.RSBattleEnemy_C.WeakMaterialEmissiveRate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void WeakMaterialRate(float DeltaSec, bool Ret); // Function RSBattleEnemy.RSBattleEnemy_C.WeakMaterialRate // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DamageMontage(struct TArray<struct FHCHitResult> Result, bool Damage_Enable); // Function RSBattleEnemy.RSBattleEnemy_C.DamageMontage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NotDamageMontage(bool return); // Function RSBattleEnemy.RSBattleEnemy_C.NotDamageMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void StopDamageMontage(); // Function RSBattleEnemy.RSBattleEnemy_C.StopDamageMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMoveRootMotion(bool on); // Function RSBattleEnemy.RSBattleEnemy_C.SetMoveRootMotion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainFieldEnd(bool MoveBrainField, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.OnBrainFieldEnd // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainFieldStart(bool MoveBrainField, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.OnBrainFieldStart // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateBrainCrashMotionCheck(float Timer); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateBrainCrashMotionCheck // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsFloodedAnimRootMotionScale(bool bool); // Function RSBattleEnemy.RSBattleEnemy_C.IsFloodedAnimRootMotionScale // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateFloodedAnimRootMotionScale(); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateFloodedAnimRootMotionScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAnimRootMotionScale(float Scale); // Function RSBattleEnemy.RSBattleEnemy_C.SetAnimRootMotionScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDamageAnim(bool DamageEnd, bool DamageDownEnd); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateDamageAnim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDamageElecDown(enum class EHCBadState bad); // Function RSBattleEnemy.RSBattleEnemy_C.SetDamageElecDown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAttackActorHit(struct FHCHitResult HitResult, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.OnAttackActorHit // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetEnemyTargetBattle(); // Function RSBattleEnemy.RSBattleEnemy_C.ResetEnemyTargetBattle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Set Enemy Target Battle(); // Function RSBattleEnemy.RSBattleEnemy_C.Set Enemy Target Battle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAiDataTableString(char Enum, struct FString Param); // Function RSBattleEnemy.RSBattleEnemy_C.GetAiDataTableString // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetAiDataTable(char Enum, bool NoProblemNotFound, struct FAiParamEnemy Param); // Function RSBattleEnemy.RSBattleEnemy_C.GetAiDataTable // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void AddEnemyListManager(); // Function RSBattleEnemy.RSBattleEnemy_C.AddEnemyListManager // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FlyUp(float sec); // Function RSBattleEnemy.RSBattleEnemy_C.FlyUp // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPsychicObjectCombo(struct FHCHitResult HCHitResult, bool return); // Function RSBattleEnemy.RSBattleEnemy_C.IsPsychicObjectCombo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CalcFloatScale(struct TArray<float> Num, float Scale, struct TArray<float> return); // Function RSBattleEnemy.RSBattleEnemy_C.CalcFloatScale // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CalcIntegerScale(struct TArray<int32_t> Num, float Scale, struct TArray<int32_t> return); // Function RSBattleEnemy.RSBattleEnemy_C.CalcIntegerScale // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ChangeRagdollBoneName(); // Function RSBattleEnemy.RSBattleEnemy_C.ChangeRagdollBoneName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRotationRate(float Rate, bool Reset); // Function RSBattleEnemy.RSBattleEnemy_C.SetRotationRate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRagdollDamage(struct TArray<struct FHCHitResult> Result); // Function RSBattleEnemy.RSBattleEnemy_C.SetRagdollDamage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddRagdollPower(struct FName Name, struct FVector Power); // Function RSBattleEnemy.RSBattleEnemy_C.AddRagdollPower // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPhysics(struct FName Name, bool on, bool IncludeSelf); // Function RSBattleEnemy.RSBattleEnemy_C.SetPhysics // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDeadBoss(float sec); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateDeadBoss // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateMotionFootLock(float sec); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateMotionFootLock // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsMotionFootParam(enum class Enum_EnemyMotionParam MotionParam, bool Ret); // Function RSBattleEnemy.RSBattleEnemy_C.IsMotionFootParam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetMotionFootParamCheck(struct TArray<bool> MotionParam); // Function RSBattleEnemy.RSBattleEnemy_C.GetMotionFootParamCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateMotionFootParam(float sec); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateMotionFootParam // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainCrashDamage(); // Function RSBattleEnemy.RSBattleEnemy_C.BrainCrashDamage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateTargetDistance(); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateTargetDistance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	float TimerDecrement(float Base, float Time); // Function RSBattleEnemy.RSBattleEnemy_C.TimerDecrement // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsDamageAngle(struct FVector Location, float Angle, float RotZ, bool Ret); // Function RSBattleEnemy.RSBattleEnemy_C.IsDamageAngle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetDamageDownAnim(enum class EnemyDamageDownAnimKind Damage); // Function RSBattleEnemy.RSBattleEnemy_C.SetDamageDownAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDamageAnim(enum class EnemyDamageAnimKind alive, struct UPrimitiveComponent* Primitive); // Function RSBattleEnemy.RSBattleEnemy_C.SetDamageAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetParamBasicAccumulation(enum class EEnemyDamageType Damage, float Accumulation); // Function RSBattleEnemy.RSBattleEnemy_C.GetParamBasicAccumulation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void Get Param Table Resistance(enum class EEnemyDamageType Damage, float Resistance); // Function RSBattleEnemy.RSBattleEnemy_C.Get Param Table Resistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetAliveAnim(enum class EnemyAliveAnimKind alive); // Function RSBattleEnemy.RSBattleEnemy_C.SetAliveAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RequestDamageMotion(struct FRotator Rot, struct FVector hitPosition, struct FVector HitDir, bool IsSideDamage, struct UPrimitiveComponent* Primitive, bool PsychicObjectCombo, struct FHCSkillCommonInfo skill, struct AActor* attacker, struct AActor* AttackObj, bool WasStartDamage); // Function RSBattleEnemy.RSBattleEnemy_C.RequestDamageMotion // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayAnimDamageMontage(struct UAnimMontage* Montage); // Function RSBattleEnemy.RSBattleEnemy_C.PlayAnimDamageMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NoNavMoveRotation(float sec); // Function RSBattleEnemy.RSBattleEnemy_C.NoNavMoveRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsTargetBoss(bool Ret); // Function RSBattleEnemy.RSBattleEnemy_C.IsTargetBoss // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateEnemyHp(bool BossOnly); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateEnemyHp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FlyDown(bool IsEnd); // Function RSBattleEnemy.RSBattleEnemy_C.FlyDown // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DamageDownCheck(float Timer); // Function RSBattleEnemy.RSBattleEnemy_C.DamageDownCheck // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDamageDownWait(bool return); // Function RSBattleEnemy.RSBattleEnemy_C.IsDamageDownWait // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetBrainCrashDamageLocation(struct FVector WorldLocation); // Function RSBattleEnemy.RSBattleEnemy_C.GetBrainCrashDamageLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FVector GetTargetCursorLocation(); // Function RSBattleEnemy.RSBattleEnemy_C.GetTargetCursorLocation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEnemySound(enum class Enum_EnemySound return); // Function RSBattleEnemy.RSBattleEnemy_C.GetEnemySound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void DamageMotionEnd(float DeltaTime); // Function RSBattleEnemy.RSBattleEnemy_C.DamageMotionEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MainTick(float DeltaSeconds, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.MainTick // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDamagePartHit(struct FHCHitResult Result, int32_t da,age); // Function RSBattleEnemy.RSBattleEnemy_C.DebugDamagePartHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsLongDistance(bool return); // Function RSBattleEnemy.RSBattleEnemy_C.IsLongDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void OnHitDamageCall(struct TArray<struct FHCHitResult> Result, bool Ret); // Function RSBattleEnemy.RSBattleEnemy_C.OnHitDamageCall // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsMiddleDistance(bool return); // Function RSBattleEnemy.RSBattleEnemy_C.IsMiddleDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsShortDistance(bool return); // Function RSBattleEnemy.RSBattleEnemy_C.IsShortDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsDistanceAngleCheck(struct AActor* Target, struct FVector TargetLocation, float Range, float Angle, struct FRotator Rot, bool noHeight, struct FVector selfLocation, bool selfLocationOn, bool bool); // Function RSBattleEnemy.RSBattleEnemy_C.IsDistanceAngleCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetParamEnemy(); // Function RSBattleEnemy.RSBattleEnemy_C.SetParamEnemy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateLayoutStartUp(); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateLayoutStartUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTargetPlayer(); // Function RSBattleEnemy.RSBattleEnemy_C.SetTargetPlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableMoveRange(bool return); // Function RSBattleEnemy.RSBattleEnemy_C.IsEnableMoveRange // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void On Hit Damage(struct TArray<struct FHCHitResult> Result); // Function RSBattleEnemy.RSBattleEnemy_C.On Hit Damage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsBattling(bool bBatting); // Function RSBattleEnemy.RSBattleEnemy_C.IsBattling // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetBattling(bool bBattling, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.SetBattling // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnRevive(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.OnRevive // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnDead(bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.OnDead // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnDamageActorHit(struct FHCHitResult HitResult, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.OnDamageActorHit // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetHeadLocation(struct FVector Location); // Function RSBattleEnemy.RSBattleEnemy_C.GetHeadLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAbleMove(bool IsAble); // Function RSBattleEnemy.RSBattleEnemy_C.IsAbleMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndMoveBackward(bool Result); // Function RSBattleEnemy.RSBattleEnemy_C.EndMoveBackward // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginMoveBackward(bool Result); // Function RSBattleEnemy.RSBattleEnemy_C.BeginMoveBackward // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetIsBattleMode(bool IsBattleMode); // Function RSBattleEnemy.RSBattleEnemy_C.GetIsBattleMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void StartDamageAnimFunc(struct FHCHitResult HitResult, int32_t DamageValue, bool IsDown, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.StartDamageAnimFunc // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnDeadCoreEnemy(); // Function RSBattleEnemy.RSBattleEnemy_C.OnDeadCoreEnemy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartDeadStaging(); // Function RSBattleEnemy.RSBattleEnemy_C.StartDeadStaging // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDeadStaging(float DeltaSeconds, bool dummy); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateDeadStaging // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnDiscovery(); // Function RSBattleEnemy.RSBattleEnemy_C.OnDiscovery // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnUnDiscovery(); // Function RSBattleEnemy.RSBattleEnemy_C.OnUnDiscovery // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void 00_SetParameterDefaultSearchAngle(); // Function RSBattleEnemy.RSBattleEnemy_C.00_SetParameterDefaultSearchAngle // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void 01_SetParameterDefaultSearchRange(); // Function RSBattleEnemy.RSBattleEnemy_C.01_SetParameterDefaultSearchRange // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void 02_SetParameterDefaultSensingArea(); // Function RSBattleEnemy.RSBattleEnemy_C.02_SetParameterDefaultSensingArea // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void 03_SetParameterDefaultCaptureArea(); // Function RSBattleEnemy.RSBattleEnemy_C.03_SetParameterDefaultCaptureArea // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void 04_SetParameterDefaultTerritoryArea(); // Function RSBattleEnemy.RSBattleEnemy_C.04_SetParameterDefaultTerritoryArea // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void 10_SetParameterDefaultRepopTime(); // Function RSBattleEnemy.RSBattleEnemy_C.10_SetParameterDefaultRepopTime // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void 11_SetParameterDefaultRepopRange(); // Function RSBattleEnemy.RSBattleEnemy_C.11_SetParameterDefaultRepopRange // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void 12_SetParameterDefaultRepopTimeTerritory(); // Function RSBattleEnemy.RSBattleEnemy_C.12_SetParameterDefaultRepopTimeTerritory // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainCrashStart(bool bBeginActor); // Function RSBattleEnemy.RSBattleEnemy_C.OnBrainCrashStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainCrashDamage(); // Function RSBattleEnemy.RSBattleEnemy_C.OnBrainCrashDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainCrashDead(); // Function RSBattleEnemy.RSBattleEnemy_C.OnBrainCrashDead // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainCrashEnd(bool bBeginActor, struct UAnimMontage* PlayerEndMontage); // Function RSBattleEnemy.RSBattleEnemy_C.OnBrainCrashEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BndEvt__CharactersParameter_K2Node_ComponentBoundEvent_0_BrainCrashAccessOffDelegate__DelegateSignature(); // Function RSBattleEnemy.RSBattleEnemy_C.BndEvt__CharactersParameter_K2Node_ComponentBoundEvent_0_BrainCrashAccessOffDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void BndEvt__CharactersParameter_K2Node_ComponentBoundEvent_1_BrainCrashAccessOnDelegate__DelegateSignature(); // Function RSBattleEnemy.RSBattleEnemy_C.BndEvt__CharactersParameter_K2Node_ComponentBoundEvent_1_BrainCrashAccessOnDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void HideCore(); // Function RSBattleEnemy.RSBattleEnemy_C.HideCore // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function RSBattleEnemy.RSBattleEnemy_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function RSBattleEnemy.RSBattleEnemy_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void DamageAfter(struct TArray<struct FHCHitResult> Result); // Function RSBattleEnemy.RSBattleEnemy_C.DamageAfter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSuperArmor(bool bSuperArmor, struct FName ClaimantName); // Function RSBattleEnemy.RSBattleEnemy_C.SetSuperArmor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BndEvt__DamageAccept_K2Node_ComponentBoundEvent_0_DamageHitDelegate__DelegateSignature(struct FHCHitResult HitResult, int32_t Damage); // Function RSBattleEnemy.RSBattleEnemy_C.BndEvt__DamageAccept_K2Node_ComponentBoundEvent_0_DamageHitDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1685580
	void BndEvt__CharactersParameter_K2Node_ComponentBoundEvent_0_BadStateOnDelegate__DelegateSignature(enum class EHCBadState bad_state, struct AActor* attacker); // Function RSBattleEnemy.RSBattleEnemy_C.BndEvt__CharactersParameter_K2Node_ComponentBoundEvent_0_BadStateOnDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void BndEvt__CharactersParameter_K2Node_ComponentBoundEvent_1_BadStateOffDelegate__DelegateSignature(enum class EHCBadState bad_state); // Function RSBattleEnemy.RSBattleEnemy_C.BndEvt__CharactersParameter_K2Node_ComponentBoundEvent_1_BadStateOffDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void BadStateEffectOn(enum class EHCBadState bad); // Function RSBattleEnemy.RSBattleEnemy_C.BadStateEffectOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function RSBattleEnemy.RSBattleEnemy_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void EventPhysicsIdling(float IdlingSec, float IdleRestoreDelay); // Function RSBattleEnemy.RSBattleEnemy_C.EventPhysicsIdling // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function RSBattleEnemy.RSBattleEnemy_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1685580
	void ResetTargetHateEvent(); // Function RSBattleEnemy.RSBattleEnemy_C.ResetTargetHateEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveMontageBlendingOut(struct UAnimMontage* Montage, bool Interrupted); // Function RSBattleEnemy.RSBattleEnemy_C.ReceiveMontageBlendingOut // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveDestroyed(); // Function RSBattleEnemy.RSBattleEnemy_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void setEmPosDiscover(struct FVector discoverPos); // Function RSBattleEnemy.RSBattleEnemy_C.setEmPosDiscover // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFellOutOfWorld(); // Function RSBattleEnemy.RSBattleEnemy_C.OnFellOutOfWorld // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnDeadBrainCrash(); // Function RSBattleEnemy.RSBattleEnemy_C.OnDeadBrainCrash // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSpawnStartCharaCondition(); // Function RSBattleEnemy.RSBattleEnemy_C.OnSpawnStartCharaCondition // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnGeneralFloat(); // Function RSBattleEnemy.RSBattleEnemy_C.OnGeneralFloat // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnGeneralEnemyBreak(); // Function RSBattleEnemy.RSBattleEnemy_C.OnGeneralEnemyBreak // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAbsorption(); // Function RSBattleEnemy.RSBattleEnemy_C.OnAbsorption // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFinishSpawnWaitDelayTimer(); // Function RSBattleEnemy.RSBattleEnemy_C.OnFinishSpawnWaitDelayTimer // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePreviousElapsedTime(float ElapsedTime); // Function RSBattleEnemy.RSBattleEnemy_C.UpdatePreviousElapsedTime // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddResetSecondRate(); // Function RSBattleEnemy.RSBattleEnemy_C.AddResetSecondRate // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateOutRangeFade_Native(float ToTargetLenge, bool ForceDisp); // Function RSBattleEnemy.RSBattleEnemy_C.UpdateOutRangeFade_Native // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_RSBattleEnemy(int32_t EntryPoint); // Function RSBattleEnemy.RSBattleEnemy_C.ExecuteUbergraph_RSBattleEnemy // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

