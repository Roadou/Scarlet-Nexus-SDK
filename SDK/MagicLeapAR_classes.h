// Class MagicLeapAR.LuminARSessionFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct ULuminARSessionFunctionLibrary : UBlueprintFunctionLibrary {

	void StartLuminARSession(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct ULuminARSessionConfig* Configuration); // Function MagicLeapAR.LuminARSessionFunctionLibrary.StartLuminARSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7b3ee0
};

// Class MagicLeapAR.LuminARFrameFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct ULuminARFrameFunctionLibrary : UBlueprintFunctionLibrary {

	bool LuminARLineTrace(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct TSet<enum class ELuminARLineTraceChannel> TraceChannels, struct TArray<struct FARTraceResult> OutHitResults); // Function MagicLeapAR.LuminARFrameFunctionLibrary.LuminARLineTrace // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7b3c20
	enum class ELuminARTrackingState GetTrackingState(); // Function MagicLeapAR.LuminARFrameFunctionLibrary.GetTrackingState // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x7b3bd0
};

// Class MagicLeapAR.LuminARImageTrackingFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct ULuminARImageTrackingFunctionLibrary : UBlueprintFunctionLibrary {

	struct ULuminARCandidateImage* AddLuminRuntimeCandidateImage(struct UARSessionConfig* SessionConfig, struct UTexture2D* CandidateTexture, struct FString FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary); // Function MagicLeapAR.LuminARImageTrackingFunctionLibrary.AddLuminRuntimeCandidateImage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7b38e0
};

// Class MagicLeapAR.LuminARSessionConfig
// Size: 0x140 (Inherited: 0xa8)
struct ULuminARSessionConfig : UARSessionConfig {
	char pad_A8[0x8]; // 0xa8(0x08)
	struct FMagicLeapPlanesQuery PlanesQuery; // 0xb0(0x60)
	int32_t MaxPlaneQueryResults; // 0x110(0x04)
	int32_t MinPlaneArea; // 0x114(0x04)
	bool bArbitraryOrientationPlaneDetection; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	struct FVector PlaneSearchExtents; // 0x11c(0x0c)
	struct TArray<enum class EMagicLeapPlaneQueryFlags> PlaneQueryFlags; // 0x128(0x10)
	bool bDiscardZeroExtentPlanes; // 0x138(0x01)
	bool bDefaultUseUnreliablePose; // 0x139(0x01)
	char pad_13A[0x6]; // 0x13a(0x06)
};

// Class MagicLeapAR.LuminARLightEstimate
// Size: 0x50 (Inherited: 0x40)
struct ULuminARLightEstimate : UARBasicLightEstimate {
	struct TArray<float> AmbientIntensityNits; // 0x40(0x10)

	struct TArray<float> GetAmbientIntensityNits(); // Function MagicLeapAR.LuminARLightEstimate.GetAmbientIntensityNits // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b3af0
};

// Class MagicLeapAR.LuminARCandidateImage
// Size: 0x60 (Inherited: 0x58)
struct ULuminARCandidateImage : UARCandidateImage {
	bool bUseUnreliablePose; // 0x58(0x01)
	bool bImageIsStationary; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)

	bool GetUseUnreliablePose(); // Function MagicLeapAR.LuminARCandidateImage.GetUseUnreliablePose // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b3c00
	bool GetImageIsStationary(); // Function MagicLeapAR.LuminARCandidateImage.GetImageIsStationary // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b3bb0
};

