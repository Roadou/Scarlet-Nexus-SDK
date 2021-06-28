// BlueprintGeneratedClass BP_EventBundleCableMeshOption.BP_EventBundleCableMeshOption_C
// Size: 0x2e0 (Inherited: 0x238)
struct ABP_EventBundleCableMeshOption_C : AEventCableMeshOptionBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct USkeletalMeshComponent* BundleCableMesh; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	struct UAnimSequence* CableAnim; // 0x250(0x08)
	struct TArray<struct FName> connectionSocketNames; // 0x258(0x10)
	struct UABP_SASCable0103_C* abpSASCable0103; // 0x268(0x08)
	int32_t cableNum; // 0x270(0x04)
	char pad_274[0x4]; // 0x274(0x04)
	struct TMap<struct FName, struct FTransform> socketLocations; // 0x278(0x50)
	bool Physics; // 0x2c8(0x01)
	char pad_2C9[0x3]; // 0x2c9(0x03)
	int32_t AnimLoopCount; // 0x2cc(0x04)
	float PhysicsIdlingSec; // 0x2d0(0x04)
	float KawaiiWeight; // 0x2d4(0x04)
	bool bBrainCrash; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	float AnimBlendInTime; // 0x2dc(0x04)

	bool GetParent(); // Function BP_EventBundleCableMeshOption.BP_EventBundleCableMeshOption_C.GetParent // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetAnimation(); // Function BP_EventBundleCableMeshOption.BP_EventBundleCableMeshOption_C.SetAnimation // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool AttachToPlayerSocket(); // Function BP_EventBundleCableMeshOption.BP_EventBundleCableMeshOption_C.AttachToPlayerSocket // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void HandOverSocketWorldLocations(); // Function BP_EventBundleCableMeshOption.BP_EventBundleCableMeshOption_C.HandOverSocketWorldLocations // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SearchSASSocket(struct USkeletalMeshComponent* SkeletalMeshComp); // Function BP_EventBundleCableMeshOption.BP_EventBundleCableMeshOption_C.SearchSASSocket // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventBundleCableMeshOption.BP_EventBundleCableMeshOption_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EventBundleCableMeshOption.BP_EventBundleCableMeshOption_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void RepositionCable_DEBUG(); // Function BP_EventBundleCableMeshOption.BP_EventBundleCableMeshOption_C.RepositionCable_DEBUG // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ForceUpdate(); // Function BP_EventBundleCableMeshOption.BP_EventBundleCableMeshOption_C.ForceUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventBundleCableMeshOption(int32_t EntryPoint); // Function BP_EventBundleCableMeshOption.BP_EventBundleCableMeshOption_C.ExecuteUbergraph_BP_EventBundleCableMeshOption // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

