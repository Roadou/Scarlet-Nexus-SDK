// BlueprintGeneratedClass BP_WeaponManageComponent.BP_WeaponManageComponent_C
// Size: 0x140 (Inherited: 0xc0)
struct UBP_WeaponManageComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct TArray<struct ABP_WeaponBase_C*> WeaponList; // 0xc8(0x10)
	struct ARSBattlePlayer_C* OwnerPlayer; // 0xd8(0x08)
	struct UMeshComponent* AttachMesh; // 0xe0(0x08)
	struct TArray<struct ABP_WeaponBase_C*> ThrowWeaponList; // 0xe8(0x10)
	bool bCopy; // 0xf8(0x01)
	bool bSeparateVisibility; // 0xf9(0x01)
	bool bChangeWeaponScale; // 0xfa(0x01)
	bool bResetWeaponScale; // 0xfb(0x01)
	struct FVector OriginalWeaponScale; // 0xfc(0x0c)
	struct FVector SrcWeaponScale; // 0x108(0x0c)
	struct FVector DestWeaponScale; // 0x114(0x0c)
	struct FGameTimer ScaleTimer; // 0x120(0x0c)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct TArray<int32_t> MaterialSwitchLayerID; // 0x130(0x10)

	void CompleteRestoreSwitchMaterial(); // Function BP_WeaponManageComponent.BP_WeaponManageComponent_C.CompleteRestoreSwitchMaterial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RestoreSwtichMaterial(struct FMaterialSwitchCache MaterialCache, bool ClearCache); // Function BP_WeaponManageComponent.BP_WeaponManageComponent_C.RestoreSwtichMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetupSwitchMaterial(struct FMaterialSwitchCache MaterialCache, struct TArray<struct FName> ExcludeSlots, struct UMaterialInterface* NewMaterial); // Function BP_WeaponManageComponent.BP_WeaponManageComponent_C.ResetupSwitchMaterial // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMaterialVectorArrayParameter(struct TArray<struct FName> ParamName, struct TArray<struct FLinearColor> Color); // Function BP_WeaponManageComponent.BP_WeaponManageComponent_C.SetMaterialVectorArrayParameter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SwitchMaterial(struct FMaterialSwitchCache MaterialCache, struct TArray<struct FName> ExcludeSlots, struct UMaterialInterface* NewMaterial); // Function BP_WeaponManageComponent.BP_WeaponManageComponent_C.SwitchMaterial // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateWeaponScale(); // Function BP_WeaponManageComponent.BP_WeaponManageComponent_C.UpdateWeaponScale // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetWeaponScale(float Time); // Function BP_WeaponManageComponent.BP_WeaponManageComponent_C.ResetWeaponScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeWeaponScale(struct FVector Scale, float Time); // Function BP_WeaponManageComponent.BP_WeaponManageComponent_C.ChangeWeaponScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSeparateVisibility(bool bSeparate); // Function BP_WeaponManageComponent.BP_WeaponManageComponent_C.SetSeparateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWeaponVisibilityByIndex(int32_t Index, bool bVisibility); // Function BP_WeaponManageComponent.BP_WeaponManageComponent_C.SetWeaponVisibilityByIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetThrowWeaponList(struct TArray<struct ABP_WeaponBase_C*> ThrowWeaponList); // Function BP_WeaponManageComponent.BP_WeaponManageComponent_C.GetThrowWeaponList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void DestroyWeapon(); // Function BP_WeaponManageComponent.BP_WeaponManageComponent_C.DestroyWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateThrowWeapon(struct ABP_WeaponBase_C* WeaponClass); // Function BP_WeaponManageComponent.BP_WeaponManageComponent_C.CreateThrowWeapon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetMaterialColorPsychicEmission(struct FName ClaimantName); // Function BP_WeaponManageComponent.BP_WeaponManageComponent_C.ResetMaterialColorPsychicEmission // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMaterialColorPsychicEmission(float R, float G, float B, struct FName ClaimantName); // Function BP_WeaponManageComponent.BP_WeaponManageComponent_C.SetMaterialColorPsychicEmission // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetMaterialAlphaPsychicEmission(struct FName ClaimantName); // Function BP_WeaponManageComponent.BP_WeaponManageComponent_C.ResetMaterialAlphaPsychicEmission // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMaterialAlphaPsychicEmission(float Alpha, struct FName ClaimantName); // Function BP_WeaponManageComponent.BP_WeaponManageComponent_C.SetMaterialAlphaPsychicEmission // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBattleEmission(bool forceIn, bool FlagIn, float LerpTimeIn); // Function BP_WeaponManageComponent.BP_WeaponManageComponent_C.SetBattleEmission // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTransAnim(bool bBattle); // Function BP_WeaponManageComponent.BP_WeaponManageComponent_C.SetTransAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLoopAnim(bool bBattle); // Function BP_WeaponManageComponent.BP_WeaponManageComponent_C.SetLoopAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(struct ARSBattlePlayer_C* OwnerPlayer, struct UMeshComponent* AttachMesh, bool bCopy); // Function BP_WeaponManageComponent.BP_WeaponManageComponent_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttachWeapon(bool bBattle, bool ForceBattle); // Function BP_WeaponManageComponent.BP_WeaponManageComponent_C.AttachWeapon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWeaponHidden(bool bHidden); // Function BP_WeaponManageComponent.BP_WeaponManageComponent_C.SetWeaponHidden // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetShadowEnable(bool bEnable); // Function BP_WeaponManageComponent.BP_WeaponManageComponent_C.SetShadowEnable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMaterialVectorParameter(struct FName ParamName, struct FLinearColor Color); // Function BP_WeaponManageComponent.BP_WeaponManageComponent_C.SetMaterialVectorParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMaterialScalarArrayParameter(struct TArray<struct FName> ParamName, struct TArray<float> Value); // Function BP_WeaponManageComponent.BP_WeaponManageComponent_C.SetMaterialScalarArrayParameter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMaterialScalarParameter(struct FName ParamName, float Value); // Function BP_WeaponManageComponent.BP_WeaponManageComponent_C.SetMaterialScalarParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWeaponVisibility(bool bVisibility, bool bBattle, bool bWithSubWeapon); // Function BP_WeaponManageComponent.BP_WeaponManageComponent_C.SetWeaponVisibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBattleEffect(bool bBattle); // Function BP_WeaponManageComponent.BP_WeaponManageComponent_C.SetBattleEffect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetWeaponList(struct TArray<struct ABP_WeaponBase_C*> WeaponList); // Function BP_WeaponManageComponent.BP_WeaponManageComponent_C.GetWeaponList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void CreateWeapon(struct ABP_WeaponBase_C* WeaponClass, struct FName SocketName, bool bMainWeapon); // Function BP_WeaponManageComponent.BP_WeaponManageComponent_C.CreateWeapon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_WeaponManageComponent.BP_WeaponManageComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_WeaponManageComponent.BP_WeaponManageComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_WeaponManageComponent(int32_t EntryPoint); // Function BP_WeaponManageComponent.BP_WeaponManageComponent_C.ExecuteUbergraph_BP_WeaponManageComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

