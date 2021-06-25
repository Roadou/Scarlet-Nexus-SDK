// BlueprintGeneratedClass BP_UniqueEffectComponent.BP_UniqueEffectComponent_C
// Size: 0x529 (Inherited: 0xc0)
struct UBP_UniqueEffectComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct TArray<struct URSParticleSystemComponentBase*> ParticleChildCapture; // 0xc8(0x10)
	struct UMeshComponent* MeshComp; // 0xd8(0x08)
	struct TArray<struct UMeshComponent*> CaptureMeshList; // 0xe0(0x10)
	bool bMaterialCaptureStart; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct FSPsychicCaptureMaterial MaterialParamNormal; // 0xf8(0xa0)
	struct FSPsychicCaptureMaterial MaterialParamFire; // 0x198(0xa0)
	struct FSPsychicCaptureMaterial MaterialParamThunder; // 0x238(0xa0)
	struct FSPsychicCaptureMaterial MaterialCaptureStartParam; // 0x2d8(0xa0)
	float MaterialCaptureStartTimer; // 0x378(0x04)
	char pad_37C[0x4]; // 0x37c(0x04)
	struct UCurveVector* MaterialCaptureStartCurve; // 0x380(0x08)
	struct UCurveVector* MaterialCurveNormal; // 0x388(0x08)
	struct FPsychicObjectSizeParameter SizeParameter; // 0x390(0x118)
	bool bAura; // 0x4a8(0x01)
	bool bAuraOn; // 0x4a9(0x01)
	char pad_4AA[0x2]; // 0x4aa(0x02)
	float AuraGrowTime; // 0x4ac(0x04)
	float auraRate; // 0x4b0(0x04)
	bool bDbDispAura; // 0x4b4(0x01)
	char pad_4B5[0x3]; // 0x4b5(0x03)
	float ParticleRateCaptureAura; // 0x4b8(0x04)
	struct FVector ParticleSizeCaptureAura; // 0x4bc(0x0c)
	struct UMeshComponent* AuraComp; // 0x4c8(0x08)
	float CaptureMaterialRate; // 0x4d0(0x04)
	bool bStencilOn; // 0x4d4(0x01)
	char pad_4D5[0x3]; // 0x4d5(0x03)
	int32_t StencilValue; // 0x4d8(0x04)
	float psychicDeltaSecond; // 0x4dc(0x04)
	enum class EPsychicObjectProcedure ProcedurePhase; // 0x4e0(0x01)
	char pad_4E1[0x7]; // 0x4e1(0x07)
	struct TArray<struct URSParticleSystemComponentBase*> EffectCompList; // 0x4e8(0x10)
	float psychicDeltaRate; // 0x4f8(0x04)
	bool bEffectAttack; // 0x4fc(0x01)
	char pad_4FD[0x3]; // 0x4fd(0x03)
	struct TArray<struct URSParticleSystemComponentBase*> EffectAttack; // 0x500(0x10)
	bool bRequestAsyncCommon; // 0x510(0x01)
	bool bRequestAsyncAttack; // 0x511(0x01)
	bool bRequestAsyncAttackUnique; // 0x512(0x01)
	bool bAsync; // 0x513(0x01)
	bool bAsyncCommon; // 0x514(0x01)
	bool bAsyncAttack; // 0x515(0x01)
	bool bAsyncAttackUnique; // 0x516(0x01)
	bool bNewCommon; // 0x517(0x01)
	struct UPsychicSasParticleComponent_C* PsychicSASEffectComp; // 0x518(0x08)
	struct ATriggerEffectManager* TrgEffMgr; // 0x520(0x08)
	bool IsNoParticle; // 0x528(0x01)

	void SetAttackEffectOff(); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.SetAttackEffectOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Set Capture Effect Off(); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.Set Capture Effect Off // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadEffectParameter(); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.LoadEffectParameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAsyncCommon(); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.UpdateAsyncCommon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAsyncCapture(); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.UpdateAsyncCapture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPhaseDestroy(bool flag in, float delay time in); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.SetPhaseDestroy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPhaseAttack(bool flag in); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.SetPhaseAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackUnique(); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.SetAttackUnique // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackThrow(bool flag in, float throw speed in, float homing speed in); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.SetAttackThrow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEffectAttackThrow(); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.SetEffectAttackThrow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEffectAttack(bool flag in, enum class E_SASKind sas kind in); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.SetEffectAttack // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEmitterTemplate(enum class E_SASKind SasKind, bool IsCapture, bool IsSkeletalMesh, struct UParticleSystem* Template); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.GetEmitterTemplate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetPsychicDeltaSecond(bool bPsychicSpeed, bool bGetRate, float delta second, float Rate); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.GetPsychicDeltaSecond // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CalcDeltaSecond(float delta second, float calc delta second); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.CalcDeltaSecond // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePsychicComponent(); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.UpdatePsychicComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePsychicDelta(float delta second); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.UpdatePsychicDelta // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateMain(); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.UpdateMain // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePsyMain(float delta second); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.UpdatePsyMain // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetParameterCopy(float rate in); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.SetParameterCopy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetParameterEffectFade(float rate in); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.SetParameterEffectFade // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateEffectDestroy(); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.UpdateEffectDestroy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEffectDestroy(bool flag in); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.SetEffectDestroy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDestroy(); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.UpdateDestroy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAsyncAttackThrow(); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.UpdateAsyncAttackThrow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAttackThrow(); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.UpdateAttackThrow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePsyCompOld(); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.UpdatePsyCompOld // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateEffect(); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.UpdateEffect // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateEffectAura(); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.UpdateEffectAura // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMIParameterEmission(float value in); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.SetMIParameterEmission // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetOutline(bool flag in); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.SetOutline // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMIParameterAura(float value in); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.SetMIParameterAura // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEffectAuraGrow(bool flag in, bool force off, bool instance on); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.SetEffectAuraGrow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicObjectAttack(struct AActor* target actor in, bool direct drop in, bool unique in, bool combo in, bool air combo in, bool brain field in, int32_t combo level in, int32_t combo index in, float attract time in, struct UAnimSequence* anim seq in, enum class EPsychicObjectBrainFieldAttackType attack type in, bool flag in, bool return); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.SetPsychicObjectAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicObjectCapture(bool flag in, struct ARsBattleHero_C* capture owner in, bool capture success in, bool combo in, bool air in, bool return); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.SetPsychicObjectCapture // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEffectAura(bool flag in, bool instance on in); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.SetEffectAura // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPhaseCapture(bool flag in, bool combo in, bool capture success in, bool air in); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.SetPhaseCapture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetDeltaSecond(float DeltaSecond); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.GetDeltaSecond // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateMaterialCaptureStart(); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.UpdateMaterialCaptureStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePsychicObjectEffect(); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.UpdatePsychicObjectEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCheckTimeDilation(); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.UpdateCheckTimeDilation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAsync(); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.UpdateAsync // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrevAsync(); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.PrevAsync // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCapture(); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.UpdateCapture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePsyComp(); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.UpdatePsyComp // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddCaptureMesh(struct UMeshComponent* Mesh); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.AddCaptureMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize Component(struct UMeshComponent* mesh comp in, struct USceneComponent* arrow comp in, struct USphereComponent* attack sphere in, struct UCapsuleComponent* attack capsule in, struct UPsychicSasParticleComponent_C* PsychicSasParticleComp); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.Initialize Component // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeParameter(); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.InitializeParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadMaterialCaptureStartCurve(struct FSPsychicCaptureMaterial SPsychicCaptureMaterial, struct UCurveVector* AsCurve Vector); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.LoadMaterialCaptureStartCurve // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitMaterialCaptureStartParam(); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.InitMaterialCaptureStartParam // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMaterialCaptureStartCurve(enum class E_SASKind sas kind in, struct UCurveVector* material curve); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.GetMaterialCaptureStartCurve // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetMateralCaptureStartParam(enum class E_SASKind SasKindIn, struct FSPsychicCaptureMaterial MaterialParam); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.GetMateralCaptureStartParam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetAsyncCommon(struct FName RefNameIn, bool FlagIn); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.SetAsyncCommon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DeactivateEffect(enum class E_SASKind SasKind, bool Capture); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.DeactivateEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnMeshEffect(struct UMeshComponent* mesh in, enum class E_SASKind sas kind in, bool capture in, float rate in, struct FVector size in, float rateAura in, struct FVector sizeAura in, struct URSParticleSystemComponentBase* particle system); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.SpawnMeshEffect // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnEffect(enum class E_SASKind SasKind, bool Force, bool Capture, float Rate, struct FVector Size, float rateAura, struct FVector sizeAura); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.SpawnEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEffectCaptureParam(enum class E_SASKind SAS Kind, bool Capture, float Rate, struct FVector Size, float rateAura, struct FVector sizeAura); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.GetEffectCaptureParam // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMaterialCaptureStart(bool FlagIn); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.SetMaterialCaptureStart // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEffectCapture(bool FlagIn); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.SetEffectCapture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_UniqueEffectComponent(int32_t EntryPoint); // Function BP_UniqueEffectComponent.BP_UniqueEffectComponent_C.ExecuteUbergraph_BP_UniqueEffectComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

