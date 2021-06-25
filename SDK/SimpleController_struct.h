// Enum SimpleController.ESimpleControllerButtons
enum class ESimpleControllerButtons : uint8 {
	Button_1,
	Button_2,
	Button_3,
	Button_4,
	Button_5,
	Button_6,
	Button_7,
	Button_8,
	Button_9,
	Button_10,
	Button_11,
	Button_12,
	Button_13,
	Button_14,
	Button_15,
	Button_16,
	Button_17,
	Button_18,
	Button_19,
	Button_20,
	Button_21,
	Button_MAX,
};

// Enum SimpleController.ESimpleControllerForceFeedbackEffectConditionType
enum class ESimpleControllerForceFeedbackEffectConditionType : uint8 {
	SPRING,
	DAMPER,
	INERTIA,
	FRICTION,
	ESimpleControllerForceFeedbackEffectConditionType_MAX,
};

// Enum SimpleController.ESimpleControllerForceFeedbackDirectionType
enum class ESimpleControllerForceFeedbackDirectionType : uint8 {
	CARTESIAN,
	POLAR,
	SPHERICAL,
	ESimpleControllerForceFeedbackDirectionType_MAX,
};

// Enum SimpleController.ESimpleControllerForceFeedbackEffectPeriodicType
enum class ESimpleControllerForceFeedbackEffectPeriodicType : uint8 {
	SINE,
	TRIANGLE,
	SAWTOOTHUP,
	SAWTOOTHDOWN,
	ESimpleControllerForceFeedbackEffectPeriodicType_MAX,
};

// Enum SimpleController.ESimpleControllerDirectionalPad
enum class ESimpleControllerDirectionalPad : uint8 {
	CENTERED,
	UP,
	RIGHT,
	DOWN,
	LEFT,
	RIGHTUP,
	RIGHTDOWN,
	LEFTUP,
	LEFTDOWN,
	ESimpleControllerDirectionalPad_MAX,
};

// Enum SimpleController.ESimpleControllerDirectoryType
enum class ESimpleControllerDirectoryType : uint8 {
	GameDir,
	AbsoluteDir,
	ESimpleControllerDirectoryType_MAX,
};

// Enum SimpleController.ESimpleControllerForceFeedbackEffectType
enum class ESimpleControllerForceFeedbackEffectType : uint8 {
	CONSTANT,
	LEFTRIGHT,
	ESimpleControllerForceFeedbackEffectType_MAX,
};

// ScriptStruct SimpleController.SimpleControllerDevice
// Size: 0x180 (Inherited: 0x00)
struct FSimpleControllerDevice {
	char pad_0[0x180]; // 0x00(0x180)
};

// ScriptStruct SimpleController.SimpleControllerForceFeedbackEffect
// Size: 0x18 (Inherited: 0x00)
struct FSimpleControllerForceFeedbackEffect {
	char pad_0[0x18]; // 0x00(0x18)
};

