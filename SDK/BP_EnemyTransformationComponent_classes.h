// BlueprintGeneratedClass BP_EnemyTransformationComponent.BP_EnemyTransformationComponent_C
// Size: 0x1f0 (Inherited: 0xc0)
struct UBP_EnemyTransformationComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct TSoftObjectPtr<UMaterialInterface> MaterialTransformationAsset; // 0xc8(0x28)
	struct UMaterialInstanceDynamic* MaterialTransformation; // 0xf0(0x08)
	struct UPostProcessComponent* PostProcessComponent; // 0xf8(0x08)
	struct AActor* TargetActor; // 0x100(0x08)
	struct USkeletalMeshComponent* TargetSkeletalMesh; // 0x108(0x08)
	struct TArray<struct USkeletalMeshComponent*> TargetWeaponMeshes; // 0x110(0x10)
	bool Valid; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	float TimeSecondsTransformation; // 0x124(0x04)
	struct UCurveVector* TimelineCurveAsset; // 0x128(0x08)
	bool PlayIn; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct FMulticastInlineDelegate ED_ActorChanged; // 0x138(0x10)
	int32_t RestoreCustomStencil; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct TSoftObjectPtr<UMaterialInterface> MaterialDamageAsset; // 0x150(0x28)
	struct UMaterialInstanceDynamic* MaterialDamage; // 0x178(0x08)
	struct UCurveFloat* TimelineCurveDamageAsset; // 0x180(0x08)
	float TimeSecondsDamage; // 0x188(0x04)
	bool ActiveTransform; // 0x18c(0x01)
	bool ActiveDamage; // 0x18d(0x01)
	char pad_18E[0x2]; // 0x18e(0x02)
	struct FLinearColor TargetRect; // 0x190(0x10)
	struct UMaterialInstanceDynamic* SkeletalMeshMaterial; // 0x1a0(0x08)
	float TimeSecondsRibbonEffect; // 0x1a8(0x04)
	bool KickedEffect; // 0x1ac(0x01)
	char pad_1AD[0x3]; // 0x1ad(0x03)
	float EffectStartInWaitSeconds; // 0x1b0(0x04)
	float EffectStartOutWaitSeconds; // 0x1b4(0x04)
	struct FName SuperArmorClaimantName; // 0x1b8(0x08)
	struct UCurveVector* CancelTimelineCurveAsset; // 0x1c0(0x08)
	struct UCurveVector* CurrentCurveAsset; // 0x1c8(0x08)
	struct URSParticleSystemComponentBase* RibbonParticle; // 0x1d0(0x08)
	struct UCurveVector* BfCancelTimelineCurveAsset; // 0x1d8(0x08)
	bool bBfCancel; // 0x1e0(0x01)
	char pad_1E1[0x7]; // 0x1e1(0x07)
	struct URSParticleSystemComponentBase* FlushParticle; // 0x1e8(0x08)

	void CancelTransformation(bool bDummy); // Function BP_EnemyTransformationComponent.BP_EnemyTransformationComponent_C.CancelTransformation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsExecTransformation(bool bExec); // Function BP_EnemyTransformationComponent.BP_EnemyTransformationComponent_C.IsExecTransformation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetCustomStencil(int32_t StencilValue); // Function BP_EnemyTransformationComponent.BP_EnemyTransformationComponent_C.SetCustomStencil // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivatePostUpdate(float DeltaSeconds); // Function BP_EnemyTransformationComponent.BP_EnemyTransformationComponent_C.PrivatePostUpdate // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdateDamage(float DeltaSeconds); // Function BP_EnemyTransformationComponent.BP_EnemyTransformationComponent_C.PrivateUpdateDamage // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnDamage(); // Function BP_EnemyTransformationComponent.BP_EnemyTransformationComponent_C.OnDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Start Out(bool bCancel, bool bBfCancel); // Function BP_EnemyTransformationComponent.BP_EnemyTransformationComponent_C.Start Out // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateStart(); // Function BP_EnemyTransformationComponent.BP_EnemyTransformationComponent_C.PrivateStart // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdateTransformation(float DeltaSeconds); // Function BP_EnemyTransformationComponent.BP_EnemyTransformationComponent_C.PrivateUpdateTransformation // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartIn(bool bCancel); // Function BP_EnemyTransformationComponent.BP_EnemyTransformationComponent_C.StartIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(struct AActor* ParentActor, struct USkeletalMeshComponent* ParentSkeletalMesh); // Function BP_EnemyTransformationComponent.BP_EnemyTransformationComponent_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EnemyTransformationComponent.BP_EnemyTransformationComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EnemyTransformationComponent(int32_t EntryPoint); // Function BP_EnemyTransformationComponent.BP_EnemyTransformationComponent_C.ExecuteUbergraph_BP_EnemyTransformationComponent // (Final|UbergraphFunction) // @ game+0x1685580
	void ED_ActorChanged__DelegateSignature(); // Function BP_EnemyTransformationComponent.BP_EnemyTransformationComponent_C.ED_ActorChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

