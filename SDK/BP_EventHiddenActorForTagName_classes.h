// BlueprintGeneratedClass BP_EventHiddenActorForTagName.BP_EventHiddenActorForTagName_C
// Size: 0x26a (Inherited: 0x230)
struct ABP_EventHiddenActorForTagName_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	struct FString TagName; // 0x240(0x10)
	bool IsHidden; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)
	struct FString BeforeTagName; // 0x258(0x10)
	bool BeforeIsHidden; // 0x268(0x01)
	bool isKeepHidden; // 0x269(0x01)

	void OnFinished(); // Function BP_EventHiddenActorForTagName.BP_EventHiddenActorForTagName_C.OnFinished // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Setup(); // Function BP_EventHiddenActorForTagName.BP_EventHiddenActorForTagName_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EventHiddenActorForTagName.BP_EventHiddenActorForTagName_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventHiddenActorForTagName.BP_EventHiddenActorForTagName_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EventHiddenActorForTagName.BP_EventHiddenActorForTagName_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventHiddenActorForTagName(int32_t EntryPoint); // Function BP_EventHiddenActorForTagName.BP_EventHiddenActorForTagName_C.ExecuteUbergraph_BP_EventHiddenActorForTagName // (Final|UbergraphFunction) // @ game+0x1685580
};

