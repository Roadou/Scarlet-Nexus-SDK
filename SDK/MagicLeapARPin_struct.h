// Enum MagicLeapARPin.EMagicLeapAutoPinType
enum class EMagicLeapAutoPinType : uint8 {
	OnlyOnDataRestoration,
	Always,
	Never,
	EMagicLeapAutoPinType_MAX,
};

// Enum MagicLeapARPin.EMagicLeapPassableWorldError
enum class EMagicLeapPassableWorldError : uint8 {
	None,
	LowMapQuality,
	UnableToLocalize,
	Unavailable,
	PrivilegeDenied,
	InvalidParam,
	UnspecifiedFailure,
	PrivilegeRequestPending,
	StartupPending,
	NotImplemented,
	PinNotFound,
	EMagicLeapPassableWorldError_MAX,
};

// ScriptStruct MagicLeapARPin.MagicLeapARPinState
// Size: 0x10 (Inherited: 0x00)
struct FMagicLeapARPinState {
	float Confidence; // 0x00(0x04)
	float ValidRadius; // 0x04(0x04)
	float RotationError; // 0x08(0x04)
	float TranslationError; // 0x0c(0x04)
};

