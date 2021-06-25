// BlueprintGeneratedClass BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C
// Size: 0x34f (Inherited: 0xc0)
struct UBP_PlayerPsychicObjectComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct ARsBattleHero_C* HeroOwner; // 0xc8(0x08)
	struct FMulticastInlineDelegate CaptureSuccess; // 0xd0(0x10)
	struct FMulticastInlineDelegate UniqueAttackSuccess; // 0xe0(0x10)
	struct FMulticastInlineDelegate AttractSuccess; // 0xf0(0x10)
	struct FMulticastInlineDelegate ComboAttackStart; // 0x100(0x10)
	struct ABP_PsychicObjectBasic_C* AttackComboObj; // 0x110(0x08)
	struct ABP_PsychicObjectBasic_C* AttackUnqObj; // 0x118(0x08)
	struct APsychicObjectManager_C* PsyObjMan; // 0x120(0x08)
	struct TMap<struct FName, struct FPsychicGrabPosData> posList; // 0x128(0x50)
	struct TArray<struct FPsychicGrabPosData> posList2; // 0x178(0x10)
	bool bBrainField; // 0x188(0x01)
	bool bBrainFieldProc; // 0x189(0x01)
	char pad_18A[0x2]; // 0x18a(0x02)
	int32_t BrainFieldObjMax; // 0x18c(0x04)
	int32_t BrainFieldIndexThrowMax; // 0x190(0x04)
	int32_t BrainFieldIndexThrowLast; // 0x194(0x04)
	struct TArray<struct ABP_PsychicObjectBasic_C*> BrainFieldObjList; // 0x198(0x10)
	struct TArray<int32_t> BrainFieldObjIndexList; // 0x1a8(0x10)
	struct TArray<enum class EPsychicObjectSizeType> BrainFieldObjTypeList; // 0x1b8(0x10)
	struct TArray<int32_t> BrainFieldAttackIndex; // 0x1c8(0x10)
	bool bBrainFieldSafety; // 0x1d8(0x01)
	bool bReplenish; // 0x1d9(0x01)
	char pad_1DA[0x2]; // 0x1da(0x02)
	float ReplenishTime; // 0x1dc(0x04)
	struct FGameTimer ReplenishTimer; // 0x1e0(0x0c)
	char pad_1EC[0x4]; // 0x1ec(0x04)
	struct ABP_BrainFieldManager_C* BrainFieldMan; // 0x1f0(0x08)
	bool bNpc; // 0x1f8(0x01)
	bool bEnemy; // 0x1f9(0x01)
	char pad_1FA[0x6]; // 0x1fa(0x06)
	struct TArray<struct ABP_PsychicObjectBasic_C*> DropSplineList; // 0x200(0x10)
	struct TArray<struct ABP_PsychicObjectBasic_C*> DropWaitList; // 0x210(0x10)
	struct ABP_PsychicObjectBasic_C* DropObjCore; // 0x220(0x08)
	int32_t DropLevel; // 0x228(0x04)
	bool bBrainFieldFinishDrop; // 0x22c(0x01)
	bool bEnpcOld; // 0x22d(0x01)
	enum class E_SASKind CurrentSasKind; // 0x22e(0x01)
	bool bDebugDrawBrainFieldObjInfo; // 0x22f(0x01)
	struct FMulticastInlineDelegate UniqueInputStart; // 0x230(0x10)
	struct FMulticastInlineDelegate UniqueObjectEnd; // 0x240(0x10)
	struct FMulticastInlineDelegate UniqueObjectAddGauge; // 0x250(0x10)
	struct FMulticastInlineDelegate UniqueObjectControlStart; // 0x260(0x10)
	struct TArray<int32_t> BrainFieldSwingNumList; // 0x270(0x10)
	struct TArray<int32_t> BrainFieldThrowNumListOld; // 0x280(0x10)
	struct TArray<int32_t> BrainFieldDropNumList; // 0x290(0x10)
	struct TArray<float> BrainFieldSwingAngleList; // 0x2a0(0x10)
	float BrainFieldThrowAttractTime; // 0x2b0(0x04)
	bool bFirstSwing; // 0x2b4(0x01)
	char pad_2B5[0x3]; // 0x2b5(0x03)
	struct FString BrainFieldFirstSwingAnimation; // 0x2b8(0x10)
	enum class EPsychicObjectBrainFieldAttackType BrainFieldThrowAttackType; // 0x2c8(0x01)
	char pad_2C9[0x3]; // 0x2c9(0x03)
	int32_t BrainFieldThrowSkillLevel; // 0x2cc(0x04)
	bool bBrainFieldThrowDelay; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct TArray<struct ABP_PsychicObjectBasic_C*> BrainFieldThrowObjList; // 0x2d8(0x10)
	struct TArray<int32_t> BrainFieldThrowIndexList; // 0x2e8(0x10)
	float BrainFieldThrowDelayTime; // 0x2f8(0x04)
	struct FGameTimer BrainFieldThrowDelayTimer; // 0x2fc(0x0c)
	bool bBrainFieldFinishThrow; // 0x308(0x01)
	char pad_309[0x3]; // 0x309(0x03)
	struct FName BrainFieldDropTypeRowName; // 0x30c(0x08)
	bool bBrainFieldUnqObjCam; // 0x314(0x01)
	char pad_315[0x3]; // 0x315(0x03)
	struct ABP_PsychicObjectBasic_C* BrainFieldFirstSwingObj; // 0x318(0x08)
	struct TArray<struct ABP_PsychicObjectBasic_C*> BrainFieldSwingObjList; // 0x320(0x10)
	struct TArray<struct FVector> BrainFieldSwingPosList; // 0x330(0x10)
	struct ABP_TriggerEffectManager_C* TrgEffMgr; // 0x340(0x08)
	bool bStopTrgEff; // 0x348(0x01)
	bool bInvalidInput; // 0x349(0x01)
	bool bAerialAfterThrowAirRt; // 0x34a(0x01)
	bool bBrainFieldNewChoose; // 0x34b(0x01)
	bool bDebugDrawBrainFieldNearest; // 0x34c(0x01)
	bool bEventCancel; // 0x34d(0x01)
	bool bEventResetPartyRotation; // 0x34e(0x01)

	void EndEventCancel(); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.EndEventCancel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartEventCancel(); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.StartEventCancel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PostEventCancel(); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.PostEventCancel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrevEventCancel(); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.PrevEventCancel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetFocusMapGimmick(struct ABP_MapGimmickObjectBase_C* MapGimmick); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.GetFocusMapGimmick // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetNearestBrainFieldObj(enum class EPsychicObjectBrainFieldAttackType attack type in, int32_t skill level in, int32_t obj num in, struct TArray<int32_t> tgt index list); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.GetNearestBrainFieldObj // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainFieldSwingEnd(); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.SetBrainFieldSwingEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcBrainFieldSwingPos(); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.CalcBrainFieldSwingPos // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBrainFieldDropTypeCameraParameter(struct FCameraUniqueObjectParameter camera parameter); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.GetBrainFieldDropTypeCameraParameter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetUniqueObjectCamera(bool flag in, struct AActor* obj actor in, bool socket type in, bool control type in, bool remote type in, bool brain field drop type in); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.SetUniqueObjectCamera // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void isUnqObjTemp(bool unq obj in, bool return); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.isUnqObjTemp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsNewObjectSystem(bool return); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.IsNewObjectSystem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetFocusUniqueObjectMontageOld(enum class EPsychicObjectUniqueMontageIndex montage index in, bool left in, struct UAnimMontage* unique montage); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.GetFocusUniqueObjectMontageOld // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CancelPsychicField(); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.CancelPsychicField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicFieldThrow(); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.SetPsychicFieldThrow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicFieldAttract(); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.SetPsychicFieldAttract // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPsychicFieldCaptureFinish(bool Finish); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.IsPsychicFieldCaptureFinish // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicFieldCapture(int32_t capture num in); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.SetPsychicFieldCapture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainFieldFirstSwing(bool flag in, struct ABP_PsychicObjectBasic_C* psy obj in, struct FString animation name in, bool force off in); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.SetBrainFieldFirstSwing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttackBrainFieldSwing(enum class EPsychicObjectBrainFieldAttackType attack type in, int32_t skill level in, bool swing lerp in, float swing lerp time in, float swing update time in); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.AttackBrainFieldSwing // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttackBrainFieldThrow(enum class EPsychicObjectBrainFieldAttackType attack type in, int32_t skill level in); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.AttackBrainFieldThrow // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AnimNotifyAttackInterpolate(float interpolate time in); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.AnimNotifyAttackInterpolate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AnimNotifyFirstAttack(); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.AnimNotifyFirstAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDrawBrainFieldInfo(); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.DebugDrawBrainFieldInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainFieldReplenishTimer(); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.SetBrainFieldReplenishTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckSasCopyParameter(bool return, int32_t copy count); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.CheckSasCopyParameter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSasKind(enum class E_SASKind return); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.GetSasKind // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetSasKind(enum class E_SASKind sas kind in, bool flag in); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.SetSasKind // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckNpcObject(bool unq obj in, bool chk capture in, bool chk attack in, bool return); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.CheckNpcObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SearchNpcObject(bool unq obj, bool return); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.SearchNpcObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnpcOld(bool flag in); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.SetEnpcOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReportDropObjHit(struct ABP_PsychicObjectBasic_C* psy obj in); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.ReportDropObjHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReportDropObjWait(struct ABP_PsychicObjectBasic_C* psy obj in); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.ReportDropObjWait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CancelBrainFieldDrop(); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.CancelBrainFieldDrop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttackBrainFieldDrop(); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.AttackBrainFieldDrop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainFieldDropLevel(int32_t Level); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.SetBrainFieldDropLevel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackBrainFieldObj(struct ABP_PsychicObjectBasic_C* psy obj in, int32_t index in, int32_t skill level in, enum class EPsychicObjectBrainFieldAttackType attack type in, bool attack collision in, int32_t attack index in, float attract time in); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.SetAttackBrainFieldObj // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReplenishBrainFieldObj(int32_t index in, float replenish time in); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.ReplenishBrainFieldObj // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitBrainFieldObjList(); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.InitBrainFieldObjList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBrainFieldOffsetPos(int32_t index in, struct ABP_PsychicObjectBasic_C* psy obj in, struct FVector offset pos); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.GetBrainFieldOffsetPos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateBrainField(); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.UpdateBrainField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainField(bool flag in); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.SetBrainField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsUniqueObjectCapture(bool return); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.IsUniqueObjectCapture // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsNormalObjectCapture(bool return); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.IsNormalObjectCapture // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CanCapture(bool unq obj in, bool return); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.CanCapture // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsFocusPsychicObjectUnique(bool return); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.IsFocusPsychicObjectUnique // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsMapGimmickFocus(bool return); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.IsMapGimmickFocus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsUniqueObjectFocus(bool return); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.IsUniqueObjectFocus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsNormalObjectFocus(bool return); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.IsNormalObjectFocus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCapturePsychicObjectState(bool unq obj in, enum class EPsychicObjectState State); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.GetCapturePsychicObjectState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCapturePsychicObject(struct ABP_PsychicObjectBasic_C* return); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.GetCapturePsychicObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPsychicObjectState(bool unq obj in, bool focus in, bool capture in, bool attack in, enum class EPsychicObjectState State); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.GetPsychicObjectState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPsychicObject(bool unq obj in, bool focus in, bool capture in, bool attack in, struct ABP_PsychicObjectBasic_C* return); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.GetPsychicObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CancelPsychicObjectAction(bool event in, bool psychic battle in); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.CancelPsychicObjectAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CancelUniqueObjectInput(); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.CancelUniqueObjectInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttackBrainFieldObject(enum class EPsychicObjectBrainFieldAttackType attack type in, int32_t skill level in, bool swing lerp in, float swing lerp time in, float swing update time in); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.AttackBrainFieldObject // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CancelCaptureObject(); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.CancelCaptureObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentPsychicAnimObject(struct APsychicAnimObject_C* psy anim obj); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.GetCurrentPsychicAnimObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DetachAttackComboObject(); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.DetachAttackComboObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttackComboCaptureObject(struct AActor* target actor in, int32_t attack level in, int32_t attack index in, float attract time in, struct UAnimSequence* anim seq in, bool air combo in, bool enemy direct shot in, bool return); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.AttackComboCaptureObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttackCaptureObject(struct AActor* target actor in, bool direct drop in, bool return); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.AttackCaptureObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CaptureFocusObject(bool unique obj in, bool combo in, bool air in, bool return); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.CaptureFocusObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitOwnerType(); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.InitOwnerType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Finalize(); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.Finalize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PlayerPsychicObjectComponent(int32_t EntryPoint); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.ExecuteUbergraph_BP_PlayerPsychicObjectComponent // (Final|UbergraphFunction) // @ game+0x1685580
	void UniqueObjectControlStart__DelegateSignature(struct ABP_PsychicObjectBasic_C* psy obj in); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.UniqueObjectControlStart__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UniqueObjectAddGauge__DelegateSignature(); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.UniqueObjectAddGauge__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UniqueObjectEnd__DelegateSignature(bool input success in); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.UniqueObjectEnd__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UniqueInputStart__DelegateSignature(); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.UniqueInputStart__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ComboAttackStart__DelegateSignature(); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.ComboAttackStart__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttractSuccess__DelegateSignature(); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.AttractSuccess__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UniqueAttackSuccess__DelegateSignature(struct UAnimMontage* unique montage); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.UniqueAttackSuccess__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CaptureSuccess__DelegateSignature(struct UAnimMontage* unique montage); // Function BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C.CaptureSuccess__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

