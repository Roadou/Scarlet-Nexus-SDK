// Enum HeadMountedDisplay.EXRTrackedDeviceType
enum class EXRTrackedDeviceType : uint8 {
	HeadMountedDisplay,
	Controller,
	TrackingReference,
	Other,
	Invalid,
	Any,
	EXRTrackedDeviceType_MAX,
};

// Enum HeadMountedDisplay.ESpectatorScreenMode
enum class ESpectatorScreenMode : uint8 {
	Disabled,
	SingleEyeLetterboxed,
	Undistorted,
	Distorted,
	SingleEye,
	SingleEyeCroppedToFill,
	Texture,
	TexturePlusEye,
	ESpectatorScreenMode_MAX,
};

// Enum HeadMountedDisplay.EHMDWornState
enum class EHMDWornState : uint8 {
	Unknown,
	Worn,
	NotWorn,
	EHMDWornState_MAX,
};

// Enum HeadMountedDisplay.EHMDTrackingOrigin
enum class EHMDTrackingOrigin : uint8 {
	Floor,
	Eye,
	Stage,
	EHMDTrackingOrigin_MAX,
};

// Enum HeadMountedDisplay.EOrientPositionSelector
enum class EOrientPositionSelector : uint8 {
	Orientation,
	Position,
	OrientationAndPosition,
	EOrientPositionSelector_MAX,
};

// Enum HeadMountedDisplay.ETrackingStatus
enum class ETrackingStatus : uint8 {
	NotTracked,
	InertialOnly,
	Tracked,
	ETrackingStatus_MAX,
};

// ScriptStruct HeadMountedDisplay.XRDeviceId
// Size: 0x0c (Inherited: 0x00)
struct FXRDeviceId {
	struct FName SystemName; // 0x00(0x08)
	int32_t DeviceID; // 0x08(0x04)
};

