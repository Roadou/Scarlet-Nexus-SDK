// Class MagicLeapLightEstimation.MagicLeapLightingTrackingComponent
// Size: 0xd0 (Inherited: 0xc0)
struct UMagicLeapLightingTrackingComponent : UActorComponent {
	bool UseGlobalAmbience; // 0xc0(0x01)
	bool UseColorTemp; // 0xc1(0x01)
	char pad_C2[0xe]; // 0xc2(0x0e)
};

// Class MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapLightEstimationFunctionLibrary : UBlueprintFunctionLibrary {

	bool IsTrackerValid(); // Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.IsTrackerValid // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x7de8e0
	bool GetColorTemperatureState(struct FMagicLeapLightEstimationColorTemperatureState ColorTemperatureState); // Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetColorTemperatureState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7de850
	bool GetAmbientGlobalState(struct FMagicLeapLightEstimationAmbientGlobalState GlobalAmbientState); // Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetAmbientGlobalState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7de7a0
	void DestroyTracker(); // Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.DestroyTracker // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7de780
	bool CreateTracker(); // Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.CreateTracker // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7de750
};

