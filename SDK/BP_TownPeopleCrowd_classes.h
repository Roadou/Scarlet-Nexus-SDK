// BlueprintGeneratedClass BP_TownPeopleCrowd.BP_TownPeopleCrowd_C
// Size: 0x410 (Inherited: 0x400)
struct ABP_TownPeopleCrowd_C : ANpcTownPeopleCrowd {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct ABP_SplineMoveNPCSpawner_C* SpawnParent; // 0x408(0x08)

	void CheckViewable(); // Function BP_TownPeopleCrowd.BP_TownPeopleCrowd_C.CheckViewable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckUpdateEnable(); // Function BP_TownPeopleCrowd.BP_TownPeopleCrowd_C.CheckUpdateEnable // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugPrint(); // Function BP_TownPeopleCrowd.BP_TownPeopleCrowd_C.DebugPrint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_TownPeopleCrowd.BP_TownPeopleCrowd_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveDestroyed(); // Function BP_TownPeopleCrowd.BP_TownPeopleCrowd_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnChangeProgressIDEvent(); // Function BP_TownPeopleCrowd.BP_TownPeopleCrowd_C.OnChangeProgressIDEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_TownPeopleCrowd.BP_TownPeopleCrowd_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_TownPeopleCrowd(int32_t EntryPoint); // Function BP_TownPeopleCrowd.BP_TownPeopleCrowd_C.ExecuteUbergraph_BP_TownPeopleCrowd // (Final|UbergraphFunction) // @ game+0x1685580
};

