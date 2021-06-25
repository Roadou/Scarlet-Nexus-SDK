// BlueprintGeneratedClass BP_EventPlayerMaterialBase.BP_EventPlayerMaterialBase_C
// Size: 0x289 (Inherited: 0x230)
struct ABP_EventPlayerMaterialBase_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	struct UMeshComponent* TargetMesh; // 0x240(0x08)
	bool AutoOutlineSetting; // 0x248(0x01)
	bool OutlineSettingENPC; // 0x249(0x01)
	char pad_24A[0x2]; // 0x24a(0x02)
	int32_t OutlineSettingPlayer; // 0x24c(0x04)
	bool RestoreOverrideParameter; // 0x250(0x01)
	bool IsInitialized; // 0x251(0x01)
	bool SetupEventOptimizeCustomStencil; // 0x252(0x01)
	char pad_253[0x5]; // 0x253(0x05)
	struct TArray<bool> AutoOutlineRestore; // 0x258(0x10)
	struct TArray<int32_t> AutoOutlineRestoreStencil; // 0x268(0x10)
	struct TArray<struct UMeshComponent*> AutoOutlineRestoreMesh; // 0x278(0x10)
	bool RestoreCustomStencil; // 0x288(0x01)

	void GetMeshCustomStencil(struct USkeletalMeshComponent* SkelMeshComp, bool HasCustomStencil, int32_t CustomStencil); // Function BP_EventPlayerMaterialBase.BP_EventPlayerMaterialBase_C.GetMeshCustomStencil // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Finalize(); // Function BP_EventPlayerMaterialBase.BP_EventPlayerMaterialBase_C.Finalize // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EnableEventOptimizeCustomStencil(); // Function BP_EventPlayerMaterialBase.BP_EventPlayerMaterialBase_C.EnableEventOptimizeCustomStencil // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProtectedSetupEventOptimizeCustomStencil(bool Enable); // Function BP_EventPlayerMaterialBase.BP_EventPlayerMaterialBase_C.ProtectedSetupEventOptimizeCustomStencil // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProtectedSetupOutlineMesh(struct UMeshComponent* MeshComp); // Function BP_EventPlayerMaterialBase.BP_EventPlayerMaterialBase_C.ProtectedSetupOutlineMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProtectedInitialize(struct USkeletalMeshComponent* SkeletalMesh, struct UBP_PlayerMaterialAccessorComponent_C* AccessorComponent); // Function BP_EventPlayerMaterialBase.BP_EventPlayerMaterialBase_C.ProtectedInitialize // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupOutlineSetting(struct USkeletalMeshComponent* SkeletalMesh, struct UBP_PlayerMaterialAccessorComponent_C* AccessorComponent); // Function BP_EventPlayerMaterialBase.BP_EventPlayerMaterialBase_C.PrivateSetupOutlineSetting // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventPlayerMaterialBase.BP_EventPlayerMaterialBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EventPlayerMaterialBase.BP_EventPlayerMaterialBase_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventPlayerMaterialBase(int32_t EntryPoint); // Function BP_EventPlayerMaterialBase.BP_EventPlayerMaterialBase_C.ExecuteUbergraph_BP_EventPlayerMaterialBase // (Final|UbergraphFunction) // @ game+0x1685580
};

