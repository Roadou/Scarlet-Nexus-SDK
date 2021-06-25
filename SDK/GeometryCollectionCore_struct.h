// Enum GeometryCollectionCore.EGeometryCollectionCacheType
enum class EGeometryCollectionCacheType : uint8 {
	None,
	Record,
	Play,
	RecordAndPlay,
	EGeometryCollectionCacheType_MAX,
};

// ScriptStruct GeometryCollectionCore.RecordedTransformTrack
// Size: 0x10 (Inherited: 0x00)
struct FRecordedTransformTrack {
	struct TArray<struct FRecordedFrame> Records; // 0x00(0x10)
};

// ScriptStruct GeometryCollectionCore.RecordedFrame
// Size: 0xb8 (Inherited: 0x00)
struct FRecordedFrame {
	struct TArray<struct FTransform> Transforms; // 0x00(0x10)
	struct TArray<int32_t> TransformIndices; // 0x10(0x10)
	struct TArray<int32_t> PreviousTransformIndices; // 0x20(0x10)
	struct TArray<bool> DisabledFlags; // 0x30(0x10)
	struct TArray<struct FSolverCollisionData> Collisions; // 0x40(0x10)
	struct TArray<struct FSolverBreakingData> Breakings; // 0x50(0x10)
	struct TSet<struct FSolverTrailingData> Trailings; // 0x60(0x50)
	float Timestamp; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// ScriptStruct GeometryCollectionCore.SolverTrailingData
// Size: 0x30 (Inherited: 0x00)
struct FSolverTrailingData {
	struct FVector Location; // 0x00(0x0c)
	struct FVector Velocity; // 0x0c(0x0c)
	struct FVector AngularVelocity; // 0x18(0x0c)
	float Mass; // 0x24(0x04)
	int32_t ParticleIndex; // 0x28(0x04)
	int32_t ParticleIndexMesh; // 0x2c(0x04)
};

// ScriptStruct GeometryCollectionCore.SolverBreakingData
// Size: 0x30 (Inherited: 0x00)
struct FSolverBreakingData {
	struct FVector Location; // 0x00(0x0c)
	struct FVector Velocity; // 0x0c(0x0c)
	struct FVector AngularVelocity; // 0x18(0x0c)
	float Mass; // 0x24(0x04)
	int32_t ParticleIndex; // 0x28(0x04)
	int32_t ParticleIndexMesh; // 0x2c(0x04)
};

// ScriptStruct GeometryCollectionCore.SolverCollisionData
// Size: 0x6c (Inherited: 0x00)
struct FSolverCollisionData {
	struct FVector Location; // 0x00(0x0c)
	struct FVector AccumulatedImpulse; // 0x0c(0x0c)
	struct FVector Normal; // 0x18(0x0c)
	struct FVector Velocity1; // 0x24(0x0c)
	struct FVector Velocity2; // 0x30(0x0c)
	struct FVector AngularVelocity1; // 0x3c(0x0c)
	struct FVector AngularVelocity2; // 0x48(0x0c)
	float Mass1; // 0x54(0x04)
	float Mass2; // 0x58(0x04)
	int32_t ParticleIndex; // 0x5c(0x04)
	int32_t LevelsetIndex; // 0x60(0x04)
	int32_t ParticleIndexMesh; // 0x64(0x04)
	int32_t LevelsetIndexMesh; // 0x68(0x04)
};

