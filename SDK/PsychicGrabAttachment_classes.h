// BlueprintGeneratedClass PsychicGrabAttachment.PsychicGrabAttachment_C
// Size: 0x4ec (Inherited: 0x230)
struct APsychicGrabAttachment_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UInertialMoveComponent_C* InertialMoveComponent; // 0x238(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	struct ARsBattleHero_C* grabOwner; // 0x250(0x08)
	struct ABP_PsychicObjectBasic_C* PsychicObject; // 0x258(0x08)
	int32_t Index; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
	struct TArray<struct FVector> PosOffsetList; // 0x268(0x10)
	struct FVector PosOffset; // 0x278(0x0c)
	bool bClusterType; // 0x284(0x01)
	bool bCheckParallel; // 0x285(0x01)
	bool bAttach; // 0x286(0x01)
	bool bAdjust; // 0x287(0x01)
	bool bBrainSwing; // 0x288(0x01)
	char pad_289[0x3]; // 0x289(0x03)
	float DeltaSeconds; // 0x28c(0x04)
	struct UCurveFloat* GrabFloatHeightCurve; // 0x290(0x08)
	struct UCurveFloat* GrabFloatSlopeCurve; // 0x298(0x08)
	struct TArray<float> RiseSpeedList; // 0x2a0(0x10)
	struct TArray<float> RiseHeightList; // 0x2b0(0x10)
	float RiseHeightTimeMax; // 0x2c0(0x04)
	float riseHeightTimer; // 0x2c4(0x04)
	float riseHeight; // 0x2c8(0x04)
	float RiseDelayStartTimeMax; // 0x2cc(0x04)
	float RiseDelayStartTime; // 0x2d0(0x04)
	float riseDelayStartTimer; // 0x2d4(0x04)
	float RiseSpeedRateMax; // 0x2d8(0x04)
	float RiseSpeedRateMin; // 0x2dc(0x04)
	float riseSpeedRate; // 0x2e0(0x04)
	float PlayRateMax; // 0x2e4(0x04)
	float PlayRateMin; // 0x2e8(0x04)
	float playRateRand; // 0x2ec(0x04)
	float PlayRate; // 0x2f0(0x04)
	struct FVector posRate; // 0x2f4(0x0c)
	struct FVector RotRate; // 0x300(0x0c)
	float MoveSpeedMax; // 0x30c(0x04)
	float MoveAccel; // 0x310(0x04)
	float DelayDistanceMax; // 0x314(0x04)
	bool bMove; // 0x318(0x01)
	char pad_319[0x3]; // 0x319(0x03)
	struct FVector posGrab; // 0x31c(0x0c)
	struct FVector posGrabPrev; // 0x328(0x0c)
	struct FRotator rotNow; // 0x334(0x0c)
	float rotSlope; // 0x340(0x04)
	char pad_344[0x4]; // 0x344(0x04)
	struct UParticleSystemComponent* effectTrail; // 0x348(0x08)
	struct UCurveFloat* DodgeSpeedCurve; // 0x350(0x08)
	float DodgeRate; // 0x358(0x04)
	float DodgeHeight; // 0x35c(0x04)
	bool bDodgeCheck; // 0x360(0x01)
	bool bDodgeResult; // 0x361(0x01)
	bool bParallel; // 0x362(0x01)
	bool bParallelRandom; // 0x363(0x01)
	bool bParallelReset; // 0x364(0x01)
	char pad_365[0x3]; // 0x365(0x03)
	struct FRotator Pll_RotMesh; // 0x368(0x0c)
	struct FRotator Pll_RotCalc; // 0x374(0x0c)
	struct FRotator Pll_RotActor; // 0x380(0x0c)
	struct FVector Pll_PosActor; // 0x38c(0x0c)
	bool bNewAttach; // 0x398(0x01)
	char pad_399[0x3]; // 0x399(0x03)
	struct FVector pll_calcPos; // 0x39c(0x0c)
	struct FRotator pll_calcRot; // 0x3a8(0x0c)
	bool bGrabGauge; // 0x3b4(0x01)
	char pad_3B5[0x3]; // 0x3b5(0x03)
	struct FGameTimer GrabGaugeTimer; // 0x3b8(0x0c)
	bool bInitGrabStart; // 0x3c4(0x01)
	bool bGrabStart; // 0x3c5(0x01)
	char pad_3C6[0x2]; // 0x3c6(0x02)
	struct UCurveFloat* GrabStartSpeedCurve; // 0x3c8(0x08)
	struct UCurveFloat* GrabStartRotateCurve; // 0x3d0(0x08)
	float GrabStartMoveTime; // 0x3d8(0x04)
	float GrabStartRotateTime; // 0x3dc(0x04)
	struct FGameTimer GrabStartTimer; // 0x3e0(0x0c)
	float grabStartSpeedRate; // 0x3ec(0x04)
	float grabStartRotateRate; // 0x3f0(0x04)
	float grabStartTimeRate; // 0x3f4(0x04)
	struct FVector GrabStartVec; // 0x3f8(0x0c)
	float grabStartRate; // 0x404(0x04)
	float GrabStartDir; // 0x408(0x04)
	bool bInitLiftUp; // 0x40c(0x01)
	bool bGrabLiftup; // 0x40d(0x01)
	char pad_40E[0x2]; // 0x40e(0x02)
	struct UCurveFloat* LiftUpHeightCurve; // 0x410(0x08)
	float LiftUpHeight; // 0x418(0x04)
	float liftHeightStt; // 0x41c(0x04)
	struct FGameTimer GrabLiftupDelayTimer; // 0x420(0x0c)
	struct FGameTimer GrabLiftupTimer; // 0x42c(0x0c)
	bool bInitGrabMove; // 0x438(0x01)
	bool bGrabMove; // 0x439(0x01)
	bool bGrabReload; // 0x43a(0x01)
	bool bGrabMoveDecel; // 0x43b(0x01)
	bool bGrabMoveReturn; // 0x43c(0x01)
	char pad_43D[0x3]; // 0x43d(0x03)
	struct UCurveFloat* GrabMoveSpeedCurve; // 0x440(0x08)
	struct UCurveFloat* GrabReloadSpeedCurve; // 0x448(0x08)
	struct UCurveFloat* GrabMoveRotateCurve; // 0x450(0x08)
	struct UCurveFloat* GrabMoveHeightCurve; // 0x458(0x08)
	struct UCurveFloat* GrabReloadHeightCurve; // 0x460(0x08)
	struct UCurveFloat* GrabMoveDecelCurve; // 0x468(0x08)
	struct UCurveFloat* GrabMoveReturnCurve; // 0x470(0x08)
	float GrabReloadTime; // 0x478(0x04)
	float ComboReloadTime; // 0x47c(0x04)
	float BrainReloadTime; // 0x480(0x04)
	float RandomReloadTimeRate; // 0x484(0x04)
	float SkillReloadTimeRate; // 0x488(0x04)
	float GrabMoveTime; // 0x48c(0x04)
	float GrabMoveHeight; // 0x490(0x04)
	float GrabMoveSpeedRate; // 0x494(0x04)
	float GrabMoveDecelTime; // 0x498(0x04)
	float GrabMoveReturnTime; // 0x49c(0x04)
	float grabMoveRate; // 0x4a0(0x04)
	float grabMoveTimer; // 0x4a4(0x04)
	struct FVector grabMovePosStt; // 0x4a8(0x0c)
	struct FRotator grabMoveRotStt; // 0x4b4(0x0c)
	struct FVector grabMoveSpeed; // 0x4c0(0x0c)
	struct FVector grabDecelSpeedStt; // 0x4cc(0x0c)
	float grabMoveBounceTimer; // 0x4d8(0x04)
	bool bInitGrabFloat; // 0x4dc(0x01)
	bool bGrabFloat; // 0x4dd(0x01)
	char pad_4DE[0x2]; // 0x4de(0x02)
	struct FVector PosFloat; // 0x4e0(0x0c)

	enum class ERSParallelTiming GetParallelTiming(); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.GetParallelTiming // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsEnableParallelTick(); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.IsEnableParallelTick // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SAS_CommonStart(struct FFSASCommand SAS_Command, bool dummy); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.SAS_CommonStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SAS_CommonEnd(enum class E_SASKind SAS_Kind, bool bCancelSASCost, bool bDummy, float RemainTime); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.SAS_CommonEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAccelerating(bool Accelerating); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.IsAccelerating // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsAcceleratorValid(bool Valid); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.IsAcceleratorValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetSkillReloadTime(float time in); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.SetSkillReloadTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetGrabMoveTime(bool is reload, bool is combo, bool is brain field, float Time); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.GetGrabMoveTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsNewAttach(bool return); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.IsNewAttach // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void InitCluster(); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.InitCluster // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPostParallel(); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.SetPostParallel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateParallel(); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.UpdateParallel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPreParallel(); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.SetPreParallel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateGrabFloat(); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.UpdateGrabFloat // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetGrabFloat(bool flag in); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.SetGrabFloat // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CanPsyAction(bool return); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.CanPsyAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateGrabMove(); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.UpdateGrabMove // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetGrabMove(bool flag in, bool force in, bool combo in, bool reload in); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.SetGrabMove // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateGrabLiftup(); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.UpdateGrabLiftup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetGrabLiftup(bool flag in, float lift up time in, float lift up height in, struct UCurveFloat* lift up curve in); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.SetGrabLiftup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateGrabStart(); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.UpdateGrabStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetGrabStart(bool flag in, float time rate in, float move rate in, float rotate rate in, float lift up delay in); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.SetGrabStart // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateGrabGauge(); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.UpdateGrabGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetGrabGauge(bool flag in, float gauge time in); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.SetGrabGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetRelativeRot(struct FRotator relative rot); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.GetRelativeRot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetTargetRot(struct FRotator target rot); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.GetTargetRot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetBaseRot(struct FRotator base rot); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.GetBaseRot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ResetAttachPos(); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.ResetAttachPos // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckDodgeDistance(bool return); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.CheckDodgeDistance // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTickEnable(bool flag in, bool actor only); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.SetTickEnable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAttachPos(); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.UpdateAttachPos // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitBrainSwing(); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.InitBrainSwing // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetHeight(); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.ResetHeight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void updatePosRotRise(); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.updatePosRotRise // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRandomParam(); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.SetRandomParam // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeDataTable(); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.InitializeDataTable // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetGrabFloatHeight(float Height); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.GetGrabFloatHeight // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetGrabFloatSpeed(float Speed); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.GetGrabFloatSpeed // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetGrabPos(struct FVector grab pos); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.GetGrabPos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetEffectTrail(bool Flag, struct UParticleSystem* effect trail in); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.SetEffectTrail // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAdjustPos(bool Flag); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.SetAdjustPos // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AdjustPsyObjPos(); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.AdjustPsyObjPos // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetPos(); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.ResetPos // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetObjSize(enum class EPsychicObjectSizeType obj size); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.SetObjSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMove(bool bMove, bool bAnim); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.SetMove // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttach(bool bAttach, float play rate, struct FVector pos rate, struct FVector rot rate, struct ABP_PsychicObjectBasic_C* psychic object in); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.SetAttach // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePosRot(); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.UpdatePosRot // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.Update // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(struct ARsBattleHero_C* grab owner, int32_t Index, float reload time); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnElectricStart(struct FFSASElectricParam Param, struct AActor* Owner); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.OnElectricStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnElectricEnd(struct FFSASElectricParam Param, struct AActor* Owner, float RemainTime); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.OnElectricEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFireStart(struct FFSASFireParam Param, struct AActor* Owner); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.OnFireStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFireEnd(struct FFSASFireParam Param, struct AActor* Owner, float RemainTime); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.OnFireEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMetalStart(struct FFSASMetalParam Param, struct AActor* Owner); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.OnMetalStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMetalEnd(struct FFSASMetalParam Param, struct AActor* Owner, float RemainTime); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.OnMetalEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSeeThroughStart(struct FFSASSeeThroughParam Param, struct AActor* Owner); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.OnSeeThroughStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSeeThroughEnd(struct FFSASSeeThroughParam Param, struct AActor* Owner, float RemainTime); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.OnSeeThroughEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTelepoStart(struct FFSASTelepoParam Param, struct AActor* Owner); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.OnTelepoStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTelepoEnd(struct FFSASTelepoParam Param, struct AActor* Owner, float RemainTime); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.OnTelepoEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStealthStart(struct FFSASStealthParam Param, struct AActor* Owner); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.OnStealthStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStealthEnd(struct FFSASStealthParam Param, struct AActor* Owner, float RemainTime); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.OnStealthEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCopyStart(struct FFSASCopyParam Param, struct AActor* Owner); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.OnCopyStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCopyEnd(struct FFSASCopyParam Param, struct AActor* Owner, float RemainTime); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.OnCopyEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCutInStart(); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.OnCutInStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCutInEnd(); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.OnCutInEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPsychicStart(struct FFSASPsychicParam Param, struct AActor* Owner); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.OnPsychicStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPsychicEnd(struct FFSASPsychicParam Param, struct AActor* Owner, float RemainTime); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.OnPsychicEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ParallelTick(float DeltaTime); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.ParallelTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void PreParallelTick(); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.PreParallelTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void PostParallelTick(); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.PostParallelTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnAcceleratorStart(struct FAcceleratorParam Parameter, struct AActor* Owner, bool bHologram); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.OnAcceleratorStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAcceleratorEnd(struct FAcceleratorParam Parameter, struct AActor* Owner, float RemainTime, bool bHologram); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.OnAcceleratorEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_PsychicGrabAttachment(int32_t EntryPoint); // Function PsychicGrabAttachment.PsychicGrabAttachment_C.ExecuteUbergraph_PsychicGrabAttachment // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

