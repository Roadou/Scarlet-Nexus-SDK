// BlueprintGeneratedClass BP_Discover_Component.BP_Discover_Component_C
// Size: 0xd8 (Inherited: 0xc0)
struct UBP_Discover_Component_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct UUIDiscover* UIDiscover; // 0xc8(0x08)
	float UIDispTimer; // 0xd0(0x04)
	int32_t DiscoverIndex; // 0xd4(0x04)

	void TakeOverUI(struct AActor* Owner, struct AActor* From); // Function BP_Discover_Component.BP_Discover_Component_C.TakeOverUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddView(); // Function BP_Discover_Component.BP_Discover_Component_C.AddView // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetUIDiscover(struct UUIDiscover* UIDiscover); // Function BP_Discover_Component.BP_Discover_Component_C.GetUIDiscover // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_Discover_Component.BP_Discover_Component_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnDiscover(struct AActor* EmActor); // Function BP_Discover_Component.BP_Discover_Component_C.OnDiscover // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnUnDiscover(struct AActor* EmActor); // Function BP_Discover_Component.BP_Discover_Component_C.OnUnDiscover // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnDiscoverStateClose(); // Function BP_Discover_Component.BP_Discover_Component_C.OnDiscoverStateClose // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnUnDiscoverAwareness(struct AActor* EmActor); // Function BP_Discover_Component.BP_Discover_Component_C.OnUnDiscoverAwareness // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnUnDiscoverOver(struct AActor* EmActor); // Function BP_Discover_Component.BP_Discover_Component_C.OnUnDiscoverOver // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Discover_Component.BP_Discover_Component_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Discover_Component(int32_t EntryPoint); // Function BP_Discover_Component.BP_Discover_Component_C.ExecuteUbergraph_BP_Discover_Component // (Final|UbergraphFunction) // @ game+0x1685580
};

