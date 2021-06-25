// Class MagicLeapImageTracker.MagicLeapImageTrackerComponent
// Size: 0x280 (Inherited: 0x200)
struct UMagicLeapImageTrackerComponent : USceneComponent {
	struct UTexture2D* TargetImageTexture; // 0x200(0x08)
	struct FString Name; // 0x208(0x10)
	float LongerDimension; // 0x218(0x04)
	bool bIsStationary; // 0x21c(0x01)
	bool bUseUnreliablePose; // 0x21d(0x01)
	char pad_21E[0x2]; // 0x21e(0x02)
	struct FMulticastInlineDelegate OnSetImageTargetSucceeded; // 0x220(0x10)
	struct FMulticastInlineDelegate OnSetImageTargetFailed; // 0x230(0x10)
	struct FMulticastInlineDelegate OnImageTargetFound; // 0x240(0x10)
	struct FMulticastInlineDelegate OnImageTargetLost; // 0x250(0x10)
	struct FMulticastInlineDelegate OnImageTargetUnreliableTracking; // 0x260(0x10)
	char pad_270[0x10]; // 0x270(0x10)

	bool SetTargetAsync(struct UTexture2D* ImageTarget); // Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync // (Final|Native|Public|BlueprintCallable) // @ game+0x7ce2e0
	bool RemoveTargetAsync(); // Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.RemoveTargetAsync // (Final|Native|Public|BlueprintCallable) // @ game+0x7ce240
};

// Class MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapImageTrackerFunctionLibrary : UBlueprintFunctionLibrary {

	void SetMaxSimultaneousTargets(int32_t MaxSimultaneousTargets); // Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.SetMaxSimultaneousTargets // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7ce270
	bool IsImageTrackingEnabled(); // Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.IsImageTrackingEnabled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7ce210
	int32_t GetMaxSimultaneousTargets(); // Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.GetMaxSimultaneousTargets // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7ce1e0
	void EnableImageTracking(bool bEnable); // Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.EnableImageTracking // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7ce160
};

