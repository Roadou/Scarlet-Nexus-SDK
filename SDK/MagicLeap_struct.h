// Enum MagicLeap.PurchaseType
enum class PurchaseType : uint8 {
	Consumable,
	Nonconsumable,
	Undefined,
	PurchaseType_MAX,
};

// Enum MagicLeap.EFocusLostReason
enum class EFocusLostReason : uint8 {
	EFocusLostReason_Invalid,
	EFocusLostReason_System,
	EFocusLostReason_MAX,
};

// Enum MagicLeap.EMagicLeapMeshLOD
enum class EMagicLeapMeshLOD : uint8 {
	Minimum,
	Medium,
	Maximum,
	EMagicLeapMeshLOD_MAX,
};

// Enum MagicLeap.EMagicLeapMeshState
enum class EMagicLeapMeshState : uint8 {
	New,
	Updated,
	Deleted,
	Unchanged,
	EMagicLeapMeshState_MAX,
};

// Enum MagicLeap.EMagicLeapMeshVertexColorMode
enum class EMagicLeapMeshVertexColorMode : uint8 {
	None,
	Confidence,
	Block,
	LOD,
	EMagicLeapMeshVertexColorMode_MAX,
};

// Enum MagicLeap.EMagicLeapMeshType
enum class EMagicLeapMeshType : uint8 {
	Triangles,
	PointCloud,
	EMagicLeapMeshType_MAX,
};

// Enum MagicLeap.EMagicLeapRaycastResultState
enum class EMagicLeapRaycastResultState : uint8 {
	RequestFailed,
	NoCollision,
	HitUnobserved,
	HitObserved,
	EMagicLeapRaycastResultState_MAX,
};

// Enum MagicLeap.CloudStatus
enum class CloudStatus : uint8 {
	CloudStatus_NotDone,
	CloudStatus_Done,
	CloudStatus_MAX,
};

// Enum MagicLeap.EMagicLeapHeadTrackingMapEvent
enum class EMagicLeapHeadTrackingMapEvent : uint8 {
	Lost,
	Recovered,
	RecoveryFailed,
	NewSession,
	EMagicLeapHeadTrackingMapEvent_MAX,
};

// Enum MagicLeap.EMagicLeapHeadTrackingMode
enum class EMagicLeapHeadTrackingMode : uint8 {
	PositionAndOrientation,
	Unavailable,
	Unknown,
	EMagicLeapHeadTrackingMode_MAX,
};

// Enum MagicLeap.EMagicLeapHeadTrackingError
enum class EMagicLeapHeadTrackingError : uint8 {
	None,
	NotEnoughFeatures,
	LowLight,
	Unknown,
	EMagicLeapHeadTrackingError_MAX,
};

// ScriptStruct MagicLeap.PurchaseItemDetails
// Size: 0x40 (Inherited: 0x00)
struct FPurchaseItemDetails {
	char pad_0[0x10]; // 0x00(0x10)
	struct FString Price; // 0x10(0x10)
	struct FString Name; // 0x20(0x10)
	enum class PurchaseType Type; // 0x30(0x01)
	char pad_31[0xf]; // 0x31(0x0f)
};

// ScriptStruct MagicLeap.PurchaseConfirmation
// Size: 0x50 (Inherited: 0x00)
struct FPurchaseConfirmation {
	char pad_0[0x10]; // 0x00(0x10)
	struct FString PackageName; // 0x10(0x10)
	char pad_20[0x28]; // 0x20(0x28)
	enum class PurchaseType Type; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct MagicLeap.MagicLeapMeshBlockRequest
// Size: 0x14 (Inherited: 0x00)
struct FMagicLeapMeshBlockRequest {
	struct FGuid BlockID; // 0x00(0x10)
	enum class EMagicLeapMeshLOD LevelOfDetail; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct MagicLeap.MagicLeapTrackingMeshInfo
// Size: 0x18 (Inherited: 0x00)
struct FMagicLeapTrackingMeshInfo {
	struct FTimespan Timestamp; // 0x00(0x08)
	struct TArray<struct FMagicLeapMeshBlockInfo> BlockData; // 0x08(0x10)
};

// ScriptStruct MagicLeap.MagicLeapMeshBlockInfo
// Size: 0x48 (Inherited: 0x00)
struct FMagicLeapMeshBlockInfo {
	struct FGuid BlockID; // 0x00(0x10)
	struct FVector BlockPosition; // 0x10(0x0c)
	struct FRotator BlockOrientation; // 0x1c(0x0c)
	struct FVector BlockDimensions; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
	struct FTimespan Timestamp; // 0x38(0x08)
	enum class EMagicLeapMeshState BlockState; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct MagicLeap.MagicLeapRaycastHitResult
// Size: 0x24 (Inherited: 0x00)
struct FMagicLeapRaycastHitResult {
	enum class EMagicLeapRaycastResultState HitState; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector HitPoint; // 0x04(0x0c)
	struct FVector Normal; // 0x10(0x0c)
	float Confidence; // 0x1c(0x04)
	int32_t UserData; // 0x20(0x04)
};

// ScriptStruct MagicLeap.MagicLeapRaycastQueryParams
// Size: 0x38 (Inherited: 0x00)
struct FMagicLeapRaycastQueryParams {
	struct FVector Position; // 0x00(0x0c)
	struct FVector Direction; // 0x0c(0x0c)
	struct FVector UpVector; // 0x18(0x0c)
	int32_t Width; // 0x24(0x04)
	int32_t Height; // 0x28(0x04)
	float HorizontalFovDegrees; // 0x2c(0x04)
	bool CollideWithUnobserved; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t UserData; // 0x34(0x04)
};

// ScriptStruct MagicLeap.MagicLeapGraphicsClientPerformanceInfo
// Size: 0x1c (Inherited: 0x00)
struct FMagicLeapGraphicsClientPerformanceInfo {
	float FrameStartCPUCompAcquireCPUTimeMs; // 0x00(0x04)
	float FrameStartCPUFrameEndGPUTimeMs; // 0x04(0x04)
	float FrameStartCPUFrameStartCPUTimeMs; // 0x08(0x04)
	float FrameDurationCPUTimeMs; // 0x0c(0x04)
	float FrameDurationGPUTimeMs; // 0x10(0x04)
	float FrameInternalDurationCPUTimeMs; // 0x14(0x04)
	float FrameInternalDurationGPUTimeMs; // 0x18(0x04)
};

// ScriptStruct MagicLeap.MagicLeapHeadTrackingState
// Size: 0x08 (Inherited: 0x00)
struct FMagicLeapHeadTrackingState {
	enum class EMagicLeapHeadTrackingMode Mode; // 0x00(0x01)
	enum class EMagicLeapHeadTrackingError Error; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float Confidence; // 0x04(0x04)
};

