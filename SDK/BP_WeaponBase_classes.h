// BlueprintGeneratedClass BP_WeaponBase.BP_WeaponBase_C
// Size: 0x409 (Inherited: 0x230)
struct ABP_WeaponBase_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x238(0x08)
	enum class EWeaponThrowType ThrowType; // 0x240(0x01)
	char pad_241[0x3]; // 0x241(0x03)
	struct FVector ThrowTargetPoint; // 0x244(0x0c)
	struct AActor* ThrowTargetActor; // 0x250(0x08)
	float ThrowSpeed; // 0x258(0x04)
	char pad_25C[0x4]; // 0x25c(0x04)
	struct USceneComponent* StoreParentComponent; // 0x260(0x08)
	struct FName StoreParentSocketName; // 0x268(0x08)
	bool bThrow; // 0x270(0x01)
	char pad_271[0x3]; // 0x271(0x03)
	struct FVector ThrowStartPoint; // 0x274(0x0c)
	struct ARSBattlePlayer_C* OwnerPlayer; // 0x280(0x08)
	struct FRotator ThrowRotator; // 0x288(0x0c)
	float WeaponLength; // 0x294(0x04)
	bool bThrowHit; // 0x298(0x01)
	bool bThrowReturn; // 0x299(0x01)
	char pad_29A[0x2]; // 0x29a(0x02)
	struct FGameTimer ReturnTimer; // 0x29c(0x0c)
	struct UParticleSystem* BattleEffect; // 0x2a8(0x08)
	struct URSParticleSystemComponentBase* BattleEffectHandle; // 0x2b0(0x08)
	struct FName BattleEffectParameter; // 0x2b8(0x08)
	struct FVector ThrowDir; // 0x2c0(0x0c)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct TArray<struct FName> ClaimantMaterialColor_PsychicEmission; // 0x2d0(0x10)
	struct TArray<struct FLinearColor> MaterialColor_PsychicEmission; // 0x2e0(0x10)
	struct TArray<struct FName> ClaimantMaterialAlpha_PsychicEmission; // 0x2f0(0x10)
	struct TArray<float> MaterialAlpha_PsychicEmission; // 0x300(0x10)
	struct FName BattleEffectAttachPoint; // 0x310(0x08)
	bool bBattleEmissionEnable; // 0x318(0x01)
	bool bBattleEmission; // 0x319(0x01)
	bool bBattleEmissionOn; // 0x31a(0x01)
	char pad_31B[0x1]; // 0x31b(0x01)
	float BattleEmissionLerpTime; // 0x31c(0x04)
	float BattleEmissionRate; // 0x320(0x04)
	char pad_324[0x4]; // 0x324(0x04)
	struct TArray<struct UMaterialInstanceDynamic*> WeaponMaterialInstanceArray; // 0x328(0x10)
	struct UAnimSequence* AnimSeqNeutralLoop; // 0x338(0x08)
	struct UAnimSequence* AnimSeqBattleLoop; // 0x340(0x08)
	struct UAnimSequence* AnimSeqToBattle; // 0x348(0x08)
	struct UAnimSequence* AnimSeqToNeutral; // 0x350(0x08)
	bool bMainWeapon; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	struct TMap<enum class E_SASKind, struct FLinearColor> SASColorMap; // 0x360(0x50)
	enum class E_SASKind EmissiveColorSASKind; // 0x3b0(0x01)
	char pad_3B1[0x3]; // 0x3b1(0x03)
	int32_t DriveLevel; // 0x3b4(0x04)
	float DriveIntensity; // 0x3b8(0x04)
	struct FLinearColor DriveColor; // 0x3bc(0x10)
	float DefaultSwordIntensity; // 0x3cc(0x04)
	struct TArray<struct FName> TickClaimantList; // 0x3d0(0x10)
	struct FName ThrowWeaponClaimantName; // 0x3e0(0x08)
	struct FName WeaponEmissionClaimantName; // 0x3e8(0x08)
	struct FMulticastInlineDelegate DispatchThrowHit; // 0x3f0(0x10)
	int32_t WeaponItemID; // 0x400(0x04)
	float CheckHeightLength; // 0x404(0x04)
	bool bHologramFlag; // 0x408(0x01)

	void CheckExecuteAnimNotifyCharacterKind(enum class ECharaExecuteNotifyKind kind, bool bExecute); // Function BP_WeaponBase.BP_WeaponBase_C.CheckExecuteAnimNotifyCharacterKind // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetProxyMesh(struct UMeshComponent* Mesh); // Function BP_WeaponBase.BP_WeaponBase_C.GetProxyMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetProxyRequestedPlayer(struct ARSBattlePlayer_C* Player); // Function BP_WeaponBase.BP_WeaponBase_C.GetProxyRequestedPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHologramFlag(); // Function BP_WeaponBase.BP_WeaponBase_C.SetHologramFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadMesh(int32_t InWeaponID, bool ResetMaterial); // Function BP_WeaponBase.BP_WeaponBase_C.LoadMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetMaterialInstanceArray(); // Function BP_WeaponBase.BP_WeaponBase_C.ResetMaterialInstanceArray // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetExtraMesh(struct TArray<struct USkeletalMeshComponent*> ExtraMesh); // Function BP_WeaponBase.BP_WeaponBase_C.GetExtraMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetExtraMaterialInstanceArray(struct TArray<struct UMaterialInstanceDynamic*> MaterialInstance); // Function BP_WeaponBase.BP_WeaponBase_C.GetExtraMaterialInstanceArray // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWeaponTickEnabled(bool bEnabled, struct FName ClaimantName); // Function BP_WeaponBase.BP_WeaponBase_C.SetWeaponTickEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetMaterial_EmissiveColorType(enum class E_SASKind SasKind); // Function BP_WeaponBase.BP_WeaponBase_C.ResetMaterial_EmissiveColorType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMaterial_EmissiveColorType(enum class E_SASKind SasKind); // Function BP_WeaponBase.BP_WeaponBase_C.SetMaterial_EmissiveColorType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMaterial_EmissiveColor(struct FLinearColor Color); // Function BP_WeaponBase.BP_WeaponBase_C.SetMaterial_EmissiveColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMaterial_Emissive(float Emissive); // Function BP_WeaponBase.BP_WeaponBase_C.SetMaterial_Emissive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWeaponMaterialVectorArrayParameter(struct TArray<struct FName> ParameterName, struct TArray<struct FLinearColor> Color, bool bExtraMaterial, bool bDummy); // Function BP_WeaponBase.BP_WeaponBase_C.SetWeaponMaterialVectorArrayParameter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWeaponMaterialVectorParameter(struct FName ParameterName, struct FLinearColor Color, bool bExtraMaterial, bool bDummy); // Function BP_WeaponBase.BP_WeaponBase_C.SetWeaponMaterialVectorParameter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWeaponMaterialScalarArrayParameter(struct TArray<struct FName> ParamName, struct TArray<float> Value, bool bExtraMaterial, bool bDummy); // Function BP_WeaponBase.BP_WeaponBase_C.SetWeaponMaterialScalarArrayParameter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateBattleEmission(); // Function BP_WeaponBase.BP_WeaponBase_C.UpdateBattleEmission // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBattleEmission(bool force in, bool flag in, float lerp time in); // Function BP_WeaponBase.BP_WeaponBase_C.SetBattleEmission // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTransAnim(bool bBattle); // Function BP_WeaponBase.BP_WeaponBase_C.SetTransAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLoopAnim(bool bBattle); // Function BP_WeaponBase.BP_WeaponBase_C.SetLoopAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWeaponMaterialScalarParameter(struct FName ParamName, float Value, bool bExtraMaterial, bool bDummy); // Function BP_WeaponBase.BP_WeaponBase_C.SetWeaponMaterialScalarParameter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetMaterialAlpha_PsychicEmission(struct FName ClaimantName); // Function BP_WeaponBase.BP_WeaponBase_C.ResetMaterialAlpha_PsychicEmission // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetMaterialColor_PsychicEmission(struct FName ClaimantName); // Function BP_WeaponBase.BP_WeaponBase_C.ResetMaterialColor_PsychicEmission // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMaterialAlpha_PsychicEmission(float Alpha, struct FName ClaimantName); // Function BP_WeaponBase.BP_WeaponBase_C.SetMaterialAlpha_PsychicEmission // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMaterialColor_PsychicEmission(float R, float G, float B, struct FName ClaimantName); // Function BP_WeaponBase.BP_WeaponBase_C.SetMaterialColor_PsychicEmission // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(bool bDummy); // Function BP_WeaponBase.BP_WeaponBase_C.Initialize // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsThrowHit(bool bHit); // Function BP_WeaponBase.BP_WeaponBase_C.IsThrowHit // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetWeaponVisibility(bool bVisible); // Function BP_WeaponBase.BP_WeaponBase_C.SetWeaponVisibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBattleEffect(bool bON); // Function BP_WeaponBase.BP_WeaponBase_C.SetBattleEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAttachTransform(struct FTransform Transform); // Function BP_WeaponBase.BP_WeaponBase_C.GetAttachTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void TakeBackUpdate(float DeltaTime); // Function BP_WeaponBase.BP_WeaponBase_C.TakeBackUpdate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetThrowPoint(struct FVector Point); // Function BP_WeaponBase.BP_WeaponBase_C.GetThrowPoint // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void ThrowEnd(bool bAttach); // Function BP_WeaponBase.BP_WeaponBase_C.ThrowEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void attach(struct ARSBattlePlayer_C* Owner, struct USceneComponent* Component, struct FName SocketName); // Function BP_WeaponBase.BP_WeaponBase_C.attach // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ThrowStart(enum class EWeaponThrowType ThrowType, float CheckHeightOnGround); // Function BP_WeaponBase.BP_WeaponBase_C.ThrowStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ThrowUpdate(float DeltaTime); // Function BP_WeaponBase.BP_WeaponBase_C.ThrowUpdate // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ThrowToTarget(float Speed, struct AActor* TargetActor, float CheckHeightOnGround); // Function BP_WeaponBase.BP_WeaponBase_C.ThrowToTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ThrowToPoint(float Speed, struct FVector TargetPoint); // Function BP_WeaponBase.BP_WeaponBase_C.ThrowToPoint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TakeBackOwner(float Time); // Function BP_WeaponBase.BP_WeaponBase_C.TakeBackOwner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_WeaponBase.BP_WeaponBase_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_WeaponBase.BP_WeaponBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_WeaponBase.BP_WeaponBase_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_WeaponBase(int32_t EntryPoint); // Function BP_WeaponBase.BP_WeaponBase_C.ExecuteUbergraph_BP_WeaponBase // (Final|UbergraphFunction) // @ game+0x1685580
	void DispatchThrowHit__DelegateSignature(struct FVector HitLocation); // Function BP_WeaponBase.BP_WeaponBase_C.DispatchThrowHit__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

