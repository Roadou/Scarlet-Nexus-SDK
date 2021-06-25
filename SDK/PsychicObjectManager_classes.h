// BlueprintGeneratedClass PsychicObjectManager.PsychicObjectManager_C
// Size: 0x10e0 (Inherited: 0x478)
struct APsychicObjectManager_C : APsychicObjectManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x478(0x08)
	struct UBP_PsychicObjectManagerAsyncComponent_C* BP_PsychicObjectManagerAsyncComponent; // 0x480(0x08)
	struct UBPC_PsychicBattle_C* BPC_PsychicBattle; // 0x488(0x08)
	struct UBP_PsychicObjectSearchComponent_C* BP_PsychicObjectSearchComponent; // 0x490(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x498(0x08)
	struct AHUDMainGame_C* HUDMainGame; // 0x4a0(0x08)
	struct UPsychicObjectInfo_C* workObjInfo; // 0x4a8(0x08)
	struct TArray<struct UPsychicObjectInfo_C*> PsychicObjectListOld; // 0x4b0(0x10)
	int32_t PsychicObjectRegNo; // 0x4c0(0x04)
	char pad_4C4[0x4]; // 0x4c4(0x04)
	struct ARsBattleHero_C* mainPlayer; // 0x4c8(0x08)
	struct ABP_PsychicObjectBasic_C* workPsyObj; // 0x4d0(0x08)
	bool bBrainField; // 0x4d8(0x01)
	bool bBrainFieldSearchPause; // 0x4d9(0x01)
	char pad_4DA[0x6]; // 0x4da(0x06)
	struct ARsBattleHero_C* BrainFieldOwner; // 0x4e0(0x08)
	bool bPlayerBrainField; // 0x4e8(0x01)
	char pad_4E9[0x3]; // 0x4e9(0x03)
	float SpawnTileSize; // 0x4ec(0x04)
	int32_t SpawnSideTileNum; // 0x4f0(0x04)
	struct FVector SpawnOriginPos; // 0x4f4(0x0c)
	struct UDataTable* SpawnDataTable; // 0x500(0x08)
	struct TArray<struct ABP_PsychicObjectBasic_C*> BrainFieldObjectList; // 0x508(0x10)
	struct TArray<int32_t> TileGroupList; // 0x518(0x10)
	struct TArray<float> SpawnTimeList; // 0x528(0x10)
	struct TArray<int32_t> SpawnIndexList; // 0x538(0x10)
	struct TArray<struct FTransform> SpawnTransformList; // 0x548(0x10)
	struct TArray<struct ABP_PsychicObjectBasic_C*> DestroyList; // 0x558(0x10)
	float SpawnTimer; // 0x568(0x04)
	int32_t spawnIndex; // 0x56c(0x04)
	int32_t CheckBrnObjNum; // 0x570(0x04)
	int32_t checkBrnObjIndex; // 0x574(0x04)
	float SpawnTimeMin; // 0x578(0x04)
	float SpawnTimeMax; // 0x57c(0x04)
	bool bSpareReady; // 0x580(0x01)
	char pad_581[0x7]; // 0x581(0x07)
	struct FBrainFieldPsyObjDataTable SpawnDataList; // 0x588(0x30)
	struct TArray<struct ABP_PsychicObjectBasic_C*> SpareThrowList; // 0x5b8(0x10)
	struct TArray<struct ABP_PsychicObjectBasic_C*> SpareDropList; // 0x5c8(0x10)
	struct TArray<struct ABP_PsychicObjectBasic_C*> SpareSwingList; // 0x5d8(0x10)
	int32_t TotalWeightThrow; // 0x5e8(0x04)
	int32_t TotalWeightDrop; // 0x5ec(0x04)
	int32_t TotalWeightSwing; // 0x5f0(0x04)
	char pad_5F4[0x4]; // 0x5f4(0x04)
	struct TArray<int32_t> SpawnWeightThrowList; // 0x5f8(0x10)
	struct TArray<int32_t> SpawnWeightDropList; // 0x608(0x10)
	struct TArray<int32_t> SpawnWeightSwingList; // 0x618(0x10)
	float EmissionRateSign; // 0x628(0x04)
	float EmissionLoopTime; // 0x62c(0x04)
	float EmissionRateMax; // 0x630(0x04)
	float EmissionRateMin; // 0x634(0x04)
	float checkRangeExtra; // 0x638(0x04)
	float checkRangeSq; // 0x63c(0x04)
	int32_t checkPsyObjNum; // 0x640(0x04)
	int32_t checkPsyObjIndex; // 0x644(0x04)
	struct TArray<struct FSPsychicCaptureMaterial> CaptureMaterialParameterList; // 0x648(0x10)
	struct TArray<struct ABP_PsychicObjectBasic_C*> TransferObjList; // 0x658(0x10)
	struct TArray<int32_t> TransferIdList; // 0x668(0x10)
	struct TArray<struct ABP_PsychicObjectBasic_C*> PsychicClusterList; // 0x678(0x10)
	struct TArray<struct FString> EmPsyObjOwnerList; // 0x688(0x10)
	struct TArray<struct TSoftClassPtr<UObject>> EmPsyObjClassList; // 0x698(0x10)
	struct TArray<struct ABP_PsychicObjectBasic_C*> EmPsyObjList; // 0x6a8(0x10)
	struct TArray<struct ABP_PsychicObjectBasic_C*> EmPsyObjDestroyList; // 0x6b8(0x10)
	bool bTestLevelSequence; // 0x6c8(0x01)
	char pad_6C9[0x3]; // 0x6c9(0x03)
	int32_t TestLevelSequenceIndex; // 0x6cc(0x04)
	struct ARSBattleCharacter_C* TestLevelSequenceEnemy; // 0x6d0(0x08)
	struct ABP_PsychicObjectBasic_C* TestLevelSequenceObj; // 0x6d8(0x08)
	struct FGameTimer TestLevelSequenceTimer; // 0x6e0(0x0c)
	bool bDtPsyObjCommonParameter; // 0x6ec(0x01)
	char pad_6ED[0x3]; // 0x6ed(0x03)
	struct FPsychicObjectCommonParameter DtPsyObjCommonParameter; // 0x6f0(0x170)
	bool bDtPsyObjSizeParameter; // 0x860(0x01)
	char pad_861[0x7]; // 0x861(0x07)
	struct TArray<struct FName> RnPsyObjSizeParameter; // 0x868(0x10)
	struct TArray<struct FPsychicObjectSizeParameter> DtPsyObjSizeParameter; // 0x878(0x10)
	bool bDtPsyObjPhysicParameter; // 0x888(0x01)
	char pad_889[0x7]; // 0x889(0x07)
	struct TArray<struct FName> RnPsyObjPhysicParameter; // 0x890(0x10)
	struct TArray<struct FPsychicObjectPhysicParameter> DtPsyObjPhysicParameter; // 0x8a0(0x10)
	bool bDtPsyObjAttackParameter; // 0x8b0(0x01)
	char pad_8B1[0x7]; // 0x8b1(0x07)
	struct TArray<struct FName> RnPsyObjAttackParameter; // 0x8b8(0x10)
	struct TArray<struct FHCCollisionCommonInfo> DtPsyObjAttackParamCommonInfoList; // 0x8c8(0x10)
	struct TArray<struct FHCSkillCommonInfo> DtPsyObjAttackParamSkillInfoList; // 0x8d8(0x10)
	bool bDtUnqObjParameter; // 0x8e8(0x01)
	char pad_8E9[0x7]; // 0x8e9(0x07)
	struct TArray<struct FName> RnUnqObjParameter; // 0x8f0(0x10)
	struct TArray<struct FUniqueObjectCommonParameter> DtUnqObjParameter; // 0x900(0x10)
	bool bDtUnqObjCameraParameter; // 0x910(0x01)
	char pad_911[0x7]; // 0x911(0x07)
	struct TArray<struct FName> RnUnqObjCameraParameter; // 0x918(0x10)
	struct TArray<struct FUniqueObjectCameraParameter> DtUnqObjCameraParameter; // 0x928(0x10)
	bool bDtPsychicGrabMovement; // 0x938(0x01)
	char pad_939[0x7]; // 0x939(0x07)
	struct FPsychicGrabMovementData DtPsychicGrabMovement; // 0x940(0xb0)
	bool bDtPsychicGrabMovementSize; // 0x9f0(0x01)
	char pad_9F1[0x7]; // 0x9f1(0x07)
	struct TArray<struct FPsychicGrabMovementSizeData> DtPsychicGrabMovementSize; // 0x9f8(0x10)
	bool bDtPsychicGrabParameter; // 0xa08(0x01)
	char pad_A09[0x3]; // 0xa09(0x03)
	struct FPsychicGrabParameterData DtPsychicGrabParameter; // 0xa0c(0x34)
	bool bDtPsychicGrabParameterSize; // 0xa40(0x01)
	char pad_A41[0x7]; // 0xa41(0x07)
	struct TArray<struct FPsychicGrabParameterSizeData> DtPsychicGrabParameterSize; // 0xa48(0x10)
	bool bDtGrabPos; // 0xa58(0x01)
	char pad_A59[0x7]; // 0xa59(0x07)
	struct TArray<struct FPsychicGrabPosData> DtGrabPosList; // 0xa60(0x10)
	bool bDtPsychicObjectData; // 0xa70(0x01)
	char pad_A71[0x7]; // 0xa71(0x07)
	struct TArray<struct FPsychicObjectData> DtPsychicObjectDataList; // 0xa78(0x10)
	bool bDtPsychicCaptureData; // 0xa88(0x01)
	char pad_A89[0x7]; // 0xa89(0x07)
	struct TArray<struct FPsychicObjectCaptureParameter> DtPsychicCaptureData; // 0xa90(0x10)
	bool bRespawnUpdate; // 0xaa0(0x01)
	bool bInstantRespawn; // 0xaa1(0x01)
	char pad_AA2[0x6]; // 0xaa2(0x06)
	struct TArray<struct ABP_PsychicObjectBasic_C*> RespawnPsyObjList; // 0xaa8(0x10)
	struct TArray<struct ABP_PsychicObjectBasic_C*> RespawnUnqObjList; // 0xab8(0x10)
	struct TArray<float> RespawnPsyTimeList; // 0xac8(0x10)
	struct TArray<float> RespawnUnqTimeList; // 0xad8(0x10)
	float RespawnTimer; // 0xae8(0x04)
	float RespawnRestrictRange; // 0xaec(0x04)
	float RespawnRestrictRangeSq; // 0xaf0(0x04)
	float RespawnRequeueTime; // 0xaf4(0x04)
	struct TArray<struct ABP_PsychicObjectBasic_C*> PsychicBulletFreeList; // 0xaf8(0x10)
	struct TArray<struct ABP_PsychicObjectBasic_C*> PsychicBulletWorkList; // 0xb08(0x10)
	int32_t PsychicBulletIndex; // 0xb18(0x04)
	int32_t PsychicBulletMagazine; // 0xb1c(0x04)
	int32_t PsychicBulletMax; // 0xb20(0x04)
	int32_t PsychicBulletCount; // 0xb24(0x04)
	bool bHidePsyObj; // 0xb28(0x01)
	char pad_B29[0x7]; // 0xb29(0x07)
	struct TArray<struct AActor*> PsyObjHiddenList; // 0xb30(0x10)
	bool bBattleDisable; // 0xb40(0x01)
	bool bUpdateFocus; // 0xb41(0x01)
	char pad_B42[0x2]; // 0xb42(0x02)
	float FocusSearchRadiusRate; // 0xb44(0x04)
	float FocusSearchAngle; // 0xb48(0x04)
	char pad_B4C[0x4]; // 0xb4c(0x04)
	struct ABP_PsychicObjectBasic_C* FocusPsychicObject; // 0xb50(0x08)
	struct TArray<struct APsychicAnimObject_C*> AinmObjList; // 0xb58(0x10)
	struct TArray<struct APsychicAnimObject_C*> AnimObjClearList; // 0xb68(0x10)
	int32_t AnimObjNum; // 0xb78(0x04)
	char pad_B7C[0x4]; // 0xb7c(0x04)
	struct TArray<struct TSoftObjectPtr<UAnimMontage>> UniqueObjectMontageList; // 0xb80(0x10)
	struct FMulticastInlineDelegate UniqueInputEnd; // 0xb90(0x10)
	bool bUniqueObjectInput; // 0xba0(0x01)
	char pad_BA1[0x7]; // 0xba1(0x07)
	struct ABP_PsychicObjectBasic_C* FocusUniqueObject; // 0xba8(0x08)
	struct ABP_MapGimmickAttackObjectBase_C* FocusMapGimmick; // 0xbb0(0x08)
	bool bFocusUnique; // 0xbb8(0x01)
	bool bFocusUniquePsy; // 0xbb9(0x01)
	bool bFocusUniqueMap; // 0xbba(0x01)
	char pad_BBB[0x5]; // 0xbbb(0x05)
	struct ABP_PsychicObjectBasic_C* CapturePsychicObjectOld; // 0xbc0(0x08)
	struct ABP_PsychicObjectBasic_C* UniqueInputObject; // 0xbc8(0x08)
	struct TArray<struct ABP_PsychicObjectBasic_C*> PsychicBulletSbFreeList; // 0xbd0(0x10)
	struct TArray<struct ABP_PsychicObjectBasic_C*> PsychicBulletSbWorkList; // 0xbe0(0x10)
	int32_t PsychicBulletSbMagazine; // 0xbf0(0x04)
	int32_t PsychicBulletSbMax; // 0xbf4(0x04)
	int32_t PsychicBulletSbCount; // 0xbf8(0x04)
	char pad_BFC[0x4]; // 0xbfc(0x04)
	struct TArray<struct ABP_PsychicObjectBasic_C*> PsychicBulletSrFreeList; // 0xc00(0x10)
	struct TArray<struct ABP_PsychicObjectBasic_C*> PsychicBulletSrWorkList; // 0xc10(0x10)
	int32_t PsychicBulletSrMagazine; // 0xc20(0x04)
	int32_t PsychicBulletSrMax; // 0xc24(0x04)
	int32_t PsychicBulletSrCount; // 0xc28(0x04)
	bool bDebugDrawBulletInfo; // 0xc2c(0x01)
	char pad_C2D[0x3]; // 0xc2d(0x03)
	struct TArray<struct FUniqueObjectElectricPoleEffectParameter> ElectricPoleEffectList; // 0xc30(0x10)
	struct TArray<bool> bPsyObjSoundDt; // 0xc40(0x10)
	struct TArray<struct FPsychicObjectSoundData2> PsyObjSoundDtList; // 0xc50(0x10)
	struct ABP_PsychicObjectBasic_C* CaptureEnemyObjectOld; // 0xc60(0x08)
	bool bCaptureNrmPlayer; // 0xc68(0x01)
	bool bCaptureNrmObject; // 0xc69(0x01)
	bool bCaptureNrm; // 0xc6a(0x01)
	bool bCaptureUnqObject; // 0xc6b(0x01)
	bool bCaptureUnqPlayer; // 0xc6c(0x01)
	bool bCaptureUnq; // 0xc6d(0x01)
	bool bCopyPsyObj; // 0xc6e(0x01)
	bool bCopyPsyObjPause; // 0xc6f(0x01)
	bool bCopyPsyObjUpdate; // 0xc70(0x01)
	bool bDbCopyPsyObjPrint; // 0xc71(0x01)
	char pad_C72[0x2]; // 0xc72(0x02)
	int32_t CopyPsyObjKeepMax; // 0xc74(0x04)
	struct TArray<struct ABP_PsychicObjectBasic_C*> CopyPsyObjClassList; // 0xc78(0x10)
	struct TArray<struct ABP_PsychicObjectBasic_C*> CopyPsyObjList; // 0xc88(0x10)
	struct TArray<struct ABP_PsychicObjectBasic_C*> CopyPsyObjList2; // 0xc98(0x10)
	struct ABP_PsychicObjectBasic_C* CopyPsychicObject0; // 0xca8(0x08)
	struct ABP_PsychicObjectBasic_C* CopyPsychicObject1; // 0xcb0(0x08)
	struct TArray<struct FUniqueObjectContainerEnemyInfo> DtEnemyInfoList; // 0xcb8(0x10)
	bool bDbDrawEaseCurve; // 0xcc8(0x01)
	bool bDbDrawPsyObjAttackSphere; // 0xcc9(0x01)
	enum class EEasingFunc dbEaseType; // 0xcca(0x01)
	char pad_CCB[0x1]; // 0xccb(0x01)
	float dbEaseExp; // 0xccc(0x04)
	bool bPsychicBattleInput; // 0xcd0(0x01)
	char pad_CD1[0x7]; // 0xcd1(0x07)
	struct TArray<struct ABP_PsychicObjectBasic_C*> ChildPsychicObjectList; // 0xcd8(0x10)
	struct TArray<struct FPsychicObjectBulletData> PsychicObjectBulletDataList; // 0xce8(0x10)
	struct ABP_PsychicObjectBasic_C* CapturedPsychicObject; // 0xcf8(0x08)
	struct ABP_PsychicObjectBasic_C* CapturedNpcObject; // 0xd00(0x08)
	struct ABP_PsychicObjectBasic_C* CapturedEnemyObject; // 0xd08(0x08)
	struct ABP_PsychicObjectBasic_C* AttackPsychicObject; // 0xd10(0x08)
	struct ABP_PsychicObjectBasic_C* AttackUniqueObject; // 0xd18(0x08)
	struct ABP_PsychicObjectBasic_C* AttackNpcObject; // 0xd20(0x08)
	struct ABP_PsychicObjectBasic_C* AttackEnemyObject; // 0xd28(0x08)
	struct ABP_PsychicObjectBasic_C* AttackEnemyUnique; // 0xd30(0x08)
	bool bCheckPsychicGaugeEnable; // 0xd38(0x01)
	char pad_D39[0x7]; // 0xd39(0x07)
	struct AActor* WeightGaugeObject; // 0xd40(0x08)
	struct AActor* WeightGaugeUnique; // 0xd48(0x08)
	struct AActor* WeightGaugeGimmick; // 0xd50(0x08)
	struct TArray<struct ARSBattleCharacter_C*> PsychicComboSlowCheckActorList; // 0xd58(0x10)
	bool bUniqueObjectUse; // 0xd68(0x01)
	char pad_D69[0x7]; // 0xd69(0x07)
	struct FString UniqueObjectUse; // 0xd70(0x10)
	struct TArray<struct AActor*> PsychicFieldActorList; // 0xd80(0x10)
	struct TArray<struct AActor*> PsychicFieldTargetList; // 0xd90(0x10)
	float PsychicFieldSearchRadius; // 0xda0(0x04)
	int32_t PsychicFieldObjectNum; // 0xda4(0x04)
	int32_t PsychicFieldCaptureNum; // 0xda8(0x04)
	bool bPsychicFieldCapture; // 0xdac(0x01)
	bool bPsychicFieldAttract; // 0xdad(0x01)
	bool bPsychicFieldAction; // 0xdae(0x01)
	bool bPsychicFieldSafety; // 0xdaf(0x01)
	struct TArray<enum class EPsychicObjectSizeType> PsychicFieldSizeList; // 0xdb0(0x10)
	struct TArray<float> PsychicFieldDelayTimeList; // 0xdc0(0x10)
	struct TArray<bool> PsychicFieldCaptureList; // 0xdd0(0x10)
	struct FGameTimer PsychicFieldCaptureTimer; // 0xde0(0x0c)
	float RespawnTimeNormal; // 0xdec(0x04)
	float RespawnTimeUnique; // 0xdf0(0x04)
	float RespawnTimeInstant; // 0xdf4(0x04)
	bool bDebugDrawRespawn; // 0xdf8(0x01)
	char pad_DF9[0x7]; // 0xdf9(0x07)
	struct TArray<struct TSoftClassPtr<UObject>> BrainFieldSafetySizeSoftList; // 0xe00(0x10)
	struct TSoftClassPtr<UObject> BrainFieldSafetySwingSoftList; // 0xe10(0x28)
	bool bDebugPsychicFieldPrint; // 0xe38(0x01)
	char pad_E39[0x7]; // 0xe39(0x07)
	struct TArray<enum class EPsychicObjectSizeType> EmPsyObjSizeList; // 0xe40(0x10)
	int32_t EmPsyObjSizeLen; // 0xe50(0x04)
	bool bEnPsyObjSafety; // 0xe54(0x01)
	bool DebugDrawEmPsyObj; // 0xe55(0x01)
	char pad_E56[0x2]; // 0xe56(0x02)
	struct TArray<struct FString> PsyObjActionDirectShotList; // 0xe58(0x10)
	struct TArray<struct FString> PsyObjActionUniqueObjectList; // 0xe68(0x10)
	struct TArray<struct FString> PsyObjActionMapGimmickList; // 0xe78(0x10)
	bool bPsyObjActionCheckTimer; // 0xe88(0x01)
	char pad_E89[0x3]; // 0xe89(0x03)
	struct FGameTimer PsyObjActionJustDodgeTimer; // 0xe8c(0x0c)
	float PsyObjActionJustDodgeTime; // 0xe98(0x04)
	struct FGameTimer PsyObjActionInterceptTimer; // 0xe9c(0x0c)
	float PsyObjActionInterceptTime; // 0xea8(0x04)
	bool bDebugDrawAnimObjList; // 0xeac(0x01)
	bool bDebugDrawPsyObjAction; // 0xead(0x01)
	bool bDebugDrawObjectStatus; // 0xeae(0x01)
	bool bNewObjectSystem; // 0xeaf(0x01)
	struct TArray<struct ABP_PsychicObjectIntercept_C*> InterceptObjectList; // 0xeb0(0x10)
	int32_t InterceptObjectListNum; // 0xec0(0x04)
	char pad_EC4[0x4]; // 0xec4(0x04)
	struct ABP_PsychicObjectIntercept_C* InterceptObject; // 0xec8(0x08)
	bool bDebugDrawInterceptObject; // 0xed0(0x01)
	char pad_ED1[0x7]; // 0xed1(0x07)
	struct FMulticastInlineDelegate EnemyInterceptableThrow; // 0xed8(0x10)
	bool bDebugTraceRecordDraw; // 0xee8(0x01)
	char pad_EE9[0x3]; // 0xee9(0x03)
	int32_t DebugTraceRecordNum; // 0xeec(0x04)
	int32_t DebugTraceRecordIndex; // 0xef0(0x04)
	float DebugTraceRecordRadius; // 0xef4(0x04)
	struct TArray<struct FVector> DebugTraceRecordSttList; // 0xef8(0x10)
	struct TArray<struct FVector> DebugTraceRecordEndList; // 0xf08(0x10)
	struct TArray<bool> DebugTraceRecordHitList; // 0xf18(0x10)
	struct TArray<struct FVector> DebugTraceRecordHitPosList; // 0xf28(0x10)
	struct TArray<struct FVector> DebugTraceRecordHitNrlList; // 0xf38(0x10)
	struct TArray<struct FVector> DebugTraceRecordExtra0List; // 0xf48(0x10)
	struct TArray<struct FVector> DebugTraceRecordExtra1List; // 0xf58(0x10)
	struct TArray<struct FVector> DebugTraceRecordExtra2List; // 0xf68(0x10)
	struct TArray<struct FVector> DebugTraceRecordExtra3List; // 0xf78(0x10)
	float DebugTraceRecordRadiusEx0; // 0xf88(0x04)
	float DebugTraceRecordRadiusEx1; // 0xf8c(0x04)
	float DebugTraceRecordRadiusEx2; // 0xf90(0x04)
	float DebugTraceRecordRadiusEx3; // 0xf94(0x04)
	struct FLinearColor DebugTraceRecordColorEx0; // 0xf98(0x10)
	struct FLinearColor DebugTraceRecordColorEx1; // 0xfa8(0x10)
	struct FLinearColor DebugTraceRecordColorEx2; // 0xfb8(0x10)
	struct FLinearColor DebugTraceRecordColorEx3; // 0xfc8(0x10)
	bool bInBossGauge; // 0xfd8(0x01)
	char pad_FD9[0x7]; // 0xfd9(0x07)
	struct ATriggerEffectManager* TrgEffMgr; // 0xfe0(0x08)
	bool bDebugMapGimmickExMode; // 0xfe8(0x01)
	bool bMapGimmickExMode; // 0xfe9(0x01)
	char pad_FEA[0x6]; // 0xfea(0x06)
	struct ABP_MapGimmickObjectBase_C* MapGimmickEx; // 0xff0(0x08)
	struct FString RegisterRefNameDebug; // 0xff8(0x10)
	struct FString RegisterRefNameArea; // 0x1008(0x10)
	struct FString RegisterRefNameBrainField; // 0x1018(0x10)
	struct FString RegisterRefNameDebugCreate; // 0x1028(0x10)
	bool bUniqueObjectSkipDisableCamera; // 0x1038(0x01)
	bool bDebugDrawRegisterPos; // 0x1039(0x01)
	bool bDebugDrawArrangePos; // 0x103a(0x01)
	bool bDebugDrawRegisterActorTick; // 0x103b(0x01)
	bool bDebugDrawRegisterMeshTick; // 0x103c(0x01)
	bool bDebugDrawRegisterCompTick; // 0x103d(0x01)
	bool DebugDrawEmPsyObjLine; // 0x103e(0x01)
	bool bUniqueObjectAutoTakeItem; // 0x103f(0x01)
	struct TArray<struct FName> InputModeLockRefList; // 0x1040(0x10)
	struct TArray<struct ABP_PsychicObjectBasic_C*> EventPsyObjList; // 0x1050(0x10)
	bool bDebugPrintPsyObjInfo; // 0x1060(0x01)
	bool bDebugDrawFocusObjPhase; // 0x1061(0x01)
	bool bDebugDrawFocusObjState; // 0x1062(0x01)
	bool bDebugDrawFocusObjCollision; // 0x1063(0x01)
	bool bDebugDrawFocusObjAsyncCmn; // 0x1064(0x01)
	bool bWeightGaugeCheckEnable; // 0x1065(0x01)
	bool bWeightGaugeCheckMapGimmickEnable; // 0x1066(0x01)
	bool bWeightGaugeCheckProc; // 0x1067(0x01)
	bool bWeightGaugeCheck; // 0x1068(0x01)
	bool bWeightGaugeCheckApply; // 0x1069(0x01)
	bool bWeightGaugeCheckMapGimmick; // 0x106a(0x01)
	char pad_106B[0x1]; // 0x106b(0x01)
	struct FName WeightGaugeCheckTagName; // 0x106c(0x08)
	char pad_1074[0x4]; // 0x1074(0x04)
	struct ABP_PsychicObjectBasic_C* WeightGaugeCheckObj; // 0x1078(0x08)
	struct TSoftClassPtr<UObject> dbActorSoftClass; // 0x1080(0x28)
	struct TSoftClassPtr<UObject> dbActorSoftClass2; // 0x10a8(0x28)
	struct TArray<bool> bPsyObjSoundRegister; // 0x10d0(0x10)

	bool EventManagerEnd(bool RestoreEnableTick, bool RestoreVisibility); // Function PsychicObjectManager.PsychicObjectManager_C.EventManagerEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool EventManagerStart(bool EnableTick, bool Visibility); // Function PsychicObjectManager.PsychicObjectManager_C.EventManagerStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CancelCopyPsychicObject(); // Function PsychicObjectManager.PsychicObjectManager_C.CancelCopyPsychicObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndWeightGaugeCheck(); // Function PsychicObjectManager.PsychicObjectManager_C.EndWeightGaugeCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartWeightGaugeCheck(bool map gimmick in); // Function PsychicObjectManager.PsychicObjectManager_C.StartWeightGaugeCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetWeightGaugeCheck(); // Function PsychicObjectManager.PsychicObjectManager_C.ResetWeightGaugeCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWeightGaugeCheck(bool flag in, bool force in, struct ABP_PsychicObjectBasic_C* psy obj in); // Function PsychicObjectManager.PsychicObjectManager_C.SetWeightGaugeCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeUniqueObjectTargetActor(struct AActor* old actor in, struct AActor* new actor in); // Function PsychicObjectManager.PsychicObjectManager_C.ChangeUniqueObjectTargetActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetInterceptAttackParam(bool bFind, struct FHCCollisionCommonInfo commonInfo, struct FHCSkillCommonInfo skillInfo); // Function PsychicObjectManager.PsychicObjectManager_C.GetInterceptAttackParam // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void LostCaptureOwner(struct AActor* capture owner in, bool npc in, bool enemy in); // Function PsychicObjectManager.PsychicObjectManager_C.LostCaptureOwner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDrawFcousObj(); // Function PsychicObjectManager.PsychicObjectManager_C.DebugDrawFcousObj // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDebugPrintPsyObjInfo(); // Function PsychicObjectManager.PsychicObjectManager_C.SetDebugPrintPsyObjInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsNeedFrameWait(); // Function PsychicObjectManager.PsychicObjectManager_C.IsNeedFrameWait // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDrawPsyObjInfo(); // Function PsychicObjectManager.PsychicObjectManager_C.DebugDrawPsyObjInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDestroyList(); // Function PsychicObjectManager.PsychicObjectManager_C.UpdateDestroyList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearEventPsychicObject(); // Function PsychicObjectManager.PsychicObjectManager_C.ClearEventPsychicObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEventPsychicObject(); // Function PsychicObjectManager.PsychicObjectManager_C.SetEventPsychicObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddEventPsychicObject(struct TArray<struct AActor*> actor list in); // Function PsychicObjectManager.PsychicObjectManager_C.AddEventPsychicObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDrawInputModeLock(); // Function PsychicObjectManager.PsychicObjectManager_C.DebugDrawInputModeLock // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLockInputMode(bool flag in, struct FName ref name in); // Function PsychicObjectManager.PsychicObjectManager_C.SetLockInputMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsUniqueObjectAutoTakeItem(bool return); // Function PsychicObjectManager.PsychicObjectManager_C.IsUniqueObjectAutoTakeItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetUniqueObjectAutoTakeItem(bool flag in); // Function PsychicObjectManager.PsychicObjectManager_C.SetUniqueObjectAutoTakeItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDrawRegisterObjInfo(); // Function PsychicObjectManager.PsychicObjectManager_C.DebugDrawRegisterObjInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RespawnEnemyObject(); // Function PsychicObjectManager.PsychicObjectManager_C.RespawnEnemyObject // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDrawRegisterPos(); // Function PsychicObjectManager.PsychicObjectManager_C.DebugDrawRegisterPos // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsUniqueObjectSkipDisableCamera(bool return ); // Function PsychicObjectManager.PsychicObjectManager_C.IsUniqueObjectSkipDisableCamera // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetUniqueObjectSkipDisableCamera(bool bSkip); // Function PsychicObjectManager.PsychicObjectManager_C.SetUniqueObjectSkipDisableCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugPrintRegisterList(); // Function PsychicObjectManager.PsychicObjectManager_C.DebugPrintRegisterList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExceptionallyAllowTriggerEffect(bool allow); // Function PsychicObjectManager.PsychicObjectManager_C.ExceptionallyAllowTriggerEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMapGimmickEx(struct ABP_MapGimmickObjectBase_C* actor in); // Function PsychicObjectManager.PsychicObjectManager_C.SetMapGimmickEx // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMapGimmickExMode(bool flag in, struct ABP_MapGimmickObjectBase_C* actor in); // Function PsychicObjectManager.PsychicObjectManager_C.SetMapGimmickExMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUsingBossGauge(bool bInBossGauge); // Function PsychicObjectManager.PsychicObjectManager_C.SetUsingBossGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CancelPsychicObjectHoming(bool npc in, bool enemy in); // Function PsychicObjectManager.PsychicObjectManager_C.CancelPsychicObjectHoming // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckNpcObject(bool bUnqObj, bool bEnemy, bool chkCapture, bool chkAttack); // Function PsychicObjectManager.PsychicObjectManager_C.CheckNpcObject // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDrawRotArrow(struct FVector pos in, struct FRotator rot in, float len in, float size in, float time in); // Function PsychicObjectManager.PsychicObjectManager_C.DebugDrawRotArrow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDebugTraceRecord(); // Function PsychicObjectManager.PsychicObjectManager_C.UpdateDebugTraceRecord // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NextDebugTraceRecord(bool back in, bool 10, bool 100, bool 1000); // Function PsychicObjectManager.PsychicObjectManager_C.NextDebugTraceRecord // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DrawDebugTraceRecord(bool flag in); // Function PsychicObjectManager.PsychicObjectManager_C.DrawDebugTraceRecord // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddDebugTraceRecord(struct FVector stt pos in, struct FVector end pos in, bool hit in, struct FVector hit pos in, struct FVector hit nrl in, struct FVector extra 0 in, struct FVector extra 1 in, struct FVector extra 2 in, struct FVector extra 3 in); // Function PsychicObjectManager.PsychicObjectManager_C.AddDebugTraceRecord // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitDebugTraceRecord(float radius in, float radius ex 0 in, float radius ex 1 in, float radius ex 2 in, float radius ex 3 in, struct FLinearColor color ex 0 in, struct FLinearColor color ex 1 in, struct FLinearColor color ex 2 in, struct FLinearColor color ex 3 in); // Function PsychicObjectManager.PsychicObjectManager_C.InitDebugTraceRecord // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugCreatePsychicObject(struct TSoftClassPtr<UObject> psy obj class in); // Function PsychicObjectManager.PsychicObjectManager_C.DebugCreatePsychicObject // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDrawInterceptObject(); // Function PsychicObjectManager.PsychicObjectManager_C.DebugDrawInterceptObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DeleteInterceptObject(); // Function PsychicObjectManager.PsychicObjectManager_C.DeleteInterceptObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInterceptObjectActive(); // Function PsychicObjectManager.PsychicObjectManager_C.SetInterceptObjectActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateInterceptObject(); // Function PsychicObjectManager.PsychicObjectManager_C.CreateInterceptObject // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetIntercept(struct AActor* obj actor in, struct ARSBattleCharacter_C* intercepter in, struct ARSBattleCharacter_C* new target in); // Function PsychicObjectManager.PsychicObjectManager_C.SetIntercept // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPsychicObject(bool unq obj in, bool npc in, bool enemy in, bool focus in, bool capture in, bool attack in, struct ABP_PsychicObjectBasic_C* psy obj); // Function PsychicObjectManager.PsychicObjectManager_C.GetPsychicObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackObject(struct ABP_PsychicObjectBasic_C* psy obj in, bool unq obj in, bool npc in, bool enemy in); // Function PsychicObjectManager.PsychicObjectManager_C.SetAttackObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAttackObject(bool unq obj in, bool npc in, bool enemy in, struct ABP_PsychicObjectBasic_C* attack obj ); // Function PsychicObjectManager.PsychicObjectManager_C.GetAttackObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCaptureObject(struct ABP_PsychicObjectBasic_C* psy obj in, bool npc in, bool enemy in); // Function PsychicObjectManager.PsychicObjectManager_C.SetCaptureObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCaptureObject(bool npc in, bool enemy in, bool unq obj in, bool check obj type in, struct ABP_PsychicObjectBasic_C* capture obj); // Function PsychicObjectManager.PsychicObjectManager_C.GetCaptureObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDrawObjectStatus(); // Function PsychicObjectManager.PsychicObjectManager_C.DebugDrawObjectStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetFocusObject(bool unq obj in, bool npc in, bool enemy in, struct ABP_PsychicObjectBasic_C* focus obj); // Function PsychicObjectManager.PsychicObjectManager_C.GetFocusObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDrawPsychicObjectAction(); // Function PsychicObjectManager.PsychicObjectManager_C.DebugDrawPsychicObjectAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetUniqueEffectParam(bool brain field, enum class EPsychicObjectBrainFieldAttackType brain field attack type in, int32_t brain field level in, bool psychic field, int32_t psychic field obj num in, bool return, struct FPsychicObjectSizeParameter Parameter); // Function PsychicObjectManager.PsychicObjectManager_C.GetUniqueEffectParam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDrawAnimObjectList(); // Function PsychicObjectManager.PsychicObjectManager_C.DebugDrawAnimObjectList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetPsychicObjectAction(); // Function PsychicObjectManager.PsychicObjectManager_C.ResetPsychicObjectAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePsychicObjectAction(); // Function PsychicObjectManager.PsychicObjectManager_C.UpdatePsychicObjectAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicObjectAction(bool direct shot, bool unique object, bool map gimmick, bool flag in, struct FString obj name in, bool just dodge, bool Intercept, bool psychic field); // Function PsychicObjectManager.PsychicObjectManager_C.SetPsychicObjectAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckPsychicObjectAction(bool direct shot, bool unq obj capture, bool unq obj action, bool psychic field, bool just dodge, bool return); // Function PsychicObjectManager.PsychicObjectManager_C.CheckPsychicObjectAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetRandomRegisterSwingObjectSafety(struct ABP_PsychicObjectBasic_C* psy obj); // Function PsychicObjectManager.PsychicObjectManager_C.GetRandomRegisterSwingObjectSafety // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetRandomRegisterPsychicObjectSafety(enum class EPsychicObjectSizeType obj size in, bool safety in, struct ABP_PsychicObjectBasic_C* psy obj); // Function PsychicObjectManager.PsychicObjectManager_C.GetRandomRegisterPsychicObjectSafety // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAvailableRegisterSizeArraySafety(int32_t len in, struct TArray<enum class EPsychicObjectSizeType> request size in, struct TArray<enum class EPsychicObjectSizeType> size array, bool safety); // Function PsychicObjectManager.PsychicObjectManager_C.GetAvailableRegisterSizeArraySafety // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicFieldWeightGauge(bool flag in); // Function PsychicObjectManager.PsychicObjectManager_C.SetPsychicFieldWeightGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckPsychicFieldObject(struct TArray<struct AActor*> actor list in); // Function PsychicObjectManager.PsychicObjectManager_C.CheckPsychicFieldObject // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetFocusSearchRadiusRate(float rate in); // Function PsychicObjectManager.PsychicObjectManager_C.SetFocusSearchRadiusRate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePsychicField(); // Function PsychicObjectManager.PsychicObjectManager_C.UpdatePsychicField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CancelPsychicField(); // Function PsychicObjectManager.PsychicObjectManager_C.CancelPsychicField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicFieldTarget(); // Function PsychicObjectManager.PsychicObjectManager_C.SetPsychicFieldTarget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicFieldThrow(); // Function PsychicObjectManager.PsychicObjectManager_C.SetPsychicFieldThrow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicFieldAttract(); // Function PsychicObjectManager.PsychicObjectManager_C.SetPsychicFieldAttract // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPsychicFieldCaptureFinish(bool Finish); // Function PsychicObjectManager.PsychicObjectManager_C.IsPsychicFieldCaptureFinish // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicFieldCapture(int32_t capture num in); // Function PsychicObjectManager.PsychicObjectManager_C.SetPsychicFieldCapture // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsUniqueObjectUse(bool is use); // Function PsychicObjectManager.PsychicObjectManager_C.IsUniqueObjectUse // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUniqueObjectUse(bool flag in, struct ABP_PsychicObjectBasic_C* unq obj in); // Function PsychicObjectManager.PsychicObjectManager_C.SetUniqueObjectUse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearUniqueObject(struct ABP_PsychicObjectBasic_C* psy obj in); // Function PsychicObjectManager.PsychicObjectManager_C.ClearUniqueObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugSetPsychicObjectWeight(float weight in); // Function PsychicObjectManager.PsychicObjectManager_C.DebugSetPsychicObjectWeight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicComboSlow(bool bSlow); // Function PsychicObjectManager.PsychicObjectManager_C.SetPsychicComboSlow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnregisterPsychicSlowActor(struct ARSBattleCharacter_C* SlowActor); // Function PsychicObjectManager.PsychicObjectManager_C.UnregisterPsychicSlowActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RegisterPsychicSlowActor(struct ARSBattleCharacter_C* SlowActor); // Function PsychicObjectManager.PsychicObjectManager_C.RegisterPsychicSlowActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CancelPsychicObjectAction(bool event in, bool psychic battle in, bool npc in, bool enemy in); // Function PsychicObjectManager.PsychicObjectManager_C.CancelPsychicObjectAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePsychicComboCheck(); // Function PsychicObjectManager.PsychicObjectManager_C.UpdatePsychicComboCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetHudMain(struct AHUDMainGame_C* HUDMainGame); // Function PsychicObjectManager.PsychicObjectManager_C.GetHudMain // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdatePsychicGaugeCheck(); // Function PsychicObjectManager.PsychicObjectManager_C.UpdatePsychicGaugeCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicGaugeCheck(); // Function PsychicObjectManager.PsychicObjectManager_C.SetPsychicGaugeCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetFocus(bool flag in, bool unq obj in, bool map gmk in, struct AActor* object actor in); // Function PsychicObjectManager.PsychicObjectManager_C.SetFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RemovePsychicBulletOwner(struct ABP_PsychicObjectBasic_C* owner obj in); // Function PsychicObjectManager.PsychicObjectManager_C.RemovePsychicBulletOwner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicBulletData(enum class EPsychicObjectID psyObjId, int32_t Index); // Function PsychicObjectManager.PsychicObjectManager_C.SetPsychicBulletData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPsychicBulletDataIndex(enum class EPsychicObjectID psyObjId, int32_t Index); // Function PsychicObjectManager.PsychicObjectManager_C.GetPsychicBulletDataIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ClearChildPsychicObject(); // Function PsychicObjectManager.PsychicObjectManager_C.ClearChildPsychicObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DestroyChildPsychicObject(struct TArray<struct ABP_PsychicObjectBasic_C*> child list in); // Function PsychicObjectManager.PsychicObjectManager_C.DestroyChildPsychicObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateChildPsychicObject(struct ABP_PsychicObjectBasic_C* parent obj in, struct TSoftClassPtr<UObject> child class in, int32_t child num in, struct TArray<struct ABP_PsychicObjectBasic_C*> child list); // Function PsychicObjectManager.PsychicObjectManager_C.CreateChildPsychicObject // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetUniqueObjectParameter(struct FString name in, struct FUniqueObjectCommonParameter Parameter); // Function PsychicObjectManager.PsychicObjectManager_C.GetUniqueObjectParameter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetUnqObjClass(enum class EPsychicObjectID psy obj id, struct TSoftClassPtr<UObject> ID); // Function PsychicObjectManager.PsychicObjectManager_C.GetUnqObjClass // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetUnqObjBeamsID(bool rail, enum class EPsychicObjectID ID); // Function PsychicObjectManager.PsychicObjectManager_C.GetUnqObjBeamsID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetCameraParameterRowName(struct FString name in, struct FName row name list); // Function PsychicObjectManager.PsychicObjectManager_C.GetCameraParameterRowName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndBattleSequencePsychicBattle(bool Win); // Function PsychicObjectManager.PsychicObjectManager_C.EndBattleSequencePsychicBattle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicBattleRate(float PsychicBattleType); // Function PsychicObjectManager.PsychicObjectManager_C.SetPsychicBattleRate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartPsychicBattle(enum class PsychicBattleType PsychicBattleType, struct ABP_PsychicObjectBasic_C* Psychic Object Actor); // Function PsychicObjectManager.PsychicObjectManager_C.StartPsychicBattle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsBattleSequencePsychicBattle(bool Play); // Function PsychicObjectManager.PsychicObjectManager_C.IsBattleSequencePsychicBattle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsPlayPsychicBattle(bool Play); // Function PsychicObjectManager.PsychicObjectManager_C.IsPlayPsychicBattle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void FinalizePsychicBattle(); // Function PsychicObjectManager.PsychicObjectManager_C.FinalizePsychicBattle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadPsychicBattle(enum class PsychicBattleType PsychicBattleType); // Function PsychicObjectManager.PsychicObjectManager_C.LoadPsychicBattle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDrawPsyObjAttackSphere(); // Function PsychicObjectManager.PsychicObjectManager_C.DebugDrawPsyObjAttackSphere // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAttackRowName(struct FString name in, struct TArray<struct FName> row name list); // Function PsychicObjectManager.PsychicObjectManager_C.GetAttackRowName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetFocusPsychicObject(bool loading start in, struct FName tag name in); // Function PsychicObjectManager.PsychicObjectManager_C.ResetFocusPsychicObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetDataTableParamEnemyInfo(struct AActor* em actor in, struct FUniqueObjectContainerEnemyInfo data table); // Function PsychicObjectManager.PsychicObjectManager_C.GetDataTableParamEnemyInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttackCopyPsychicObject(); // Function PsychicObjectManager.PsychicObjectManager_C.AttackCopyPsychicObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCopyPsychicObjectPos(struct ABP_PsychicObjectBasic_C* parent obj in, int32_t copy index in, struct FVector copy obj pos 0, struct FVector copy obj pos 1); // Function PsychicObjectManager.PsychicObjectManager_C.GetCopyPsychicObjectPos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CopyCaptureObject(struct ABP_PsychicObjectBasic_C* parent obj in, int32_t copy count in, bool direct drop in, bool combo in, int32_t comb level in); // Function PsychicObjectManager.PsychicObjectManager_C.CopyCaptureObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCopyPsychicObject(struct ABP_PsychicObjectBasic_C* parent obj in, struct ABP_PsychicObjectBasic_C* copy psy obj 0, struct ABP_PsychicObjectBasic_C* copy psy obj 1); // Function PsychicObjectManager.PsychicObjectManager_C.GetCopyPsychicObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCopyPsychicObjectPause(bool flag in); // Function PsychicObjectManager.PsychicObjectManager_C.SetCopyPsychicObjectPause // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetCopyPsychicObject(); // Function PsychicObjectManager.PsychicObjectManager_C.ResetCopyPsychicObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCopyPsychicObject(); // Function PsychicObjectManager.PsychicObjectManager_C.UpdateCopyPsychicObject // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCopyPsychicObject(bool flag in); // Function PsychicObjectManager.PsychicObjectManager_C.SetCopyPsychicObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInstantRespawn(bool flag in); // Function PsychicObjectManager.PsychicObjectManager_C.SetInstantRespawn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckEnemyObject(bool bUnqObj, bool chkCapture, bool chkAttack); // Function PsychicObjectManager.PsychicObjectManager_C.CheckEnemyObject // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetFocusPause(bool flag in, struct FName tag name in); // Function PsychicObjectManager.PsychicObjectManager_C.SetFocusPause // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CanCapture(bool unq obj in, bool return); // Function PsychicObjectManager.PsychicObjectManager_C.CanCapture // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWeightGaugeEnable(bool player in, bool flag in, bool unq obj in, struct ABP_PsychicObjectBasic_C* psy obj in, bool AttackFlag); // Function PsychicObjectManager.PsychicObjectManager_C.SetWeightGaugeEnable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadDataTableSound(bool flag in, int32_t index in); // Function PsychicObjectManager.PsychicObjectManager_C.LoadDataTableSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsyObjDtSound(struct ABP_PsychicObjectBasic_C* psy obj in); // Function PsychicObjectManager.PsychicObjectManager_C.SetPsyObjDtSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetFocusSearch(bool flag in); // Function PsychicObjectManager.PsychicObjectManager_C.SetFocusSearch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAttackObjectOld(struct ABP_PsychicObjectBasic_C* psy obj); // Function PsychicObjectManager.PsychicObjectManager_C.GetAttackObjectOld // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUniqueInputObject(struct ABP_PsychicObjectBasic_C* unq input in); // Function PsychicObjectManager.PsychicObjectManager_C.SetUniqueInputObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsUniqueObjectInput(bool return); // Function PsychicObjectManager.PsychicObjectManager_C.IsUniqueObjectInput // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUniqueObjectInput(bool flag in); // Function PsychicObjectManager.PsychicObjectManager_C.SetUniqueObjectInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetElectricPoleDataTable(struct TArray<struct FUniqueObjectElectricPoleEffectParameter> ElectricPoleEffectList); // Function PsychicObjectManager.PsychicObjectManager_C.GetElectricPoleDataTable // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDrawEaseCurve(); // Function PsychicObjectManager.PsychicObjectManager_C.DebugDrawEaseCurve // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetUniqueObjectMontageOld(struct ABP_PsychicObjectBasic_C* psy obj in, enum class EPsychicObjectUniqueMontageIndex montage index in, bool left in); // Function PsychicObjectManager.PsychicObjectManager_C.GetUniqueObjectMontageOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearAnimObjectList(); // Function PsychicObjectManager.PsychicObjectManager_C.ClearAnimObjectList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DeleteAnimObject(struct APsychicAnimObject_C* anim obj in); // Function PsychicObjectManager.PsychicObjectManager_C.DeleteAnimObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAnimObject(struct APsychicAnimObject_C* anim obj); // Function PsychicObjectManager.PsychicObjectManager_C.GetAnimObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAnimObject(); // Function PsychicObjectManager.PsychicObjectManager_C.UpdateAnimObject // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateAnimObject(); // Function PsychicObjectManager.PsychicObjectManager_C.CreateAnimObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttackComboCaptureObject(struct AActor* target actor in, int32_t attack level in, int32_t attack index in, float attract time in, struct UAnimSequence* anim seq in, bool air combo in, bool enemy direct shot in, bool npc in, bool enemy in, int32_t copy count in, bool return, struct ABP_PsychicObjectBasic_C* combo obj); // Function PsychicObjectManager.PsychicObjectManager_C.AttackComboCaptureObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CancelCaptureObject(bool npc in, bool enemy in); // Function PsychicObjectManager.PsychicObjectManager_C.CancelCaptureObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttackCaptureObject(struct ABP_PsychicObjectBasic_C* psy obj in, struct AActor* target actor in, bool direct drop in, bool npc in, bool enemy in, int32_t copy count in, bool return, struct ABP_PsychicObjectBasic_C* unique object); // Function PsychicObjectManager.PsychicObjectManager_C.AttackCaptureObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CaptureFocusObject(struct ARsBattleHero_C* capture owner in, bool unique obj in, bool combo in, bool npc in, bool enemy in, bool air in, bool return); // Function PsychicObjectManager.PsychicObjectManager_C.CaptureFocusObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateFocusPsychicObject(); // Function PsychicObjectManager.PsychicObjectManager_C.UpdateFocusPsychicObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicObjectHidden(bool flag in); // Function PsychicObjectManager.PsychicObjectManager_C.SetPsychicObjectHidden // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDispPsychicBullet(); // Function PsychicObjectManager.PsychicObjectManager_C.DebugDispPsychicBullet // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetPsychicBullet(struct ABP_PsychicObjectBasic_C* psy bullet in); // Function PsychicObjectManager.PsychicObjectManager_C.ResetPsychicBullet // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPsychicBullet(enum class EPsychicObjectID psy obj id in, struct ABP_PsychicObjectBasic_C* parent obj in, struct ABP_PsychicObjectBasic_C* psy bullet); // Function PsychicObjectManager.PsychicObjectManager_C.GetPsychicBullet // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePsychicBullet(); // Function PsychicObjectManager.PsychicObjectManager_C.UpdatePsychicBullet // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreatePsychicBullet(enum class EPsychicObjectID psy obj id in, struct ABP_PsychicObjectBasic_C* psy obj in, int32_t bul magazine, int32_t bul max); // Function PsychicObjectManager.PsychicObjectManager_C.CreatePsychicBullet // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDispPsyObjRespawn(); // Function PsychicObjectManager.PsychicObjectManager_C.DebugDispPsyObjRespawn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePsyObjRespawn(); // Function PsychicObjectManager.PsychicObjectManager_C.UpdatePsyObjRespawn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsyObjRespawn(struct ABP_PsychicObjectBasic_C* psy obj in); // Function PsychicObjectManager.PsychicObjectManager_C.SetPsyObjRespawn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicObjectTickRadius(float radius in); // Function PsychicObjectManager.PsychicObjectManager_C.SetPsychicObjectTickRadius // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAttackParameter(struct ABP_PsychicObjectBasic_C* psy obj in, struct FHCCollisionCommonInfo common info, struct FHCSkillCommonInfo skill info); // Function PsychicObjectManager.PsychicObjectManager_C.GetAttackParameter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetGrabPosData(int32_t grab index in, struct FPsychicGrabPosData grab pos data); // Function PsychicObjectManager.PsychicObjectManager_C.GetGrabPosData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetGrabParameterSizeData(enum class EPsychicObjectSizeType obj size in, struct FPsychicGrabParameterSizeData grab parameter size data); // Function PsychicObjectManager.PsychicObjectManager_C.GetGrabParameterSizeData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetGrabParameterData(struct FPsychicGrabParameterData grab parameter data); // Function PsychicObjectManager.PsychicObjectManager_C.GetGrabParameterData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetGrabMovementSizeData(enum class EPsychicObjectSizeType obj size in, struct FPsychicGrabMovementSizeData grab movement size data); // Function PsychicObjectManager.PsychicObjectManager_C.GetGrabMovementSizeData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetGrabMovementData(struct FPsychicGrabMovementData grab movement data); // Function PsychicObjectManager.PsychicObjectManager_C.GetGrabMovementData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicObjectParameter(struct ABP_PsychicObjectBasic_C* psy obj in); // Function PsychicObjectManager.PsychicObjectManager_C.SetPsychicObjectParameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadDataTable(); // Function PsychicObjectManager.PsychicObjectManager_C.LoadDataTable // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugUpdateTestLevelSequence(); // Function PsychicObjectManager.PsychicObjectManager_C.DebugUpdateTestLevelSequence // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugStartTestLevelSequence(struct ARSBattleCharacter_C* enemy in); // Function PsychicObjectManager.PsychicObjectManager_C.DebugStartTestLevelSequence // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDisplayEnemyPsychicObject(); // Function PsychicObjectManager.PsychicObjectManager_C.DebugDisplayEnemyPsychicObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateEnemyPsychicObject(); // Function PsychicObjectManager.PsychicObjectManager_C.UpdateEnemyPsychicObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DestroyEnemyPsychicObject(struct ARSBattleCharacter_C* em owner in, struct FName list name); // Function PsychicObjectManager.PsychicObjectManager_C.DestroyEnemyPsychicObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEnemyPsychicObject(struct ARSBattleCharacter_C* owner in, struct FName list name, bool random obj, enum class E_SASKind sas kind in, struct ABP_PsychicObjectBasic_C* em psy obj); // Function PsychicObjectManager.PsychicObjectManager_C.GetEnemyPsychicObject // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateEnemyPsychicObject(struct ARSBattleCharacter_C* enemy owner in, struct TArray<struct TSoftClassPtr<UObject>> object list in, struct FName list name, bool drop type in); // Function PsychicObjectManager.PsychicObjectManager_C.CreateEnemyPsychicObject // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreatePsychicCluster(struct ABP_PsychicObjectBasic_C* psychic object in, struct TArray<struct ABP_PsychicObjectBasic_C*> cluster list); // Function PsychicObjectManager.PsychicObjectManager_C.CreatePsychicCluster // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDispTransferObject(); // Function PsychicObjectManager.PsychicObjectManager_C.DebugDispTransferObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void convTransferItemIDToName(enum class EConsumeItemID item id in, struct FName item name); // Function PsychicObjectManager.PsychicObjectManager_C.convTransferItemIDToName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void convPsyObjIDtoSoftClass(enum class PsychicObjectID psy obj id in, struct TSoftClassPtr<UObject> psy obj soft class); // Function PsychicObjectManager.PsychicObjectManager_C.convPsyObjIDtoSoftClass // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void convTempIDToPsyObjID(int32_t temp id in, enum class PsychicObjectID psy obj id in, enum class PsychicObjectID psy obj id out, int32_t temp id out); // Function PsychicObjectManager.PsychicObjectManager_C.convTempIDToPsyObjID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void convTransferItemIDToIndex(enum class EConsumeItemID item id in, int32_t Index); // Function PsychicObjectManager.PsychicObjectManager_C.convTransferItemIDToIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UseTransferObject(enum class EConsumeItemID item id in); // Function PsychicObjectManager.PsychicObjectManager_C.UseTransferObject // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearTransferObject(); // Function PsychicObjectManager.PsychicObjectManager_C.ClearTransferObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitTransferObject(); // Function PsychicObjectManager.PsychicObjectManager_C.InitTransferObject // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetUserParamTransferObject(enum class EConsumeItemID item id in, enum class PsychicObjectID psy obj id); // Function PsychicObjectManager.PsychicObjectManager_C.GetUserParamTransferObject // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPsychicCaptureMaterialParameter(enum class E_SASKind sas kind in, struct FSPsychicCaptureMaterial material param); // Function PsychicObjectManager.PsychicObjectManager_C.GetPsychicCaptureMaterialParameter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDispSpareList(); // Function PsychicObjectManager.PsychicObjectManager_C.DebugDispSpareList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AreaChangeStartPsychicObject(); // Function PsychicObjectManager.PsychicObjectManager_C.AreaChangeStartPsychicObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AreaChangeRestorePsychicObject(); // Function PsychicObjectManager.PsychicObjectManager_C.AreaChangeRestorePsychicObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearPsychicObjectInfoAll(); // Function PsychicObjectManager.PsychicObjectManager_C.ClearPsychicObjectInfoAll // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsSparePsyObjReadyOld(bool return); // Function PsychicObjectManager.PsychicObjectManager_C.IsSparePsyObjReadyOld // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void DebugPrintSpareData(); // Function PsychicObjectManager.PsychicObjectManager_C.DebugPrintSpareData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnSparePsyObjOld(enum class PsychicGrabButtonType button type in, int32_t index in, bool return); // Function PsychicObjectManager.PsychicObjectManager_C.SpawnSparePsyObjOld // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSparePsyObjOld(enum class PsychicGrabButtonType button type in, struct ABP_PsychicObjectBasic_C* psy obj out); // Function PsychicObjectManager.PsychicObjectManager_C.GetSparePsyObjOld // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMainPlayer(); // Function PsychicObjectManager.PsychicObjectManager_C.SetMainPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEmission(bool flag in); // Function PsychicObjectManager.PsychicObjectManager_C.SetEmission // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateEmission(); // Function PsychicObjectManager.PsychicObjectManager_C.UpdateEmission // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateBrainFieldAfterOld(); // Function PsychicObjectManager.PsychicObjectManager_C.UpdateBrainFieldAfterOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void convGroupToRowNameOld(int32_t group in, int32_t index in, int32_t rowName in, int32_t row name out, int32_t group out, int32_t index out); // Function PsychicObjectManager.PsychicObjectManager_C.convGroupToRowNameOld // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void calcSpawnWorldTransformOld(struct FTransform local transform in, int32_t tile no in, float rotAngle in, struct FTransform world transform out); // Function PsychicObjectManager.PsychicObjectManager_C.calcSpawnWorldTransformOld // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void DebugPrintPsyObjSpawnList(); // Function PsychicObjectManager.PsychicObjectManager_C.DebugPrintPsyObjSpawnList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FinalizeBrainField(); // Function PsychicObjectManager.PsychicObjectManager_C.FinalizeBrainField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateBrainField(); // Function PsychicObjectManager.PsychicObjectManager_C.UpdateBrainField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeBrainField(); // Function PsychicObjectManager.PsychicObjectManager_C.InitializeBrainField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddPsychicObjectInfo(struct AActor* Object); // Function PsychicObjectManager.PsychicObjectManager_C.AddPsychicObjectInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function PsychicObjectManager.PsychicObjectManager_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PB_StartBattle(); // Function PsychicObjectManager.PsychicObjectManager_C.PB_StartBattle // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PB_StartInputPlayer(); // Function PsychicObjectManager.PsychicObjectManager_C.PB_StartInputPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PB_StartInputEnemy(); // Function PsychicObjectManager.PsychicObjectManager_C.PB_StartInputEnemy // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PB_DamageEnemy(); // Function PsychicObjectManager.PsychicObjectManager_C.PB_DamageEnemy // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PB_DamagePlayer(); // Function PsychicObjectManager.PsychicObjectManager_C.PB_DamagePlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PB_BattleAnimation(); // Function PsychicObjectManager.PsychicObjectManager_C.PB_BattleAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PB_EmitPoleParticle(); // Function PsychicObjectManager.PsychicObjectManager_C.PB_EmitPoleParticle // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PB_ChangePoleBreak(); // Function PsychicObjectManager.PsychicObjectManager_C.PB_ChangePoleBreak // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PB_BGActorsVisible(); // Function PsychicObjectManager.PsychicObjectManager_C.PB_BGActorsVisible // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function PsychicObjectManager.PsychicObjectManager_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function PsychicObjectManager.PsychicObjectManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function PsychicObjectManager.PsychicObjectManager_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void DelayBeginPlay(); // Function PsychicObjectManager.PsychicObjectManager_C.DelayBeginPlay // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStartPsychicBattle(enum class PsychicBattleType PsychicBattleType); // Function PsychicObjectManager.PsychicObjectManager_C.OnStartPsychicBattle // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFinishedPsychicBattle(enum class PsychicBattleType PsychicBattleType); // Function PsychicObjectManager.PsychicObjectManager_C.OnFinishedPsychicBattle // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_PsychicObjectManager(int32_t EntryPoint); // Function PsychicObjectManager.PsychicObjectManager_C.ExecuteUbergraph_PsychicObjectManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
	void EnemyInterceptableThrow__DelegateSignature(struct AActor* psy obj actor in, struct AActor* target actor in); // Function PsychicObjectManager.PsychicObjectManager_C.EnemyInterceptableThrow__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UniqueInputEnd__DelegateSignature(); // Function PsychicObjectManager.PsychicObjectManager_C.UniqueInputEnd__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

