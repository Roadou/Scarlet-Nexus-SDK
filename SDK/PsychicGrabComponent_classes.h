// BlueprintGeneratedClass PsychicGrabComponent.PsychicGrabComponent_C
// Size: 0x524 (Inherited: 0xc0)
struct UPsychicGrabComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct APsychicObjectManager_C* PsyObjManager; // 0xc8(0x08)
	struct ARsBattleHero_C* grabOwner; // 0xd0(0x08)
	struct TArray<struct ABP_PsychicObjectBasic_C*> SearchList; // 0xd8(0x10)
	struct TArray<struct ABP_PsychicObjectBasic_C*> GrabList; // 0xe8(0x10)
	struct TArray<bool> EmptyGrabList; // 0xf8(0x10)
	struct TArray<struct ABP_PsychicObjectBasic_C*> SearchUniqueList; // 0x108(0x10)
	struct TArray<struct ABP_PsychicObjectBasic_C*> UniqueList; // 0x118(0x10)
	struct TArray<bool> EmptyUniqueList; // 0x128(0x10)
	struct TArray<struct ABP_PsychicObjectBasic_C*> BrainList; // 0x138(0x10)
	struct TArray<bool> EmptyBrainList; // 0x148(0x10)
	struct TArray<struct ABP_PsychicObjectBasic_C*> SourceList; // 0x158(0x10)
	int32_t sourceCount; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct TArray<bool> EmptySourceList; // 0x170(0x10)
	struct TArray<struct ABP_PsychicObjectBasic_C*> ReleaseList; // 0x180(0x10)
	int32_t releaseCount; // 0x190(0x04)
	char pad_194[0x4]; // 0x194(0x04)
	struct TArray<struct ABP_PsychicObjectBasic_C*> RequestObjList; // 0x198(0x10)
	struct TArray<int32_t> RequestIndexList; // 0x1a8(0x10)
	struct TArray<struct ABP_PsychicObjectBasic_C*> ButtonList; // 0x1b8(0x10)
	struct TArray<int32_t> GrabObjCountList; // 0x1c8(0x10)
	struct TArray<int32_t> GrabObjCountWorkList; // 0x1d8(0x10)
	int32_t GrabObjCountUnique; // 0x1e8(0x04)
	char pad_1EC[0x4]; // 0x1ec(0x04)
	struct TArray<struct FVector> BrainPosList; // 0x1f0(0x10)
	struct TArray<int32_t> BrainZoneList; // 0x200(0x10)
	float deltaPsychic; // 0x210(0x04)
	float deltaRate; // 0x214(0x04)
	bool bPsychicCaptrue; // 0x218(0x01)
	enum class EEasingFunc EasingScanAlpha; // 0x219(0x01)
	enum class EEasingFunc EasingScanPercent; // 0x21a(0x01)
	char pad_21B[0x1]; // 0x21b(0x01)
	float CaptureFieldOffsetZ; // 0x21c(0x04)
	float MeshScaleTime; // 0x220(0x04)
	float meshScaleRate; // 0x224(0x04)
	struct UMaterialInstanceDynamic* Mid; // 0x228(0x08)
	struct UMaterialInterface* CaptureMaterial; // 0x230(0x08)
	float GrabGaugeAdd; // 0x238(0x04)
	float GrabGaugeTimer; // 0x23c(0x04)
	struct TArray<bool> bButtonShowList; // 0x240(0x10)
	struct TArray<bool> bButtonEnableList; // 0x250(0x10)
	struct TArray<bool> bActionPressed; // 0x260(0x10)
	struct TArray<bool> bShowList; // 0x270(0x10)
	bool bPsychicCombo; // 0x280(0x01)
	char pad_281[0x3]; // 0x281(0x03)
	int32_t SlotMax; // 0x284(0x04)
	int32_t StackMax; // 0x288(0x04)
	int32_t GrabMax; // 0x28c(0x04)
	int32_t GrabSkillMax; // 0x290(0x04)
	int32_t ExtraMax; // 0x294(0x04)
	int32_t SourceMax; // 0x298(0x04)
	int32_t UniqueMax; // 0x29c(0x04)
	int32_t UniqueSkillMax; // 0x2a0(0x04)
	int32_t BrainMax; // 0x2a4(0x04)
	int32_t grabObjMax; // 0x2a8(0x04)
	int32_t grabSlotMax; // 0x2ac(0x04)
	int32_t GrabExMax; // 0x2b0(0x04)
	int32_t pageNo; // 0x2b4(0x04)
	bool bDbDispSphere; // 0x2b8(0x01)
	bool bDbDispSearchLine; // 0x2b9(0x01)
	bool bDbDispGrabLine; // 0x2ba(0x01)
	bool bDbDispUniqueLine; // 0x2bb(0x01)
	bool bDbDispBrainLine; // 0x2bc(0x01)
	bool bReload; // 0x2bd(0x01)
	bool bPsychicEx; // 0x2be(0x01)
	bool bShieldOn; // 0x2bf(0x01)
	enum class PsychicObjectAttackType ActionType; // 0x2c0(0x01)
	enum class PsychicGrabButtonType actionButton; // 0x2c1(0x01)
	char pad_2C2[0x2]; // 0x2c2(0x02)
	int32_t actionCombo; // 0x2c4(0x04)
	float AttackThrowStartRotSpeed; // 0x2c8(0x04)
	float AttackThrowStartInitAngle; // 0x2cc(0x04)
	float AttackThrowAllLerpTime; // 0x2d0(0x04)
	float AttackThrowAllDelayTime; // 0x2d4(0x04)
	float AttackThrowAllRadiusRandom; // 0x2d8(0x04)
	float AttackThrowAllRotSpeed; // 0x2dc(0x04)
	float AttackThrowAllCost; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct TArray<int32_t> AttackThrowAllIndexList; // 0x2e8(0x10)
	struct TArray<float> AttackThrowAllAngleList; // 0x2f8(0x10)
	struct TArray<struct FVector> AttackThrowAllOffsetList; // 0x308(0x10)
	bool bBrainField; // 0x318(0x01)
	char pad_319[0x3]; // 0x319(0x03)
	float BrainFieldDistanceBase; // 0x31c(0x04)
	float BrainFieldDistanceRange; // 0x320(0x04)
	float BrainFieldDistanceGap; // 0x324(0x04)
	float BrainFieldHeightMin; // 0x328(0x04)
	float BrainFieldHeightMax; // 0x32c(0x04)
	struct TArray<int32_t> BrainIndexList; // 0x330(0x10)
	float BrainFloatTime; // 0x340(0x04)
	float BrainFloatTimeRandom; // 0x344(0x04)
	float BrainFloatHeight; // 0x348(0x04)
	float BrainFloatHeightRandom; // 0x34c(0x04)
	float ButtonChargeTime; // 0x350(0x04)
	char pad_354[0x4]; // 0x354(0x04)
	struct TArray<bool> bButtonOn; // 0x358(0x10)
	struct TArray<float> buttonTimer; // 0x368(0x10)
	struct TArray<int32_t> buttonNotice; // 0x378(0x10)
	struct TArray<int32_t> BrainAttackObjNum; // 0x388(0x10)
	struct TArray<float> BrainAttackWaitTime; // 0x398(0x10)
	bool bUniqueSpawn; // 0x3a8(0x01)
	bool bDbDispAttachObj; // 0x3a9(0x01)
	bool bDbDispCopyObj; // 0x3aa(0x01)
	bool bPsychicGague; // 0x3ab(0x01)
	int32_t PsychicGauge; // 0x3ac(0x04)
	struct FMulticastInlineDelegate UpdatePsyActionPress; // 0x3b0(0x10)
	struct FMulticastInlineDelegate UpdatePsyActionShow; // 0x3c0(0x10)
	struct FMulticastInlineDelegate UpdatePsyActionEnable; // 0x3d0(0x10)
	struct FMulticastInlineDelegate UpdatePsyActionCount; // 0x3e0(0x10)
	bool bDodgeCheck; // 0x3f0(0x01)
	char pad_3F1[0x3]; // 0x3f1(0x03)
	int32_t DodgeCount; // 0x3f4(0x04)
	struct ABP_PsychicObjectBasic_C* ActionPsyObj; // 0x3f8(0x08)
	struct TArray<enum class E_SASKind> SasKind; // 0x400(0x10)
	struct TArray<struct ABP_PsychicObjectBasic_C*> SasCopyList; // 0x410(0x10)
	bool bSasCopyUpdate; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct FMulticastInlineDelegate UpdatePsyActionPress2; // 0x428(0x10)
	struct FMulticastInlineDelegate UpdatePsyActionShow2; // 0x438(0x10)
	struct FMulticastInlineDelegate UpdatePsyActionEnable2; // 0x448(0x10)
	struct FMulticastInlineDelegate UpdatePsyActionCount2; // 0x458(0x10)
	int32_t ButtonCountNormal; // 0x468(0x04)
	int32_t ButtonCountUnique; // 0x46c(0x04)
	bool ButtonShowNormal; // 0x470(0x01)
	bool ButtonShowUnique; // 0x471(0x01)
	bool ButtonEnableNormal; // 0x472(0x01)
	bool ButtonEnableUnique; // 0x473(0x01)
	bool bNewAttach; // 0x474(0x01)
	bool bCameraRot; // 0x475(0x01)
	char pad_476[0x2]; // 0x476(0x02)
	struct FRotator CameraRot; // 0x478(0x0c)
	struct FRotator CameraRotHrz; // 0x484(0x0c)
	struct UMaterialInstance* CaptureMaxMaterial; // 0x490(0x08)
	float CaptrueRadiusBase; // 0x498(0x04)
	float CaptrueRadiusSkill; // 0x49c(0x04)
	float CaptrueRadius; // 0x4a0(0x04)
	float SkillReloadTimeRate; // 0x4a4(0x04)
	struct ABP_PsychicObjectBasic_C* LiftUpThrowObj; // 0x4a8(0x08)
	struct TArray<float> CaptureFieldMaxScalar; // 0x4b0(0x10)
	struct TArray<struct FLinearColor> CaptureFieldMaxVector; // 0x4c0(0x10)
	struct TArray<float> CaptureFieldBaseScalar; // 0x4d0(0x10)
	struct TArray<struct FLinearColor> CaptureFieldBaseVector; // 0x4e0(0x10)
	struct TArray<int32_t> CaptureFieldScalarIndex; // 0x4f0(0x10)
	struct TArray<int32_t> CaptureFieldVectorIndex; // 0x500(0x10)
	float CaptrueMaxRate; // 0x510(0x04)
	float CaptrueAnimationTime; // 0x514(0x04)
	float CaptrueAnimationSpeedBase; // 0x518(0x04)
	float CaptrueAnimationSpeedMax; // 0x51c(0x04)
	float CaptrueMaxInterpolateScale; // 0x520(0x04)

	void DebugPrintAbolishString(struct FString str in); // Function PsychicGrabComponent.PsychicGrabComponent_C.DebugPrintAbolishString // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdateCaptureFieldMaterial(); // Function PsychicGrabComponent.PsychicGrabComponent_C.PrivateUpdateCaptureFieldMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateInitializeCaptureFieldMaterial(); // Function PsychicGrabComponent.PsychicGrabComponent_C.PrivateInitializeCaptureFieldMaterial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLiftUpThrow(enum class PsychicGrabButtonType button type in, struct ABP_PsychicObjectBasic_C* psy obj in); // Function PsychicGrabComponent.PsychicGrabComponent_C.SetLiftUpThrow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSkillReloadTime(enum class EPlayerID player id in, float skill param in); // Function PsychicGrabComponent.PsychicGrabComponent_C.SetSkillReloadTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSkillCaptrueRadius(float Radius); // Function PsychicGrabComponent.PsychicGrabComponent_C.GetSkillCaptrueRadius // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetSkillCaptrueRadius(enum class EPlayerID player id in, float skill param in); // Function PsychicGrabComponent.PsychicGrabComponent_C.SetSkillCaptrueRadius // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSkillUniqueSlot(bool with skill, int32_t slot num); // Function PsychicGrabComponent.PsychicGrabComponent_C.GetSkillUniqueSlot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetSkillUniqueSlot(enum class EPlayerID player id in, float skill param in); // Function PsychicGrabComponent.PsychicGrabComponent_C.SetSkillUniqueSlot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSkillGrabSlot(bool with skill, int32_t slot num); // Function PsychicGrabComponent.PsychicGrabComponent_C.GetSkillGrabSlot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetSkillGrabSlot(enum class EPlayerID player id in, float skill param in); // Function PsychicGrabComponent.PsychicGrabComponent_C.SetSkillGrabSlot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttachObjSizeEx(); // Function PsychicGrabComponent.PsychicGrabComponent_C.SetAttachObjSizeEx // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttachObjEnableEx(); // Function PsychicGrabComponent.PsychicGrabComponent_C.SetAttachObjEnableEx // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddAttachListEx(bool flag in, int32_t grab idx in, struct AActor* psy obj in, float speed rate in, struct FVector pos rate in, struct FVector rot rate in, bool brain swing in); // Function PsychicGrabComponent.PsychicGrabComponent_C.AddAttachListEx // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDisplayEaseGraph(); // Function PsychicGrabComponent.PsychicGrabComponent_C.DebugDisplayEaseGraph // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsGrabIndexAttack(int32_t grab index in, bool return); // Function PsychicGrabComponent.PsychicGrabComponent_C.IsGrabIndexAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetPsychicObjectShield(struct ABP_PsychicObjectBasic_C* psy obj); // Function PsychicGrabComponent.PsychicGrabComponent_C.GetPsychicObjectShield // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicOBjectShieldActive(bool shield on in); // Function PsychicGrabComponent.PsychicGrabComponent_C.SetPsychicOBjectShieldActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPsychicObjectShieldActive(bool return); // Function PsychicGrabComponent.PsychicGrabComponent_C.IsPsychicObjectShieldActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAnyEmptyUnique(bool return); // Function PsychicGrabComponent.PsychicGrabComponent_C.IsAnyEmptyUnique // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetSasCopyAppear(struct ABP_PsychicObjectBasic_C* psy obj in); // Function PsychicGrabComponent.PsychicGrabComponent_C.SetSasCopyAppear // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDisplayCopyObj(); // Function PsychicGrabComponent.PsychicGrabComponent_C.DebugDisplayCopyObj // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicAction(struct ABP_PsychicObjectBasic_C* psy obj in, struct AActor* target in, enum class PsychicObjectAttackType attack type in, bool psychic combo in, bool psychic ex in, bool return); // Function PsychicGrabComponent.PsychicGrabComponent_C.SetPsychicAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSasCopyObj(struct ABP_PsychicObjectBasic_C* src psy obj in, struct ABP_PsychicObjectBasic_C* copy obj); // Function PsychicGrabComponent.PsychicGrabComponent_C.GetSasCopyObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddSasCopy(struct ABP_PsychicObjectBasic_C* src psy obj in); // Function PsychicGrabComponent.PsychicGrabComponent_C.AddSasCopy // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSasCopy(bool flag in); // Function PsychicGrabComponent.PsychicGrabComponent_C.SetSasCopy // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttachObjSize(int32_t attach index in, struct ABP_PsychicObjectBasic_C* psy obj in); // Function PsychicGrabComponent.PsychicGrabComponent_C.SetAttachObjSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAttackAction(enum class PsychicObjectAttackType return); // Function PsychicGrabComponent.PsychicGrabComponent_C.GetAttackAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetPsyObjStealth(bool flag in, float time in); // Function PsychicGrabComponent.PsychicGrabComponent_C.SetPsyObjStealth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSasKindList(struct TArray<enum class E_SASKind> return); // Function PsychicGrabComponent.PsychicGrabComponent_C.GetSasKindList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetSasKind(int32_t idx in, enum class E_SASKind return); // Function PsychicGrabComponent.PsychicGrabComponent_C.GetSasKind // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetSasKind(bool flag in, enum class E_SASKind sas kind in); // Function PsychicGrabComponent.PsychicGrabComponent_C.SetSasKind // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void isAllAttackEnable(bool return); // Function PsychicGrabComponent.PsychicGrabComponent_C.isAllAttackEnable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void FindActionPsyObj(enum class PsychicGrabButtonType button type in, struct ABP_PsychicObjectBasic_C* psy obj); // Function PsychicGrabComponent.PsychicGrabComponent_C.FindActionPsyObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetActionPsyObj(struct ABP_PsychicObjectBasic_C* psy obj); // Function PsychicGrabComponent.PsychicGrabComponent_C.GetActionPsyObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetActionPsyObj(struct ABP_PsychicObjectBasic_C* psy obj in, enum class PsychicGrabButtonType action button in, struct ABP_PsychicObjectBasic_C* psy obj); // Function PsychicGrabComponent.PsychicGrabComponent_C.SetActionPsyObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DisposePsychicObject(); // Function PsychicGrabComponent.PsychicGrabComponent_C.DisposePsychicObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RestoreAreaChange(struct TArray<struct FPsychicObjectAreaChangeData> area change list in); // Function PsychicGrabComponent.PsychicGrabComponent_C.RestoreAreaChange // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartAreaChange(struct TArray<struct FPsychicObjectAreaChangeData> area change list in); // Function PsychicGrabComponent.PsychicGrabComponent_C.StartAreaChange // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsyObjTeleport(bool flag in, float time in); // Function PsychicGrabComponent.PsychicGrabComponent_C.SetPsyObjTeleport // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrintPsychicObjectInfo(); // Function PsychicGrabComponent.PsychicGrabComponent_C.PrintPsychicObjectInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCameraRotation(struct FRotator cam rot out); // Function PsychicGrabComponent.PsychicGrabComponent_C.GetCameraRotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateBrainGrabOld(); // Function PsychicGrabComponent.PsychicGrabComponent_C.UpdateBrainGrabOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAttachObj(); // Function PsychicGrabComponent.PsychicGrabComponent_C.UpdateAttachObj // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttachObjEnable(bool brain field, int32_t index in, bool enable in, bool update pos); // Function PsychicGrabComponent.PsychicGrabComponent_C.SetAttachObjEnable // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void convSlotToButtonType(int32_t slot in, enum class PsychicGrabButtonType button type out); // Function PsychicGrabComponent.PsychicGrabComponent_C.convSlotToButtonType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void DebugDrawBrainFieldObj(); // Function PsychicGrabComponent.PsychicGrabComponent_C.DebugDrawBrainFieldObj // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicGauge(int32_t psychic gauge in); // Function PsychicGrabComponent.PsychicGrabComponent_C.SetPsychicGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBrainPos(int32_t pos index in, struct FVector brain pos out); // Function PsychicGrabComponent.PsychicGrabComponent_C.GetBrainPos // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainPos(int32_t brain index in, struct FVector brain pos out); // Function PsychicGrabComponent.PsychicGrabComponent_C.SetBrainPos // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDisplayAttachObj(); // Function PsychicGrabComponent.PsychicGrabComponent_C.DebugDisplayAttachObj // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrintErrorString(struct FString str in); // Function PsychicGrabComponent.PsychicGrabComponent_C.PrintErrorString // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetFixListWithCount(struct TArray<struct UObject*> list in, int32_t count in, bool flag in, struct ABP_PsychicObjectBasic_C* psy obj in, int32_t index in, int32_t index out); // Function PsychicGrabComponent.PsychicGrabComponent_C.SetFixListWithCount // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainFieldAction(enum class PsychicObjectAttackType attack type in); // Function PsychicGrabComponent.PsychicGrabComponent_C.SetBrainFieldAction // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePsychicSecond(); // Function PsychicGrabComponent.PsychicGrabComponent_C.UpdatePsychicSecond // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetThrowAllCost(float throw all cost); // Function PsychicGrabComponent.PsychicGrabComponent_C.GetThrowAllCost // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetNormalGrabObjCount(int32_t return objCount); // Function PsychicGrabComponent.PsychicGrabComponent_C.GetNormalGrabObjCount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDisplayPsyObjLine(); // Function PsychicGrabComponent.PsychicGrabComponent_C.DebugDisplayPsyObjLine // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugTogglePsyObjLine(bool search in, bool grab in, bool unique in, bool brain in); // Function PsychicGrabComponent.PsychicGrabComponent_C.DebugTogglePsyObjLine // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddAttachSwingList(bool flag in, struct AActor* psy obj in, int32_t index in); // Function PsychicGrabComponent.PsychicGrabComponent_C.AddAttachSwingList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void isPsychicActionExec(enum class PsychicGrabButtonType button type in, bool return); // Function PsychicGrabComponent.PsychicGrabComponent_C.isPsychicActionExec // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void DebugRespawnPsychicObjectAllOld(); // Function PsychicGrabComponent.PsychicGrabComponent_C.DebugRespawnPsychicObjectAllOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugTogglePsychicGrabDisplayOld(); // Function PsychicGrabComponent.PsychicGrabComponent_C.DebugTogglePsychicGrabDisplayOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPsychicButtonNormal(enum class PsychicGrabButtonType button type in, bool return); // Function PsychicGrabComponent.PsychicGrabComponent_C.IsPsychicButtonNormal // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsPsychicButtonUnique(enum class PsychicGrabButtonType button type in, bool return); // Function PsychicGrabComponent.PsychicGrabComponent_C.IsPsychicButtonUnique // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdatePsychicButton(); // Function PsychicGrabComponent.PsychicGrabComponent_C.UpdatePsychicButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicButtonOn(enum class PsychicGrabButtonType button type in, bool flag in, bool is Unique); // Function PsychicGrabComponent.PsychicGrabComponent_C.SetPsychicButtonOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAnyUniqueObj(bool return, struct ABP_PsychicObjectBasic_C* psy obj); // Function PsychicGrabComponent.PsychicGrabComponent_C.GetAnyUniqueObj // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetUniqueObjByIndex(int32_t unique index in, bool return, struct ABP_PsychicObjectBasic_C* psy obj); // Function PsychicGrabComponent.PsychicGrabComponent_C.GetUniqueObjByIndex // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddUniqueList(struct AActor* unique obj in, int32_t unique index in, bool return); // Function PsychicGrabComponent.PsychicGrabComponent_C.AddUniqueList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void checkUnionIndex(int32_t union index in, bool grab index out, bool unique index out, bool brain index out); // Function PsychicGrabComponent.PsychicGrabComponent_C.checkUnionIndex // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void convUnionIndex(int32_t grab index in, int32_t unique index in, int32_t brain index in, int32_t union index in, int32_t Union index out, int32_t grab index out, int32_t unique index out, int32_t brain index out); // Function PsychicGrabComponent.PsychicGrabComponent_C.convUnionIndex // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateRequestList(); // Function PsychicGrabComponent.PsychicGrabComponent_C.UpdateRequestList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RequestBrainObj(); // Function PsychicGrabComponent.PsychicGrabComponent_C.RequestBrainObj // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RequestUniqueObj(); // Function PsychicGrabComponent.PsychicGrabComponent_C.RequestUniqueObj // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RequestGrabObj(); // Function PsychicGrabComponent.PsychicGrabComponent_C.RequestGrabObj // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddReleaseList(struct AActor* actor in); // Function PsychicGrabComponent.PsychicGrabComponent_C.AddReleaseList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRequest(struct ABP_PsychicObjectBasic_C* psy obj in, int32_t request index in, bool bFromBrainList); // Function PsychicGrabComponent.PsychicGrabComponent_C.SetRequest // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetNearestObj(enum class PsychicObjectAttackType attack type in, bool check unique in, bool check Fade in, bool bFromBrain in, bool Flag, int32_t Index, struct ABP_PsychicObjectBasic_C* psy obj); // Function PsychicGrabComponent.PsychicGrabComponent_C.GetNearestObj // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddGrabListFromBrain(struct ABP_PsychicObjectBasic_C* grab obj in, int32_t grab index in, bool return); // Function PsychicGrabComponent.PsychicGrabComponent_C.AddGrabListFromBrain // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SortBrainList(); // Function PsychicGrabComponent.PsychicGrabComponent_C.SortBrainList // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateReleaseList(); // Function PsychicGrabComponent.PsychicGrabComponent_C.UpdateReleaseList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBrainObjByIndex(int32_t brain index in, bool return); // Function PsychicGrabComponent.PsychicGrabComponent_C.GetBrainObjByIndex // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddBrainList(struct ABP_PsychicObjectBasic_C* brain obj in, int32_t brain index in, bool return); // Function PsychicGrabComponent.PsychicGrabComponent_C.AddBrainList // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateBrainField(bool return); // Function PsychicGrabComponent.PsychicGrabComponent_C.UpdateBrainField // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetThrowAllData(int32_t Index, int32_t throw all index, float throw all angle, struct FVector throw all offset); // Function PsychicGrabComponent.PsychicGrabComponent_C.GetThrowAllData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ShuffleThrowAllIndex(); // Function PsychicGrabComponent.PsychicGrabComponent_C.ShuffleThrowAllIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetButtonList(); // Function PsychicGrabComponent.PsychicGrabComponent_C.ResetButtonList // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CallPsychicFieldCloseSE(); // Function PsychicGrabComponent.PsychicGrabComponent_C.CallPsychicFieldCloseSE // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CallPsychicActionSE(enum class PsychicGrabButtonType button type, struct AActor* psychic object); // Function PsychicGrabComponent.PsychicGrabComponent_C.CallPsychicActionSE // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void isGrabButtonPress(enum class PsychicGrabButtonType button type, bool Press); // Function PsychicGrabComponent.PsychicGrabComponent_C.isGrabButtonPress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetGrabButtonScreenPos(enum class PsychicGrabButtonType button type, bool return, struct FVector2D screen pos); // Function PsychicGrabComponent.PsychicGrabComponent_C.GetGrabButtonScreenPos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetGrabButtonWorldPos(enum class PsychicGrabButtonType button type, bool return, struct FVector world pos); // Function PsychicGrabComponent.PsychicGrabComponent_C.GetGrabButtonWorldPos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetAnimationLength(enum class PsychicGrabButtonType button type, float Length); // Function PsychicGrabComponent.PsychicGrabComponent_C.GetAnimationLength // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetGrabObjByButton(enum class PsychicGrabButtonType button type, struct ABP_PsychicObjectBasic_C* psychic object); // Function PsychicGrabComponent.PsychicGrabComponent_C.GetGrabObjByButton // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReloadGrabList(struct ABP_PsychicObjectBasic_C* psychic object, int32_t grab index, bool bCombo); // Function PsychicGrabComponent.PsychicGrabComponent_C.ReloadGrabList // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetButtonList(int32_t Index, struct ABP_PsychicObjectBasic_C* psychic object); // Function PsychicGrabComponent.PsychicGrabComponent_C.SetButtonList // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CanGrabButtonUse(enum class PsychicGrabButtonType button type, bool Use); // Function PsychicGrabComponent.PsychicGrabComponent_C.CanGrabButtonUse // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CanGrabButtonShow(enum class PsychicGrabButtonType button type, bool Show); // Function PsychicGrabComponent.PsychicGrabComponent_C.CanGrabButtonShow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsActorInRange(struct AActor* Actor, float RangeSq, bool isInCaptureField); // Function PsychicGrabComponent.PsychicGrabComponent_C.IsActorInRange // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetActionCombo(int32_t count, bool bPress, int32_t Index); // Function PsychicGrabComponent.PsychicGrabComponent_C.SetActionCombo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetGrabObjTotal(int32_t Total); // Function PsychicGrabComponent.PsychicGrabComponent_C.GetGrabObjTotal // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetActionCombo(bool bCombo, int32_t count); // Function PsychicGrabComponent.PsychicGrabComponent_C.GetActionCombo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CanPsychicAction(enum class PsychicGrabButtonType button type, bool bPsychicCombo, bool bRequestCombo, bool bFlag); // Function PsychicGrabComponent.PsychicGrabComponent_C.CanPsychicAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void convButtonTypeToGrabIndex(enum class PsychicGrabButtonType button type, bool bSuccess, int32_t grab index); // Function PsychicGrabComponent.PsychicGrabComponent_C.convButtonTypeToGrabIndex // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void RemoveGrabList(struct AActor* psy obj, bool reload check); // Function PsychicGrabComponent.PsychicGrabComponent_C.RemoveGrabList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetGrabObjCount(enum class PsychicGrabButtonType button type, int32_t count); // Function PsychicGrabComponent.PsychicGrabComponent_C.GetGrabObjCount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateGrabObjCount(); // Function PsychicGrabComponent.PsychicGrabComponent_C.UpdateGrabObjCount // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RequestPsychicCombo(enum class PsychicGrabButtonType button type in, struct ABP_PsychicObjectBasic_C* psy obj in, bool return); // Function PsychicGrabComponent.PsychicGrabComponent_C.RequestPsychicCombo // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddAttachList(bool flag in, struct AActor* psy obj in, int32_t index in, float speed rate, struct FVector pos rate, struct FVector rot rate, bool bResetPos, bool bForceAttach); // Function PsychicGrabComponent.PsychicGrabComponent_C.AddAttachList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateReload(); // Function PsychicGrabComponent.PsychicGrabComponent_C.UpdateReload // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPsychicDeltaSecond(bool bPsychicSpeed, bool bGetRate, float delta second, float Rate); // Function PsychicGrabComponent.PsychicGrabComponent_C.GetPsychicDeltaSecond // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void InputPsychicAction(enum class PsychicGrabButtonType button type in, bool psychic combo in, bool psychic ex in, bool Valid); // Function PsychicGrabComponent.PsychicGrabComponent_C.InputPsychicAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void convButtonTypeToAttackType(enum class PsychicGrabButtonType button type in, enum class PsychicObjectAttackType attackType in, enum class PsychicObjectAttackType attack type out, enum class PsychicGrabButtonType button type out); // Function PsychicGrabComponent.PsychicGrabComponent_C.convButtonTypeToAttackType // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void anyEmptyGrabSlot(bool return); // Function PsychicGrabComponent.PsychicGrabComponent_C.anyEmptyGrabSlot // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void convGrabIndexToSlotStack(int32_t grabIndex, int32_t Slot, int32_t stack); // Function PsychicGrabComponent.PsychicGrabComponent_C.convGrabIndexToSlotStack // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void convSlotStackToGrabIndex(int32_t Slot, int32_t stack, int32_t grabIndex); // Function PsychicGrabComponent.PsychicGrabComponent_C.convSlotStackToGrabIndex // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void convSlotToAttackType(int32_t slot no in, bool bReverse, enum class PsychicObjectAttackType attack type in, enum class PsychicObjectAttackType attack type out, int32_t slot no out); // Function PsychicGrabComponent.PsychicGrabComponent_C.convSlotToAttackType // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CheckSlotStack(int32_t slotNo, int32_t stackNo, bool return, struct ABP_PsychicObjectBasic_C* psyObj, int32_t grabIndex); // Function PsychicGrabComponent.PsychicGrabComponent_C.CheckSlotStack // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddGrabList(struct AActor* grab obj in, int32_t grab index in, bool return); // Function PsychicGrabComponent.PsychicGrabComponent_C.AddGrabList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCaptureField(); // Function PsychicGrabComponent.PsychicGrabComponent_C.UpdateCaptureField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void getTargetActor(struct AActor* TargetActor); // Function PsychicGrabComponent.PsychicGrabComponent_C.getTargetActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void InputPsychicCaptrue(bool bActive, bool return); // Function PsychicGrabComponent.PsychicGrabComponent_C.InputPsychicCaptrue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDisplaySearch(); // Function PsychicGrabComponent.PsychicGrabComponent_C.DebugDisplaySearch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAttachPosByIndex(int32_t table index, struct FName socket name, bool is float pos, bool Valid, struct FVector Pos); // Function PsychicGrabComponent.PsychicGrabComponent_C.GetAttachPosByIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetGrabObjByIndex(int32_t Index, bool Valid, struct ABP_PsychicObjectBasic_C* GrabObj); // Function PsychicGrabComponent.PsychicGrabComponent_C.GetGrabObjByIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateSearchList(); // Function PsychicGrabComponent.PsychicGrabComponent_C.UpdateSearchList // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddSearchListOld(struct AActor* actor in); // Function PsychicGrabComponent.PsychicGrabComponent_C.AddSearchListOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ThrowAll(); // Function PsychicGrabComponent.PsychicGrabComponent_C.ThrowAll // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDisplay(); // Function PsychicGrabComponent.PsychicGrabComponent_C.DebugDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateGrabList(); // Function PsychicGrabComponent.PsychicGrabComponent_C.UpdateGrabList // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(); // Function PsychicGrabComponent.PsychicGrabComponent_C.Update // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(struct USphereComponent* Collision); // Function PsychicGrabComponent.PsychicGrabComponent_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function PsychicGrabComponent.PsychicGrabComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_PsychicGrabComponent(int32_t EntryPoint); // Function PsychicGrabComponent.PsychicGrabComponent_C.ExecuteUbergraph_PsychicGrabComponent // (Final|UbergraphFunction) // @ game+0x1685580
	void UpdatePsyActionCount2__DelegateSignature(bool Unique, int32_t obj count); // Function PsychicGrabComponent.PsychicGrabComponent_C.UpdatePsyActionCount2__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePsyActionEnable2__DelegateSignature(bool Unique, bool Enable, int32_t obj count); // Function PsychicGrabComponent.PsychicGrabComponent_C.UpdatePsyActionEnable2__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePsyActionShow2__DelegateSignature(bool Unique, bool Show, int32_t obj count); // Function PsychicGrabComponent.PsychicGrabComponent_C.UpdatePsyActionShow2__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePsyActionPress2__DelegateSignature(bool Unique, bool Press, bool psychic combo, int32_t obj count); // Function PsychicGrabComponent.PsychicGrabComponent_C.UpdatePsyActionPress2__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePsyActionCount__DelegateSignature(enum class PsychicGrabButtonType button type, int32_t obj count); // Function PsychicGrabComponent.PsychicGrabComponent_C.UpdatePsyActionCount__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePsyActionEnable__DelegateSignature(enum class PsychicGrabButtonType button type, bool Enable, int32_t obj count); // Function PsychicGrabComponent.PsychicGrabComponent_C.UpdatePsyActionEnable__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePsyActionShow__DelegateSignature(enum class PsychicGrabButtonType button type, bool Show, int32_t obj count); // Function PsychicGrabComponent.PsychicGrabComponent_C.UpdatePsyActionShow__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePsyActionPress__DelegateSignature(enum class PsychicGrabButtonType button type, bool Press, bool psychic combo, int32_t obj count); // Function PsychicGrabComponent.PsychicGrabComponent_C.UpdatePsyActionPress__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

