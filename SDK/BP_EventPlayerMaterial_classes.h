// BlueprintGeneratedClass BP_EventPlayerMaterial.BP_EventPlayerMaterial_C
// Size: 0x2fd (Inherited: 0x289)
struct ABP_EventPlayerMaterial_C : ABP_EventPlayerMaterialBase_C {
	char pad_289[0x7]; // 0x289(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UBP_PlayerMaterialAccessorComponent_C* BP_PlayerMaterialAccessorComponent; // 0x298(0x08)
	struct UTexture2D* ShadowOffsetMap; // 0x2a0(0x08)
	bool AssignBody; // 0x2a8(0x01)
	bool AssignSkin; // 0x2a9(0x01)
	bool AssignMask; // 0x2aa(0x01)
	bool AssignHair; // 0x2ab(0x01)
	bool AssignHood; // 0x2ac(0x01)
	bool AssignOutline; // 0x2ad(0x01)
	bool AssignSheath; // 0x2ae(0x01)
	bool ForceRestoreSASParameter; // 0x2af(0x01)
	struct AActor* SubAttachActor; // 0x2b0(0x08)
	struct AActor* SubAttachActor2; // 0x2b8(0x08)
	bool SteahlMatRenderAfterDofON; // 0x2c0(0x01)
	bool SetupWeapon; // 0x2c1(0x01)
	char pad_2C2[0x6]; // 0x2c2(0x06)
	struct ABP_WeaponBase_C* WeaponBase; // 0x2c8(0x08)
	struct ARSBattlePlayer_C* BattlePlayer; // 0x2d0(0x08)
	bool RestoreWeaponHidden; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct AActor* SubAttachActor3; // 0x2e0(0x08)
	bool NeonWireDepthTickOff; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)
	struct UBPC_NeonWireDepth_C* RestoreNeonWireDepthComp; // 0x2f0(0x08)
	bool IsRestoreNeonWireDepthTick; // 0x2f8(0x01)
	bool FirstUpdateOnly; // 0x2f9(0x01)
	bool RestoreMaterialAllSkip; // 0x2fa(0x01)
	bool SetupAttachment; // 0x2fb(0x01)
	bool SetupPlayerForceOutlineVisibility; // 0x2fc(0x01)

	void ProtectedSetupRestoreType(bool IsBattlePlayer, bool IsMenuPlayer); // Function BP_EventPlayerMaterial.BP_EventPlayerMaterial_C.ProtectedSetupRestoreType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RestoreNeonWireDepthTick(); // Function BP_EventPlayerMaterial.BP_EventPlayerMaterial_C.RestoreNeonWireDepthTick // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupNeonWireDepthTick(struct UMeshComponent* MeshComp); // Function BP_EventPlayerMaterial.BP_EventPlayerMaterial_C.SetupNeonWireDepthTick // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAttachedMeshes(struct UMeshComponent* MeshComp, struct TArray<struct UMeshComponent*> Meshes); // Function BP_EventPlayerMaterial.BP_EventPlayerMaterial_C.GetAttachedMeshes // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMeshCustomStencil(struct USkeletalMeshComponent* SkelMeshComp, bool HasCustomStencil, int32_t CustomStencil); // Function BP_EventPlayerMaterial.BP_EventPlayerMaterial_C.GetMeshCustomStencil // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProtectedSetupEventOptimizeCustomStencil(bool Enable); // Function BP_EventPlayerMaterial.BP_EventPlayerMaterial_C.ProtectedSetupEventOptimizeCustomStencil // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUsedNormalFixed(); // Function BP_EventPlayerMaterial.BP_EventPlayerMaterial_C.SetUsedNormalFixed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FinalizeWeapon(); // Function BP_EventPlayerMaterial.BP_EventPlayerMaterial_C.FinalizeWeapon // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeWeapon(); // Function BP_EventPlayerMaterial.BP_EventPlayerMaterial_C.InitializeWeapon // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeSekeletalMesh(struct USkeletalMeshComponent* SkeletalMeshComponent); // Function BP_EventPlayerMaterial.BP_EventPlayerMaterial_C.InitializeSekeletalMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeMenuPlayer(struct ABP_MenuPlayerBase_C* MenuPlayer); // Function BP_EventPlayerMaterial.BP_EventPlayerMaterial_C.InitializeMenuPlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IniitalizePlayer(struct ARSBattlePlayer_C* Player); // Function BP_EventPlayerMaterial.BP_EventPlayerMaterial_C.IniitalizePlayer // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(struct USkeletalMeshComponent* SkeletalMesh); // Function BP_EventPlayerMaterial.BP_EventPlayerMaterial_C.Initialize // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EventPlayerMaterial.BP_EventPlayerMaterial_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventPlayerMaterial.BP_EventPlayerMaterial_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventPlayerMaterial(int32_t EntryPoint); // Function BP_EventPlayerMaterial.BP_EventPlayerMaterial_C.ExecuteUbergraph_BP_EventPlayerMaterial // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

