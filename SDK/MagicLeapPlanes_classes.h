// Class MagicLeapPlanes.MagicLeapPlanesComponent
// Size: 0x270 (Inherited: 0x200)
struct UMagicLeapPlanesComponent : USceneComponent {
	struct TArray<enum class EMagicLeapPlaneQueryFlags> QueryFlags; // 0x200(0x10)
	struct UBoxComponent* SearchVolume; // 0x210(0x08)
	int32_t MaxResults; // 0x218(0x04)
	float MinHolePerimeter; // 0x21c(0x04)
	float MinPlaneArea; // 0x220(0x04)
	enum class EMagicLeapPlaneQueryType QueryType; // 0x224(0x01)
	char pad_225[0x3]; // 0x225(0x03)
	float SimilarityThreshold; // 0x228(0x04)
	char pad_22C[0x4]; // 0x22c(0x04)
	struct FMulticastInlineDelegate OnPlanesQueryResult; // 0x230(0x10)
	struct FMulticastInlineDelegate OnPersistentPlanesQueryResult; // 0x240(0x10)
	char pad_250[0x20]; // 0x250(0x20)

	bool RequestPlanesAsync(); // Function MagicLeapPlanes.MagicLeapPlanesComponent.RequestPlanesAsync // (Final|Native|Public|BlueprintCallable) // @ game+0x7d1190
};

// Class MagicLeapPlanes.MagicLeapPlanesFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapPlanesFunctionLibrary : UBlueprintFunctionLibrary {

	void ReorderPlaneFlags(struct TArray<enum class EMagicLeapPlaneQueryFlags> InPriority, struct TArray<enum class EMagicLeapPlaneQueryFlags> InFlagsToReorder, struct TArray<enum class EMagicLeapPlaneQueryFlags> OutReorderedFlags); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.ReorderPlaneFlags // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7d1010
	bool RemovePersistentQuery(struct FGuid Handle); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemovePersistentQuery // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x7d0f80
	void RemoveFlagsNotInQuery(struct TArray<enum class EMagicLeapPlaneQueryFlags> InQueryFlags, struct TArray<enum class EMagicLeapPlaneQueryFlags> InResultFlags, struct TArray<enum class EMagicLeapPlaneQueryFlags> OutFlags); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemoveFlagsNotInQuery // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7d0e00
	bool PlanesQueryBeginAsync(struct FMagicLeapPlanesQuery Query, struct FDelegate ResultDelegate); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesQueryBeginAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7d0ca0
	bool PlanesPersistentQueryBeginAsync(struct FMagicLeapPlanesQuery Query, struct FGuid Handle, struct FDelegate ResultDelegate); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesPersistentQueryBeginAsync // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7d0af0
	bool IsTrackerValid(); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.IsTrackerValid // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x7d0ac0
	struct FTransform GetContentScale(struct AActor* ContentActor, struct FMagicLeapPlaneResult PlaneResult); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.GetContentScale // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7d0980
	bool DestroyTracker(); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.DestroyTracker // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7d0950
	bool CreateTracker(); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.CreateTracker // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7d0920
	struct FGuid AddPersistentQuery(enum class EMagicLeapPlaneQueryType PersistentQueryType); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.AddPersistentQuery // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x7d08a0
};

