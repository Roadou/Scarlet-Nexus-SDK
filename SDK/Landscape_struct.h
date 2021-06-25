// Enum Landscape.ELandscapeBlendMode
enum class ELandscapeBlendMode : uint8 {
	LSBM_AdditiveBlend,
	LSBM_AlphaBlend,
	LSBM_MAX,
};

// Enum Landscape.ELandscapeSetupErrors
enum class ELandscapeSetupErrors : uint8 {
	LSE_None,
	LSE_NoLandscapeInfo,
	LSE_CollsionXY,
	LSE_NoLayerInfo,
	LSE_MAX,
};

// Enum Landscape.ELandscapeClearMode
enum class ELandscapeClearMode : uint8 {
	Clear_Weightmap,
	Clear_Heightmap,
	Clear_All,
	Clear_MAX,
};

// Enum Landscape.ELandscapeGizmoType
enum class ELandscapeGizmoType : uint8 {
	LGT_None,
	LGT_Height,
	LGT_Weight,
	LGT_MAX,
};

// Enum Landscape.EGrassScaling
enum class EGrassScaling : uint8 {
	Uniform,
	Free,
	LockXY,
	EGrassScaling_MAX,
};

// Enum Landscape.ESplineModulationColorMask
enum class ESplineModulationColorMask : uint8 {
	Red,
	Green,
	Blue,
	Alpha,
	ESplineModulationColorMask_MAX,
};

// Enum Landscape.ELandscapeLODFalloff
enum class ELandscapeLODFalloff : uint8 {
	Linear,
	SquareRoot,
	ELandscapeLODFalloff_MAX,
};

// Enum Landscape.ELandscapeLayerDisplayMode
enum class ELandscapeLayerDisplayMode : uint8 {
	Default,
	Alphabetical,
	UserSpecific,
	ELandscapeLayerDisplayMode_MAX,
};

// Enum Landscape.ELandscapeLayerPaintingRestriction
enum class ELandscapeLayerPaintingRestriction : uint8 {
	None,
	UseMaxLayers,
	ExistingOnly,
	UseComponentWhitelist,
	ELandscapeLayerPaintingRestriction_MAX,
};

// Enum Landscape.ELandscapeImportAlphamapType
enum class ELandscapeImportAlphamapType : uint8 {
	Additive,
	Layered,
	ELandscapeImportAlphamapType_MAX,
};

// Enum Landscape.LandscapeSplineMeshOrientation
enum class LandscapeSplineMeshOrientation : uint8 {
	LSMO_XUp,
	LSMO_YUp,
	LSMO_MAX,
};

// Enum Landscape.ELandscapeLayerBlendType
enum class ELandscapeLayerBlendType : uint8 {
	LB_WeightBlend,
	LB_AlphaBlend,
	LB_HeightBlend,
	LB_MAX,
};

// Enum Landscape.ELandscapeCustomizedCoordType
enum class ELandscapeCustomizedCoordType : uint8 {
	LCCT_None,
	LCCT_CustomUV0,
	LCCT_CustomUV1,
	LCCT_CustomUV2,
	LCCT_WeightMapUV,
	LCCT_MAX,
};

// Enum Landscape.ETerrainCoordMappingType
enum class ETerrainCoordMappingType : uint8 {
	TCMT_Auto,
	TCMT_XY,
	TCMT_XZ,
	TCMT_YZ,
	TCMT_MAX,
};

// ScriptStruct Landscape.LandscapeLayer
// Size: 0x88 (Inherited: 0x00)
struct FLandscapeLayer {
	struct FGuid Guid; // 0x00(0x10)
	struct FName Name; // 0x10(0x08)
	bool bVisible; // 0x18(0x01)
	bool bLocked; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	float HeightmapAlpha; // 0x1c(0x04)
	float WeightmapAlpha; // 0x20(0x04)
	enum class ELandscapeBlendMode BlendMode; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct TArray<struct FLandscapeLayerBrush> Brushes; // 0x28(0x10)
	struct TMap<struct ULandscapeLayerInfoObject*, bool> WeightmapLayerAllocationBlend; // 0x38(0x50)
};

// ScriptStruct Landscape.LandscapeLayerBrush
// Size: 0x01 (Inherited: 0x00)
struct FLandscapeLayerBrush {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.LandscapeLayerComponentData
// Size: 0x38 (Inherited: 0x00)
struct FLandscapeLayerComponentData {
	struct FHeightmapData HeightmapData; // 0x00(0x08)
	struct FWeightmapData WeightmapData; // 0x08(0x30)
};

// ScriptStruct Landscape.WeightmapData
// Size: 0x30 (Inherited: 0x00)
struct FWeightmapData {
	struct TArray<struct UTexture2D*> Textures; // 0x00(0x10)
	struct TArray<struct FWeightmapLayerAllocationInfo> LayerAllocations; // 0x10(0x10)
	struct TArray<struct ULandscapeWeightmapUsage*> TextureUsages; // 0x20(0x10)
};

// ScriptStruct Landscape.WeightmapLayerAllocationInfo
// Size: 0x10 (Inherited: 0x00)
struct FWeightmapLayerAllocationInfo {
	struct ULandscapeLayerInfoObject* LayerInfo; // 0x00(0x08)
	char WeightmapTextureIndex; // 0x08(0x01)
	char WeightmapTextureChannel; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct Landscape.HeightmapData
// Size: 0x08 (Inherited: 0x00)
struct FHeightmapData {
	struct UTexture2D* Texture; // 0x00(0x08)
};

// ScriptStruct Landscape.LandscapeComponentMaterialOverride
// Size: 0x10 (Inherited: 0x00)
struct FLandscapeComponentMaterialOverride {
	struct FPerPlatformInt LODIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UMaterialInterface* Material; // 0x08(0x08)
};

// ScriptStruct Landscape.LandscapeEditToolRenderData
// Size: 0x38 (Inherited: 0x00)
struct FLandscapeEditToolRenderData {
	struct UMaterialInterface* ToolMaterial; // 0x00(0x08)
	struct UMaterialInterface* GizmoMaterial; // 0x08(0x08)
	int32_t SelectedType; // 0x10(0x04)
	int32_t DebugChannelR; // 0x14(0x04)
	int32_t DebugChannelG; // 0x18(0x04)
	int32_t DebugChannelB; // 0x1c(0x04)
	struct UTexture2D* DataTexture; // 0x20(0x08)
	struct UTexture2D* LayerContributionTexture; // 0x28(0x08)
	struct UTexture2D* DirtyTexture; // 0x30(0x08)
};

// ScriptStruct Landscape.GizmoSelectData
// Size: 0x50 (Inherited: 0x00)
struct FGizmoSelectData {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Landscape.GrassVariety
// Size: 0x48 (Inherited: 0x00)
struct FGrassVariety {
	struct UStaticMesh* GrassMesh; // 0x00(0x08)
	struct FPerPlatformFloat GrassDensity; // 0x08(0x04)
	bool bUseGrid; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float PlacementJitter; // 0x10(0x04)
	struct FPerPlatformInt StartCullDistance; // 0x14(0x04)
	struct FPerPlatformInt EndCullDistance; // 0x18(0x04)
	int32_t MinLOD; // 0x1c(0x04)
	enum class EGrassScaling Scaling; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FFloatInterval ScaleX; // 0x24(0x08)
	struct FFloatInterval ScaleY; // 0x2c(0x08)
	struct FFloatInterval ScaleZ; // 0x34(0x08)
	bool RandomRotation; // 0x3c(0x01)
	bool AlignToSurface; // 0x3d(0x01)
	bool bUseLandscapeLightmap; // 0x3e(0x01)
	struct FLightingChannels LightingChannels; // 0x3f(0x01)
	bool bReceivesDecals; // 0x40(0x01)
	bool bCastDynamicShadow; // 0x41(0x01)
	bool bKeepInstanceBufferCPUCopy; // 0x42(0x01)
	char pad_43[0x5]; // 0x43(0x05)
};

// ScriptStruct Landscape.LandscapeInfoLayerSettings
// Size: 0x10 (Inherited: 0x00)
struct FLandscapeInfoLayerSettings {
	struct ULandscapeLayerInfoObject* LayerInfoObj; // 0x00(0x08)
	struct FName LayerName; // 0x08(0x08)
};

// ScriptStruct Landscape.LandscapeMaterialTextureStreamingInfo
// Size: 0x0c (Inherited: 0x00)
struct FLandscapeMaterialTextureStreamingInfo {
	struct FName TextureName; // 0x00(0x08)
	float TexelFactor; // 0x08(0x04)
};

// ScriptStruct Landscape.LandscapeProxyMaterialOverride
// Size: 0x10 (Inherited: 0x00)
struct FLandscapeProxyMaterialOverride {
	struct FPerPlatformInt LODIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UMaterialInterface* Material; // 0x08(0x08)
};

// ScriptStruct Landscape.LandscapeImportLayerInfo
// Size: 0x01 (Inherited: 0x00)
struct FLandscapeImportLayerInfo {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.LandscapeLayerStruct
// Size: 0x08 (Inherited: 0x00)
struct FLandscapeLayerStruct {
	struct ULandscapeLayerInfoObject* LayerInfoObj; // 0x00(0x08)
};

// ScriptStruct Landscape.LandscapeEditorLayerSettings
// Size: 0x01 (Inherited: 0x00)
struct FLandscapeEditorLayerSettings {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.LandscapeSplineConnection
// Size: 0x10 (Inherited: 0x00)
struct FLandscapeSplineConnection {
	struct ULandscapeSplineSegment* Segment; // 0x00(0x08)
	char End : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Landscape.ForeignWorldSplineData
// Size: 0x01 (Inherited: 0x00)
struct FForeignWorldSplineData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.ForeignSplineSegmentData
// Size: 0x01 (Inherited: 0x00)
struct FForeignSplineSegmentData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.ForeignControlPointData
// Size: 0x01 (Inherited: 0x00)
struct FForeignControlPointData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.LandscapeSplineMeshEntry
// Size: 0x38 (Inherited: 0x00)
struct FLandscapeSplineMeshEntry {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	struct TArray<struct UMaterialInterface*> MaterialOverrides; // 0x08(0x10)
	char bCenterH : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FVector2D CenterAdjust; // 0x1c(0x08)
	char bScaleToWidth : 1; // 0x24(0x01)
	char pad_24_1 : 7; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FVector Scale; // 0x28(0x0c)
	enum class LandscapeSplineMeshOrientation Orientation; // 0x34(0x01)
	enum class ESplineMeshAxis ForwardAxis; // 0x35(0x01)
	enum class ESplineMeshAxis UpAxis; // 0x36(0x01)
	char pad_37[0x1]; // 0x37(0x01)
};

// ScriptStruct Landscape.LandscapeSplineSegmentConnection
// Size: 0x18 (Inherited: 0x00)
struct FLandscapeSplineSegmentConnection {
	struct ULandscapeSplineControlPoint* ControlPoint; // 0x00(0x08)
	float TangentLen; // 0x08(0x04)
	struct FName SocketName; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Landscape.LandscapeSplineInterpPoint
// Size: 0x70 (Inherited: 0x00)
struct FLandscapeSplineInterpPoint {
	struct FVector Center; // 0x00(0x0c)
	struct FVector Left; // 0x0c(0x0c)
	struct FVector Right; // 0x18(0x0c)
	struct FVector FalloffLeft; // 0x24(0x0c)
	struct FVector FalloffRight; // 0x30(0x0c)
	struct FVector LayerLeft; // 0x3c(0x0c)
	struct FVector LayerRight; // 0x48(0x0c)
	struct FVector LayerFalloffLeft; // 0x54(0x0c)
	struct FVector LayerFalloffRight; // 0x60(0x0c)
	float StartEndFalloff; // 0x6c(0x04)
};

// ScriptStruct Landscape.GrassInput
// Size: 0x28 (Inherited: 0x00)
struct FGrassInput {
	struct FName Name; // 0x00(0x08)
	struct ULandscapeGrassType* GrassType; // 0x08(0x08)
	struct FExpressionInput Input; // 0x10(0x0c)
	char pad_1C[0xc]; // 0x1c(0x0c)
};

// ScriptStruct Landscape.LayerBlendInput
// Size: 0x48 (Inherited: 0x00)
struct FLayerBlendInput {
	struct FName LayerName; // 0x00(0x08)
	enum class ELandscapeLayerBlendType BlendType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FExpressionInput LayerInput; // 0x0c(0x0c)
	char pad_18[0x8]; // 0x18(0x08)
	struct FExpressionInput HeightInput; // 0x20(0x0c)
	char pad_2C[0x8]; // 0x2c(0x08)
	float PreviewWeight; // 0x34(0x04)
	struct FVector ConstLayerInput; // 0x38(0x0c)
	float ConstHeightInput; // 0x44(0x04)
};

