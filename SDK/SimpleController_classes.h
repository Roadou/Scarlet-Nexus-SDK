// Class SimpleController.SimpleControllerBPLibrary
// Size: 0x158 (Inherited: 0x28)
struct USimpleControllerBPLibrary : UBlueprintFunctionLibrary {
	struct FMulticastInlineDelegate onButtonDownEventDelegate; // 0x28(0x10)
	struct FMulticastInlineDelegate onButtonUpEventDelegate; // 0x38(0x10)
	struct FMulticastInlineDelegate onDirectionalPadEventDelegate; // 0x48(0x10)
	struct FMulticastInlineDelegate onBallMovedEventDelegate; // 0x58(0x10)
	struct FMulticastInlineDelegate onaxisMovedEventDelegate; // 0x68(0x10)
	struct FMulticastInlineDelegate ondeviceAttachedEventDelegate; // 0x78(0x10)
	struct FMulticastInlineDelegate ondeviceDetachedEventDelegate; // 0x88(0x10)
	char pad_98[0xc0]; // 0x98(0xc0)

	struct FSimpleControllerForceFeedbackEffect uploadAndRunForceFeedbackEffect(bool successful, struct FString errorMessage, struct FSimpleControllerForceFeedbackEffect ForceFeedbackEffect, int32_t iterations); // Function SimpleController.SimpleControllerBPLibrary.uploadAndRunForceFeedbackEffect // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa13980
	void stopController(); // Function SimpleController.SimpleControllerBPLibrary.stopController // (Final|Native|Public|BlueprintCallable) // @ game+0xa13960
	void simpleRumble(struct FSimpleControllerDevice device, int32_t low_runble, int32_t high_rumble, int32_t Duration); // Function SimpleController.SimpleControllerBPLibrary.simpleRumble // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xa13790
	bool saveMapping(enum class ESimpleControllerDirectoryType directoryType, int32_t deviceIndex, struct FString fileNameWithPath, bool createDirectory); // Function SimpleController.SimpleControllerBPLibrary.saveMapping // (Final|Native|Public|BlueprintCallable) // @ game+0xa13600
	void rumble(bool successful, struct FString errorMessage, struct FSimpleControllerDevice device, float strengthSmallMotor, float strengthLargeMotor, int32_t lengthInMilliseconds); // Function SimpleController.SimpleControllerBPLibrary.rumble // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xa13350
	void resetButtonToDefaultMapping(int32_t deviceIndex, int32_t oldButtonID); // Function SimpleController.SimpleControllerBPLibrary.resetButtonToDefaultMapping // (Final|Native|Public|BlueprintCallable) // @ game+0xa13290
	void resetAxisToDefaultMapping(int32_t deviceIndex, int32_t oldAxisID); // Function SimpleController.SimpleControllerBPLibrary.resetAxisToDefaultMapping // (Final|Native|Public|BlueprintCallable) // @ game+0xa131d0
	void resetAxisInverting(int32_t deviceIndex, int32_t axisID); // Function SimpleController.SimpleControllerBPLibrary.resetAxisInverting // (Final|Native|Public|BlueprintCallable) // @ game+0xa13110
	void resetAllButtonsToDefaultMapping(int32_t deviceIndex); // Function SimpleController.SimpleControllerBPLibrary.resetAllButtonsToDefaultMapping // (Final|Native|Public|BlueprintCallable) // @ game+0xa13090
	void resetAllAxisToDefaultMapping(int32_t deviceIndex); // Function SimpleController.SimpleControllerBPLibrary.resetAllAxisToDefaultMapping // (Final|Native|Public|BlueprintCallable) // @ game+0xa13010
	void resetAllAxisInverting(int32_t deviceIndex); // Function SimpleController.SimpleControllerBPLibrary.resetAllAxisInverting // (Final|Native|Public|BlueprintCallable) // @ game+0xa12f90
	void OnButtonUpEvent(struct FString DeviceID, int32_t buttonID, int32_t deviceIndex, struct FSimpleControllerDevice device); // Function SimpleController.SimpleControllerBPLibrary.OnButtonUpEvent // (Final|Native|Public) // @ game+0xa0f4e0
	void OnButtonDownEvent(struct FString DeviceID, int32_t buttonID, int32_t deviceIndex, struct FSimpleControllerDevice device); // Function SimpleController.SimpleControllerBPLibrary.OnButtonDownEvent // (Final|Native|Public) // @ game+0xa0f2a0
	bool loadMapping(enum class ESimpleControllerDirectoryType directoryType, int32_t deviceIndex, struct FString fileNameWithPath); // Function SimpleController.SimpleControllerBPLibrary.loadMapping // (Final|Native|Public|BlueprintCallable) // @ game+0xa12e20
	void invertAxis(int32_t deviceIndex, int32_t axisID); // Function SimpleController.SimpleControllerBPLibrary.invertAxis // (Final|Native|Public|BlueprintCallable) // @ game+0xa12d60
	void initController(float refreshRateButtonsAndAxis); // Function SimpleController.SimpleControllerBPLibrary.initController // (Final|Native|Public|BlueprintCallable) // @ game+0xa12ce0
	struct USimpleControllerBPLibrary* getSimpleControllerTarget(); // Function SimpleController.SimpleControllerBPLibrary.getSimpleControllerTarget // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xa12cb0
	struct TArray<struct FSimpleControllerDevice> getConnectedControllers(); // Function SimpleController.SimpleControllerBPLibrary.getConnectedControllers // (Final|Native|Public|BlueprintCallable) // @ game+0xa12b30
	struct FSimpleControllerDevice findControllerByDeviceIndex(int32_t deviceIndex, bool found); // Function SimpleController.SimpleControllerBPLibrary.findControllerByDeviceIndex // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xa129d0
	struct FSimpleControllerDevice findControllerByDeviceID(struct FString DeviceID, bool found); // Function SimpleController.SimpleControllerBPLibrary.findControllerByDeviceID // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xa12820
	void directionalPadEventDelegate__DelegateSignature(struct FString DeviceID, int32_t directionalPadValue, int32_t deviceIndex, struct FSimpleControllerDevice device); // DelegateFunction SimpleController.SimpleControllerBPLibrary.directionalPadEventDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1685580
	void directionalPadEventDelegate(struct FString DeviceID, int32_t directionalPadValue, int32_t deviceIndex, struct FSimpleControllerDevice device); // Function SimpleController.SimpleControllerBPLibrary.directionalPadEventDelegate // (Final|Native|Public) // @ game+0xa10b60
	void directinalPadValueToDirection(int32_t directionalPadValue, enum class ESimpleControllerDirectionalPad Direction); // Function SimpleController.SimpleControllerBPLibrary.directinalPadValueToDirection // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa12760
	void deviceDetachedEventDelegate__DelegateSignature(struct FSimpleControllerDevice device); // DelegateFunction SimpleController.SimpleControllerBPLibrary.deviceDetachedEventDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1685580
	void deviceDetachedEventDelegate(struct FSimpleControllerDevice device); // Function SimpleController.SimpleControllerBPLibrary.deviceDetachedEventDelegate // (Final|Native|Public) // @ game+0xa12640
	void deviceAttachedEventDelegate__DelegateSignature(struct FSimpleControllerDevice device); // DelegateFunction SimpleController.SimpleControllerBPLibrary.deviceAttachedEventDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1685580
	void deviceAttachedEventDelegate(struct FSimpleControllerDevice device); // Function SimpleController.SimpleControllerBPLibrary.deviceAttachedEventDelegate // (Final|Native|Public) // @ game+0xa12640
	void destroyForceFeedbackEffect(struct FSimpleControllerForceFeedbackEffect ForceFeedbackEffect); // Function SimpleController.SimpleControllerBPLibrary.destroyForceFeedbackEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xa125b0
	void createForceFeedbackEffectRamp(struct FSimpleControllerForceFeedbackEffect ForceFeedbackEffect, bool successful, struct FString errorMessage, struct FSimpleControllerDevice device, enum class ESimpleControllerForceFeedbackDirectionType directionType, int32_t directionX, int32_t directionY, int32_t directionZ, int32_t Length, int32_t Delay, float startLevel, float endLevel, int32_t attackLength, float attackLevel, int32_t fadeLength, float fadeLevel); // Function SimpleController.SimpleControllerBPLibrary.createForceFeedbackEffectRamp // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xa12080
	void createForceFeedbackEffectPeriodic(struct FSimpleControllerForceFeedbackEffect ForceFeedbackEffect, bool successful, struct FString errorMessage, struct FSimpleControllerDevice device, enum class ESimpleControllerForceFeedbackEffectPeriodicType PeriodicType, enum class ESimpleControllerForceFeedbackDirectionType directionType, int32_t directionX, int32_t directionY, int32_t directionZ, int32_t Length, int32_t Delay, int32_t Period, float magnitude, int32_t Offset, int32_t phase, int32_t attackLength, float attackLevel, int32_t fadeLength, float fadeLevel); // Function SimpleController.SimpleControllerBPLibrary.createForceFeedbackEffectPeriodic // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xa11a90
	void createForceFeedbackEffectConstant(struct FSimpleControllerForceFeedbackEffect ForceFeedbackEffect, bool successful, struct FString errorMessage, struct FSimpleControllerDevice device, enum class ESimpleControllerForceFeedbackDirectionType directionType, int32_t directionX, int32_t directionY, int32_t directionZ, int32_t Length, int32_t Delay, float Level, int32_t attackLength, float attackLevel, int32_t fadeLength, float fadeLevel); // Function SimpleController.SimpleControllerBPLibrary.createForceFeedbackEffectConstant // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xa115a0
	void createForceFeedbackEffectCondition(struct FSimpleControllerForceFeedbackEffect ForceFeedbackEffect, bool successful, struct FString errorMessage, struct FSimpleControllerDevice device, enum class ESimpleControllerForceFeedbackEffectConditionType ConditionType, bool useDirectionX, bool useDirectionY, bool useDirectionZ, int32_t Length, int32_t Delay, float rightLevel, float leftLevel, int32_t rightLevelIncreaseSpeed, int32_t leftLevelIncreaseSpeed, float deadband, int32_t Center); // Function SimpleController.SimpleControllerBPLibrary.createForceFeedbackEffectCondition // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xa11060
	void changeButtonMapping(int32_t deviceIndex, int32_t oldButtonID, int32_t newButtonID); // Function SimpleController.SimpleControllerBPLibrary.changeButtonMapping // (Final|Native|Public|BlueprintCallable) // @ game+0xa10f60
	void changeAxisMapping(int32_t deviceIndex, int32_t oldAxisID, int32_t newAxisID); // Function SimpleController.SimpleControllerBPLibrary.changeAxisMapping // (Final|Native|Public|BlueprintCallable) // @ game+0xa10e60
	void buttonUpEventDelegate__DelegateSignature(struct FString DeviceID, int32_t buttonID, int32_t deviceIndex, struct FSimpleControllerDevice device); // DelegateFunction SimpleController.SimpleControllerBPLibrary.buttonUpEventDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1685580
	void buttonUpEventDelegate(struct FString DeviceID, int32_t buttonID, int32_t deviceIndex, struct FSimpleControllerDevice device); // Function SimpleController.SimpleControllerBPLibrary.buttonUpEventDelegate // (Final|Native|Public) // @ game+0xa10b60
	void buttonIDToButton(int32_t buttonID, enum class ESimpleControllerButtons buttons); // Function SimpleController.SimpleControllerBPLibrary.buttonIDToButton // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa10da0
	void buttonDownEventDelegate__DelegateSignature(struct FString DeviceID, int32_t buttonID, int32_t deviceIndex, struct FSimpleControllerDevice device); // DelegateFunction SimpleController.SimpleControllerBPLibrary.buttonDownEventDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1685580
	void buttonDownEventDelegate(struct FString DeviceID, int32_t buttonID, int32_t deviceIndex, struct FSimpleControllerDevice device); // Function SimpleController.SimpleControllerBPLibrary.buttonDownEventDelegate // (Final|Native|Public) // @ game+0xa10b60
	void breakForceFeedbackEffect(struct FSimpleControllerForceFeedbackEffect ForceFeedbackEffect, int32_t effectID, bool successful); // Function SimpleController.SimpleControllerBPLibrary.breakForceFeedbackEffect // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa10a10
	void breakDeviceInfo(struct FSimpleControllerDevice device, int32_t deviceIndex, int32_t connectionIndex, struct FString DeviceID, struct FString deviceName, struct FString controllerName, int32_t vendorID, int32_t productID, int32_t numAxes, int32_t numButtons, int32_t numDirectionalPadAxes, int32_t numBalls, bool hasHaptic); // Function SimpleController.SimpleControllerBPLibrary.breakDeviceInfo // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa104c0
	void breakDeviceForceFeedbackInfo(struct FSimpleControllerDevice device, bool hasHaptic, bool forceFeedback_CONSTANT, bool forceFeedback_SINE, bool forceFeedback_LEFTRIGHT, bool forceFeedback_TRIANGLE, bool forceFeedback_SAWTOOTHUP, bool forceFeedback_SAWTOOTHDOWN, bool forceFeedback_RAMP, bool forceFeedback_SPRING, bool forceFeedback_DAMPER, bool forceFeedback_INERTIA, bool forceFeedback_FRICTION, bool forceFeedback_CUSTOM, bool forceFeedback_GAIN, bool forceFeedback_AUTOCENTER, bool forceFeedback_STATUS, bool forceFeedback_PAUSE, bool forceFeedback_POLAR, bool forceFeedback_CARTESIAN, bool forceFeedback_SPHERICAL, bool forceFeedback_INFINITY, int32_t maxSimultaneouslyEffects); // Function SimpleController.SimpleControllerBPLibrary.breakDeviceForceFeedbackInfo // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa0fc30
	void ballMovedEventDelegate__DelegateSignature(struct FString DeviceID, int32_t ballID, float xRel, int32_t yRel, struct FSimpleControllerDevice device); // DelegateFunction SimpleController.SimpleControllerBPLibrary.ballMovedEventDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1685580
	void ballMovedEventDelegate(struct FString DeviceID, int32_t ballID, int32_t xRel, int32_t yRel, struct FSimpleControllerDevice device); // Function SimpleController.SimpleControllerBPLibrary.ballMovedEventDelegate // (Final|Native|Public) // @ game+0xa0f9b0
	void axisMovedEventDelegate__DelegateSignature(struct FString DeviceID, int32_t axisID, float AxisValue, int32_t deviceIndex, struct FSimpleControllerDevice device); // DelegateFunction SimpleController.SimpleControllerBPLibrary.axisMovedEventDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1685580
	void axisMovedEventDelegate(struct FString DeviceID, int32_t axisID, float AxisValue, int32_t deviceIndex, struct FSimpleControllerDevice device); // Function SimpleController.SimpleControllerBPLibrary.axisMovedEventDelegate // (Final|Native|Public) // @ game+0xa0f720
};
