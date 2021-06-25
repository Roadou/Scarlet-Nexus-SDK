// BlueprintGeneratedClass BP_PlayerHologram.BP_PlayerHologram_C
// Size: 0x720 (Inherited: 0x230)
struct ABP_PlayerHologram_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBP_AttachmentManageComponent_C* BP_AttachmentManageComponent_ch1000; // 0x238(0x08)
	struct UBP_AttachmentManageComponent_C* BP_AttachmentManageComponent_ch0900_copy3; // 0x240(0x08)
	struct UBP_AttachmentManageComponent_C* BP_AttachmentManageComponent_ch0900_copy2; // 0x248(0x08)
	struct UBP_AttachmentManageComponent_C* BP_AttachmentManageComponent_ch0900_copy1; // 0x250(0x08)
	struct UBP_AttachmentManageComponent_C* BP_AttachmentManageComponent_ch0900_copy0; // 0x258(0x08)
	struct UBP_AttachmentManageComponent_C* BP_AttachmentManageComponent_ch0900; // 0x260(0x08)
	struct UBP_AttachmentManageComponent_C* BP_AttachmentManageComponent_ch0800; // 0x268(0x08)
	struct UBP_AttachmentManageComponent_C* BP_AttachmentManageComponent_ch0700; // 0x270(0x08)
	struct UBP_AttachmentManageComponent_C* BP_AttachmentManageComponent_ch0600; // 0x278(0x08)
	struct UBP_AttachmentManageComponent_C* BP_AttachmentManageComponent_ch0500; // 0x280(0x08)
	struct UBP_AttachmentManageComponent_C* BP_AttachmentManageComponent_ch0400; // 0x288(0x08)
	struct UBP_AttachmentManageComponent_C* BP_AttachmentManageComponent_ch0300; // 0x290(0x08)
	struct UBP_AttachmentManageComponent_C* BP_AttachmentManageComponent_ch0200; // 0x298(0x08)
	struct UBP_AttachmentManageComponent_C* BP_AttachmentManageComponent_ch0100; // 0x2a0(0x08)
	struct UBP_GhostTrailComponent_C* BP_GhostTrailComponent; // 0x2a8(0x08)
	struct UBP_AimComponent_C* BP_AimComponent; // 0x2b0(0x08)
	struct USkeletalMeshComponent* SM_ch0900_copy4; // 0x2b8(0x08)
	struct USkeletalMeshComponent* SM_ch0900_copy3; // 0x2c0(0x08)
	struct USkeletalMeshComponent* SM_ch0900_copy2; // 0x2c8(0x08)
	struct USkeletalMeshComponent* SM_ch0900_copy1; // 0x2d0(0x08)
	struct USkeletalMeshComponent* SM_ch1000; // 0x2d8(0x08)
	struct USkeletalMeshComponent* SM_ch0900; // 0x2e0(0x08)
	struct USkeletalMeshComponent* SM_ch0800; // 0x2e8(0x08)
	struct USkeletalMeshComponent* SM_ch0700; // 0x2f0(0x08)
	struct USkeletalMeshComponent* SM_ch0600; // 0x2f8(0x08)
	struct USkeletalMeshComponent* SM_ch0500; // 0x300(0x08)
	struct USkeletalMeshComponent* SM_ch0400; // 0x308(0x08)
	struct USkeletalMeshComponent* SM_ch0300; // 0x310(0x08)
	struct USkeletalMeshComponent* SM_ch0200; // 0x318(0x08)
	struct USkeletalMeshComponent* SM_ch0100; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)
	enum class EPlayerID hologramPlayerID; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	struct ABP_WeaponBase_C* WeaponCh0100; // 0x338(0x08)
	struct TArray<struct ABP_WeaponBase_C*> WeaponCh0200; // 0x340(0x10)
	struct ABP_WeaponBase_C* WeaponCh0300; // 0x350(0x08)
	struct ABP_WeaponBase_C* WeaponCh0500; // 0x358(0x08)
	struct ABP_WeaponBase_C* WeaponCh0600; // 0x360(0x08)
	struct ABP_WeaponBase_C* WeaponCh0700; // 0x368(0x08)
	struct ABP_WeaponBase_C* WeaponCh0800Right; // 0x370(0x08)
	struct ABP_WeaponBase_C* WeaponCh0800Left; // 0x378(0x08)
	struct ABP_WeaponBase_C* WeaponCh0900Right; // 0x380(0x08)
	struct ABP_WeaponBase_C* WeaponCh0900Left; // 0x388(0x08)
	struct ABP_WeaponBase_C* WeaponCh1000; // 0x390(0x08)
	bool bHologramOn; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
	struct ARSBattlePlayer_C* AttachPlayer; // 0x3a0(0x08)
	struct UCurveVector* CurveStart; // 0x3a8(0x08)
	struct UCurveVector* CurveLoop; // 0x3b0(0x08)
	struct UCurveVector* CurveEnd; // 0x3b8(0x08)
	struct UCurveVector* CurveColorStart; // 0x3c0(0x08)
	float curveTime; // 0x3c8(0x04)
	bool IsAttachPlayerVisible; // 0x3cc(0x01)
	char pad_3CD[0x3]; // 0x3cd(0x03)
	struct UCurveVector* CurveStart_Cover; // 0x3d0(0x08)
	struct UCurveVector* CurveLoop_Cover; // 0x3d8(0x08)
	struct UCurveVector* CurveEnd_Cover; // 0x3e0(0x08)
	enum class EHologramKind HologramKind; // 0x3e8(0x01)
	bool bEnableHologramRootMotion; // 0x3e9(0x01)
	char pad_3EA[0x6]; // 0x3ea(0x06)
	struct FMulticastInlineDelegate DispatcherOnMontageBlendingOutCh0100; // 0x3f0(0x10)
	struct FMulticastInlineDelegate DispatcherOnMontageBlendingOutCh0200; // 0x400(0x10)
	struct FMulticastInlineDelegate DispatcherOnMontageBlendingOutCh0300; // 0x410(0x10)
	struct FMulticastInlineDelegate DispatcherOnMontageBlendingOutCh0400; // 0x420(0x10)
	struct FMulticastInlineDelegate DispatcherOnMontageBlendingOutCh0500; // 0x430(0x10)
	struct FMulticastInlineDelegate DispatcherOnMontageBlendingOutCh0600; // 0x440(0x10)
	struct FMulticastInlineDelegate DispatcherOnMontageBlendingOutCh0700; // 0x450(0x10)
	struct FMulticastInlineDelegate DispatcherOnMontageBlendingOutCh0800; // 0x460(0x10)
	struct FMulticastInlineDelegate DispatcherOnMontageBlendingOutCh0900; // 0x470(0x10)
	struct FMulticastInlineDelegate DispatcherOnMontageBlendingOutCh1000; // 0x480(0x10)
	struct FMulticastInlineDelegate DispatcherHologramOff; // 0x490(0x10)
	struct URSParticleSystemComponentBase* WeaponParticleHandle; // 0x4a0(0x08)
	struct TArray<struct ABP_WeaponBase_C*> Ch0900CopyWeaponList; // 0x4a8(0x10)
	struct TArray<struct UAnimMontage*> CopyMontageList; // 0x4b8(0x10)
	int32_t NotifyCount; // 0x4c8(0x04)
	char pad_4CC[0x4]; // 0x4cc(0x04)
	struct ABP_BulletBase_C* BulletCh0900; // 0x4d0(0x08)
	struct ABP_HologramBullet_ch0500_C* BulletCh0500; // 0x4d8(0x08)
	struct FName ClaimantName; // 0x4e0(0x08)
	struct UCurveVector* CurveColorStart_Cover; // 0x4e8(0x08)
	float CurveColorTime; // 0x4f0(0x04)
	char pad_4F4[0x4]; // 0x4f4(0x04)
	struct FMulticastInlineDelegate DispatcherHitThrowWeapon; // 0x4f8(0x10)
	struct FMulticastInlineDelegate DispatchAttackNotify; // 0x508(0x10)
	bool HologramSASMaterial; // 0x518(0x01)
	char pad_519[0x7]; // 0x519(0x07)
	struct UCurveLinearColor* SASMaterialCurve; // 0x520(0x08)
	float SASMaterialTime; // 0x528(0x04)
	struct FLinearColor SASMaterialDefaultLineColor; // 0x52c(0x10)
	char pad_53C[0x4]; // 0x53c(0x04)
	struct FMaterialSwitchCache SASMaterialStealthSwitch; // 0x540(0x10)
	bool SASMaterialNowStealth; // 0x550(0x01)
	char pad_551[0x7]; // 0x551(0x07)
	struct ABP_WeaponBase_C* WeaponCh0400; // 0x558(0x08)
	struct FGameTimer WeaponScaleTimer; // 0x560(0x0c)
	struct FVector WeaponScaleSource; // 0x56c(0x0c)
	struct FVector WeaponScaleDest; // 0x578(0x0c)
	struct FVector OriginalWeaponScale; // 0x584(0x0c)
	bool bCancelDelay; // 0x590(0x01)
	char pad_591[0x7]; // 0x591(0x07)
	struct ARSBattlePlayer_C* ProxyPlayer; // 0x598(0x08)
	int32_t NotifyCountCombinationVision; // 0x5a0(0x04)
	char pad_5A4[0x4]; // 0x5a4(0x04)
	struct TArray<struct ABP_CombinationVisionBullet_ch0500_C*> Combination_BulletCh0500; // 0x5a8(0x10)
	int32_t Combination_BulletCh0500Num; // 0x5b8(0x04)
	char pad_5BC[0x4]; // 0x5bc(0x04)
	struct TArray<struct FAttackCollisionInfoBP> Combination_Ch0500BulletCollisionInfo; // 0x5c0(0x10)
	float Combination_Ch0500DefaultBulletFirePitch; // 0x5d0(0x04)
	float Combination_Ch0500PitchCorrectLimitMin; // 0x5d4(0x04)
	float Combination_Ch0500RotatePitchTarget; // 0x5d8(0x04)
	float Combination_Ch0500RotatePitchSpeed; // 0x5dc(0x04)
	struct ARSCharacterBase* lTargetCharacter; // 0x5e0(0x08)
	float Combination_Ch0500RotatePitchOffsetCurrent; // 0x5e8(0x04)
	bool Combination_Ch0500bRotatePitchEnable; // 0x5ec(0x01)
	char pad_5ED[0x3]; // 0x5ed(0x03)
	int32_t Combination_Ch0500BulletIndex; // 0x5f0(0x04)
	float Combination_Ch0500RotateBasePitch; // 0x5f4(0x04)
	float Combination_Ch0500PitchCorrectLimitMax; // 0x5f8(0x04)
	char pad_5FC[0x4]; // 0x5fc(0x04)
	struct UParticleSystem* Combination_Ch0500MuzzleFlash; // 0x600(0x08)
	struct ABP_CombinationVisionBullet_ch0700_C* Combination_BulletCh0700; // 0x608(0x08)
	struct FAttackCollisionInfoBP Combination_Ch0700BulletCollisionInfo; // 0x610(0xc0)
	float Combination_Ch0700DefaultBulletFirePitch; // 0x6d0(0x04)
	float Combination_Ch0700PitchCorrectLimitMin; // 0x6d4(0x04)
	float Combination_Ch0700PitchCorrectLimitMax; // 0x6d8(0x04)
	char pad_6DC[0x4]; // 0x6dc(0x04)
	struct TArray<struct ABP_CombinationVisionBullet_ch0900_C*> CombinationVisionBulletCh0900; // 0x6e0(0x10)
	int32_t Combination_Ch0500FireCount; // 0x6f0(0x04)
	float HologramAttack_Ch0100HeightMin; // 0x6f4(0x04)
	struct USkeletalMeshComponent* lDelayMesh; // 0x6f8(0x08)
	struct TArray<int32_t> HologramCostumeID; // 0x700(0x10)
	struct TArray<int32_t> HologramWeaponID; // 0x710(0x10)

	void GetAttachedCharacterMesh(enum class EPlayerID EquipPlayerID, int32_t EquipMeshIndex, struct USkeletalMeshComponent* Mesh); // Function BP_PlayerHologram.BP_PlayerHologram_C.GetAttachedCharacterMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EquipAttachmentInterface(enum class EPlayerAttachment Index, int32_t AttachmentItemID, enum class EPlayerID EquipPlayerID, int32_t EquipMeshIndex, bool bDummy); // Function BP_PlayerHologram.BP_PlayerHologram_C.EquipAttachmentInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DestroyAttachmentMeshComponent(struct USceneComponent* DestroyMeshComponent, bool bDummy); // Function BP_PlayerHologram.BP_PlayerHologram_C.DestroyAttachmentMeshComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttachmentVisibilityOffOnHead(bool bOff, bool bDummy); // Function BP_PlayerHologram.BP_PlayerHologram_C.AttachmentVisibilityOffOnHead // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckExecuteAnimNotifyCharacterKind(enum class ECharaExecuteNotifyKind kind, bool bExecute); // Function BP_PlayerHologram.BP_PlayerHologram_C.CheckExecuteAnimNotifyCharacterKind // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	enum class FHitEffectPriority GetHitEffectPriorityInterface(); // Function BP_PlayerHologram.BP_PlayerHologram_C.GetHitEffectPriorityInterface // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetProxyRequestedPlayer(struct ARSBattlePlayer_C* Player); // Function BP_PlayerHologram.BP_PlayerHologram_C.GetProxyRequestedPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetProxyMesh(struct UMeshComponent* Mesh); // Function BP_PlayerHologram.BP_PlayerHologram_C.GetProxyMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ClearFlyingForceInterface(); // Function BP_PlayerHologram.BP_PlayerHologram_C.ClearFlyingForceInterface // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ClearFlyingInterface(struct FName ClaimantName); // Function BP_PlayerHologram.BP_PlayerHologram_C.ClearFlyingInterface // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetFlyingInterface(struct FName ClaimantName); // Function BP_PlayerHologram.BP_PlayerHologram_C.SetFlyingInterface // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartAim(float LimitAngle, bool bDummy); // Function BP_PlayerHologram.BP_PlayerHologram_C.StartAim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndAim(bool bDummy); // Function BP_PlayerHologram.BP_PlayerHologram_C.EndAim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AnimNotifyCombinationAttackEnd(int32_t Param, bool bDummy); // Function BP_PlayerHologram.BP_PlayerHologram_C.AnimNotifyCombinationAttackEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AnimNotifyCombinationAttackBegin(int32_t Param, bool bDummy); // Function BP_PlayerHologram.BP_PlayerHologram_C.AnimNotifyCombinationAttackBegin // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AnimNotifyCombinationAttack(int32_t Param, bool bDummy); // Function BP_PlayerHologram.BP_PlayerHologram_C.AnimNotifyCombinationAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void HologramAttackScar(struct FName HightTargetSocket, float Angle, bool bDummy); // Function BP_PlayerHologram.BP_PlayerHologram_C.HologramAttackScar // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void HologramWeaponEmissive(float Emissive, enum class EPlayerID playerId, bool bDummy); // Function BP_PlayerHologram.BP_PlayerHologram_C.HologramWeaponEmissive // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AnimNotifyHologramAttackEnd(int32_t Param, bool bDummy); // Function BP_PlayerHologram.BP_PlayerHologram_C.AnimNotifyHologramAttackEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AnimNotifyHologramAttackBegin(int32_t Param, bool bDummy); // Function BP_PlayerHologram.BP_PlayerHologram_C.AnimNotifyHologramAttackBegin // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AnimNotifyHologramAttack(int32_t Param, bool bDummy); // Function BP_PlayerHologram.BP_PlayerHologram_C.AnimNotifyHologramAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void HologramOnInitMaterial(); // Function BP_PlayerHologram.BP_PlayerHologram_C.HologramOnInitMaterial // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAttachmentManageComponent(enum class EPlayerID EquipPlayerID, int32_t EquipMeshIndex, struct UBP_AttachmentManageComponent_C* Manager); // Function BP_PlayerHologram.BP_PlayerHologram_C.GetAttachmentManageComponent // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EquipAttachment(); // Function BP_PlayerHologram.BP_PlayerHologram_C.EquipAttachment // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupWeaponHologramMaterial(struct ABP_WeaponBase_C* WeaponBase); // Function BP_PlayerHologram.BP_PlayerHologram_C.SetupWeaponHologramMaterial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EquipWeapon(enum class EPlayerID playerId, int32_t WeaponId, bool ChangeWeapon); // Function BP_PlayerHologram.BP_PlayerHologram_C.EquipWeapon // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeEquip(); // Function BP_PlayerHologram.BP_PlayerHologram_C.ChangeEquip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Equip Costume(enum class EPlayerID playerId, int32_t CostumeId, bool bFirst, bool ChangeCostume); // Function BP_PlayerHologram.BP_PlayerHologram_C.Equip Costume // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetHologramPlayerID(enum class EPlayerID hologramPlayerID); // Function BP_PlayerHologram.BP_PlayerHologram_C.GetHologramPlayerID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMoveRootMotion(float DeltaSeconds); // Function BP_PlayerHologram.BP_PlayerHologram_C.OnMoveRootMotion // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBeforeFirstPlayAnimation(bool bIsCombinationVision); // Function BP_PlayerHologram.BP_PlayerHologram_C.OnBeforeFirstPlayAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CombinationVisionCh0900_BulletFire(struct UMeshComponent* InMesh, bool bInCopy); // Function BP_PlayerHologram.BP_PlayerHologram_C.CombinationVisionCh0900_BulletFire // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NotifyCombinationVisionCh0900(int32_t Param); // Function BP_PlayerHologram.BP_PlayerHologram_C.NotifyCombinationVisionCh0900 // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndAttackBullet(enum class EPlayerID playerId); // Function BP_PlayerHologram.BP_PlayerHologram_C.EndAttackBullet // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NotifyCombinationVisionEndCh0900(); // Function BP_PlayerHologram.BP_PlayerHologram_C.NotifyCombinationVisionEndCh0900 // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NotifyCombinationVisionBeginCH0900(); // Function BP_PlayerHologram.BP_PlayerHologram_C.NotifyCombinationVisionBeginCH0900 // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CombinationCh0700CalcTargetPitch(float TargetPitch, bool bExistsTarget); // Function BP_PlayerHologram.BP_PlayerHologram_C.CombinationCh0700CalcTargetPitch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CombinationBulletFireCh0700(); // Function BP_PlayerHologram.BP_PlayerHologram_C.CombinationBulletFireCh0700 // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NotifyCombinationAttackCh0700(int32_t Param); // Function BP_PlayerHologram.BP_PlayerHologram_C.NotifyCombinationAttackCh0700 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CombinationCh0500ApplyRotateTragetPitchOffset(); // Function BP_PlayerHologram.BP_PlayerHologram_C.CombinationCh0500ApplyRotateTragetPitchOffset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CombinationCh0500CalcTargetPitch(float TargetPitch, bool bExistsTarget); // Function BP_PlayerHologram.BP_PlayerHologram_C.CombinationCh0500CalcTargetPitch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CombinationCh0500RotatePitchUpdate(); // Function BP_PlayerHologram.BP_PlayerHologram_C.CombinationCh0500RotatePitchUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CombinationCh0500RotatePitchEnd(); // Function BP_PlayerHologram.BP_PlayerHologram_C.CombinationCh0500RotatePitchEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CombinationCh0500RotatePitchStart(); // Function BP_PlayerHologram.BP_PlayerHologram_C.CombinationCh0500RotatePitchStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NotifyCombinationAttackCh0200(); // Function BP_PlayerHologram.BP_PlayerHologram_C.NotifyCombinationAttackCh0200 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CombinationBulletFireCh0500(); // Function BP_PlayerHologram.BP_PlayerHologram_C.CombinationBulletFireCh0500 // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CombinationCh0500OnCompleteHologramOff(); // Function BP_PlayerHologram.BP_PlayerHologram_C.CombinationCh0500OnCompleteHologramOff // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CombinationCh0500OnBeforeFirstPlayAnimation(); // Function BP_PlayerHologram.BP_PlayerHologram_C.CombinationCh0500OnBeforeFirstPlayAnimation // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NotifyCombinationAttackCh0500(int32_t InParam); // Function BP_PlayerHologram.BP_PlayerHologram_C.NotifyCombinationAttackCh0500 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWeaponScale(struct FVector InScale); // Function BP_PlayerHologram.BP_PlayerHologram_C.SetWeaponScale // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateWeaponScale(float DeltaSeconds); // Function BP_PlayerHologram.BP_PlayerHologram_C.UpdateWeaponScale // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetWeaponScale(float InTime); // Function BP_PlayerHologram.BP_PlayerHologram_C.ResetWeaponScale // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeWeaponScale(struct FVector InScale, float InTime); // Function BP_PlayerHologram.BP_PlayerHologram_C.ChangeWeaponScale // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NotifyHologramAttackCh0600(int32_t Param); // Function BP_PlayerHologram.BP_PlayerHologram_C.NotifyHologramAttackCh0600 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetHologramSASMaterial(); // Function BP_PlayerHologram.BP_PlayerHologram_C.ResetHologramSASMaterial // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetHologramSASMaterialMeshes(enum class E_SASKindNative SasKind, struct TArray<struct USkeletalMeshComponent*> CharacterMeshes, struct TArray<struct USkeletalMeshComponent*> WeaponMeshes, struct TArray<struct UMeshComponent*> AttachmentMeshes); // Function BP_PlayerHologram.BP_PlayerHologram_C.GetHologramSASMaterialMeshes // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartHologramSASMaterial(struct UCurveLinearColor* Curve); // Function BP_PlayerHologram.BP_PlayerHologram_C.StartHologramSASMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TickHologramSASMaterial(float DeltaSeconds); // Function BP_PlayerHologram.BP_PlayerHologram_C.TickHologramSASMaterial // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NotifyHologramAttackCh1000(); // Function BP_PlayerHologram.BP_PlayerHologram_C.NotifyHologramAttackCh1000 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddScar(struct FName SocketName, float RotateAngle); // Function BP_PlayerHologram.BP_PlayerHologram_C.AddScar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugUpdate(); // Function BP_PlayerHologram.BP_PlayerHologram_C.DebugUpdate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NotifyHologramAttackCh0700(); // Function BP_PlayerHologram.BP_PlayerHologram_C.NotifyHologramAttackCh0700 // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHologramMaterialMeshInternal(struct UMeshComponent* MeshComp, float NoiseRate, float VisibleRate, float EmissiveRate); // Function BP_PlayerHologram.BP_PlayerHologram_C.SetHologramMaterialMeshInternal // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NotifyHologramAttackCh0100(); // Function BP_PlayerHologram.BP_PlayerHologram_C.NotifyHologramAttackCh0100 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurveColorStart(struct UCurveVector* Curve); // Function BP_PlayerHologram.BP_PlayerHologram_C.GetCurveColorStart // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void InitializeHologramMaterialMesh(struct USkeletalMeshComponent* SkelMeshComp, bool Weapon); // Function BP_PlayerHologram.BP_PlayerHologram_C.InitializeHologramMaterialMesh // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeHologramMaterial(enum class EPlayerID playerId); // Function BP_PlayerHologram.BP_PlayerHologram_C.InitializeHologramMaterial // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnHitThrowWeapon(struct FVector HitLocation); // Function BP_PlayerHologram.BP_PlayerHologram_C.OnHitThrowWeapon // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHologramVisibility(bool bVisibility); // Function BP_PlayerHologram.BP_PlayerHologram_C.SetHologramVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NotifyEndCh0500(); // Function BP_PlayerHologram.BP_PlayerHologram_C.NotifyEndCh0500 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NotifyBeginCh0500(int32_t Param); // Function BP_PlayerHologram.BP_PlayerHologram_C.NotifyBeginCh0500 // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSocketLocation(struct FName SocketName, struct FVector Location); // Function BP_PlayerHologram.BP_PlayerHologram_C.GetSocketLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAimRotator(struct FRotator Rotate); // Function BP_PlayerHologram.BP_PlayerHologram_C.SetAimRotator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NotifyEndCh0900(int32_t Param); // Function BP_PlayerHologram.BP_PlayerHologram_C.NotifyEndCh0900 // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NotifyBeginCh0900(int32_t Param); // Function BP_PlayerHologram.BP_PlayerHologram_C.NotifyBeginCh0900 // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeCopy(); // Function BP_PlayerHologram.BP_PlayerHologram_C.InitializeCopy // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCopyMesh(struct TArray<struct USkeletalMeshComponent*> CopyMeshList); // Function BP_PlayerHologram.BP_PlayerHologram_C.GetCopyMesh // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CopyOff(int32_t Index); // Function BP_PlayerHologram.BP_PlayerHologram_C.CopyOff // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CopyOn(int32_t Index); // Function BP_PlayerHologram.BP_PlayerHologram_C.CopyOn // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NotifyHologramAttackCh0800(); // Function BP_PlayerHologram.BP_PlayerHologram_C.NotifyHologramAttackCh0800 // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsUseHologram(bool bUse); // Function BP_PlayerHologram.BP_PlayerHologram_C.IsUseHologram // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateHologram(float DeltaSeconds); // Function BP_PlayerHologram.BP_PlayerHologram_C.UpdateHologram // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurveEnd(struct UCurveVector* Curve); // Function BP_PlayerHologram.BP_PlayerHologram_C.GetCurveEnd // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetCurveLoop(struct UCurveVector* Curve); // Function BP_PlayerHologram.BP_PlayerHologram_C.GetCurveLoop // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetCurveStart(struct UCurveVector* Curve); // Function BP_PlayerHologram.BP_PlayerHologram_C.GetCurveStart // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void PlayAnimationCommon(enum class EPlayerID InPlayerID, enum class EHologramKind HologramKind); // Function BP_PlayerHologram.BP_PlayerHologram_C.PlayAnimationCommon // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayAnimationSequence(enum class EPlayerID InPlayerID, enum class EPlayerHologramAnimKind InAnimKind); // Function BP_PlayerHologram.BP_PlayerHologram_C.PlayAnimationSequence // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttachPlayerMaterial(float VisibleRate); // Function BP_PlayerHologram.BP_PlayerHologram_C.SetAttachPlayerMaterial // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHologramMaterial(float NoiseRate, float VisibleRate, float EmissiveRate); // Function BP_PlayerHologram.BP_PlayerHologram_C.SetHologramMaterial // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CompleteHologramOff(); // Function BP_PlayerHologram.BP_PlayerHologram_C.CompleteHologramOff // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TickHologramOff(float DeltaSeconds); // Function BP_PlayerHologram.BP_PlayerHologram_C.TickHologramOff // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TickHologramOn(float DeltaSeconds); // Function BP_PlayerHologram.BP_PlayerHologram_C.TickHologramOn // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMeshVisibility(enum class EPlayerID playerId, bool bVisibility); // Function BP_PlayerHologram.BP_PlayerHologram_C.SetMeshVisibility // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetWeapon(enum class EPlayerID playerId, struct TArray<struct ABP_WeaponBase_C*> Weapon); // Function BP_PlayerHologram.BP_PlayerHologram_C.GetWeapon // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void Initialize(); // Function BP_PlayerHologram.BP_PlayerHologram_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetWeaponClass(enum class EPlayerID playerId, struct ABP_WeaponBase_C* WeaponClass); // Function BP_PlayerHologram.BP_PlayerHologram_C.GetWeaponClass // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void DestroyWeapon(enum class EPlayerID playerId); // Function BP_PlayerHologram.BP_PlayerHologram_C.DestroyWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateWeapon(enum class EPlayerID playerId, int32_t WeaponId); // Function BP_PlayerHologram.BP_PlayerHologram_C.CreateWeapon // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPlayAnimation(bool bPlay); // Function BP_PlayerHologram.BP_PlayerHologram_C.IsPlayAnimation // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void getMesh(enum class EPlayerID playerId, struct USkeletalMeshComponent* Mesh); // Function BP_PlayerHologram.BP_PlayerHologram_C.getMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopAnimation(); // Function BP_PlayerHologram.BP_PlayerHologram_C.StopAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayAnimation(enum class EPlayerID InPlayerID, struct UAnimMontage* AnimMontage, struct UAnimMontage* WeaponMontage, bool bHologramRootMotion, int32_t MotionIndex, enum class EHologramKind HologramKind); // Function BP_PlayerHologram.BP_PlayerHologram_C.PlayAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void HologramOff(bool bForceOff); // Function BP_PlayerHologram.BP_PlayerHologram_C.HologramOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void HologramOn(); // Function BP_PlayerHologram.BP_PlayerHologram_C.HologramOn // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetGhostActive(bool Active); // Function BP_PlayerHologram.BP_PlayerHologram_C.SetGhostActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBonusGhost(float Time); // Function BP_PlayerHologram.BP_PlayerHologram_C.OnBonusGhost // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBonusGhostFromDT(enum class EBonusGhostType Type); // Function BP_PlayerHologram.BP_PlayerHologram_C.OnBonusGhostFromDT // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBonusGhostOneShot(float AliveTime); // Function BP_PlayerHologram.BP_PlayerHologram_C.OnBonusGhostOneShot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_PlayerHologram.BP_PlayerHologram_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_PlayerHologram.BP_PlayerHologram_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void BindOnMontageBlendingOut(); // Function BP_PlayerHologram.BP_PlayerHologram_C.BindOnMontageBlendingOut // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMontageBlendingOutCh0100(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_PlayerHologram.BP_PlayerHologram_C.OnMontageBlendingOutCh0100 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMontageBlendingOutCh0200(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_PlayerHologram.BP_PlayerHologram_C.OnMontageBlendingOutCh0200 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMontageBlendingOutCh0300(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_PlayerHologram.BP_PlayerHologram_C.OnMontageBlendingOutCh0300 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMontageBlendingOutCh0400(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_PlayerHologram.BP_PlayerHologram_C.OnMontageBlendingOutCh0400 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMontageBlendingOutCh0500(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_PlayerHologram.BP_PlayerHologram_C.OnMontageBlendingOutCh0500 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMontageBlendingOutCh0600(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_PlayerHologram.BP_PlayerHologram_C.OnMontageBlendingOutCh0600 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMontageBlendingOutCh0700(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_PlayerHologram.BP_PlayerHologram_C.OnMontageBlendingOutCh0700 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMontageBlendingOutCh0800(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_PlayerHologram.BP_PlayerHologram_C.OnMontageBlendingOutCh0800 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMontageBlendingOutCh0900(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_PlayerHologram.BP_PlayerHologram_C.OnMontageBlendingOutCh0900 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMontageBlendingOutCh1000(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_PlayerHologram.BP_PlayerHologram_C.OnMontageBlendingOutCh1000 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnGhostOneShot(float AliveTime); // Function BP_PlayerHologram.BP_PlayerHologram_C.OnGhostOneShot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DelayMeshTickDisable(struct USkeletalMeshComponent* Mesh); // Function BP_PlayerHologram.BP_PlayerHologram_C.DelayMeshTickDisable // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindMoveRootMotion(); // Function BP_PlayerHologram.BP_PlayerHologram_C.BindMoveRootMotion // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindMoveRootMotion(); // Function BP_PlayerHologram.BP_PlayerHologram_C.UnbindMoveRootMotion // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMainMenuClose(); // Function BP_PlayerHologram.BP_PlayerHologram_C.OnMainMenuClose // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PlayerHologram(int32_t EntryPoint); // Function BP_PlayerHologram.BP_PlayerHologram_C.ExecuteUbergraph_BP_PlayerHologram // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
	void DispatchAttackNotify__DelegateSignature(int32_t Param); // Function BP_PlayerHologram.BP_PlayerHologram_C.DispatchAttackNotify__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DispatcherHitThrowWeapon__DelegateSignature(struct FVector HitLocation); // Function BP_PlayerHologram.BP_PlayerHologram_C.DispatcherHitThrowWeapon__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DispatcherHologramOff__DelegateSignature(); // Function BP_PlayerHologram.BP_PlayerHologram_C.DispatcherHologramOff__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DispatcherOnMontageBlendingOutCh1000__DelegateSignature(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_PlayerHologram.BP_PlayerHologram_C.DispatcherOnMontageBlendingOutCh1000__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DispatcherOnMontageBlendingOutCh0900__DelegateSignature(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_PlayerHologram.BP_PlayerHologram_C.DispatcherOnMontageBlendingOutCh0900__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DispatcherOnMontageBlendingOutCh0800__DelegateSignature(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_PlayerHologram.BP_PlayerHologram_C.DispatcherOnMontageBlendingOutCh0800__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DispatcherOnMontageBlendingOutCh0700__DelegateSignature(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_PlayerHologram.BP_PlayerHologram_C.DispatcherOnMontageBlendingOutCh0700__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DispatcherOnMontageBlendingOutCh0600__DelegateSignature(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_PlayerHologram.BP_PlayerHologram_C.DispatcherOnMontageBlendingOutCh0600__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DispatcherOnMontageBlendingOutCh0500__DelegateSignature(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_PlayerHologram.BP_PlayerHologram_C.DispatcherOnMontageBlendingOutCh0500__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DispatcherOnMontageBlendingOutCh0400__DelegateSignature(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_PlayerHologram.BP_PlayerHologram_C.DispatcherOnMontageBlendingOutCh0400__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DispatcherOnMontageBlendingOutCh0300__DelegateSignature(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_PlayerHologram.BP_PlayerHologram_C.DispatcherOnMontageBlendingOutCh0300__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DispatcherOnMontageBlendingOutCh0200__DelegateSignature(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_PlayerHologram.BP_PlayerHologram_C.DispatcherOnMontageBlendingOutCh0200__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DispatcherOnMontageBlendingOutCh0100__DelegateSignature(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_PlayerHologram.BP_PlayerHologram_C.DispatcherOnMontageBlendingOutCh0100__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

