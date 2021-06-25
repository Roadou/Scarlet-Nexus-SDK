// Enum LiveLinkInterface.ELiveLinkCameraProjectionMode
enum class ELiveLinkCameraProjectionMode : uint8 {
	Perspective,
	Orthographic,
	ELiveLinkCameraProjectionMode_MAX,
};

// Enum LiveLinkInterface.ELiveLinkSourceMode
enum class ELiveLinkSourceMode : uint8 {
	Latest,
	EngineTime,
	Timecode,
	ELiveLinkSourceMode_MAX,
};

// ScriptStruct LiveLinkInterface.LiveLinkSourceHandle
// Size: 0x18 (Inherited: 0x00)
struct FLiveLinkSourceHandle {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct LiveLinkInterface.LiveLinkBaseBlueprintData
// Size: 0x08 (Inherited: 0x00)
struct FLiveLinkBaseBlueprintData {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct LiveLinkInterface.SubjectFrameHandle
// Size: 0x18 (Inherited: 0x08)
struct FSubjectFrameHandle : FLiveLinkBaseBlueprintData {
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct LiveLinkInterface.LiveLinkTransform
// Size: 0x20 (Inherited: 0x00)
struct FLiveLinkTransform {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct LiveLinkInterface.CachedSubjectFrame
// Size: 0x160 (Inherited: 0x00)
struct FCachedSubjectFrame {
	char pad_0[0x160]; // 0x00(0x160)
};

// ScriptStruct LiveLinkInterface.SubjectMetadata
// Size: 0x70 (Inherited: 0x00)
struct FSubjectMetadata {
	struct TMap<struct FName, struct FString> StringMetadata; // 0x00(0x50)
	struct FTimecode SceneTimecode; // 0x50(0x14)
	struct FFrameRate SceneFramerate; // 0x64(0x08)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct LiveLinkInterface.LiveLinkBaseFrameData
// Size: 0xa0 (Inherited: 0x00)
struct FLiveLinkBaseFrameData {
	struct FLiveLinkWorldTime WorldTime; // 0x00(0x10)
	struct FLiveLinkMetaData MetaData; // 0x10(0x60)
	struct TArray<float> PropertyValues; // 0x70(0x10)
	char pad_80[0x20]; // 0x80(0x20)
};

// ScriptStruct LiveLinkInterface.LiveLinkMetaData
// Size: 0x60 (Inherited: 0x00)
struct FLiveLinkMetaData {
	struct TMap<struct FName, struct FString> StringMetadata; // 0x00(0x50)
	struct FQualifiedFrameTime SceneTime; // 0x50(0x10)
};

// ScriptStruct LiveLinkInterface.LiveLinkWorldTime
// Size: 0x10 (Inherited: 0x00)
struct FLiveLinkWorldTime {
	double Time; // 0x00(0x08)
	double Offset; // 0x08(0x08)
};

// ScriptStruct LiveLinkInterface.LiveLinkAnimationFrameData
// Size: 0xb0 (Inherited: 0xa0)
struct FLiveLinkAnimationFrameData : FLiveLinkBaseFrameData {
	struct TArray<struct FTransform> Transforms; // 0xa0(0x10)
};

// ScriptStruct LiveLinkInterface.LiveLinkBaseStaticData
// Size: 0x10 (Inherited: 0x00)
struct FLiveLinkBaseStaticData {
	struct TArray<struct FName> PropertyNames; // 0x00(0x10)
};

// ScriptStruct LiveLinkInterface.LiveLinkSkeletonStaticData
// Size: 0x30 (Inherited: 0x10)
struct FLiveLinkSkeletonStaticData : FLiveLinkBaseStaticData {
	struct TArray<struct FName> BoneNames; // 0x10(0x10)
	struct TArray<int32_t> BoneParents; // 0x20(0x10)
};

// ScriptStruct LiveLinkInterface.LiveLinkBasicBlueprintData
// Size: 0xb8 (Inherited: 0x08)
struct FLiveLinkBasicBlueprintData : FLiveLinkBaseBlueprintData {
	struct FLiveLinkBaseStaticData StaticData; // 0x08(0x10)
	struct FLiveLinkBaseFrameData FrameData; // 0x18(0xa0)
};

// ScriptStruct LiveLinkInterface.LiveLinkCameraBlueprintData
// Size: 0x120 (Inherited: 0x08)
struct FLiveLinkCameraBlueprintData : FLiveLinkBaseBlueprintData {
	struct FLiveLinkCameraStaticData StaticData; // 0x08(0x20)
	char pad_28[0x8]; // 0x28(0x08)
	struct FLiveLinkCameraFrameData FrameData; // 0x30(0xf0)
};

// ScriptStruct LiveLinkInterface.LiveLinkTransformFrameData
// Size: 0xd0 (Inherited: 0xa0)
struct FLiveLinkTransformFrameData : FLiveLinkBaseFrameData {
	struct FTransform Transform; // 0xa0(0x30)
};

// ScriptStruct LiveLinkInterface.LiveLinkCameraFrameData
// Size: 0xf0 (Inherited: 0xd0)
struct FLiveLinkCameraFrameData : FLiveLinkTransformFrameData {
	float FieldOfView; // 0xd0(0x04)
	float AspectRatio; // 0xd4(0x04)
	float FocalLength; // 0xd8(0x04)
	float Aperture; // 0xdc(0x04)
	float FocusDistance; // 0xe0(0x04)
	enum class ELiveLinkCameraProjectionMode ProjectionMode; // 0xe4(0x01)
	char pad_E5[0xb]; // 0xe5(0x0b)
};

// ScriptStruct LiveLinkInterface.LiveLinkTransformStaticData
// Size: 0x10 (Inherited: 0x10)
struct FLiveLinkTransformStaticData : FLiveLinkBaseStaticData {
};

// ScriptStruct LiveLinkInterface.LiveLinkCameraStaticData
// Size: 0x20 (Inherited: 0x10)
struct FLiveLinkCameraStaticData : FLiveLinkTransformStaticData {
	bool bIsFieldOfViewSupported; // 0x10(0x01)
	bool bIsAspectRatioSupported; // 0x11(0x01)
	bool bIsFocalLengthSupported; // 0x12(0x01)
	bool bIsProjectionModeSupported; // 0x13(0x01)
	float FilmBackWidth; // 0x14(0x04)
	float FilmBackHeight; // 0x18(0x04)
	bool bIsApertureSupported; // 0x1c(0x01)
	bool bIsFocusDistanceSupported; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
};

// ScriptStruct LiveLinkInterface.LiveLinkCurveConversionSettings
// Size: 0x50 (Inherited: 0x00)
struct FLiveLinkCurveConversionSettings {
	struct TMap<struct FString, struct FSoftObjectPath> CurveConversionAssetMap; // 0x00(0x50)
};

// ScriptStruct LiveLinkInterface.LiveLinkLightBlueprintData
// Size: 0x130 (Inherited: 0x08)
struct FLiveLinkLightBlueprintData : FLiveLinkBaseBlueprintData {
	struct FLiveLinkLightStaticData StaticData; // 0x08(0x20)
	char pad_28[0x8]; // 0x28(0x08)
	struct FLiveLinkLightFrameData FrameData; // 0x30(0x100)
};

// ScriptStruct LiveLinkInterface.LiveLinkLightFrameData
// Size: 0x100 (Inherited: 0xd0)
struct FLiveLinkLightFrameData : FLiveLinkTransformFrameData {
	float Temperature; // 0xd0(0x04)
	float Intensity; // 0xd4(0x04)
	struct FColor LightColor; // 0xd8(0x04)
	float InnerConeAngle; // 0xdc(0x04)
	float OuterConeAngle; // 0xe0(0x04)
	float AttenuationRadius; // 0xe4(0x04)
	float SourceRadius; // 0xe8(0x04)
	float SoftSourceRadius; // 0xec(0x04)
	float SourceLength; // 0xf0(0x04)
	char pad_F4[0xc]; // 0xf4(0x0c)
};

// ScriptStruct LiveLinkInterface.LiveLinkLightStaticData
// Size: 0x20 (Inherited: 0x10)
struct FLiveLinkLightStaticData : FLiveLinkTransformStaticData {
	bool bIsTemperatureSupported; // 0x10(0x01)
	bool bIsIntensitySupported; // 0x11(0x01)
	bool bIsLightColorSupported; // 0x12(0x01)
	bool bIsInnerConeAngleSupported; // 0x13(0x01)
	bool bIsOuterConeAngleSupported; // 0x14(0x01)
	bool bIsAttenuationRadiusSupported; // 0x15(0x01)
	bool bIsSourceLenghtSupported; // 0x16(0x01)
	bool bIsSourceRadiusSupported; // 0x17(0x01)
	bool bIsSoftSourceRadiusSupported; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectPreset
// Size: 0x38 (Inherited: 0x00)
struct FLiveLinkSubjectPreset {
	struct FLiveLinkSubjectKey Key; // 0x00(0x18)
	struct ULiveLinkRole* Role; // 0x18(0x08)
	struct ULiveLinkSubjectSettings* Settings; // 0x20(0x08)
	struct ULiveLinkVirtualSubject* VirtualSubject; // 0x28(0x08)
	bool bEnabled; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectKey
// Size: 0x18 (Inherited: 0x00)
struct FLiveLinkSubjectKey {
	struct FGuid Source; // 0x00(0x10)
	struct FLiveLinkSubjectName SubjectName; // 0x10(0x08)
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectName
// Size: 0x08 (Inherited: 0x00)
struct FLiveLinkSubjectName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct LiveLinkInterface.LiveLinkSourcePreset
// Size: 0x30 (Inherited: 0x00)
struct FLiveLinkSourcePreset {
	struct FGuid Guid; // 0x00(0x10)
	struct ULiveLinkSourceSettings* Settings; // 0x10(0x08)
	struct FText SourceType; // 0x18(0x18)
};

// ScriptStruct LiveLinkInterface.LiveLinkRefSkeleton
// Size: 0x20 (Inherited: 0x00)
struct FLiveLinkRefSkeleton {
	struct TArray<struct FName> BoneNames; // 0x00(0x10)
	struct TArray<int32_t> BoneParents; // 0x10(0x10)
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectRepresentation
// Size: 0x10 (Inherited: 0x00)
struct FLiveLinkSubjectRepresentation {
	struct FLiveLinkSubjectName Subject; // 0x00(0x08)
	struct ULiveLinkRole* Role; // 0x08(0x08)
};

// ScriptStruct LiveLinkInterface.LiveLinkInterpolationSettings
// Size: 0x08 (Inherited: 0x00)
struct FLiveLinkInterpolationSettings {
	bool bUseInterpolation; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float InterpolationOffset; // 0x04(0x04)
};

// ScriptStruct LiveLinkInterface.LiveLinkTimeSynchronizationSettings
// Size: 0x0c (Inherited: 0x00)
struct FLiveLinkTimeSynchronizationSettings {
	struct FFrameRate FrameRate; // 0x00(0x08)
	struct FFrameNumber FrameOffset; // 0x08(0x04)
};

// ScriptStruct LiveLinkInterface.LiveLinkSourceDebugInfo
// Size: 0x10 (Inherited: 0x00)
struct FLiveLinkSourceDebugInfo {
	struct FLiveLinkSubjectName SubjectName; // 0x00(0x08)
	int32_t SnapshotIndex; // 0x08(0x04)
	int32_t NumberOfBufferAtSnapshot; // 0x0c(0x04)
};

// ScriptStruct LiveLinkInterface.LiveLinkSourceBufferManagementSettings
// Size: 0x50 (Inherited: 0x00)
struct FLiveLinkSourceBufferManagementSettings {
	bool bValidEngineTimeEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ValidEngineTime; // 0x04(0x04)
	float EngineTimeOffset; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	double EngineTimeClockOffset; // 0x10(0x08)
	struct FFrameRate TimecodeFrameRate; // 0x18(0x08)
	bool bGenerateSubFrame; // 0x20(0x01)
	bool bUseTimecodeSmoothLatest; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	struct FFrameRate SourceTimecodeFrameRate; // 0x24(0x08)
	bool bValidTimecodeFrameEnabled; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	int32_t ValidTimecodeFrame; // 0x30(0x04)
	float TimecodeFrameOffset; // 0x34(0x04)
	double TimecodeClockOffset; // 0x38(0x08)
	int32_t LatestOffset; // 0x40(0x04)
	int32_t MaxNumberOfFrameToBuffered; // 0x44(0x04)
	bool bKeepAtLeastOneFrame; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct LiveLinkInterface.LiveLinkTransformBlueprintData
// Size: 0xf0 (Inherited: 0x08)
struct FLiveLinkTransformBlueprintData : FLiveLinkBaseBlueprintData {
	struct FLiveLinkTransformStaticData StaticData; // 0x08(0x10)
	char pad_18[0x8]; // 0x18(0x08)
	struct FLiveLinkTransformFrameData FrameData; // 0x20(0xd0)
};

// ScriptStruct LiveLinkInterface.LiveLinkFrameData
// Size: 0x90 (Inherited: 0x00)
struct FLiveLinkFrameData {
	struct TArray<struct FTransform> Transforms; // 0x00(0x10)
	struct TArray<struct FLiveLinkCurveElement> CurveElements; // 0x10(0x10)
	struct FLiveLinkWorldTime WorldTime; // 0x20(0x10)
	struct FLiveLinkMetaData MetaData; // 0x30(0x60)
};

// ScriptStruct LiveLinkInterface.LiveLinkCurveElement
// Size: 0x0c (Inherited: 0x00)
struct FLiveLinkCurveElement {
	struct FName CurveName; // 0x00(0x08)
	float CurveValue; // 0x08(0x04)
};

// ScriptStruct LiveLinkInterface.LiveLinkTimeCode_Base_DEPRECATED
// Size: 0x10 (Inherited: 0x00)
struct FLiveLinkTimeCode_Base_DEPRECATED {
	int32_t Seconds; // 0x00(0x04)
	int32_t Frames; // 0x04(0x04)
	struct FLiveLinkFrameRate FrameRate; // 0x08(0x08)
};

// ScriptStruct LiveLinkInterface.LiveLinkFrameRate
// Size: 0x08 (Inherited: 0x08)
struct FLiveLinkFrameRate : FFrameRate {
};

// ScriptStruct LiveLinkInterface.LiveLinkTimeCode
// Size: 0x10 (Inherited: 0x10)
struct FLiveLinkTimeCode : FLiveLinkTimeCode_Base_DEPRECATED {
};

// ScriptStruct LiveLinkInterface.LiveLinkTime
// Size: 0x18 (Inherited: 0x00)
struct FLiveLinkTime {
	double WorldTime; // 0x00(0x08)
	struct FQualifiedFrameTime SceneTime; // 0x08(0x10)
};

