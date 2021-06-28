// BlueprintGeneratedClass BP_EventWeaponMaterial.BP_EventWeaponMaterial_C
// Size: 0x2d8 (Inherited: 0x289)
struct ABP_EventWeaponMaterial_C : ABP_EventPlayerMaterialBase_C {
	char pad_289[0x7]; // 0x289(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UBP_WeaponMaterialAccessorComponent_C* BP_WeaponMaterialAccessorComponent; // 0x298(0x08)
	struct AActor* SubAttachActor; // 0x2a0(0x08)
	struct AActor* SubAttachActor2; // 0x2a8(0x08)
	bool Initialized; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct TArray<struct ABP_WeaponBase_C*> AttachWeaponBase; // 0x2b8(0x10)
	struct TArray<struct UBP_WeaponMaterialAccessorComponent_C*> AppendWeaponMaterialAccessorComps; // 0x2c8(0x10)

	void GetCheckSimulate(struct USkeletalMeshComponent* SkelMeshComp, bool SimulateOK); // Function BP_EventWeaponMaterial.BP_EventWeaponMaterial_C.GetCheckSimulate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupFromMenuPlayer(struct ABP_MenuPlayerBase_C* MenuPlayer); // Function BP_EventWeaponMaterial.BP_EventWeaponMaterial_C.SetupFromMenuPlayer // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CopyCompParameters(); // Function BP_EventWeaponMaterial.BP_EventWeaponMaterial_C.CopyCompParameters // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupFromPlayer(struct ARSBattlePlayer_C* BattlePlayer); // Function BP_EventWeaponMaterial.BP_EventWeaponMaterial_C.SetupFromPlayer // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAttachMesh(struct ABP_WeaponBase_C* WeaponBase, struct USkeletalMeshComponent* SkelMeshComp); // Function BP_EventWeaponMaterial.BP_EventWeaponMaterial_C.GetAttachMesh // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAttachSkelMeshComp(struct AActor* Actor, struct ABP_WeaponBase_C* WeaponBase, struct USkeletalMeshComponent* SkelMeshComp); // Function BP_EventWeaponMaterial.BP_EventWeaponMaterial_C.GetAttachSkelMeshComp // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventWeaponMaterial.BP_EventWeaponMaterial_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EventWeaponMaterial.BP_EventWeaponMaterial_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ProtectedInitialize(struct USkeletalMeshComponent* SkeletalMesh, struct UBP_PlayerMaterialAccessorComponent_C* AccessorComponent); // Function BP_EventWeaponMaterial.BP_EventWeaponMaterial_C.ProtectedInitialize // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EventWeaponMaterial.BP_EventWeaponMaterial_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventWeaponMaterial(int32_t EntryPoint); // Function BP_EventWeaponMaterial.BP_EventWeaponMaterial_C.ExecuteUbergraph_BP_EventWeaponMaterial // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

