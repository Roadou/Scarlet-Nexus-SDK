// BlueprintGeneratedClass BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C
// Size: 0xcb4 (Inherited: 0xaaa)
struct ABP_MapGimmickDumpCar_C : ABP_MapGimmickAttackObjectBase_C {
	char pad_AAA[0x6]; // 0xaaa(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xab0(0x08)
	struct USceneComponent* FarLookAtPosition; // 0xab8(0x08)
	struct USceneComponent* NearLookAtPosition; // 0xac0(0x08)
	struct UBoxComponent* MapCollision; // 0xac8(0x08)
	struct USphereComponent* EnemyCheckCollision; // 0xad0(0x08)
	struct USceneComponent* EffectPos; // 0xad8(0x08)
	struct USphereComponent* AttackSphere; // 0xae0(0x08)
	struct UBoxComponent* AttackCollision; // 0xae8(0x08)
	struct USkeletalMeshComponent* FallMesh; // 0xaf0(0x08)
	struct USceneComponent* EndPoint; // 0xaf8(0x08)
	struct USceneComponent* ObjectCenter; // 0xb00(0x08)
	struct USceneComponent* PlayerLookAt; // 0xb08(0x08)
	struct USceneComponent* IconPosition; // 0xb10(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0xb18(0x08)
	bool DebugRepeatable; // 0xb20(0x01)
	char pad_B21[0x3]; // 0xb21(0x03)
	float HomingRate; // 0xb24(0x04)
	struct AActor* TargetActor; // 0xb28(0x08)
	float HomingAngleLimit; // 0xb30(0x04)
	bool IsCheckGroundHit; // 0xb34(0x01)
	bool IsDebug; // 0xb35(0x01)
	char pad_B36[0x2]; // 0xb36(0x02)
	struct UAnimSequence* CrashAnim; // 0xb38(0x08)
	struct FVector FallDownVec; // 0xb40(0x0c)
	bool IsFallDown; // 0xb4c(0x01)
	char pad_B4D[0x3]; // 0xb4d(0x03)
	struct FRotator FallDownRot; // 0xb50(0x0c)
	float FallSpeedRate; // 0xb5c(0x04)
	struct UAnimSequence* ActivateAnim; // 0xb60(0x08)
	struct UAnimSequence* ChargeAnim; // 0xb68(0x08)
	struct UAnimSequence* StartAnim; // 0xb70(0x08)
	char pad_B78[0x8]; // 0xb78(0x08)
	struct FTransform LastTransform; // 0xb80(0x30)
	float FallDownSpeed; // 0xbb0(0x04)
	struct FVector FallDownVecPerSec; // 0xbb4(0x0c)
	struct USkeletalMeshComponent* GhostMesh; // 0xbc0(0x08)
	struct FVector GroundPos; // 0xbc8(0x0c)
	struct FVector GroundHitOffset; // 0xbd4(0x0c)
	struct FVector FallStartPos; // 0xbe0(0x0c)
	struct FVector FallPos; // 0xbec(0x0c)
	struct FRotator FallRot; // 0xbf8(0x0c)
	char pad_C04[0xc]; // 0xc04(0x0c)
	struct FTransform OrgTrans; // 0xc10(0x30)
	float MaxHomingLength; // 0xc40(0x04)
	char pad_C44[0x4]; // 0xc44(0x04)
	struct UParticleSystem* HitParticle; // 0xc48(0x08)
	struct FRotator HitParticleRot; // 0xc50(0x0c)
	char pad_C5C[0x4]; // 0xc5c(0x04)
	struct ABP_JumpStart_em0320_C* JumpStartVoluneEm0320; // 0xc60(0x08)
	struct USoundAtomCue* SE_Capture; // 0xc68(0x08)
	struct USoundAtomCue* SE_Activate; // 0xc70(0x08)
	struct FVector HitPosOffset; // 0xc78(0x0c)
	struct FVector HitBossOffset; // 0xc84(0x0c)
	float FadeOutDelaySec; // 0xc90(0x04)
	float PsychicSearchRadius; // 0xc94(0x04)
	struct ABP_TriggerEffectManager_C* TrgEffMgr; // 0xc98(0x08)
	bool IsFloatingStart; // 0xca0(0x01)
	bool IsFloatingFinish; // 0xca1(0x01)
	bool OnHitEnemy; // 0xca2(0x01)
	char pad_CA3[0x1]; // 0xca3(0x01)
	struct FVector TargetOffset; // 0xca4(0x0c)
	float CancelCoolSec; // 0xcb0(0x04)

	void GetOpenScenarioFlag(struct FName ScenarioFlag); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.GetOpenScenarioFlag // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMapGimmickIconPosition(struct FVector Pos); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.GetMapGimmickIconPosition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsViewInDetailMap(bool Enable); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.IsViewInDetailMap // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMapGimmickTransform(struct FTransform trans); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.GetMapGimmickTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Canceling(enum class EMapGimmickStatusFunc Type, float DeltaSeconds, struct FName Name, bool Result); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.Canceling // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Finished(enum class EMapGimmickStatusFunc Type, float DeltaSeconds, struct FName StateName, bool Result); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.Finished // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Ready(enum class EMapGimmickStatusFunc Type, float DeltaSeconds, struct FName StateName, bool Result); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.Ready // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Init(enum class EMapGimmickStatusFunc Type, float DeltaSeconds, bool Result); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.Init // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Charge(enum class EMapGimmickStatusFunc Type, float DeltaSeconds, struct FName StateName, bool Result); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.Charge // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Activate(enum class EMapGimmickStatusFunc Type, float DeltaSeconds, struct FName StateName, bool Result); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.Activate // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FVector GetLookAtPosition(); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.GetLookAtPosition // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsInCapture(bool Capturing); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.IsInCapture // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	float GetSearchRadius(); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.GetSearchRadius // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OnEndTriggerVolumeOverlap(); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.OnEndTriggerVolumeOverlap // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OnBeginTriggerVolumeOverlap(); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.OnBeginTriggerVolumeOverlap // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OnMapGimmickChargeCancel(struct AMapGimmickObject* GimmickActor); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.OnMapGimmickChargeCancel // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool OnMapGimmickChargeEnd(struct AMapGimmickObject* GimmickActor); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.OnMapGimmickChargeEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void UpdateFallPos(float DeltaSeconds, bool Ground); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.UpdateFallPos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartFallByCalc(); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.StartFallByCalc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackPosToDump(); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.SetAttackPosToDump // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrakeEm0300Tank(struct AActor* Target, struct AActor* attacker, struct AActor* AttackerOwner); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.BrakeEm0300Tank // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MoveTransMeshToActor(); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.MoveTransMeshToActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnHitGround(); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.OnHitGround // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugStartPhysics(); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.DebugStartPhysics // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckGroundEnable(bool CheckGround); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.CheckGroundEnable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct UPrimitiveComponent* GetAttackCollisionPrimitive(); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.GetAttackCollisionPrimitive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	struct FVector GetTargetVec(); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.GetTargetVec // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateHoming(bool HomingOn, float DeltaSeconds); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.UpdateHoming // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetQuatToTargetAxisZ(struct FVector BaseVec, struct FVector TargetVec, float AngleLimitDegree, struct FRotator Rreturn Value); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.GetQuatToTargetAxisZ // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct UPrimitiveComponent* GetPrimitive(); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.GetPrimitive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetPsychicObjectWeightGaugePos(struct FVector weight gauge pos); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.GetPsychicObjectWeightGaugePos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct USceneComponent* GetPlayerLookAtComponent(); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.GetPlayerLookAtComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	struct USceneComponent* GetIconComponent(); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.GetIconComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	struct USceneComponent* GetLookAtComponent(); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.GetLookAtComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool SetAttackCollisionActive(bool Active); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.SetAttackCollisionActive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ActivateProc(enum class EMapGimmickStatusFunc Selection, struct FName StateName); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.ActivateProc // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BndEvt__HitCheckReceiver_K2Node_ComponentBoundEvent_4_HitResultDelegate__DelegateSignature(struct FHCHitResult Result); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.BndEvt__HitCheckReceiver_K2Node_ComponentBoundEvent_4_HitResultDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1685580
	void BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1685580
	void OnFinishActivate(); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.OnFinishActivate // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1685580
	void EnablePhysics(bool Enable); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.EnablePhysics // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_MapGimmickDumpCar(int32_t EntryPoint); // Function BP_MapGimmickDumpCar.BP_MapGimmickDumpCar_C.ExecuteUbergraph_BP_MapGimmickDumpCar // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

