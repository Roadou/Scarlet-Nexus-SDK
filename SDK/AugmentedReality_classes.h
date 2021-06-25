// Class AugmentedReality.ARSessionConfig
// Size: 0xa8 (Inherited: 0x30)
struct UARSessionConfig : UDataAsset {
	bool bGenerateMeshDataFromTrackedGeometry; // 0x30(0x01)
	bool bGenerateCollisionForMeshData; // 0x31(0x01)
	bool bGenerateNavMeshForMeshData; // 0x32(0x01)
	bool bUseMeshDataForOcclusion; // 0x33(0x01)
	bool bRenderMeshDataInWireframe; // 0x34(0x01)
	bool bTrackSceneObjects; // 0x35(0x01)
	bool bUsePersonSegmentationForOcclusion; // 0x36(0x01)
	enum class EARWorldAlignment WorldAlignment; // 0x37(0x01)
	enum class EARSessionType SessionType; // 0x38(0x01)
	enum class EARPlaneDetectionMode PlaneDetectionMode; // 0x39(0x01)
	bool bHorizontalPlaneDetection; // 0x3a(0x01)
	bool bVerticalPlaneDetection; // 0x3b(0x01)
	bool bEnableAutoFocus; // 0x3c(0x01)
	enum class EARLightEstimationMode LightEstimationMode; // 0x3d(0x01)
	enum class EARFrameSyncMode FrameSyncMode; // 0x3e(0x01)
	bool bEnableAutomaticCameraOverlay; // 0x3f(0x01)
	bool bEnableAutomaticCameraTracking; // 0x40(0x01)
	bool bResetCameraTracking; // 0x41(0x01)
	bool bResetTrackedObjects; // 0x42(0x01)
	char pad_43[0x5]; // 0x43(0x05)
	struct TArray<struct UARCandidateImage*> CandidateImages; // 0x48(0x10)
	int32_t MaxNumSimultaneousImagesTracked; // 0x58(0x04)
	enum class EAREnvironmentCaptureProbeType EnvironmentCaptureProbeType; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct TArray<char> WorldMapData; // 0x60(0x10)
	struct TArray<struct UARCandidateObject*> CandidateObjects; // 0x70(0x10)
	struct FARVideoFormat DesiredVideoFormat; // 0x80(0x0c)
	enum class EARFaceTrackingDirection FaceTrackingDirection; // 0x8c(0x01)
	enum class EARFaceTrackingUpdate FaceTrackingUpdate; // 0x8d(0x01)
	char pad_8E[0x2]; // 0x8e(0x02)
	struct TArray<char> SerializedARCandidateImageDatabase; // 0x90(0x10)
	enum class EARSessionTrackingFeature EnabledSessionTrackingFeature; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)

	bool ShouldResetTrackedObjects(); // Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x212e6f0
	bool ShouldResetCameraTracking(); // Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x212e6c0
	bool ShouldRenderCameraOverlay(); // Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11ad530
	bool ShouldEnableCameraTracking(); // Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x212e690
	bool ShouldEnableAutoFocus(); // Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x212e660
	void SetWorldMapData(struct TArray<char> WorldMapData); // Function AugmentedReality.ARSessionConfig.SetWorldMapData // (Final|Native|Public|BlueprintCallable) // @ game+0x212e580
	void SetSessionTrackingFeatureToEnable(enum class EARSessionTrackingFeature InSessionTrackingFeature); // Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable // (Final|Native|Public|BlueprintCallable) // @ game+0x212e500
	void SetResetTrackedObjects(bool bNewValue); // Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects // (Final|Native|Public|BlueprintCallable) // @ game+0x212e470
	void SetResetCameraTracking(bool bNewValue); // Function AugmentedReality.ARSessionConfig.SetResetCameraTracking // (Final|Native|Public|BlueprintCallable) // @ game+0x212e3e0
	void SetFaceTrackingUpdate(enum class EARFaceTrackingUpdate InUpdate); // Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x212e360
	void SetFaceTrackingDirection(enum class EARFaceTrackingDirection InDirection); // Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection // (Final|Native|Public|BlueprintCallable) // @ game+0x212e2e0
	void SetEnableAutoFocus(bool bNewValue); // Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x212e250
	void SetDesiredVideoFormat(struct FARVideoFormat NewFormat); // Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat // (Final|Native|Public|BlueprintCallable) // @ game+0x212e1b0
	void SetCandidateObjectList(struct TArray<struct UARCandidateObject*> InCandidateObjects); // Function AugmentedReality.ARSessionConfig.SetCandidateObjectList // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x212e100
	struct TArray<char> GetWorldMapData(); // Function AugmentedReality.ARSessionConfig.GetWorldMapData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x212d6f0
	enum class EARWorldAlignment GetWorldAlignment(); // Function AugmentedReality.ARSessionConfig.GetWorldAlignment // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x212d6c0
	enum class EARSessionType GetSessionType(); // Function AugmentedReality.ARSessionConfig.GetSessionType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x12c1640
	enum class EARPlaneDetectionMode GetPlaneDetectionMode(); // Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x212d2f0
	int32_t GetMaxNumSimultaneousImagesTracked(); // Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x212d260
	enum class EARLightEstimationMode GetLightEstimationMode(); // Function AugmentedReality.ARSessionConfig.GetLightEstimationMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x212cf30
	enum class EARFrameSyncMode GetFrameSyncMode(); // Function AugmentedReality.ARSessionConfig.GetFrameSyncMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x212cf00
	enum class EARFaceTrackingUpdate GetFaceTrackingUpdate(); // Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x212ced0
	enum class EARFaceTrackingDirection GetFaceTrackingDirection(); // Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x212cea0
	enum class EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType(); // Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x212ce70
	enum class EARSessionTrackingFeature GetEnabledSessionTrackingFeature(); // Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x212ce40
	struct FARVideoFormat GetDesiredVideoFormat(); // Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x212cd00
	struct TArray<struct UARCandidateObject*> GetCandidateObjectList(); // Function AugmentedReality.ARSessionConfig.GetCandidateObjectList // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x212cc00
	struct TArray<struct UARCandidateImage*> GetCandidateImageList(); // Function AugmentedReality.ARSessionConfig.GetCandidateImageList // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x212cb70
	void AddCandidateObject(struct UARCandidateObject* CandidateObject); // Function AugmentedReality.ARSessionConfig.AddCandidateObject // (Final|Native|Public|BlueprintCallable) // @ game+0x212bdd0
	void AddCandidateImage(struct UARCandidateImage* NewCandidateImage); // Function AugmentedReality.ARSessionConfig.AddCandidateImage // (Final|Native|Public|BlueprintCallable) // @ game+0x212bd50
};

// Class AugmentedReality.ARLightEstimate
// Size: 0x28 (Inherited: 0x28)
struct UARLightEstimate : UObject {
};

// Class AugmentedReality.ARBasicLightEstimate
// Size: 0x40 (Inherited: 0x28)
struct UARBasicLightEstimate : UARLightEstimate {
	float AmbientIntensityLumens; // 0x28(0x04)
	float AmbientColorTemperatureKelvin; // 0x2c(0x04)
	struct FLinearColor AmbientColor; // 0x30(0x10)

	float GetAmbientIntensityLumens(); // Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x212cae0
	float GetAmbientColorTemperatureKelvin(); // Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x212cab0
	struct FLinearColor GetAmbientColor(); // Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x212ca70
};

// Class AugmentedReality.ARCandidateImage
// Size: 0x58 (Inherited: 0x30)
struct UARCandidateImage : UDataAsset {
	struct UTexture2D* CandidateTexture; // 0x30(0x08)
	struct FString FriendlyName; // 0x38(0x10)
	float Width; // 0x48(0x04)
	float Height; // 0x4c(0x04)
	enum class EARCandidateImageOrientation Orientation; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)

	float GetPhysicalWidth(); // Function AugmentedReality.ARCandidateImage.GetPhysicalWidth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x21333e0
	float GetPhysicalHeight(); // Function AugmentedReality.ARCandidateImage.GetPhysicalHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x21333c0
	enum class EARCandidateImageOrientation GetOrientation(); // Function AugmentedReality.ARCandidateImage.GetOrientation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2133380
	struct FString GetFriendlyName(); // Function AugmentedReality.ARCandidateImage.GetFriendlyName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x21331c0
	struct UTexture2D* GetCandidateTexture(); // Function AugmentedReality.ARCandidateImage.GetCandidateTexture // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1295150
};

// Class AugmentedReality.ARBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UARBlueprintLibrary : UBlueprintFunctionLibrary {

	void UnpinComponent(struct USceneComponent* ComponentToUnpin); // Function AugmentedReality.ARBlueprintLibrary.UnpinComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x212e7b0
	void StopARSession(); // Function AugmentedReality.ARBlueprintLibrary.StopARSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x212e790
	void StartARSession(struct UARSessionConfig* SessionConfig); // Function AugmentedReality.ARBlueprintLibrary.StartARSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x212e720
	void SetAlignmentTransform(struct FTransform InAlignmentTransform); // Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x212e030
	void RemovePin(struct UARPin* PinToRemove); // Function AugmentedReality.ARBlueprintLibrary.RemovePin // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x212dfc0
	struct UARPin* PinComponentToTraceResult(struct USceneComponent* ComponentToPin, struct FARTraceResult TraceResult, struct FName DebugName); // Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x212de40
	struct UARPin* PinComponent(struct USceneComponent* ComponentToPin, struct FTransform PinToWorldTransform, struct UARTrackedGeometry* TrackedGeometry, struct FName DebugName); // Function AugmentedReality.ARBlueprintLibrary.PinComponent // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x212dca0
	void PauseARSession(); // Function AugmentedReality.ARBlueprintLibrary.PauseARSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x212dc80
	struct TArray<struct FARTraceResult> LineTraceTrackedObjects3D(struct FVector Start, struct FVector End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon); // Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x212d8a0
	struct TArray<struct FARTraceResult> LineTraceTrackedObjects(struct FVector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon); // Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x212dab0
	bool IsSessionTypeSupported(enum class EARSessionType SessionType); // Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x212d820
	bool IsSessionTrackingFeatureSupported(enum class EARSessionType SessionType, enum class EARSessionTrackingFeature SessionTrackingFeature); // Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x212d760
	bool IsARSupported(); // Function AugmentedReality.ARBlueprintLibrary.IsARSupported // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7af460
	enum class EARWorldMappingState GetWorldMappingStatus(); // Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x212d730
	enum class EARTrackingQualityReason GetTrackingQualityReason(); // Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x7b7230
	enum class EARTrackingQuality GetTrackingQuality(); // Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x212d690
	struct TArray<struct FARVideoFormat> GetSupportedVideoFormats(enum class EARSessionType SessionType); // Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x212d3d0
	struct UARSessionConfig* GetSessionConfig(); // Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x212d3a0
	struct TArray<struct FVector> GetPointCloud(); // Function AugmentedReality.ARBlueprintLibrary.GetPointCloud // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x212d320
	struct UARTextureCameraImage* GetPersonSegmentationImage(); // Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x212d2c0
	struct UARTextureCameraImage* GetPersonSegmentationDepthImage(); // Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x212d290
	struct UARLightEstimate* GetCurrentLightEstimate(); // Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x212cc90
	struct UARTextureCameraImage* GetCameraImage(); // Function AugmentedReality.ARBlueprintLibrary.GetCameraImage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x212cb40
	struct UARTextureCameraDepth* GetCameraDepth(); // Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x212cb10
	struct FARSessionStatus GetARSessionStatus(); // Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x212c520
	struct TArray<struct UARTrackedPose*> GetAllTrackedPoses(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x212c9f0
	struct TArray<struct UARTrackedPoint*> GetAllTrackedPoints(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x212c970
	struct TArray<struct UARPlaneGeometry*> GetAllTrackedPlanes(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x212c8f0
	struct TArray<struct UARTrackedImage*> GetAllTrackedImages(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x212c870
	struct TArray<struct UAREnvironmentCaptureProbe*> GetAllTrackedEnvironmentCaptureProbes(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x212c7f0
	struct TArray<struct FARPose2D> GetAllTracked2DPoses(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x212c6b0
	struct TArray<struct UARPin*> GetAllPins(); // Function AugmentedReality.ARBlueprintLibrary.GetAllPins // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x212c630
	struct TArray<struct UARTrackedGeometry*> GetAllGeometries(); // Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x212c5b0
	void DebugDrawTrackedGeometry(struct UARTrackedGeometry* TrackedGeometry, struct UObject* WorldContextObject, struct FLinearColor Color, float OutlineThickness, float PersistForSeconds); // Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x212c390
	void DebugDrawPin(struct UARPin* ARPin, struct UObject* WorldContextObject, struct FLinearColor Color, float Scale, float PersistForSeconds); // Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x212c200
	struct UARCandidateImage* AddRuntimeCandidateImage(struct UARSessionConfig* SessionConfig, struct UTexture2D* CandidateTexture, struct FString FriendlyName, float PhysicalWidth); // Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x212bf30
	bool AddManualEnvironmentCaptureProbe(struct FVector Location, struct FVector Extent); // Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x212be50
};

// Class AugmentedReality.ARTraceResultLibrary
// Size: 0x28 (Inherited: 0x28)
struct UARTraceResultLibrary : UBlueprintFunctionLibrary {

	struct UARTrackedGeometry* GetTrackedGeometry(struct FARTraceResult TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x212d590
	enum class EARLineTraceChannels GetTraceChannel(struct FARTraceResult TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x212d490
	struct FTransform GetLocalToWorldTransform(struct FARTraceResult TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x212d140
	struct FTransform GetLocalToTrackingTransform(struct FARTraceResult TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x212cfc0
	float GetDistanceFromCamera(struct FARTraceResult TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x212cd40
};

// Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy
// Size: 0x50 (Inherited: 0x30)
struct UARBaseAsyncTaskBlueprintProxy : UBlueprintAsyncActionBase {
	char pad_30[0x20]; // 0x30(0x20)
};

// Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
// Size: 0x80 (Inherited: 0x50)
struct UARSaveWorldAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	struct FMulticastInlineDelegate OnSuccess; // 0x50(0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x60(0x10)
	char pad_70[0x10]; // 0x70(0x10)

	struct UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(struct UObject* WorldContextObject); // Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x212bcd0
};

// Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
// Size: 0x98 (Inherited: 0x50)
struct UARGetCandidateObjectAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	struct FMulticastInlineDelegate OnSuccess; // 0x50(0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x60(0x10)
	char pad_70[0x28]; // 0x70(0x28)

	struct UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(struct UObject* WorldContextObject, struct FVector Location, struct FVector Extent); // Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x212bbb0
};

// Class AugmentedReality.AROriginActor
// Size: 0x230 (Inherited: 0x230)
struct AAROriginActor : AActor {
};

// Class AugmentedReality.ARPin
// Size: 0xf0 (Inherited: 0x28)
struct UARPin : UObject {
	struct UARTrackedGeometry* TrackedGeometry; // 0x28(0x08)
	struct USceneComponent* PinnedComponent; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
	struct FTransform LocalToTrackingTransform; // 0x40(0x30)
	struct FTransform LocalToAlignedTrackingTransform; // 0x70(0x30)
	enum class EARTrackingState TrackingState; // 0xa0(0x01)
	char pad_A1[0x1f]; // 0xa1(0x1f)
	struct FMulticastInlineDelegate OnARTrackingStateChanged; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnARTransformUpdated; // 0xd0(0x10)
	char pad_E0[0x10]; // 0xe0(0x10)

	enum class EARTrackingState GetTrackingState(); // Function AugmentedReality.ARPin.GetTrackingState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x212ce40
	struct UARTrackedGeometry* GetTrackedGeometry(); // Function AugmentedReality.ARPin.GetTrackedGeometry // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1196380
	struct USceneComponent* GetPinnedComponent(); // Function AugmentedReality.ARPin.GetPinnedComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11cbd20
	struct FTransform GetLocalToWorldTransform(); // Function AugmentedReality.ARPin.GetLocalToWorldTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x212d0e0
	struct FTransform GetLocalToTrackingTransform(); // Function AugmentedReality.ARPin.GetLocalToTrackingTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x212cf60
	struct FName GetDebugName(); // Function AugmentedReality.ARPin.GetDebugName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x212ccc0
	void DebugDraw(struct UWorld* World, struct FLinearColor Color, float Scale, float PersistForSeconds); // Function AugmentedReality.ARPin.DebugDraw // (Native|Public|HasOutParms|HasDefaults|Const) // @ game+0x212c0b0
};

// Class AugmentedReality.ARSharedWorldGameMode
// Size: 0x380 (Inherited: 0x318)
struct AARSharedWorldGameMode : AGameMode {
	int32_t BufferSizePerChunk; // 0x318(0x04)
	char pad_31C[0x64]; // 0x31c(0x64)

	void SetPreviewImageData(struct TArray<char> ImageData); // Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x2133930
	void SetARWorldSharingIsReady(); // Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x2133660
	void SetARSharedWorldData(struct TArray<char> ARWorldData); // Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x2133580
	struct AARSharedWorldGameState* GetARSharedWorldGameState(); // Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x2132c60
};

// Class AugmentedReality.ARSharedWorldGameState
// Size: 0x2d8 (Inherited: 0x2a0)
struct AARSharedWorldGameState : AGameState {
	struct TArray<char> PreviewImageData; // 0x2a0(0x10)
	struct TArray<char> ARWorldData; // 0x2b0(0x10)
	int32_t PreviewImageBytesTotal; // 0x2c0(0x04)
	int32_t ARWorldBytesTotal; // 0x2c4(0x04)
	int32_t PreviewImageBytesDelivered; // 0x2c8(0x04)
	int32_t ARWorldBytesDelivered; // 0x2cc(0x04)
	char pad_2D0[0x8]; // 0x2d0(0x08)

	void K2_OnARWorldMapIsReady(); // Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady // (Event|Public|BlueprintEvent) // @ game+0x1685580
};

// Class AugmentedReality.ARSharedWorldPlayerController
// Size: 0x5a0 (Inherited: 0x598)
struct AARSharedWorldPlayerController : APlayerController {
	char pad_598[0x8]; // 0x598(0x08)

	void ServerMarkReadyForReceiving(); // Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x2133530
	void ClientUpdatePreviewImageData(int32_t Offset, struct TArray<char> Buffer); // Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData // (Net|NetReliableNative|Event|Public|NetClient|NetValidate) // @ game+0x2132b60
	void ClientUpdateARWorldData(int32_t Offset, struct TArray<char> Buffer); // Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData // (Net|NetReliableNative|Event|Public|NetClient|NetValidate) // @ game+0x2132a60
	void ClientInitSharedWorld(int32_t PreviewImageSize, int32_t ARWorldDataSize); // Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld // (Net|NetReliableNative|Event|Public|NetClient|NetValidate) // @ game+0x2132960
};

// Class AugmentedReality.ARSkyLight
// Size: 0x250 (Inherited: 0x240)
struct AARSkyLight : ASkyLight {
	struct UAREnvironmentCaptureProbe* CaptureProbe; // 0x240(0x08)
	char pad_248[0x8]; // 0x248(0x08)

	void SetEnvironmentCaptureProbe(struct UAREnvironmentCaptureProbe* InCaptureProbe); // Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe // (Final|Native|Public|BlueprintCallable) // @ game+0x21337d0
};

// Class AugmentedReality.ARTexture
// Size: 0xd8 (Inherited: 0xb8)
struct UARTexture : UTexture {
	enum class EARTextureType TextureType; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	float Timestamp; // 0xbc(0x04)
	struct FGuid ExternalTextureGuid; // 0xc0(0x10)
	struct FVector2D Size; // 0xd0(0x08)
};

// Class AugmentedReality.ARTextureCameraImage
// Size: 0xd8 (Inherited: 0xd8)
struct UARTextureCameraImage : UARTexture {
};

// Class AugmentedReality.ARTextureCameraDepth
// Size: 0xe0 (Inherited: 0xd8)
struct UARTextureCameraDepth : UARTexture {
	enum class EARDepthQuality DepthQuality; // 0xd8(0x01)
	enum class EARDepthAccuracy DepthAccuracy; // 0xd9(0x01)
	bool bIsTemporallySmoothed; // 0xda(0x01)
	char pad_DB[0x5]; // 0xdb(0x05)
};

// Class AugmentedReality.AREnvironmentCaptureProbeTexture
// Size: 0x130 (Inherited: 0x110)
struct UAREnvironmentCaptureProbeTexture : UTextureCube {
	enum class EARTextureType TextureType; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	float Timestamp; // 0x114(0x04)
	struct FGuid ExternalTextureGuid; // 0x118(0x10)
	struct FVector2D Size; // 0x128(0x08)
};

// Class AugmentedReality.ARTraceResultDummy
// Size: 0x28 (Inherited: 0x28)
struct UARTraceResultDummy : UObject {
};

// Class AugmentedReality.ARTrackedGeometry
// Size: 0xf0 (Inherited: 0x28)
struct UARTrackedGeometry : UObject {
	struct FGuid UniqueId; // 0x28(0x10)
	char pad_38[0x8]; // 0x38(0x08)
	struct FTransform LocalToTrackingTransform; // 0x40(0x30)
	struct FTransform LocalToAlignedTrackingTransform; // 0x70(0x30)
	enum class EARTrackingState TrackingState; // 0xa0(0x01)
	char pad_A1[0xf]; // 0xa1(0x0f)
	struct UMRMeshComponent* UnderlyingMesh; // 0xb0(0x08)
	enum class EARObjectClassification ObjectClassification; // 0xb8(0x01)
	char pad_B9[0x17]; // 0xb9(0x17)
	int32_t LastUpdateFrameNumber; // 0xd0(0x04)
	char pad_D4[0xc]; // 0xd4(0x0c)
	struct FName DebugName; // 0xe0(0x08)
	char pad_E8[0x8]; // 0xe8(0x08)

	bool IsTracked(); // Function AugmentedReality.ARTrackedGeometry.IsTracked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2133500
	struct UMRMeshComponent* GetUnderlyingMesh(); // Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11ad2c0
	enum class EARTrackingState GetTrackingState(); // Function AugmentedReality.ARTrackedGeometry.GetTrackingState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x212ce40
	enum class EARObjectClassification GetObjectClassification(); // Function AugmentedReality.ARTrackedGeometry.GetObjectClassification // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1252320
	struct FTransform GetLocalToWorldTransform(); // Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2133320
	struct FTransform GetLocalToTrackingTransform(); // Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x212cf60
	float GetLastUpdateTimestamp(); // Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2133250
	int32_t GetLastUpdateFrameNumber(); // Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2133220
	struct FName GetDebugName(); // Function AugmentedReality.ARTrackedGeometry.GetDebugName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2133080
};

// Class AugmentedReality.ARPlaneGeometry
// Size: 0x120 (Inherited: 0xf0)
struct UARPlaneGeometry : UARTrackedGeometry {
	enum class EARPlaneOrientation Orientation; // 0xe8(0x01)
	struct FVector Center; // 0xec(0x0c)
	struct FVector Extent; // 0xf8(0x0c)
	char pad_109[0xf]; // 0x109(0x0f)
	struct UARPlaneGeometry* SubsumedBy; // 0x118(0x08)

	struct UARPlaneGeometry* GetSubsumedBy(); // Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2133400
	enum class EARPlaneOrientation GetOrientation(); // Function AugmentedReality.ARPlaneGeometry.GetOrientation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x21333a0
	struct FVector GetExtent(); // Function AugmentedReality.ARPlaneGeometry.GetExtent // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2133190
	struct FVector GetCenter(); // Function AugmentedReality.ARPlaneGeometry.GetCenter // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2133050
	struct TArray<struct FVector> GetBoundaryPolygonInLocalSpace(); // Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2132f30
};

// Class AugmentedReality.ARTrackedPoint
// Size: 0xf0 (Inherited: 0xf0)
struct UARTrackedPoint : UARTrackedGeometry {
};

// Class AugmentedReality.ARTrackedImage
// Size: 0x100 (Inherited: 0xf0)
struct UARTrackedImage : UARTrackedGeometry {
	struct UARCandidateImage* DetectedImage; // 0xe8(0x08)
	struct FVector2D EstimatedSize; // 0xf0(0x08)

	struct FVector2D GetEstimateSize(); // Function AugmentedReality.ARTrackedImage.GetEstimateSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x2133110
	struct UARCandidateImage* GetDetectedImage(); // Function AugmentedReality.ARTrackedImage.GetDetectedImage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x21330c0
};

// Class AugmentedReality.ARTrackedQRCode
// Size: 0x110 (Inherited: 0x100)
struct UARTrackedQRCode : UARTrackedImage {
	struct FString QRCode; // 0xf8(0x10)
	int32_t Version; // 0x108(0x04)
};

// Class AugmentedReality.ARFaceGeometry
// Size: 0x1e0 (Inherited: 0xf0)
struct UARFaceGeometry : UARTrackedGeometry {
	struct FVector LookAtTarget; // 0xe8(0x0c)
	bool bIsTracked; // 0xf4(0x01)
	struct TMap<enum class EARFaceBlendShape, float> BlendShapes; // 0xf8(0x50)
	char pad_14D[0x93]; // 0x14d(0x93)

	struct FTransform GetWorldSpaceEyeTransform(enum class EAREye Eye); // Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2133450
	struct FTransform GetLocalSpaceEyeTransform(enum class EAREye Eye); // Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2133280
	float GetBlendShapeValue(enum class EARFaceBlendShape BlendShape); // Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2132c90
	struct TMap<enum class EARFaceBlendShape, float> GetBlendShapes(); // Function AugmentedReality.ARFaceGeometry.GetBlendShapes // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2132d20
};

// Class AugmentedReality.AREnvironmentCaptureProbe
// Size: 0x100 (Inherited: 0xf0)
struct UAREnvironmentCaptureProbe : UARTrackedGeometry {
	char pad_F0[0x8]; // 0xf0(0x08)
	struct UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture; // 0xf8(0x08)

	struct FVector GetExtent(); // Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2133150
	struct UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture(); // Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x21330e0
};

// Class AugmentedReality.ARTrackedObject
// Size: 0xf0 (Inherited: 0xf0)
struct UARTrackedObject : UARTrackedGeometry {
	struct UARCandidateObject* DetectedObject; // 0xe8(0x08)

	struct UARCandidateObject* GetDetectedObject(); // Function AugmentedReality.ARTrackedObject.GetDetectedObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x21330c0
};

// Class AugmentedReality.ARTrackedPose
// Size: 0x140 (Inherited: 0xf0)
struct UARTrackedPose : UARTrackedGeometry {
	char pad_F0[0x50]; // 0xf0(0x50)

	struct FARPose3D GetTrackedPoseData(); // Function AugmentedReality.ARTrackedPose.GetTrackedPoseData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2133420
};

// Class AugmentedReality.ARTrackableNotifyComponent
// Size: 0x210 (Inherited: 0xc0)
struct UARTrackableNotifyComponent : UActorComponent {
	struct FMulticastInlineDelegate OnAddTrackedGeometry; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedGeometry; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedGeometry; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnAddTrackedPlane; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedPlane; // 0x100(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedPlane; // 0x110(0x10)
	struct FMulticastInlineDelegate OnAddTrackedPoint; // 0x120(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedPoint; // 0x130(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedPoint; // 0x140(0x10)
	struct FMulticastInlineDelegate OnAddTrackedImage; // 0x150(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedImage; // 0x160(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedImage; // 0x170(0x10)
	struct FMulticastInlineDelegate OnAddTrackedFace; // 0x180(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedFace; // 0x190(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedFace; // 0x1a0(0x10)
	struct FMulticastInlineDelegate OnAddTrackedEnvProbe; // 0x1b0(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedEnvProbe; // 0x1c0(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedEnvProbe; // 0x1d0(0x10)
	struct FMulticastInlineDelegate OnAddTrackedObject; // 0x1e0(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedObject; // 0x1f0(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedObject; // 0x200(0x10)
};

// Class AugmentedReality.ARTypesDummyClass
// Size: 0x28 (Inherited: 0x28)
struct UARTypesDummyClass : UObject {
};

// Class AugmentedReality.ARCandidateObject
// Size: 0x70 (Inherited: 0x30)
struct UARCandidateObject : UDataAsset {
	struct TArray<char> CandidateObjectData; // 0x30(0x10)
	struct FString FriendlyName; // 0x40(0x10)
	struct FBox BoundingBox; // 0x50(0x1c)
	char pad_6C[0x4]; // 0x6c(0x04)

	void SetFriendlyName(struct FString NewName); // Function AugmentedReality.ARCandidateObject.SetFriendlyName // (Final|Native|Public|BlueprintCallable) // @ game+0x2133850
	void SetCandidateObjectData(struct TArray<char> InCandidateObject); // Function AugmentedReality.ARCandidateObject.SetCandidateObjectData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2133720
	void SetBoundingBox(struct FBox InBoundingBox); // Function AugmentedReality.ARCandidateObject.SetBoundingBox // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x2133680
	struct FString GetFriendlyName(); // Function AugmentedReality.ARCandidateObject.GetFriendlyName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x21331f0
	struct TArray<char> GetCandidateObjectData(); // Function AugmentedReality.ARCandidateObject.GetCandidateObjectData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2133020
	struct FBox GetBoundingBox(); // Function AugmentedReality.ARCandidateObject.GetBoundingBox // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2132ff0
};

