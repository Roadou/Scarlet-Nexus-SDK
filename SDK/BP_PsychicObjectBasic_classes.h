// BlueprintGeneratedClass BP_PsychicObjectBasic.BP_PsychicObjectBasic_C
// Size: 0x5a0 (Inherited: 0x320)
struct ABP_PsychicObjectBasic_C : APsychicObjectBasicC {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USplineComponent* Spline; // 0x328(0x08)
	struct UBP_PsychicObjectComponent_C* BP_PsychicObjectComponent; // 0x330(0x08)
	struct UArrowComponent* AttackSwingArrow; // 0x338(0x08)
	struct UArrowComponent* AttackDropArrow; // 0x340(0x08)
	struct UPsychicObjectSoundComponent* PsychicObjectSound; // 0x348(0x08)
	struct UBP_PsychicComponentMain_C* BP_PsychicComponentMain; // 0x350(0x08)
	struct UPsychicSasParticleComponent_C* PsychicSasParticleComponent; // 0x358(0x08)
	struct UInertialMoveComponent_C* InertialMoveComponent; // 0x360(0x08)
	struct UBP_EventParamComponent_C* BP_EventParamComponent; // 0x368(0x08)
	struct UBP_CollisionHitSoundComponent_C* BP_CollisionHitSoundComponent; // 0x370(0x08)
	struct UHitCheckReceiverComponent* HitCheckReceiver; // 0x378(0x08)
	struct UTeamComponent* Team; // 0x380(0x08)
	struct UArrowComponent* AttackArrow; // 0x388(0x08)
	struct UCapsuleComponent* AttackCapsule; // 0x390(0x08)
	struct USphereComponent* AttackSphere; // 0x398(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3a0(0x08)
	enum class EPsychicObjectID ObjectID; // 0x3a8(0x01)
	enum class ECollisionEnabled PsychicObjectCollision; // 0x3a9(0x01)
	bool PsychicObjectSimulate; // 0x3aa(0x01)
	bool PsychicObjectGravity; // 0x3ab(0x01)
	bool bFloatObject; // 0x3ac(0x01)
	bool bSwingType; // 0x3ad(0x01)
	bool bPhysMassOverwrite; // 0x3ae(0x01)
	char pad_3AF[0x1]; // 0x3af(0x01)
	int32_t PhysMassOverwrhiteKg; // 0x3b0(0x04)
	bool bUseSizeParameterName; // 0x3b4(0x01)
	char pad_3B5[0x3]; // 0x3b5(0x03)
	struct FName SizeParameterName; // 0x3b8(0x08)
	bool bCaptureTimeNormalEx; // 0x3c0(0x01)
	char pad_3C1[0x3]; // 0x3c1(0x03)
	float CaptureTimeNormalEx; // 0x3c4(0x04)
	struct TSoftClassPtr<UObject> DestructibleSoftClass; // 0x3c8(0x28)
	struct ABP_PsychicObjectDestructibleBasic_C* DestructibleClass; // 0x3f0(0x08)
	struct FName PsychicObjectName; // 0x3f8(0x08)
	enum class PsychicObjectID PsychicObjectID; // 0x400(0x01)
	enum class PsyObjType PsychicObjectType; // 0x401(0x01)
	char pad_402[0x6]; // 0x402(0x06)
	struct TArray<struct AActor*> AttackHitActorList; // 0x408(0x10)
	bool Cinematic; // 0x418(0x01)
	bool UseDebrisParticle; // 0x419(0x01)
	bool UseDebrisOverrideMaterial; // 0x41a(0x01)
	char pad_41B[0x1]; // 0x41b(0x01)
	int32_t DebrisOverrideMaterialIndex; // 0x41c(0x04)
	struct UParticleSystem* DebrisParticle; // 0x420(0x08)
	struct UBP_UniqueObjectComponentBase_C* RefUniqueObjComponent; // 0x428(0x08)
	struct FName UniqueDitherParameterName; // 0x430(0x08)
	struct UParticleSystem* EffectExplosion; // 0x438(0x08)
	float DestroyExplosionRadius; // 0x440(0x04)
	float DestroyExplosionTime; // 0x444(0x04)
	struct FHCCollisionCommonInfo DestroyExplosionCommonInfo; // 0x448(0x70)
	struct FHCSkillCommonInfo DestroyExplosionSkillInfo; // 0x4b8(0xe8)

	enum class FHitEffectPriority GetHitEffectPriorityInterface(); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.GetHitEffectPriorityInterface // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetDamageCameraShakeData(bool bEnable, struct UCameraShake* CameraShakeClass, float Scale); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.GetDamageCameraShakeData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsInterceptFail(bool bFail); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.IsInterceptFail // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InterceptCancel(bool bDummy); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.InterceptCancel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InterceptReserve(bool bDummy); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.InterceptReserve // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InterceptAttack(struct ARSBattleCharacter_C* Intercepter, struct ARSBattleCharacter_C* NewTarget, bool bDummy); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.InterceptAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t GetDataRevision(); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.GetDataRevision // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	struct FMeshTriangleData GetMeshTriangleData(); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.GetMeshTriangleData // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SAS_CommonStart(struct FFSASCommand SAS_Command, bool dummy); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.SAS_CommonStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SAS_CommonEnd(enum class E_SASKind SAS_Kind, bool bCancelSASCost, bool bDummy, float RemainTime); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.SAS_CommonEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAcceleratorValid(bool Valid); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.IsAcceleratorValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsAccelerating(bool Accelerating); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.IsAccelerating // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsKarenUniqueObject(bool bKaren); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.IsKarenUniqueObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetPsychicObjectVhsParam(struct UCurveVector* ParamCurve, struct UCurveVector* ColorCurve, float VhsSeconds); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.GetPsychicObjectVhsParam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetUniqueObjectCaptureMontage(enum class EPlayerID playerId, bool bBack, bool bLeft, bool bUseBlend, struct UAnimMontage* StartMontage, struct UAnimMontage* CancelMontage); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.GetUniqueObjectCaptureMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetPsychicObjectCentrePos(struct FVector centre pos); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.GetPsychicObjectCentrePos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPsychicObjectWeightGaugePos(struct FVector weight gauge pos); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.GetPsychicObjectWeightGaugePos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPsychicObjectType(enum class PsyObjType psychic object type); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.GetPsychicObjectType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPsychicObjectActive(bool IsActive); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.IsPsychicObjectActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPsychicObject(bool bResult); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.IsPsychicObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPsychicComboAttack(bool bComboAttack); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.IsPsychicComboAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool SetPsychicObjectEventC(bool bStart, bool bTick, bool bVisibility); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.SetPsychicObjectEventC // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetDistanceDestroyC(); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.SetDistanceDestroyC // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsFloatObjectC(); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.IsFloatObjectC // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetRepeatHitAttackActor(); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.ResetRepeatHitAttackActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetDuelPoleType(bool bDuelType); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.SetDuelPoleType // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckPsychicObjectStillInWorld(float killZ); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.CheckPsychicObjectStillInWorld // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetPsychicObjectFellOutOfWorld(struct UDamageType* pDmgType); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.SetPsychicObjectFellOutOfWorld // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FVector GetPlayerCameraDirection(); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.GetPlayerCameraDirection // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	float GetPlayerCameraFieldOfView(); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.GetPlayerCameraFieldOfView // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FVector GetPlayerCameraLocation(); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.GetPlayerCameraLocation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	enum class EPlayerCameraMode GetPlayerCameraMode(); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.GetPlayerCameraMode // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FRotator GetPlayerCameraRotation(); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.GetPlayerCameraRotation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetPlayerCameraDirection(struct FVector Pos); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.SetPlayerCameraDirection // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetPlayerCameraFieldOfView(float FOV); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.SetPlayerCameraFieldOfView // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetPlayerCameraLocation(struct FVector Pos); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.SetPlayerCameraLocation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetPlayerCameraMode(enum class EPlayerCameraMode Mode); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.SetPlayerCameraMode // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetPlayerCameraRotation(struct FRotator Rot); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.SetPlayerCameraRotation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetPlayerCameraViewTarget(float BlendTime, enum class EViewTargetBlendFunction BlendFunc, float BlendExp); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.SetPlayerCameraViewTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FVector GetCameraLookAtPos(); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.GetCameraLookAtPos // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDestroyExplosion(); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.SetDestroyExplosion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyPsychicObjectOccupied(bool occupied); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.IsEnemyPsychicObjectOccupied // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	bool SetPsychicObjectActiveC(bool Flag); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.SetPsychicObjectActiveC // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetPsychicObjectTickC(struct FName refName, bool Flag); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.SetPsychicObjectTickC // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrevInitialize(); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.PrevInitialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	enum class EPsychicObjectSizeType GetPsychicObjectSize(); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.GetPsychicObjectSize // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetNoRespawn(); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.SetNoRespawn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FRotator GetUniqueObjectCameraOwnerRotation(); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.GetUniqueObjectCameraOwnerRotation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FVector GetUnqObjMoveVelocity(); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.GetUnqObjMoveVelocity // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FVector GetUniqueObjectCameraLookAtPos(float LookAtRate); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.GetUniqueObjectCameraLookAtPos // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetEffectFocus(bool Flag); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.SetEffectFocus // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FVector GetUnqObjCamTargetPos(); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.GetUnqObjCamTargetPos // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool RequestEndUniqueObjectState(struct AActor* pActor); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.RequestEndUniqueObjectState // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool InitializeCopyPsychicObject(); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.InitializeCopyPsychicObject // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsCopyPsychicObject(); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.IsCopyPsychicObject // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyPsychicObjectInfo(struct FHCCollisionCommonInfo in common info, struct FHCSkillCommonInfo in skill info); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.SetEnemyPsychicObjectInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool GetUniqueObjectAttackParameter(struct FHCCollisionCommonInfo OutCommonInto, struct FHCSkillCommonInfo OutSkillInfo); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.GetUniqueObjectAttackParameter // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct UAnimMontage* GetUniqueObjectPlayerMontage(enum class EPsychicObjectUniqueMontageIndex MontageIndex, bool bLeft, bool bMaleHero); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.GetUniqueObjectPlayerMontage // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool GetDebrisEffectData(struct UParticleSystem* ParticleTemplate, struct UMaterialInterface* OverrideMaterial); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.GetDebrisEffectData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool GetDebrisEffect(enum class EEffectObjectDebrisType Type, struct UMaterialInterface* OverrideMaterial); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.GetDebrisEffect // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDebrisEffectParameter(bool InUseDebris, struct TSoftObjectPtr<UParticleSystem> InDebrisParticle, bool InUseDebrisOverrideMaterial, int32_t InDebrisOverideMaterialIndex); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.SetDebrisEffectParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool GetDebrisEffectBase(struct UMeshComponent* TargetMesh, struct UParticleSystem* Particle, struct UMaterialInterface* OverrideMaterial); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.GetDebrisEffectBase // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPsychicObjectState(enum class EPsychicObjectState return); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.GetPsychicObjectState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetPsychicActiveOld(bool flag in); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.SetPsychicActiveOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPsychicObjectID(enum class EPsychicObjectID psychic object id); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.GetPsychicObjectID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CheckPsychicObjectID(struct TArray<enum class EPsychicObjectID> check list in, bool return); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.CheckPsychicObjectID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetEnemyPsychicObjectThrow(struct AActor* target actor in, float throw speed in, float homing speed in); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.SetEnemyPsychicObjectThrow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyPsychicObjectActive(bool active in, struct FVector obj pos in); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.SetEnemyPsychicObjectActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsTickOn(bool return); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.IsTickOn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CheckRepeatHitAttackActor(struct FHCHitResult HitResult, bool bOK); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.CheckRepeatHitAttackActor // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Finalize(); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.Finalize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBrainSwingIndex(int32_t Index); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.GetBrainSwingIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetTriangleData(struct FMeshTriangleData triangle data); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.GetTriangleData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void isBrainFieldSpawn(bool return); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.isBrainFieldSpawn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetRequestIndex(int32_t request index); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.GetRequestIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetBrainIndex(int32_t brain index); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.GetBrainIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetGrabIndex(int32_t grab index); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.GetGrabIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CheckPsychicObjectType(enum class PsyObjType psychic object type in, bool return); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.CheckPsychicObjectType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetAttackDirection(bool is swing direction, bool return, struct FVector attack direction); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.GetAttackDirection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetCameraShakeData(struct UCameraShake* camera shake class, float Scale); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.GetCameraShakeData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetTickEnable(bool flag in); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.SetTickEnable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void isPsychicActiveOld(bool return); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.isPsychicActiveOld // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CallbackHitEnemy(bool return); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.CallbackHitEnemy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsUnique(bool return); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.IsUnique // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void isBrainCapture(bool return); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.isBrainCapture // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetCollisionPsyObj(bool flag in, bool is capsule in, bool return); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.SetCollisionPsyObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetVisibilityPsyObj(bool flag in, bool mesh only, bool return); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.SetVisibilityPsyObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAttackCollision(bool throw in, struct UPrimitiveComponent* attack collision); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.GetAttackCollision // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CheckAttackType(enum class PsychicObjectAttackType attack type in, bool return); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.CheckAttackType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void isGrab(bool return); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.isGrab // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetAnimationLength(float Length); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.GetAnimationLength // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetGrabStart(); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.SetGrabStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DestroyPsyObj(); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.DestroyPsyObj // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDestroy(bool force in, bool return); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.SetDestroy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReloadGrab(int32_t grab index in, bool bCombo); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.ReloadGrab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckGrabIndex(int32_t grab index in, bool return); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.CheckGrabIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetGrab(bool flag in, struct ARsBattleHero_C* grab owner in, int32_t grab index in); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.SetGrab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void isPsychicCombo(bool return); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.isPsychicCombo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void RequestPsychicCombo(bool return); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.RequestPsychicCombo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicAction(struct AActor* target actor in, bool psychic combo in, bool return); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.SetPsychicAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CanPsychicAction(bool return); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.CanPsychicAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetThrow(struct AActor* target in, bool force throw in, bool psychic combo in, bool return); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.SetThrow // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetActivePsyObjOld(bool bActive in, bool return); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.SetActivePsyObjOld // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void On Hit Attack(struct FHCHitResult hit result in, bool return); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.On Hit Attack // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDisplay(bool return); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.DebugDisplay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(float delta second in, bool return); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.Update // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(bool return); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.Initialize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPsychicStart(struct FFSASPsychicParam Param, struct AActor* Owner); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.OnPsychicStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPsychicEnd(struct FFSASPsychicParam Param, struct AActor* Owner, float RemainTime); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.OnPsychicEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnElectricStart(struct FFSASElectricParam Param, struct AActor* Owner); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.OnElectricStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFireStart(struct FFSASFireParam Param, struct AActor* Owner); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.OnFireStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCopyStart(struct FFSASCopyParam Param, struct AActor* Owner); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.OnCopyStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFireEnd(struct FFSASFireParam Param, struct AActor* Owner, float RemainTime); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.OnFireEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnElectricEnd(struct FFSASElectricParam Param, struct AActor* Owner, float RemainTime); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.OnElectricEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCopyEnd(struct FFSASCopyParam Param, struct AActor* Owner, float RemainTime); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.OnCopyEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAcceleratorStart(struct FAcceleratorParam Parameter, struct AActor* Owner, bool bHologram); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.OnAcceleratorStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAcceleratorEnd(struct FAcceleratorParam Parameter, struct AActor* Owner, float RemainTime, bool bHologram); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.OnAcceleratorEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMetalStart(struct FFSASMetalParam Param, struct AActor* Owner); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.OnMetalStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMetalEnd(struct FFSASMetalParam Param, struct AActor* Owner, float RemainTime); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.OnMetalEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSeeThroughStart(struct FFSASSeeThroughParam Param, struct AActor* Owner); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.OnSeeThroughStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSeeThroughEnd(struct FFSASSeeThroughParam Param, struct AActor* Owner, float RemainTime); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.OnSeeThroughEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTelepoStart(struct FFSASTelepoParam Param, struct AActor* Owner); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.OnTelepoStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTelepoEnd(struct FFSASTelepoParam Param, struct AActor* Owner, float RemainTime); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.OnTelepoEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStealthStart(struct FFSASStealthParam Param, struct AActor* Owner); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.OnStealthStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStealthEnd(struct FFSASStealthParam Param, struct AActor* Owner, float RemainTime); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.OnStealthEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCutInStart(); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.OnCutInStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCutInEnd(); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.OnCutInEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void BndEvt__HitCheckReceiver_K2Node_ComponentBoundEvent_0_HitResultDelegate__DelegateSignature(struct FHCHitResult Result); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.BndEvt__HitCheckReceiver_K2Node_ComponentBoundEvent_0_HitResultDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void SetPsychicObjectActive(bool IsActive); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.SetPsychicObjectActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1685580
	void SetPsychicObjectVisibility(bool flag in, bool is mesh only); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.SetPsychicObjectVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PsychicObjectBasic(int32_t EntryPoint); // Function BP_PsychicObjectBasic.BP_PsychicObjectBasic_C.ExecuteUbergraph_BP_PsychicObjectBasic // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

