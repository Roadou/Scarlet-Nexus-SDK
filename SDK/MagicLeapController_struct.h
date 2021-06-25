// Enum MagicLeapController.EMagicLeapTouchpadGestureDirection
enum class EMagicLeapTouchpadGestureDirection : uint8 {
	None,
	Up,
	Down,
	Left,
	Right,
	In,
	Out,
	Clockwise,
	CounterClockwise,
	EMagicLeapTouchpadGestureDirection_MAX,
};

// Enum MagicLeapController.EMagicLeapTouchpadGestureType
enum class EMagicLeapTouchpadGestureType : uint8 {
	None,
	Tap,
	ForceTapDown,
	ForceTapUp,
	ForceDwell,
	SecondForceDown,
	LongHold,
	RadialScroll,
	Swipe,
	Scroll,
	Pinch,
	EMagicLeapTouchpadGestureType_MAX,
};

// Enum MagicLeapController.EMagicLeapControllerTrackingMode
enum class EMagicLeapControllerTrackingMode : uint8 {
	InputService,
	CoordinateFrameUID,
	EMagicLeapControllerTrackingMode_MAX,
};

// Enum MagicLeapController.EMagicLeapControllerHapticIntensity
enum class EMagicLeapControllerHapticIntensity : uint8 {
	Low,
	Medium,
	High,
	EMagicLeapControllerHapticIntensity_MAX,
};

// Enum MagicLeapController.EMagicLeapControllerHapticPattern
enum class EMagicLeapControllerHapticPattern : uint8 {
	None,
	Click,
	Bump,
	DoubleClick,
	Buzz,
	Tick,
	ForceDown,
	ForceUp,
	ForceDwell,
	SecondForceDown,
	EMagicLeapControllerHapticPattern_MAX,
};

// Enum MagicLeapController.EMagicLeapControllerLEDSpeed
enum class EMagicLeapControllerLEDSpeed : uint8 {
	Slow,
	Medium,
	Fast,
	EMagicLeapControllerLEDSpeed_MAX,
};

// Enum MagicLeapController.EMagicLeapControllerLEDColor
enum class EMagicLeapControllerLEDColor : uint8 {
	BrightMissionRed,
	PastelMissionRed,
	BrightFloridaOrange,
	PastelFloridaOrange,
	BrightLunaYellow,
	PastelLunaYellow,
	BrightNebulaPink,
	PastelNebulaPink,
	BrightCosmicPurple,
	PastelCosmicPurple,
	BrightMysticBlue,
	PastelMysticBlue,
	BrightCelestialBlue,
	PastelCelestialBlue,
	BrightShaggleGreen,
	PastelShaggleGreen,
	EMagicLeapControllerLEDColor_MAX,
};

// Enum MagicLeapController.EMagicLeapControllerLEDEffect
enum class EMagicLeapControllerLEDEffect : uint8 {
	RotateCW,
	RotateCCW,
	Pulse,
	PaintCW,
	PaintCCW,
	Blink,
	EMagicLeapControllerLEDEffect_MAX,
};

// Enum MagicLeapController.EMagicLeapControllerLEDPattern
enum class EMagicLeapControllerLEDPattern : uint8 {
	None,
	Clock01,
	Clock02,
	Clock03,
	Clock04,
	Clock05,
	Clock06,
	Clock07,
	Clock08,
	Clock09,
	Clock10,
	Clock11,
	Clock12,
	Clock01_07,
	Clock02_08,
	Clock03_09,
	Clock04_11,
	Clock05_12,
	Clock06_13,
	EMagicLeapControllerLEDPattern_MAX,
};

// Enum MagicLeapController.EMagicLeapControllerType
enum class EMagicLeapControllerType : uint8 {
	None,
	Device,
	MobileApp,
	EMagicLeapControllerType_MAX,
};

// ScriptStruct MagicLeapController.MagicLeapTouchpadGesture
// Size: 0x30 (Inherited: 0x00)
struct FMagicLeapTouchpadGesture {
	enum class EControllerHand Hand; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName MotionSource; // 0x04(0x08)
	enum class EMagicLeapTouchpadGestureType Type; // 0x0c(0x01)
	enum class EMagicLeapTouchpadGestureDirection Direction; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct FVector PositionAndForce; // 0x10(0x0c)
	float Speed; // 0x1c(0x04)
	float Distance; // 0x20(0x04)
	float FingerGap; // 0x24(0x04)
	float Radius; // 0x28(0x04)
	float Angle; // 0x2c(0x04)
};

