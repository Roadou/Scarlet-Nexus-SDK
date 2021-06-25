// Enum Paper2D.EFlipbookCollisionMode
enum class EFlipbookCollisionMode : uint8 {
	NoCollision,
	FirstFrameCollision,
	EachFrameCollision,
	EFlipbookCollisionMode_MAX,
};

// Enum Paper2D.EPaperSpriteAtlasPadding
enum class EPaperSpriteAtlasPadding : uint8 {
	DilateBorder,
	PadWithZero,
	EPaperSpriteAtlasPadding_MAX,
};

// Enum Paper2D.ETileMapProjectionMode
enum class ETileMapProjectionMode : uint8 {
	Orthogonal,
	IsometricDiamond,
	IsometricStaggered,
	HexagonalStaggered,
	ETileMapProjectionMode_MAX,
};

// Enum Paper2D.ESpritePivotMode
enum class ESpritePivotMode : uint8 {
	Top_Left,
	Top_Center,
	Top_Right,
	Center_Left,
	Center_Center,
	Center_Right,
	Bottom_Left,
	Bottom_Center,
	Bottom_Right,
	Custom,
	ESpritePivotMode_MAX,
};

// Enum Paper2D.ESpritePolygonMode
enum class ESpritePolygonMode : uint8 {
	SourceBoundingBox,
	TightBoundingBox,
	ShrinkWrapped,
	FullyCustom,
	Diced,
	ESpritePolygonMode_MAX,
};

// Enum Paper2D.ESpriteShapeType
enum class ESpriteShapeType : uint8 {
	Box,
	Circle,
	Polygon,
	ESpriteShapeType_MAX,
};

// Enum Paper2D.ESpriteCollisionMode
enum class ESpriteCollisionMode : uint8 {
	None,
	Use2DPhysics,
	Use3DPhysics,
	ESpriteCollisionMode_MAX,
};

// ScriptStruct Paper2D.IntMargin
// Size: 0x10 (Inherited: 0x00)
struct FIntMargin {
	int32_t Left; // 0x00(0x04)
	int32_t Top; // 0x04(0x04)
	int32_t Right; // 0x08(0x04)
	int32_t Bottom; // 0x0c(0x04)
};

// ScriptStruct Paper2D.PaperFlipbookKeyFrame
// Size: 0x10 (Inherited: 0x00)
struct FPaperFlipbookKeyFrame {
	struct UPaperSprite* Sprite; // 0x00(0x08)
	int32_t FrameRun; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Paper2D.SpriteInstanceData
// Size: 0x50 (Inherited: 0x00)
struct FSpriteInstanceData {
	struct FMatrix Transform; // 0x00(0x40)
	struct UPaperSprite* SourceSprite; // 0x40(0x08)
	struct FColor VertexColor; // 0x48(0x04)
	int32_t MaterialIndex; // 0x4c(0x04)
};

// ScriptStruct Paper2D.PaperSpriteSocket
// Size: 0x40 (Inherited: 0x00)
struct FPaperSpriteSocket {
	struct FTransform LocalTransform; // 0x00(0x30)
	struct FName SocketName; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct Paper2D.PaperSpriteAtlasSlot
// Size: 0x40 (Inherited: 0x00)
struct FPaperSpriteAtlasSlot {
	struct TSoftObjectPtr<UPaperSprite> SpriteRef; // 0x00(0x28)
	int32_t AtlasIndex; // 0x28(0x04)
	int32_t X; // 0x2c(0x04)
	int32_t Y; // 0x30(0x04)
	int32_t Width; // 0x34(0x04)
	int32_t Height; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Paper2D.PaperTerrainMaterialRule
// Size: 0x38 (Inherited: 0x00)
struct FPaperTerrainMaterialRule {
	struct UPaperSprite* StartCap; // 0x00(0x08)
	struct TArray<struct UPaperSprite*> Body; // 0x08(0x10)
	struct UPaperSprite* EndCap; // 0x18(0x08)
	float MinimumAngle; // 0x20(0x04)
	float MaximumAngle; // 0x24(0x04)
	bool bEnableCollision; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float CollisionOffset; // 0x2c(0x04)
	int32_t DrawOrder; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Paper2D.PaperTileInfo
// Size: 0x10 (Inherited: 0x00)
struct FPaperTileInfo {
	struct UPaperTileSet* TileSet; // 0x00(0x08)
	int32_t PackedTileIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Paper2D.PaperTileSetTerrain
// Size: 0x18 (Inherited: 0x00)
struct FPaperTileSetTerrain {
	struct FString TerrainName; // 0x00(0x10)
	int32_t CenterTileIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Paper2D.PaperTileMetadata
// Size: 0x40 (Inherited: 0x00)
struct FPaperTileMetadata {
	struct FName UserDataName; // 0x00(0x08)
	struct FSpriteGeometryCollection CollisionData; // 0x08(0x30)
	char TerrainMembership[0x4]; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Paper2D.SpriteGeometryCollection
// Size: 0x30 (Inherited: 0x00)
struct FSpriteGeometryCollection {
	struct TArray<struct FSpriteGeometryShape> Shapes; // 0x00(0x10)
	enum class ESpritePolygonMode GeometryType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t PixelsPerSubdivisionX; // 0x14(0x04)
	int32_t PixelsPerSubdivisionY; // 0x18(0x04)
	bool bAvoidVertexMerging; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float AlphaThreshold; // 0x20(0x04)
	float DetailAmount; // 0x24(0x04)
	float SimplifyEpsilon; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Paper2D.SpriteGeometryShape
// Size: 0x30 (Inherited: 0x00)
struct FSpriteGeometryShape {
	enum class ESpriteShapeType ShapeType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FVector2D> Vertices; // 0x08(0x10)
	struct FVector2D BoxSize; // 0x18(0x08)
	struct FVector2D BoxPosition; // 0x20(0x08)
	float Rotation; // 0x28(0x04)
	bool bNegativeWinding; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct Paper2D.SpriteDrawCallRecord
// Size: 0xd0 (Inherited: 0x00)
struct FSpriteDrawCallRecord {
	struct FVector Destination; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UTexture* BaseTexture; // 0x10(0x08)
	char pad_18[0x30]; // 0x18(0x30)
	struct FColor Color; // 0x48(0x04)
	char pad_4C[0x84]; // 0x4c(0x84)
};

// ScriptStruct Paper2D.SpriteAssetInitParameters
// Size: 0x40 (Inherited: 0x00)
struct FSpriteAssetInitParameters {
	char pad_0[0x40]; // 0x00(0x40)
};

