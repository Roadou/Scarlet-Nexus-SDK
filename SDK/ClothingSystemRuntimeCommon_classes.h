// Class ClothingSystemRuntimeCommon.ClothConfigCommon
// Size: 0x28 (Inherited: 0x28)
struct UClothConfigCommon : UClothConfigBase {
};

// Class ClothingSystemRuntimeCommon.ClothSharedConfigCommon
// Size: 0x28 (Inherited: 0x28)
struct UClothSharedConfigCommon : UClothConfigCommon {
};

// Class ClothingSystemRuntimeCommon.ClothingAssetCustomData
// Size: 0x28 (Inherited: 0x28)
struct UClothingAssetCustomData : UObject {
};

// Class ClothingSystemRuntimeCommon.ClothingAssetCommon
// Size: 0x1f0 (Inherited: 0x48)
struct UClothingAssetCommon : UClothingAssetBase {
	struct UPhysicsAsset* PhysicsAsset; // 0x48(0x08)
	struct TMap<struct FName, struct UClothConfigBase*> ClothConfigs; // 0x50(0x50)
	struct UClothConfigBase* ClothSharedSimConfig; // 0xa0(0x08)
	struct UClothConfigBase* ClothSimConfig; // 0xa8(0x08)
	struct UClothConfigBase* ChaosClothSimConfig; // 0xb0(0x08)
	struct TArray<struct UClothLODDataCommon_Legacy*> ClothLODData; // 0xb8(0x10)
	struct TArray<struct FClothLODDataCommon> LODData; // 0xc8(0x10)
	struct TArray<int32_t> LodMap; // 0xd8(0x10)
	struct TArray<struct FName> UsedBoneNames; // 0xe8(0x10)
	struct TArray<int32_t> UsedBoneIndices; // 0xf8(0x10)
	int32_t ReferenceBoneIndex; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct UClothingAssetCustomData* CustomData; // 0x110(0x08)
	struct FClothConfig_Legacy ClothConfig; // 0x118(0xd4)
	char pad_1EC[0x4]; // 0x1ec(0x04)
};

// Class ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy
// Size: 0x188 (Inherited: 0x28)
struct UClothLODDataCommon_Legacy : UObject {
	struct UClothPhysicalMeshDataBase_Legacy* PhysicalMeshData; // 0x28(0x08)
	struct FClothPhysicalMeshData ClothPhysicalMeshData; // 0x30(0xf8)
	struct FClothCollisionData CollisionData; // 0x128(0x40)
	char pad_168[0x20]; // 0x168(0x20)
};

