// Enum CascadeExtensionPlugin.EDistanceWeight
enum class EDistanceWeight : uint8 {
	LINEAR,
	INVERSE_LINEAR,
	QUADRATIC,
	INVERSE_QUAD,
	W_Max,
	EDistanceWeight_MAX,
};

// Enum CascadeExtensionPlugin.ESpaceAxis
enum class ESpaceAxis : uint8 {
	X,
	Y,
	Z,
	Ax_Max,
	ESpaceAxis_MAX,
};

// ScriptStruct CascadeExtensionPlugin.ForcePoints
// Size: 0x20 (Inherited: 0x00)
struct FForcePoints {
	float Intensity; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FVector> PointLocations; // 0x08(0x10)
	enum class EDistanceWeight SeparationDistanceWeight; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float DistanceScale; // 0x1c(0x04)
};

// ScriptStruct CascadeExtensionPlugin.MeshTriangleData
// Size: 0x20 (Inherited: 0x00)
struct FMeshTriangleData {
	struct TArray<struct FVector> Vertices; // 0x00(0x10)
	struct TArray<struct FTriangleIndices> Indices; // 0x10(0x10)
};

// ScriptStruct CascadeExtensionPlugin.TriangleIndices
// Size: 0x0c (Inherited: 0x00)
struct FTriangleIndices {
	int32_t v0; // 0x00(0x04)
	int32_t v1; // 0x04(0x04)
	int32_t v2; // 0x08(0x04)
};

// ScriptStruct CascadeExtensionPlugin.ParticleProperties
// Size: 0x44 (Inherited: 0x00)
struct FParticleProperties {
	int32_t ParticleId; // 0x00(0x04)
	float RelativeTime; // 0x04(0x04)
	struct FVector Location; // 0x08(0x0c)
	struct FVector Velocity; // 0x14(0x0c)
	struct FVector Size; // 0x20(0x0c)
	struct FLinearColor Color; // 0x2c(0x10)
	float Rotation; // 0x3c(0x04)
	float RotationRate; // 0x40(0x04)
};

