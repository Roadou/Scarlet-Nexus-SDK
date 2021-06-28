// BlueprintGeneratedClass BP_em0600_Base.BP_em0600_Base_C
// Size: 0x2199 (Inherited: 0x2088)
struct ABP_em0600_Base_C : ARSBattleEnemy_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2088(0x08)
	struct UEnemyGroundCheckComponent* EnemyGroundCheck; // 0x2090(0x08)
	struct UDamagePartCollisionComponent* Core; // 0x2098(0x08)
	struct UBP_EnemyWeaponManageComponent_C* BP_EnemyWeaponManageComponent; // 0x20a0(0x08)
	struct UBP_Param_em0600_C* BP_Param_em0600; // 0x20a8(0x08)
	struct UDamagePartCollisionComponent* Tree1; // 0x20b0(0x08)
	struct UBP_Ai_em0600_C* BP_Ai_em0600; // 0x20b8(0x08)
	struct UDamagePartCollisionComponent* Weak; // 0x20c0(0x08)
	struct UDamagePartCollisionComponent* Body; // 0x20c8(0x08)
	float CT_Around; // 0x20d0(0x04)
	float CT_AroundMove; // 0x20d4(0x04)
	float CT_Middle; // 0x20d8(0x04)
	float FootEffectTimer; // 0x20dc(0x04)
	struct FVector SpawnEffectLocation; // 0x20e0(0x0c)
	float FootSpawnMoveDistance; // 0x20ec(0x04)
	float FootEffectSpawnDeltaSec; // 0x20f0(0x04)
	struct FVector OldLocation; // 0x20f4(0x0c)
	float FootSpawnDeltaMove; // 0x2100(0x04)
	char pad_2104[0x4]; // 0x2104(0x04)
	struct TSoftObjectPtr<UParticleSystem> FootEffectSoftRef; // 0x2108(0x28)
	struct UParticleSystem* FootEffectHandleSoftRef; // 0x2130(0x08)
	bool IsLanpSwitch; // 0x2138(0x01)
	bool AvatarL; // 0x2139(0x01)
	bool AvatarR; // 0x213a(0x01)
	char pad_213B[0x1]; // 0x213b(0x01)
	struct FName LanpMaterialName; // 0x213c(0x08)
	char pad_2144[0x4]; // 0x2144(0x04)
	struct TArray<struct FST_em_PartsEmission> PartsEmissionColorDatas; // 0x2148(0x10)
	enum class DE_em_PartsEmissionNames EmPartsEmissionName; // 0x2158(0x01)
	char pad_2159[0x3]; // 0x2159(0x03)
	float Time; // 0x215c(0x04)
	float EmissionLength; // 0x2160(0x04)
	struct FName EmissionSlotName; // 0x2164(0x08)
	struct FST_em_PartsEmission EmissionData; // 0x216c(0x1c)
	float RapidFireProbability; // 0x2188(0x04)
	bool IsEnableWeak_1; // 0x218c(0x01)
	char pad_218D[0x3]; // 0x218d(0x03)
	struct URSParticleSystemComponentBase* FootEffect; // 0x2190(0x08)
	bool IsDamageCut; // 0x2198(0x01)

	enum class EEnemyTribe GetEnemyTribe(); // Function BP_em0600_Base.BP_em0600_Base_C.GetEnemyTribe // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartFootEffect(); // Function BP_em0600_Base.BP_em0600_Base_C.StartFootEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStartAction(bool dummy); // Function BP_em0600_Base.BP_em0600_Base_C.OnStartAction // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateShootWeapon(struct FName SkillName); // Function BP_em0600_Base.BP_em0600_Base_C.CreateShootWeapon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetShootWeapon(struct ABP_Enemy_Weapon_C* Weapon); // Function BP_em0600_Base.BP_em0600_Base_C.GetShootWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnDead(bool dummy); // Function BP_em0600_Base.BP_em0600_Base_C.OnDead // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MeshFitGround(float interpSpeed, float angleLimit, bool bEndFit, bool bDummy); // Function BP_em0600_Base.BP_em0600_Base_C.MeshFitGround // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainTalkAttackAttr(); // Function BP_em0600_Base.BP_em0600_Base_C.BrainTalkAttackAttr // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPossibleCreateAvatar(bool IsPossible); // Function BP_em0600_Base.BP_em0600_Base_C.IsPossibleCreateAvatar // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCoreCollision(struct UDamagePartCollisionComponent* CoreCollision); // Function BP_em0600_Base.BP_em0600_Base_C.GetCoreCollision // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMoveToTargetAnim(enum class EnemyMoveAnimKind MoveAnim); // Function BP_em0600_Base.BP_em0600_Base_C.GetMoveToTargetAnim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	struct UEnemyAiComponentBase* GetEnemyAiComponent(); // Function BP_em0600_Base.BP_em0600_Base_C.GetEnemyAiComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetCheckCapsuleRadius(float Radius); // Function BP_em0600_Base.BP_em0600_Base_C.GetCheckCapsuleRadius // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void EndDamageFloating(bool dummy); // Function BP_em0600_Base.BP_em0600_Base_C.EndDamageFloating // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartDamageFloating(bool dummy); // Function BP_em0600_Base.BP_em0600_Base_C.StartDamageFloating // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUniqueSeeWeak(bool on, bool Dammy); // Function BP_em0600_Base.BP_em0600_Base_C.SetUniqueSeeWeak // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAnimNotifyCondition(int32_t ConditionNo, bool Result); // Function BP_em0600_Base.BP_em0600_Base_C.GetAnimNotifyCondition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateStatus(bool NewParam); // Function BP_em0600_Base.BP_em0600_Base_C.UpdateStatus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEnemyEnumLength(int32_t Length); // Function BP_em0600_Base.BP_em0600_Base_C.GetEnemyEnumLength // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void EmissionInit(); // Function BP_em0600_Base.BP_em0600_Base_C.EmissionInit // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEnemySoundEnum(enum class Enum_EnemySound SoundEnum); // Function BP_em0600_Base.BP_em0600_Base_C.GetEnemySoundEnum // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEnemyAssetLoad(bool return); // Function BP_em0600_Base.BP_em0600_Base_C.OnEnemyAssetLoad // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DamageMontage(struct TArray<struct FHCHitResult> Result, bool Damage_Enable); // Function BP_em0600_Base.BP_em0600_Base_C.DamageMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateFootEffect(float DeltaSeconds); // Function BP_em0600_Base.BP_em0600_Base_C.UpdateFootEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDistance(); // Function BP_em0600_Base.BP_em0600_Base_C.SetDistance // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateTimer(float DeltaSec); // Function BP_em0600_Base.BP_em0600_Base_C.UpdateTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MainTick(float DeltaSeconds, bool dummy); // Function BP_em0600_Base.BP_em0600_Base_C.MainTick // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAiTimer(char Enum, bool return); // Function BP_em0600_Base.BP_em0600_Base_C.SetAiTimer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAiTimer(char Enum, float AiTimer); // Function BP_em0600_Base.BP_em0600_Base_C.GetAiTimer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetAiDataTableString(char Enum, struct FString Param); // Function BP_em0600_Base.BP_em0600_Base_C.GetAiDataTableString // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_em0600_Base.BP_em0600_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_em0600_Base.BP_em0600_Base_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_em0600_Base(int32_t EntryPoint); // Function BP_em0600_Base.BP_em0600_Base_C.ExecuteUbergraph_BP_em0600_Base // (Final|UbergraphFunction) // @ game+0x1685580
};

