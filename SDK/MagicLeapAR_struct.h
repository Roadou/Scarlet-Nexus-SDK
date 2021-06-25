// Enum MagicLeapAR.ELuminARLineTraceChannel
enum class ELuminARLineTraceChannel : uint8 {
	None,
	FeaturePoint,
	InfinitePlane,
	PlaneUsingExtent,
	PlaneUsingBoundaryPolygon,
	FeaturePointWithSurfaceNormal,
	ELuminARLineTraceChannel_MAX,
};

// Enum MagicLeapAR.ELuminARTrackingState
enum class ELuminARTrackingState : uint8 {
	Tracking,
	NotTracking,
	StoppedTracking,
	ELuminARTrackingState_MAX,
};

