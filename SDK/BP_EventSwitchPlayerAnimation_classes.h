// BlueprintGeneratedClass BP_EventSwitchPlayerAnimation.BP_EventSwitchPlayerAnimation_C
// Size: 0x295 (Inherited: 0x230)
struct ABP_EventSwitchPlayerAnimation_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	float AnimationTime; // 0x240(0x04)
	char pad_244[0x4]; // 0x244(0x04)
	struct UAnimSequence* AnimSequence; // 0x248(0x08)
	enum class EPlayerID PreviousPlayerID; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)
	struct TArray<struct TSoftObjectPtr<UAnimSequence>> AnimationList; // 0x258(0x10)
	struct USkeletalMeshComponent* TargetMesh; // 0x268(0x08)
	struct TArray<struct TSoftObjectPtr<UAnimSequence>> AnimationList2; // 0x270(0x10)
	int32_t AnimationNo; // 0x280(0x04)
	struct FName AnimationSlotName; // 0x284(0x08)
	bool bDeadOnlyPlayAnim; // 0x28c(0x01)
	char pad_28D[0x3]; // 0x28d(0x03)
	int32_t PreviousAnimationNo; // 0x290(0x04)
	bool FirstFrame; // 0x294(0x01)

	void Update(); // Function BP_EventSwitchPlayerAnimation.BP_EventSwitchPlayerAnimation_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadAsset(enum class EPlayerID playerId, struct TArray<struct TSoftObjectPtr<UAnimSequence>> InAnimationList, bool IsValid, struct UObject* Object); // Function BP_EventSwitchPlayerAnimation.BP_EventSwitchPlayerAnimation_C.LoadAsset // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_EventSwitchPlayerAnimation.BP_EventSwitchPlayerAnimation_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EventSwitchPlayerAnimation.BP_EventSwitchPlayerAnimation_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EventSwitchPlayerAnimation.BP_EventSwitchPlayerAnimation_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventSwitchPlayerAnimation.BP_EventSwitchPlayerAnimation_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventSwitchPlayerAnimation(int32_t EntryPoint); // Function BP_EventSwitchPlayerAnimation.BP_EventSwitchPlayerAnimation_C.ExecuteUbergraph_BP_EventSwitchPlayerAnimation // (Final|UbergraphFunction) // @ game+0x1685580
};

