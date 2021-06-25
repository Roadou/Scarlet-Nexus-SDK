// Class MagicLeapController.MagicLeapControllerFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapControllerFunctionLibrary : UBlueprintFunctionLibrary {

	bool SetMotionSourceForHand(enum class EControllerHand Hand, struct FName MotionSource); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetMotionSourceForHand // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7bcbc0
	bool SetControllerTrackingMode(enum class EMagicLeapControllerTrackingMode TrackingMode); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetControllerTrackingMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7bc2d0
	bool PlayLEDPattern(struct FName MotionSource, enum class EMagicLeapControllerLEDPattern LEDPattern, enum class EMagicLeapControllerLEDColor LEDColor, float DurationInSec); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDPattern // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7bca80
	bool PlayLEDEffect(struct FName MotionSource, enum class EMagicLeapControllerLEDEffect LEDEffect, enum class EMagicLeapControllerLEDSpeed LEDSpeed, enum class EMagicLeapControllerLEDPattern LEDPattern, enum class EMagicLeapControllerLEDColor LEDColor, float DurationInSec); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7bc8d0
	bool PlayHapticPattern(struct FName MotionSource, enum class EMagicLeapControllerHapticPattern HapticPattern, enum class EMagicLeapControllerHapticIntensity Intensity); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayHapticPattern // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7bc7e0
	bool PlayControllerLEDEffect(enum class EControllerHand Hand, enum class EMagicLeapControllerLEDEffect LEDEffect, enum class EMagicLeapControllerLEDSpeed LEDSpeed, enum class EMagicLeapControllerLEDPattern LEDPattern, enum class EMagicLeapControllerLEDColor LEDColor, float DurationInSec); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLEDEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7bc630
	bool PlayControllerLED(enum class EControllerHand Hand, enum class EMagicLeapControllerLEDPattern LEDPattern, enum class EMagicLeapControllerLEDColor LEDColor, float DurationInSec); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLED // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7bc4f0
	bool PlayControllerHapticFeedback(enum class EControllerHand Hand, enum class EMagicLeapControllerHapticPattern HapticPattern, enum class EMagicLeapControllerHapticIntensity Intensity); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerHapticFeedback // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7bc3f0
	int32_t MaxSupportedMagicLeapControllers(); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.MaxSupportedMagicLeapControllers // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7aed90
	bool IsMLControllerConnected(struct FName MotionSource); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.IsMLControllerConnected // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x7bc1d0
	void InvertControllerMapping(); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.InvertControllerMapping // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7bc3d0
	struct FName GetMotionSourceForHand(enum class EControllerHand Hand); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMotionSourceForHand // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7bc350
	enum class EMagicLeapControllerType GetMLControllerType(enum class EControllerHand Hand); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMLControllerType // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x7bc2d0
	enum class EControllerHand GetHandForMotionSource(struct FName MotionSource); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetHandForMotionSource // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7bc250
	enum class EMagicLeapControllerType GetControllerType(struct FName MotionSource); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerType // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x7bc1d0
	enum class EMagicLeapControllerTrackingMode GetControllerTrackingMode(); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerTrackingMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7bc1a0
	bool GetControllerMapping(int32_t ControllerIndex, enum class EControllerHand Hand); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerMapping // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7bc0d0
};

// Class MagicLeapController.MagicLeapTouchpadGesturesComponent
// Size: 0x150 (Inherited: 0xc0)
struct UMagicLeapTouchpadGesturesComponent : UActorComponent {
	char pad_C0[0x8]; // 0xc0(0x08)
	struct FMulticastInlineDelegate OnTouchpadGestureStart; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnTouchpadGestureContinue; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnTouchpadGestureEnd; // 0xe8(0x10)
	char pad_F8[0x58]; // 0xf8(0x58)
};

