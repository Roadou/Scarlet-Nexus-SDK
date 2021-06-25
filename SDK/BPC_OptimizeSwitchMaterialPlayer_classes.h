// BlueprintGeneratedClass BPC_OptimizeSwitchMaterialPlayer.BPC_OptimizeSwitchMaterialPlayer_C
// Size: 0x450 (Inherited: 0x2da)
struct UBPC_OptimizeSwitchMaterialPlayer_C : UBPC_OptimizeSwitchMaterial_C {
	char pad_2DA[0x6]; // 0x2da(0x06)
	struct TArray<struct FOptimizeMaterialMultiCondition> NoSASCondition; // 0x2e0(0x10)
	struct TMap<struct FString, struct FOptimizeMaterialOverrideSetting> NoSASMaterials; // 0x2f0(0x50)
	struct FOptimizeMaterialOverrideSetting NoSASOtherMaterial; // 0x340(0x58)
	struct TArray<struct FOptimizeMaterialMultiCondition> OpaqueCondition; // 0x398(0x10)
	struct TMap<struct FString, struct FOptimizeMaterialOverrideSetting> OpaqueMaterials; // 0x3a8(0x50)
	struct FOptimizeMaterialOverrideSetting OpaqueOtherMaterial; // 0x3f8(0x58)

	void PostInitialized(); // Function BPC_OptimizeSwitchMaterialPlayer.BPC_OptimizeSwitchMaterialPlayer_C.PostInitialized // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

