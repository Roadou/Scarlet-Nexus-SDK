// Enum AppleVision.EDetectedFaceFeatureType
enum class EDetectedFaceFeatureType : uint8 {
	Unkown,
	FaceContour,
	InnerLips,
	LeftEye,
	LeftEyebrow,
	LeftPupil,
	MedianLine,
	Nose,
	NoseCrest,
	OuterLips,
	RightEye,
	RightEyebrow,
	RightPupil,
	EDetectedFaceFeatureType_MAX,
};

// ScriptStruct AppleVision.FaceDetectionResult
// Size: 0x10 (Inherited: 0x00)
struct FFaceDetectionResult {
	struct TArray<struct FDetectedFace> DetectedFaces; // 0x00(0x10)
};

// ScriptStruct AppleVision.DetectedFeature
// Size: 0x04 (Inherited: 0x00)
struct FDetectedFeature {
	float Confidence; // 0x00(0x04)
};

// ScriptStruct AppleVision.DetectedFeatureRegion
// Size: 0x18 (Inherited: 0x04)
struct FDetectedFeatureRegion : FDetectedFeature {
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FVector2D> Points; // 0x08(0x10)
};

// ScriptStruct AppleVision.DetectedFace
// Size: 0x50 (Inherited: 0x18)
struct FDetectedFace : FDetectedFeatureRegion {
	struct FBox2D BoundingBox; // 0x18(0x14)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FDetectedFaceFeature2D> Features; // 0x30(0x10)
	struct TArray<struct FDetectedFaceFeatureRegion> FeatureRegions; // 0x40(0x10)
};

// ScriptStruct AppleVision.DetectedFaceFeatureRegion
// Size: 0x20 (Inherited: 0x18)
struct FDetectedFaceFeatureRegion : FDetectedFeatureRegion {
	enum class EDetectedFaceFeatureType FeatureType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct AppleVision.DetectedFeature2D
// Size: 0x18 (Inherited: 0x04)
struct FDetectedFeature2D : FDetectedFeature {
	struct FBox2D BoundingBox; // 0x04(0x14)
};

// ScriptStruct AppleVision.DetectedFaceFeature2D
// Size: 0x1c (Inherited: 0x18)
struct FDetectedFaceFeature2D : FDetectedFeature2D {
	enum class EDetectedFaceFeatureType FeatureType; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

