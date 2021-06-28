// BlueprintGeneratedClass BP_em0100Base.BP_em0100Base_C
// Size: 0x22c1 (Inherited: 0x2088)
struct ABP_em0100Base_C : ARSBattleEnemy_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2088(0x08)
	struct UBP_Ai_em0100_C* BP_Ai_em0100; // 0x2090(0x08)
	struct UDamagePartCollisionComponent* Core; // 0x2098(0x08)
	struct UBP_EnemyWeaponManageComponent_C* BP_EnemyWeaponManageComponent; // 0x20a0(0x08)
	struct UDamagePartCollisionComponent* DownWeak; // 0x20a8(0x08)
	struct UDamagePartCollisionComponent* Weak4Legs; // 0x20b0(0x08)
	struct UDamagePartCollisionComponent* Armor; // 0x20b8(0x08)
	struct UDamagePartCollisionComponent* Weak2Legs; // 0x20c0(0x08)
	struct UDamagePartCollisionComponent* LeftHand; // 0x20c8(0x08)
	struct UDamagePartCollisionComponent* RightHand; // 0x20d0(0x08)
	struct UDamagePartCollisionComponent* LeftFoot; // 0x20d8(0x08)
	struct UDamagePartCollisionComponent* RightFoot; // 0x20e0(0x08)
	struct UDamagePartCollisionComponent* Body; // 0x20e8(0x08)
	struct UDamagePartCollisionComponent* Head; // 0x20f0(0x08)
	float 2leg_At_CT_Swing; // 0x20f8(0x04)
	float 2leg_At_CT_Stamp; // 0x20fc(0x04)
	float 2leg_At_CT_Wastes; // 0x2100(0x04)
	bool Is2legState; // 0x2104(0x01)
	char pad_2105[0x3]; // 0x2105(0x03)
	float 4leg_At_CT_Rage; // 0x2108(0x04)
	float 4leg_At_CT_Rush; // 0x210c(0x04)
	float Trans_2leg_From_4leg_Timer; // 0x2110(0x04)
	float Trans_4leg_From_2leg_Timer; // 0x2114(0x04)
	bool IsArmorBreak; // 0x2118(0x01)
	char pad_2119[0x3]; // 0x2119(0x03)
	float FlashTimer; // 0x211c(0x04)
	float FlashTimerScale; // 0x2120(0x04)
	float FlashLimit; // 0x2124(0x04)
	float ArmorTimer; // 0x2128(0x04)
	char pad_212C[0x4]; // 0x212c(0x04)
	struct UMaterialInstanceDynamic* ArmorMatInst; // 0x2130(0x08)
	int32_t ArmorMatID; // 0x2138(0x04)
	float TestTime; // 0x213c(0x04)
	float VanishArmorTimeScale; // 0x2140(0x04)
	float IKOffsetRightFoot; // 0x2144(0x04)
	float IKOffsetLeftFoot; // 0x2148(0x04)
	struct FName RightFootSocket; // 0x214c(0x08)
	struct FName LeftFootSocket; // 0x2154(0x08)
	float WeakFlashTimer2; // 0x215c(0x04)
	float WeakFlashTimerScale2; // 0x2160(0x04)
	float WeakFlashLimit2; // 0x2164(0x04)
	struct UDataTable* Ai_Table; // 0x2168(0x08)
	int32_t 4leg_Rush_Num; // 0x2170(0x04)
	char pad_2174[0x4]; // 0x2174(0x04)
	struct TArray<struct UMaterialInstanceDynamic*> ArmorParticleMaterials; // 0x2178(0x10)
	struct UMaterialInstanceDynamic* ArmorParticleMat; // 0x2188(0x08)
	bool IsUpdateIKFoot; // 0x2190(0x01)
	bool IsStart4Leg; // 0x2191(0x01)
	char pad_2192[0x2]; // 0x2192(0x02)
	struct FName RagdollBoneName2Leg; // 0x2194(0x08)
	struct FName RagdollBoneName4Leg; // 0x219c(0x08)
	char pad_21A4[0x4]; // 0x21a4(0x04)
	struct UParticleSystem* ArmorBreakEffect; // 0x21a8(0x08)
	struct TSoftObjectPtr<UParticleSystem> ArmorBreakEffectSoftReferences; // 0x21b0(0x28)
	enum class Enum_Race_em0100 Race; // 0x21d8(0x01)
	char pad_21D9[0x3]; // 0x21d9(0x03)
	float At_CT_Homing; // 0x21dc(0x04)
	float At_CT_ShockWave; // 0x21e0(0x04)
	float At_CT_Confusion; // 0x21e4(0x04)
	float At_CT_Dazzle; // 0x21e8(0x04)
	bool bAnimNotifyAttackBegin; // 0x21ec(0x01)
	bool bAnimNotifyChangeLeg; // 0x21ed(0x01)
	char pad_21EE[0x2]; // 0x21ee(0x02)
	float ActionShowGap; // 0x21f0(0x04)
	char pad_21F4[0x4]; // 0x21f4(0x04)
	struct ABP_Enemy_ArmorBase_C* ArmorModel; // 0x21f8(0x08)
	struct UMaterialInstanceDynamic* ArmorMaterial; // 0x2200(0x08)
	struct ABP_Enemy_ArmorBase_C* ArmorModelReference; // 0x2208(0x08)
	struct FName ArmorSocketName; // 0x2210(0x08)
	bool IsLookAt; // 0x2218(0x01)
	bool IsReleaseLookAt; // 0x2219(0x01)
	char pad_221A[0x2]; // 0x221a(0x02)
	float LookAtReleaseCounter; // 0x221c(0x04)
	bool IsEnable2legAction; // 0x2220(0x01)
	char pad_2221[0x3]; // 0x2221(0x03)
	int32_t DamageLargeCount; // 0x2224(0x04)
	bool IsHitHorn; // 0x2228(0x01)
	bool IsStartChase; // 0x2229(0x01)
	char pad_222A[0x2]; // 0x222a(0x02)
	float ChasePastTime; // 0x222c(0x04)
	bool IsStampAction; // 0x2230(0x01)
	bool IsLostTarget; // 0x2231(0x01)
	char pad_2232[0x2]; // 0x2232(0x02)
	float SwingMotionMoveDistance; // 0x2234(0x04)
	float DistanceAfterRush; // 0x2238(0x04)
	float ProbabilityAfterRush; // 0x223c(0x04)
	struct TArray<enum class Enum_em0100> NearAttackActions; // 0x2240(0x10)
	struct TArray<enum class Enum_em0100> MiddleAttackActions; // 0x2250(0x10)
	struct TArray<enum class Enum_em0100> FarAttackActions; // 0x2260(0x10)
	struct TArray<enum class Enum_em0100> NearAttackActionsConfusion; // 0x2270(0x10)
	struct TArray<enum class Enum_em0100> MiddleAttackActionsConfusion; // 0x2280(0x10)
	struct TArray<enum class Enum_em0100> FarAttackActionsConfusion; // 0x2290(0x10)
	struct ABP_Enemy_Weapon_C* WeaponClass; // 0x22a0(0x08)
	struct ABP_Enemy_ArmorBase_C* ArmorInstance; // 0x22a8(0x08)
	float RushPathCheckRange; // 0x22b0(0x04)
	struct FRotator TargetSpecialRotation; // 0x22b4(0x0c)
	bool IsUpdateSpecialRotation; // 0x22c0(0x01)

	void NoticeDeadDazzle(struct ARSBattleEnemy_C* DeadDazzle, bool dummy); // Function BP_em0100Base.BP_em0100Base_C.NoticeDeadDazzle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetKeepOutAreaWastes(float Value); // Function BP_em0100Base.BP_em0100Base_C.GetKeepOutAreaWastes // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetKeepOutAreaConfusion(float Value); // Function BP_em0100Base.BP_em0100Base_C.GetKeepOutAreaConfusion // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetKeepOutAreaShockWave(float Value); // Function BP_em0100Base.BP_em0100Base_C.GetKeepOutAreaShockWave // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void StartTransTimer(bool dummy); // Function BP_em0100Base.BP_em0100Base_C.StartTransTimer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CanTrans(bool Result); // Function BP_em0100Base.BP_em0100Base_C.CanTrans // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetDamageFieldComponent(struct UBP_DamageFieldComponent_C* DamageField); // Function BP_em0100Base.BP_em0100Base_C.GetDamageFieldComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetShockWaveIntervalSec(float IntervalSec); // Function BP_em0100Base.BP_em0100Base_C.GetShockWaveIntervalSec // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetShockWaveTotalSec(float TotalSec); // Function BP_em0100Base.BP_em0100Base_C.GetShockWaveTotalSec // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetHomingMoveLimit(float limitDistance); // Function BP_em0100Base.BP_em0100Base_C.GetHomingMoveLimit // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetHornDownSecMax(float second); // Function BP_em0100Base.BP_em0100Base_C.GetHornDownSecMax // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetHornDownSecMin(float second); // Function BP_em0100Base.BP_em0100Base_C.GetHornDownSecMin // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void CreateDazzle(bool dummy); // Function BP_em0100Base.BP_em0100Base_C.CreateDazzle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBreakFromSAS(bool fronSAS, bool dummy); // Function BP_em0100Base.BP_em0100Base_C.SetBreakFromSAS // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetInitHornLife(float InitLife); // Function BP_em0100Base.BP_em0100Base_C.GetInitHornLife // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetHornDamagePercent(float DamagePercent); // Function BP_em0100Base.BP_em0100Base_C.GetHornDamagePercent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	enum class EEnemyTribe GetEnemyTribe(); // Function BP_em0100Base.BP_em0100Base_C.GetEnemyTribe // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FinishWeaponDisableTick(); // Function BP_em0100Base.BP_em0100Base_C.FinishWeaponDisableTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateLookAt_em0100(); // Function BP_em0100Base.BP_em0100Base_C.UpdateLookAt_em0100 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSpecialRotationTarget(struct FRotator TargetRotation); // Function BP_em0100Base.BP_em0100Base_C.SetSpecialRotationTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndSpecialRotation(); // Function BP_em0100Base.BP_em0100Base_C.EndSpecialRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartSpecialRotation(); // Function BP_em0100Base.BP_em0100Base_C.StartSpecialRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateSpecialRotation(); // Function BP_em0100Base.BP_em0100Base_C.UpdateSpecialRotation // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AreaOutResetParam(); // Function BP_em0100Base.BP_em0100Base_C.AreaOutResetParam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetShell(); // Function BP_em0100Base.BP_em0100Base_C.ResetShell // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnableWeak(bool EnableWeak); // Function BP_em0100Base.BP_em0100Base_C.SetEnableWeak // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ActionAfterAttackForward(bool RushEscape); // Function BP_em0100Base.BP_em0100Base_C.ActionAfterAttackForward // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ActionAfterStamp(bool IsNear); // Function BP_em0100Base.BP_em0100Base_C.ActionAfterStamp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Change Target Player(bool Enable); // Function BP_em0100Base.BP_em0100Base_C.Change Target Player // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEnemyBrainFieldResetAction(bool bMoveBrainField, bool bReset); // Function BP_em0100Base.BP_em0100Base_C.OnEnemyBrainFieldResetAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ActionAfterRush(bool IsSuccessProbability, bool IsNear); // Function BP_em0100Base.BP_em0100Base_C.ActionAfterRush // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Is Move Motion Attack Swing(bool IsMove); // Function BP_em0100Base.BP_em0100Base_C.Is Move Motion Attack Swing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMoveMotionScale(bool IsMove); // Function BP_em0100Base.BP_em0100Base_C.SetMoveMotionScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetWeaponMaxNum(int32_t WeaponNum); // Function BP_em0100Base.BP_em0100Base_C.GetWeaponMaxNum // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCoreCollision(struct UDamagePartCollisionComponent* CoreCollision); // Function BP_em0100Base.BP_em0100Base_C.GetCoreCollision // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMoveToTargetAnim(enum class EnemyMoveAnimKind MoveAnim); // Function BP_em0100Base.BP_em0100Base_C.GetMoveToTargetAnim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	struct UEnemyAiComponentBase* GetEnemyAiComponent(); // Function BP_em0100Base.BP_em0100Base_C.GetEnemyAiComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void DebugUpdate(); // Function BP_em0100Base.BP_em0100Base_C.DebugUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugGetUniqueConditionText(struct TArray<struct FText> text); // Function BP_em0100Base.BP_em0100Base_C.DebugGetUniqueConditionText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void EndChase(); // Function BP_em0100Base.BP_em0100Base_C.EndChase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateChase(float DeltaSec); // Function BP_em0100Base.BP_em0100Base_C.UpdateChase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartChase(); // Function BP_em0100Base.BP_em0100Base_C.StartChase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAttackActorHit(struct FHCHitResult HitResult, bool dummy); // Function BP_em0100Base.BP_em0100Base_C.OnAttackActorHit // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateEnable2leg(); // Function BP_em0100Base.BP_em0100Base_C.UpdateEnable2leg // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStartDamageLarge(struct FRotator Rot, struct FVector hitPosition, struct FVector HitDir, struct UPrimitiveComponent* Primitive, struct FHCSkillCommonInfo skill, struct AActor* attacker, bool dummy); // Function BP_em0100Base.BP_em0100Base_C.OnStartDamageLarge // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnable2leg(bool IsEnable); // Function BP_em0100Base.BP_em0100Base_C.IsEnable2leg // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void Enable2legAction(); // Function BP_em0100Base.BP_em0100Base_C.Enable2legAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateReleaseLookAt(float DeltaSec); // Function BP_em0100Base.BP_em0100Base_C.UpdateReleaseLookAt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnArmorBreak(struct FHCHitResult HitResult, bool Dammy); // Function BP_em0100Base.BP_em0100Base_C.OnArmorBreak // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcArmorImpulseParam(struct FTransform BaseTransform, struct FVector HitLocation, struct FVector HitDirection); // Function BP_em0100Base.BP_em0100Base_C.CalcArmorImpulseParam // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void CreateArmorModel(bool dummy); // Function BP_em0100Base.BP_em0100Base_C.CreateArmorModel // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEnemyEnumLength(int32_t Length); // Function BP_em0100Base.BP_em0100Base_C.GetEnemyEnumLength // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void MeshVisibility(bool Visibility); // Function BP_em0100Base.BP_em0100Base_C.MeshVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DisableArmorCollision(bool Ret); // Function BP_em0100Base.BP_em0100Base_C.DisableArmorCollision // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEnemySoundEnum(enum class Enum_EnemySound SoundEnum); // Function BP_em0100Base.BP_em0100Base_C.GetEnemySoundEnum // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update Hit Damage Material Armor(float sec, float Time); // Function BP_em0100Base.BP_em0100Base_C.Update Hit Damage Material Armor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEnemyAssetLoad(bool return); // Function BP_em0100Base.BP_em0100Base_C.OnEnemyAssetLoad // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMoveWalk(bool return); // Function BP_em0100Base.BP_em0100Base_C.SetMoveWalk // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsMoveCheck(bool return); // Function BP_em0100Base.BP_em0100Base_C.IsMoveCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetAiTimer(char Enum, float AiTimer); // Function BP_em0100Base.BP_em0100Base_C.GetAiTimer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetAiTimer(char Enum, bool return); // Function BP_em0100Base.BP_em0100Base_C.SetAiTimer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAiDataTableString(char Enum, struct FString Param); // Function BP_em0100Base.BP_em0100Base_C.GetAiDataTableString // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetMoveRun(bool return); // Function BP_em0100Base.BP_em0100Base_C.SetMoveRun // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NotDamageMontage(bool return); // Function BP_em0100Base.BP_em0100Base_C.NotDamageMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void DamageMontage(struct TArray<struct FHCHitResult> Result, bool Damage_Enable); // Function BP_em0100Base.BP_em0100Base_C.DamageMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWeakHitCollision(bool Ret); // Function BP_em0100Base.BP_em0100Base_C.SetWeakHitCollision // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeRagdoll(); // Function BP_em0100Base.BP_em0100Base_C.ChangeRagdoll // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MainTick(float DeltaSeconds, bool dummy); // Function BP_em0100Base.BP_em0100Base_C.MainTick // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsNotFootIK(); // Function BP_em0100Base.BP_em0100Base_C.IsNotFootIK // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void FootOffset(float LocationX, float LocationY, float LocationZ, float LocationZ_Min, float return); // Function BP_em0100Base.BP_em0100Base_C.FootOffset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LineTrace(struct FVector Start, struct FVector End, bool ReturnHit, struct FVector ReturnVector); // Function BP_em0100Base.BP_em0100Base_C.LineTrace // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateFootIK(float sec); // Function BP_em0100Base.BP_em0100Base_C.UpdateFootIK // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckFootTrace(struct FName Socket, float LocationZ, float Offset, float Distance); // Function BP_em0100Base.BP_em0100Base_C.CheckFootTrace // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateActorLocationZ(float sec); // Function BP_em0100Base.BP_em0100Base_C.UpdateActorLocationZ // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Begin(); // Function BP_em0100Base.BP_em0100Base_C.Begin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ArmorBreakMaterial(float Time); // Function BP_em0100Base.BP_em0100Base_C.ArmorBreakMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ArmorBreak(); // Function BP_em0100Base.BP_em0100Base_C.ArmorBreak // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitTransTime(); // Function BP_em0100Base.BP_em0100Base_C.InitTransTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(float DeltaSec); // Function BP_em0100Base.BP_em0100Base_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAiTable(enum class Enum_em0100 Name, struct FAiParamEnemy Param); // Function BP_em0100Base.BP_em0100Base_C.GetAiTable // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_em0100Base.BP_em0100Base_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_em0100Base.BP_em0100Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_em0100Base.BP_em0100Base_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void StartDeadStaging(); // Function BP_em0100Base.BP_em0100Base_C.StartDeadStaging // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeRagdollBoneName(); // Function BP_em0100Base.BP_em0100Base_C.ChangeRagdollBoneName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_em0100Base.BP_em0100Base_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_em0100Base(int32_t EntryPoint); // Function BP_em0100Base.BP_em0100Base_C.ExecuteUbergraph_BP_em0100Base // (Final|UbergraphFunction) // @ game+0x1685580
};

