// Enum MagicLeapEyeTracker.EMagicLeapEyeTrackingCalibrationStatus
enum class EMagicLeapEyeTrackingCalibrationStatus : uint8 {
	None,
	Bad,
	Good,
	EMagicLeapEyeTrackingCalibrationStatus_MAX,
};

// Enum MagicLeapEyeTracker.EMagicLeapEyeTrackingStatus
enum class EMagicLeapEyeTrackingStatus : uint8 {
	NotConnected,
	Disabled,
	UserNotPresent,
	UserPresent,
	UserPresentAndWatchingWindow,
	EMagicLeapEyeTrackingStatus_MAX,
};

// ScriptStruct MagicLeapEyeTracker.MagicLeapEyeBlinkState
// Size: 0x02 (Inherited: 0x00)
struct FMagicLeapEyeBlinkState {
	bool LeftEyeBlinked; // 0x00(0x01)
	bool RightEyeBlinked; // 0x01(0x01)
};

