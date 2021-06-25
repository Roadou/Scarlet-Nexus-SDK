// BlueprintGeneratedClass BP_MapGimmickAttackObjectBase.BP_MapGimmickAttackObjectBase_C
// Size: 0xaaa (Inherited: 0x928)
struct ABP_MapGimmickAttackObjectBase_C : ABP_MapGimmickObjectBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x928(0x08)
	struct UHitCheckReceiverComponent* HitCheckReceiver; // 0x930(0x08)
	struct UTeamComponent* Team; // 0x938(0x08)
	struct UHitCheckComponent* HitCheckComponent; // 0x940(0x08)
	struct FHCCollisionCommonInfo CollisionCommonInfo; // 0x948(0x70)
	struct FHCSkillCommonInfo SkillCommonInfo; // 0x9b8(0xe8)
	struct FHCHitEffectInfo HitEffectInfo; // 0xaa0(0x08)
	bool UseMultiHitSeparateParam; // 0xaa8(0x01)
	bool isInitializedHitCollision; // 0xaa9(0x01)

	void RegisterHitExtraTypeToCollision(); // Function BP_MapGimmickAttackObjectBase.BP_MapGimmickAttackObjectBase_C.RegisterHitExtraTypeToCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CommonAttackFinishFunc(bool UpdateCollision); // Function BP_MapGimmickAttackObjectBase.BP_MapGimmickAttackObjectBase_C.CommonAttackFinishFunc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CommonAttackHitFunc(); // Function BP_MapGimmickAttackObjectBase.BP_MapGimmickAttackObjectBase_C.CommonAttackHitFunc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetMultiHitExtraType(bool UpdateCollision); // Function BP_MapGimmickAttackObjectBase.BP_MapGimmickAttackObjectBase_C.ResetMultiHitExtraType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMultiHitExtraType(); // Function BP_MapGimmickAttackObjectBase.BP_MapGimmickAttackObjectBase_C.SetMultiHitExtraType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPsychicObjectWeightGaugePos(struct FVector weight gauge pos); // Function BP_MapGimmickAttackObjectBase.BP_MapGimmickAttackObjectBase_C.GetPsychicObjectWeightGaugePos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackEnable(bool Enable, bool IsGimmickEnemy); // Function BP_MapGimmickAttackObjectBase.BP_MapGimmickAttackObjectBase_C.SetAttackEnable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeAttackCollision(); // Function BP_MapGimmickAttackObjectBase.BP_MapGimmickAttackObjectBase_C.InitializeAttackCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeAttackCollisionLoop(); // Function BP_MapGimmickAttackObjectBase.BP_MapGimmickAttackObjectBase_C.InitializeAttackCollisionLoop // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EnableAttackCollision(bool Enable); // Function BP_MapGimmickAttackObjectBase.BP_MapGimmickAttackObjectBase_C.EnableAttackCollision // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_MapGimmickAttackObjectBase.BP_MapGimmickAttackObjectBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_MapGimmickAttackObjectBase(int32_t EntryPoint); // Function BP_MapGimmickAttackObjectBase.BP_MapGimmickAttackObjectBase_C.ExecuteUbergraph_BP_MapGimmickAttackObjectBase // (Final|UbergraphFunction) // @ game+0x1685580
};

