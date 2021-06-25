// BlueprintGeneratedClass AttackComponentBaseBP.AttackComponentBaseBP_C
// Size: 0x198 (Inherited: 0xf0)
struct UAttackComponentBaseBP_C : UAttackComponentBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf0(0x08)
	struct ARSBattlePlayer_C* OwnerPlayer; // 0xf8(0x08)
	struct TArray<struct FName> swordMatParamNames; // 0x100(0x10)
	bool bBranchFlag; // 0x110(0x01)
	bool bIgnoreCheckStartAttack; // 0x111(0x01)
	char pad_112[0x6]; // 0x112(0x06)
	struct TMap<struct FName, bool> TickEnableList; // 0x118(0x50)
	enum class RSAttackInputKind branchKind; // 0x168(0x01)
	bool bUpperAttack; // 0x169(0x01)
	bool bWithCopy; // 0x16a(0x01)
	bool bCopyOff; // 0x16b(0x01)
	int32_t branchComboCount; // 0x16c(0x04)
	bool bBindMontageBlendingOut; // 0x170(0x01)
	bool bFallMotion; // 0x171(0x01)
	bool bBindEventPlayerTick; // 0x172(0x01)
	bool bIgnoreDriveSpeed; // 0x173(0x01)
	enum class ECharacterHitPriority StoreCharacterHitPriority; // 0x174(0x01)
	bool bStoreCharacterHitPriority; // 0x175(0x01)
	bool bComboCheck; // 0x176(0x01)
	bool bNotStopWeaponAnim; // 0x177(0x01)
	bool bPlayWeaponAnim; // 0x178(0x01)
	bool bInvalidCancelNotComboEnd; // 0x179(0x01)
	enum class EWeaponAttackAnimStopType PlayWeaponAnimStopType; // 0x17a(0x01)
	bool bUseCustomFootIKUpperHeight; // 0x17b(0x01)
	bool bUseCustomFootIKUnderHeight; // 0x17c(0x01)
	bool bUseCustomFootIKHeightDiff; // 0x17d(0x01)
	char pad_17E[0x2]; // 0x17e(0x02)
	float CustomFootIKUpperHeight; // 0x180(0x04)
	float CustomFootIKUnderHeight; // 0x184(0x04)
	float CustomFootIKHeightDiff; // 0x188(0x04)
	float CustomFootIKUpperHeightSlopeDown; // 0x18c(0x04)
	float CustomFootIKUnderHeightSlopeDown; // 0x190(0x04)
	float CustomFootIKHeightDiffSlopeDown; // 0x194(0x04)

	void ResetFootIKCustomParam(); // Function AttackComponentBaseBP.AttackComponentBaseBP_C.ResetFootIKCustomParam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsComboCheck(bool bCombo); // Function AttackComponentBaseBP.AttackComponentBaseBP_C.IsComboCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeCharacterCollisionPriority(enum class ECharacterHitPriority Priority); // Function AttackComponentBaseBP.AttackComponentBaseBP_C.ChangeCharacterCollisionPriority // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoPlayerTick(float DeltaSeconds, bool bDummy); // Function AttackComponentBaseBP.AttackComponentBaseBP_C.DoPlayerTick // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoEndAttack(bool bDummy); // Function AttackComponentBaseBP.AttackComponentBaseBP_C.DoEndAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayAttackMontage(struct UAnimMontage* AnimMontage, struct UAnimMontage* UpperAnimMontage, struct UAnimMontage* WeaponAnimMontage, float PlayRate, struct FName SectionName, enum class EWeaponAttackAnimStopType WeaponAnimStopType); // Function AttackComponentBaseBP.AttackComponentBaseBP_C.PlayAttackMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayHologramAnimation(enum class EPlayerID playerId, struct UAnimMontage* Montage, struct UAnimMontage* WeaponMontage, bool bHologramRootMotion, int32_t MotionIndex, enum class EHologramKind HologramKind); // Function AttackComponentBaseBP.AttackComponentBaseBP_C.PlayHologramAnimation // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t GetBranchComboCount(); // Function AttackComponentBaseBP.AttackComponentBaseBP_C.GetBranchComboCount // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	enum class RSAttackInputKind GetBranchComboAttackInputKind(); // Function AttackComponentBaseBP.AttackComponentBaseBP_C.GetBranchComboAttackInputKind // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsNameCurrentSection(struct FName SearchName, bool IsMatch); // Function AttackComponentBaseBP.AttackComponentBaseBP_C.IsNameCurrentSection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CopyStopMontage(); // Function AttackComponentBaseBP.AttackComponentBaseBP_C.CopyStopMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CopyPlayMontage(struct UAnimMontage* Montage); // Function AttackComponentBaseBP.AttackComponentBaseBP_C.CopyPlayMontage // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PreSetAttackState(bool bDummy); // Function AttackComponentBaseBP.AttackComponentBaseBP_C.PreSetAttackState // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EnableTick(struct FName ClaimantName, bool bEnable); // Function AttackComponentBaseBP.AttackComponentBaseBP_C.EnableTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentMontage(struct UAnimMontage* Montage); // Function AttackComponentBaseBP.AttackComponentBaseBP_C.GetCurrentMontage // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void EndAttack(bool dummy); // Function AttackComponentBaseBP.AttackComponentBaseBP_C.EndAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopEffect(struct FFAttackEffectData Data); // Function AttackComponentBaseBP.AttackComponentBaseBP_C.StopEffect // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnEffect(struct FFAttackEffectData Data); // Function AttackComponentBaseBP.AttackComponentBaseBP_C.SpawnEffect // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsIgnoreCheckStartAttack(bool bIgnoreCheckStartAttack); // Function AttackComponentBaseBP.AttackComponentBaseBP_C.IsIgnoreCheckStartAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetIgnoreCheckStartAttack(bool bIgnore); // Function AttackComponentBaseBP.AttackComponentBaseBP_C.SetIgnoreCheckStartAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsBranchMode(bool bBranchFlag); // Function AttackComponentBaseBP.AttackComponentBaseBP_C.IsBranchMode // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetBranchMode(bool bBranch); // Function AttackComponentBaseBP.AttackComponentBaseBP_C.SetBranchMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableAttack(bool bEnable); // Function AttackComponentBaseBP.AttackComponentBaseBP_C.IsEnableAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsEnableAcceptInputAttack(bool bEnable); // Function AttackComponentBaseBP.AttackComponentBaseBP_C.IsEnableAcceptInputAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void isReserve(bool bReserve); // Function AttackComponentBaseBP.AttackComponentBaseBP_C.isReserve // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetAttackState(int32_t Param, struct UAnimMontage* Montage, struct UAnimMontage* WeaponMontage, bool bAddComboCount, enum class EWeaponAttackAnimStopType WeaponAnimStopType); // Function AttackComponentBaseBP.AttackComponentBaseBP_C.SetAttackState // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartSwordFade(bool bin); // Function AttackComponentBaseBP.AttackComponentBaseBP_C.StartSwordFade // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindOnMontageBlendingOut(); // Function AttackComponentBaseBP.AttackComponentBaseBP_C.BindOnMontageBlendingOut // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindOnMontageBlendingOut(); // Function AttackComponentBaseBP.AttackComponentBaseBP_C.UnbindOnMontageBlendingOut // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function AttackComponentBaseBP.AttackComponentBaseBP_C.EventMontageBlendingOut // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function AttackComponentBaseBP.AttackComponentBaseBP_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void BindOnPlayerTick(); // Function AttackComponentBaseBP.AttackComponentBaseBP_C.BindOnPlayerTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindEventPlayerTick(); // Function AttackComponentBaseBP.AttackComponentBaseBP_C.UnbindEventPlayerTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPlayerTickEvent(float DeltaSeconds); // Function AttackComponentBaseBP.AttackComponentBaseBP_C.OnPlayerTickEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_AttackComponentBaseBP(int32_t EntryPoint); // Function AttackComponentBaseBP.AttackComponentBaseBP_C.ExecuteUbergraph_AttackComponentBaseBP // (Final|UbergraphFunction) // @ game+0x1685580
};

