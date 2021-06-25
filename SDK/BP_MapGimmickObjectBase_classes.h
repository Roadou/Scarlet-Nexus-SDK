// BlueprintGeneratedClass BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C
// Size: 0x928 (Inherited: 0x620)
struct ABP_MapGimmickObjectBase_C : AMapGimmickObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x620(0x08)
	struct UBP_UniqueEffectComponent_C* BP_UniqueEffectComponent; // 0x628(0x08)
	float FadeOutline_Fade_4326C6A042BDA8526C02688141850BEB; // 0x630(0x04)
	enum class ETimelineDirection FadeOutline__Direction_4326C6A042BDA8526C02688141850BEB; // 0x634(0x01)
	char pad_635[0x3]; // 0x635(0x03)
	struct UTimelineComponent* FadeOutline; // 0x638(0x08)
	float SearchDistanceMin; // 0x640(0x04)
	char pad_644[0x4]; // 0x644(0x04)
	struct UWB_ui_Action_Sas_C* Icon; // 0x648(0x08)
	struct ABP_EventCameraRoot_C* SeqUniqueRoot; // 0x650(0x08)
	struct ABP_EventCameraRoot_C* SeqUniqueCameraRoot; // 0x658(0x08)
	struct ABP_EventCameraRoot_C* SeqUniquePlayerRoot; // 0x660(0x08)
	struct AHUDMainGame_C* HudMain; // 0x668(0x08)
	enum class enum_ui_pk_weight_gauge_button GaugeButtonType; // 0x670(0x01)
	enum class enum_ui_pk_weight_gauge_size GaugeIconSize; // 0x671(0x01)
	char pad_672[0x6]; // 0x672(0x06)
	struct ACineCameraActor* SeqUniqueCamera; // 0x678(0x08)
	struct UAnimMontage* DefaultChargeStartLoopPlayerAnim; // 0x680(0x08)
	struct UAnimMontage* DefaultChargeStartEndPlayerAnim; // 0x688(0x08)
	struct FTransform CameraTransStartSequence; // 0x690(0x30)
	bool IsFirstFrameInSeq; // 0x6c0(0x01)
	char pad_6C1[0x3]; // 0x6c1(0x03)
	float PlayerCameraBeginFOV; // 0x6c4(0x04)
	struct FName tmpDelayNextState; // 0x6c8(0x08)
	struct FName tmpDelayNextCancelState; // 0x6d0(0x08)
	bool EditorDebug; // 0x6d8(0x01)
	bool IsStencilOn; // 0x6d9(0x01)
	char pad_6DA[0x2]; // 0x6da(0x02)
	int32_t StencilValue; // 0x6dc(0x04)
	struct FTransform LastCameraTransform; // 0x6e0(0x30)
	bool IsFirstFrameInEndCameraSeq; // 0x710(0x01)
	char pad_711[0x7]; // 0x711(0x07)
	struct ARsBattleHero_C* CameraOwner; // 0x718(0x08)
	struct FCameraUniqueObjectParameter UniqueCameraParameter; // 0x720(0x58)
	struct FName UniqueCameraParamName; // 0x778(0x08)
	struct TArray<struct UCameraShake*> CameraShake; // 0x780(0x10)
	struct TArray<struct ABP_EffectBackground_C*> ExtraParticles; // 0x790(0x10)
	struct FPsychicObjectSizeParameter SizeParameter; // 0x7a0(0x118)
	enum class EPsychicObjectID PsychicObjectID; // 0x8b8(0x01)
	char pad_8B9[0x3]; // 0x8b9(0x03)
	float UseDistance; // 0x8bc(0x04)
	float PlaceAdjustMoveScale; // 0x8c0(0x04)
	char pad_8C4[0x4]; // 0x8c4(0x04)
	struct FCameraTriggerInfo NearGimmickCameraInfo; // 0x8c8(0x28)
	bool UseCameraSocketType; // 0x8f0(0x01)
	char pad_8F1[0x7]; // 0x8f1(0x07)
	struct TArray<struct UMeshComponent*> GateMeshComponent; // 0x8f8(0x10)
	struct TArray<enum class E_SASKindNative> NeedSasForGate; // 0x908(0x10)
	bool IsControlEndCameraEnd; // 0x918(0x01)
	bool IsControlCameraStart; // 0x919(0x01)
	char pad_91A[0x2]; // 0x91a(0x02)
	float LookAtNear; // 0x91c(0x04)
	float LookAtFar; // 0x920(0x04)
	bool IsCheckCaptureCancel; // 0x924(0x01)
	bool IsUnqObjCamStarted; // 0x925(0x01)
	bool NotPlayBraintalkInPlayInKizunaEpisode; // 0x926(0x01)
	bool IsWeightGaugeCheck; // 0x927(0x01)

	int32_t GetDataRevision(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.GetDataRevision // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	struct FMeshTriangleData GetMeshTriangleData(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.GetMeshTriangleData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool SetPsychicObjectEventC(bool bStart, bool bTick, bool bVisibility); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.SetPsychicObjectEventC // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ResetPsychicObjectArrangeTransformC(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.ResetPsychicObjectArrangeTransformC // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsFloatObjectC(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.IsFloatObjectC // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckPsychicObjectSimulateC(struct FVector posPly); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.CheckPsychicObjectSimulateC // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool GetPsychicObjectSimulateControlDistanceSqC(float distSq); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.GetPsychicObjectSimulateControlDistanceSqC // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsPsychicObjectSimulateC(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.IsPsychicObjectSimulateC // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsPsychicObjectSimulateControlEnableC(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.IsPsychicObjectSimulateControlEnableC // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetPsychicObjectSimulateControlC(bool Flag); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.SetPsychicObjectSimulateControlC // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsPsychicObjectRenderC(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.IsPsychicObjectRenderC // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetPsychicObjectRenderC(bool Flag); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.SetPsychicObjectRenderC // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetDuelPoleType(bool bDuelType); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.SetDuelPoleType // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsPsychicObjectRegisterableC(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.IsPsychicObjectRegisterableC // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckPsychicObjectIdC(enum class EPsychicObjectID checkId); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.CheckPsychicObjectIdC // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsBrainFieldObjectC(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.IsBrainFieldObjectC // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsPsychicObjectInUseC(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.IsPsychicObjectInUseC // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsPsychicObjectTickC(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.IsPsychicObjectTickC // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsSwingTypeC(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.IsSwingTypeC // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsUniqueObjectC(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.IsUniqueObjectC // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetBrainFieldObjectC(bool Flag); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.SetBrainFieldObjectC // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetPsychicObjectActiveC(bool Flag); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.SetPsychicObjectActiveC // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetPsychicObjectInUseC(bool Flag); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.SetPsychicObjectInUseC // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetPsychicObjectTickC(struct FName refName, bool Flag); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.SetPsychicObjectTickC // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetSwingTypeC(bool Flag); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.SetSwingTypeC // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetUniqueObjectC(bool Flag); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.SetUniqueObjectC // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	enum class EPsychicObjectSizeType GetPsychicObjectSize(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.GetPsychicObjectSize // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsSwingType(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.IsSwingType // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool GetDebrisEffect(enum class EEffectObjectDebrisType Type, struct UMaterialInterface* OverrideMaterial); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.GetDebrisEffect // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool GetDebrisEffectData(struct UParticleSystem* ParticleTemplate, struct UMaterialInterface* OverrideMaterial); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.GetDebrisEffectData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FVector GetUniqueObjectCameraLookAtPos(float LookAtRate); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.GetUniqueObjectCameraLookAtPos // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FRotator GetUniqueObjectCameraOwnerRotation(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.GetUniqueObjectCameraOwnerRotation // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FVector GetUnqObjCamTargetPos(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.GetUnqObjCamTargetPos // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FVector GetUnqObjMoveVelocity(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.GetUnqObjMoveVelocity // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool InitializeCopyPsychicObject(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.InitializeCopyPsychicObject // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsCopyPsychicObject(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.IsCopyPsychicObject // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsPsychicObjectActiveC(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.IsPsychicObjectActiveC // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsUniqueObject(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.IsUniqueObject // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool RequestEndUniqueObjectState(struct AActor* pActor); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.RequestEndUniqueObjectState // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FVector GetRemoteActorLocation(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.GetRemoteActorLocation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FRotator GetRemoteActorRotation(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.GetRemoteActorRotation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FVector GetCameraLookAtPos(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.GetCameraLookAtPos // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FVector GetPlayerCameraDirection(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.GetPlayerCameraDirection // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	float GetPlayerCameraFieldOfView(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.GetPlayerCameraFieldOfView // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FVector GetPlayerCameraLocation(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.GetPlayerCameraLocation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	enum class EPlayerCameraMode GetPlayerCameraMode(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.GetPlayerCameraMode // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FRotator GetPlayerCameraRotation(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.GetPlayerCameraRotation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetPlayerCameraDirection(struct FVector Pos); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.SetPlayerCameraDirection // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetPlayerCameraFieldOfView(float FOV); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.SetPlayerCameraFieldOfView // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetPlayerCameraLocation(struct FVector Pos); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.SetPlayerCameraLocation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetPlayerCameraMode(enum class EPlayerCameraMode Mode); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.SetPlayerCameraMode // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetPlayerCameraRotation(struct FRotator Rot); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.SetPlayerCameraRotation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetPlayerCameraViewTarget(float BlendTime, enum class EViewTargetBlendFunction BlendFunc, float BlendExp); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.SetPlayerCameraViewTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CanUseMapGimmick(bool UseOk); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.CanUseMapGimmick // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMapGimmickType(enum class EMapGimmickType Type); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.GetMapGimmickType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsKarenUniqueObject(bool bKaren); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.IsKarenUniqueObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetPsychicObjectVhsParam(struct UCurveVector* ParamCurve, struct UCurveVector* ColorCurve, float VhsSeconds); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.GetPsychicObjectVhsParam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetUniqueObjectCaptureMontage(enum class EPlayerID playerId, bool bBack, bool bLeft, bool bUseBlend, struct UAnimMontage* StartMontage, struct UAnimMontage* CancelMontage); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.GetUniqueObjectCaptureMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsPsychicObjectActive(bool IsActive); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.IsPsychicObjectActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPsychicObject(bool bResult); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.IsPsychicObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPsychicComboAttack(bool bComboAttack); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.IsPsychicComboAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetPsychicObjectType(enum class PsyObjType psychic object type); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.GetPsychicObjectType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPsychicObjectWeightGaugePos(struct FVector weight gauge pos); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.GetPsychicObjectWeightGaugePos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPsychicObjectCentrePos(struct FVector centre pos); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.GetPsychicObjectCentrePos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugCheckKizunaEp(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.DebugCheckKizunaEp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckInKizunaEp(bool PlayOk); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.CheckInKizunaEp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsSkipCheckRendered(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.IsSkipCheckRendered // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetIconGaugeEnableProxy(bool Enable); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.SetIconGaugeEnableProxy // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OnEndUseLimitIconVisibleOverlap(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.OnEndUseLimitIconVisibleOverlap // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OnBeginUseLimitIconVisibleOverlap(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.OnBeginUseLimitIconVisibleOverlap // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetLimitIconVisible(bool Visible, bool limit, bool IsSuccess); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.SetLimitIconVisible // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OnEndForceIconVisibleOverlap(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.OnEndForceIconVisibleOverlap // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OnBeginForceIconVisibleOverlap(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.OnBeginForceIconVisibleOverlap // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcLerpLookAtPosition(struct USceneComponent* NearLookAt, struct USceneComponent* FarLookAt, struct FVector lookAtPos); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.CalcLerpLookAtPosition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetCameraControl(bool OnStart, bool OnEnd); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.SetCameraControl // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AdjustPlayRateSameAsPlayer(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.AdjustPlayRateSameAsPlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Check Use Gate by Sas(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.Check Use Gate by Sas // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEndOverlapTriggerCommon(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.OnEndOverlapTriggerCommon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBeginOverlapTriggerCommon(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.OnBeginOverlapTriggerCommon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcAnimMoveDistance(struct UAnimMontage* anim, float Length); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.CalcAnimMoveDistance // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetNearCameraParameter(bool In); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.SetNearCameraParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEndOverlapBossMapGimmickArea(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.OnEndOverlapBossMapGimmickArea // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBeginOverlapBossMapGimmickArea(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.OnBeginOverlapBossMapGimmickArea // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetNotUseVisible(bool Visible); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.SetNotUseVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsInCapture(bool Capturing); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.IsInCapture // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetPlayerRootMoveScale(float Scale); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.SetPlayerRootMoveScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetActorToPlayerDistance(float Distance); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.GetActorToPlayerDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CalcFinishAnimMoveDistance(float Length); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.CalcFinishAnimMoveDistance // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EffectAttackStop(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.EffectAttackStop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugTestEffectStop(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.DebugTestEffectStop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool Set Icon Gauge Enable(bool Enable); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.Set Icon Gauge Enable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlaySE(struct USoundAtomCue* Sound); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.PlaySE // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayHintBrainTalkWithWait(struct FString GimmickBrainTalkId, enum class EBrainTalkGimmickCondition BrainTalkConditionId, float WaitSec); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.PlayHintBrainTalkWithWait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetHintBrainTalkWaitTime(struct FString GimmickBrainTalkId, enum class EBrainTalkGimmickCondition BrainTalkConditionId, float WaitSec); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.GetHintBrainTalkWaitTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayHintBrainTalk(struct FString GimmickBrainTalkId, enum class EBrainTalkGimmickCondition BrainTalkConditionId); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.PlayHintBrainTalk // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnGimmickUse(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.OnGimmickUse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddUseTime(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.AddUseTime // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugEnableUse(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.DebugEnableUse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetCameraLerp(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.ResetCameraLerp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugStateReset(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.DebugStateReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayExtraParticles(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.PlayExtraParticles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EffectCaptureStop(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.EffectCaptureStop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EffectDestroy(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.EffectDestroy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EffectCaptureEnd(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.EffectCaptureEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EffectCaptureStart(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.EffectCaptureStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EffectAttackEnd(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.EffectAttackEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EffectAttackStart(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.EffectAttackStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugTestEffectAttackEnd(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.DebugTestEffectAttackEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugTestEffectAttackStart(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.DebugTestEffectAttackStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugTestEffectCaptureEnd(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.DebugTestEffectCaptureEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugTestEffectCaptureStart(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.DebugTestEffectCaptureStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayEffectBackgrounds(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.PlayEffectBackgrounds // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ShakeCamera(int32_t no); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.ShakeCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OnMapGimmickChargeStart(struct AMapGimmickObject* GimmickActor); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.OnMapGimmickChargeStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool OnMapGimmickChargeEnd(struct AMapGimmickObject* GimmickActor); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.OnMapGimmickChargeEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool OnMapGimmickChargeCancel(struct AMapGimmickObject* GimmickActor); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.OnMapGimmickChargeCancel // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void ResetCamera(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.ResetCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndCamera(bool Force, bool capture cancel); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.EndCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartCamera(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.StartCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugCallActivate(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.DebugCallActivate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MoveShock1(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.MoveShock1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetFadeoutMIParameter(float Fade); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.SetFadeoutMIParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetEffectFocus(bool Flag); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.SetEffectFocus // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetOutline(bool on); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.SetOutline // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPlayerFinishAnimation(struct UAnimMontage* AnimMontage); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.GetPlayerFinishAnimation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RegisterToManager(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.RegisterToManager // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateSequenceCameraFunc(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.UpdateSequenceCameraFunc // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DefaultChargeFunc(enum class EMapGimmickStatusFunc Status, float DeltaSeconds, struct FName StateName, bool Result); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.DefaultChargeFunc // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPlayerToGimmickDir(enum class EMapGimmickFinishDir Dir); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.GetPlayerToGimmickDir // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayFinishAnimationRaw(enum class EMapGimmickFinishDir Dir); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.PlayFinishAnimationRaw // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayFinishAnimation(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.PlayFinishAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopStateSequence(struct FName StateName); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.StopStateSequence // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAnimationEndDefaultFunc(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.OnAnimationEndDefaultFunc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsExistStateLevelSequence(struct FName StateName, bool Exist); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.IsExistStateLevelSequence // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BackupBeforeSequencePlay(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.BackupBeforeSequencePlay // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSeqCameraReverceTransform(struct FTransform RevTrans); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.GetSeqCameraReverceTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetStateLevelSequence(struct FName StateName, struct ULevelSequence* Sequence, bool found); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.GetStateLevelSequence // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	bool OnEndTriggerVolumeOverlap(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.OnEndTriggerVolumeOverlap // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OnBeginTriggerVolumeOverlap(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.OnBeginTriggerVolumeOverlap // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetFocalLengthFromFovRadian(float SensorWidth, float FovRadian, float FocalLength); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.GetFocalLengthFromFovRadian // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCineCameraFov(float FovDegree); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.SetCineCameraFov // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetFocalLengthFromFovDegree(float SensorWidth, float FovDegree, float FocalLength); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.GetFocalLengthFromFovDegree // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentChargeRate(float Rate); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.GetCurrentChargeRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateSeqRoot(struct FTransform CurTrans, struct FTransform InterpTrans); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.UpdateSeqRoot // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateBeginCameraInterp(struct FTransform CurTrans, struct FTransform InterpTrans); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.UpdateBeginCameraInterp // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool UpdateWidgetGauge(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.UpdateWidgetGauge // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetHUD(struct AHUDMainGame_C* HudMain); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.GetHUD // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupSequencePlay(struct FName StateName); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.SetupSequencePlay // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FinishPlayProc(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.FinishPlayProc // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeSequenceUniqueActor(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.InitializeSequenceUniqueActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct ULevelSequencePlayer* CreateRSLevelSequencerPlayer(struct ULevelSequence* LevelSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ARSLevelSequenceActor* Actor); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.CreateRSLevelSequencerPlayer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayStateSequence(struct FName StateName); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.PlayStateSequence // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayStateSequenceWithCallback(struct FName StateName, struct FDelegate OnFinishedFunc, bool Error); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.PlayStateSequenceWithCallback // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFinishSequenceEnablePhysics(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.OnFinishSequenceEnablePhysics // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSequencePlayer(struct FName StateName, struct ARSLevelSequenceActor* Actor, struct ULevelSequencePlayer* Player, bool Error); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.GetSequencePlayer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetIconVisible(bool Visible, bool IsSuccess, bool IsCancel); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.SetIconVisible // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeIcon(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.InitializeIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MakeStateFromDataTable(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.MakeStateFromDataTable // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FadeOutline__FinishedFunc(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.FadeOutline__FinishedFunc // (BlueprintEvent) // @ game+0x1685580
	void FadeOutline__UpdateFunc(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.FadeOutline__UpdateFunc // (BlueprintEvent) // @ game+0x1685580
	void SetMaterialParameter(struct FName ParamName, float ParamValue); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.SetMaterialParameter // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTownSetting(bool Flag); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.SetTownSetting // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicObjectActive(bool IsActive); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.SetPsychicObjectActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicObjectVisibility(bool flag in, bool is mesh only); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.SetPsychicObjectVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeStateWithDelay(float delaySec, struct FName NextStateName); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.ChangeStateWithDelay // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeToNextStateWithDelay(float delaySec); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.ChangeToNextStateWithDelay // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeStateInCancelWithDelay(float delaySec); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.ChangeStateInCancelWithDelay // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DelayAttackEffectOff(float Delay); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.DelayAttackEffectOff // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EnablePhysics(bool Enable); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.EnablePhysics // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EnableAttackCollision(bool Enable); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.EnableAttackCollision // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlaybackCameraSequence(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.EndPlaybackCameraSequence // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventCameraStart(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.EventCameraStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventCameraEnd(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.EventCameraEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnStateBeginFunction(struct FName StateName); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.OnStateBeginFunction // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStateEndFunction(struct FName StateName); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.OnStateEndFunction // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventInitializePsychicObject(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.EventInitializePsychicObject // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FadeOutAndDestroy(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.FadeOutAndDestroy // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DelayIconOn(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.DelayIconOn // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeUniqueCameraParam(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.InitializeUniqueCameraParam // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckUseSasGateDelay(); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.CheckUseSasGateDelay // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DelayFadeOutAndDestloy(float Duration); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.DelayFadeOutAndDestloy // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_MapGimmickObjectBase(int32_t EntryPoint); // Function BP_MapGimmickObjectBase.BP_MapGimmickObjectBase_C.ExecuteUbergraph_BP_MapGimmickObjectBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

