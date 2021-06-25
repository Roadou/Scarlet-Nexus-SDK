// BlueprintGeneratedClass BP_ResourceManager.BP_ResourceManager_C
// Size: 0x470 (Inherited: 0x400)
struct ABP_ResourceManager_C : AResourceManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x408(0x08)
	struct TMap<struct TSoftObjectPtr<UObject>, struct UObject*> AssetMap; // 0x410(0x50)
	struct TArray<struct FName> LoadedAssetList; // 0x460(0x10)

	void ProtectedGetMipPrestreamPlayerSoftMeshes_1(enum class EPlayerID playerId, struct TArray<struct TSoftObjectPtr<USkeletalMesh>> SkeletalMeshes, struct TArray<struct TSoftObjectPtr<UStaticMesh>> StaticMeshes, struct TArray<struct TSoftObjectPtr<UMaterialInstance>> Materials); // Function BP_ResourceManager.BP_ResourceManager_C.ProtectedGetMipPrestreamPlayerSoftMeshes_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProtectedGetMipPrestreamPlayerSoftMeshes(struct TArray<struct TSoftObjectPtr<USkeletalMesh>> SkeletalMeshes, struct TArray<struct TSoftObjectPtr<UObject>> Attachment1Meshes, struct TArray<struct TSoftObjectPtr<UMaterialInstance>> Attachment1Materials, struct TArray<struct TSoftObjectPtr<UObject>> Attachment2Meshes, struct TArray<struct TSoftObjectPtr<UMaterialInstance>> Attachment2Materials, struct TArray<struct TSoftObjectPtr<UObject>> Attachment3Meshes, struct TArray<struct TSoftObjectPtr<UMaterialInstance>> Attachment3Materials, enum class EPlayerID playerId); // Function BP_ResourceManager.BP_ResourceManager_C.ProtectedGetMipPrestreamPlayerSoftMeshes // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MeshSetting(struct USkeletalMeshComponent* InMeshComp, struct USkeletalMesh* InNewMesh); // Function BP_ResourceManager.BP_ResourceManager_C.MeshSetting // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadCostumeMesh(enum class EPlayerID InPlayerID, int32_t InCostumeItemID, struct USkeletalMeshComponent* InMeshComp); // Function BP_ResourceManager.BP_ResourceManager_C.LoadCostumeMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadWeaponMesh(int32_t InWeaponID, struct USkeletalMeshComponent* InMeshComp, struct TArray<struct USkeletalMeshComponent*> InExtraMeshComp); // Function BP_ResourceManager.BP_ResourceManager_C.LoadWeaponMesh // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProtectedGetMipPrestreamPlayerMeshes(struct TArray<struct USkeletalMesh*> SkeletalMeshes, struct TArray<struct UStaticMesh*> StaticMeshes, enum class EPlayerID playerId, bool bLoad); // Function BP_ResourceManager.BP_ResourceManager_C.ProtectedGetMipPrestreamPlayerMeshes // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RequestUnloadAssetList(struct FName AssetList, bool Error); // Function BP_ResourceManager.BP_ResourceManager_C.RequestUnloadAssetList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnloadAllAsset(); // Function BP_ResourceManager.BP_ResourceManager_C.UnloadAllAsset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RequestLoadAssetList(struct FName AssetList); // Function BP_ResourceManager.BP_ResourceManager_C.RequestLoadAssetList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsContainAssetInAssetList(struct TSoftObjectPtr<UObject> Asset, struct FName ExcludeAssetList, bool found); // Function BP_ResourceManager.BP_ResourceManager_C.IsContainAssetInAssetList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MakeLoadedAssetListAssets(struct FName ExcludeAssetList, struct TArray<struct TSoftObjectPtr<UObject>> Assets); // Function BP_ResourceManager.BP_ResourceManager_C.MakeLoadedAssetListAssets // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnregisterAssetList(struct FName AssetList, bool Error); // Function BP_ResourceManager.BP_ResourceManager_C.UnregisterAssetList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RegisterAssetList(struct FName AssetList); // Function BP_ResourceManager.BP_ResourceManager_C.RegisterAssetList // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnregisterLoadAsset(struct TSoftObjectPtr<UObject> AssetSoftRef); // Function BP_ResourceManager.BP_ResourceManager_C.UnregisterLoadAsset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RegisterLoadAsset(struct FName AssetList, struct TSoftObjectPtr<UObject> AssetSoftRef, struct UObject* AssetRef); // Function BP_ResourceManager.BP_ResourceManager_C.RegisterLoadAsset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_ResourceManager.BP_ResourceManager_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_ResourceManager(int32_t EntryPoint); // Function BP_ResourceManager.BP_ResourceManager_C.ExecuteUbergraph_BP_ResourceManager // (Final|UbergraphFunction) // @ game+0x1685580
};

