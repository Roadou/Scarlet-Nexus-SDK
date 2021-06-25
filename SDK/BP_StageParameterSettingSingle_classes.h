// BlueprintGeneratedClass BP_StageParameterSettingSingle.BP_StageParameterSettingSingle_C
// Size: 0x321 (Inherited: 0x230)
struct ABP_StageParameterSettingSingle_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	struct FStageParameterSettings Settings; // 0x240(0xe0)
	bool VisibleHood; // 0x320(0x01)

	void Update(); // Function BP_StageParameterSettingSingle.BP_StageParameterSettingSingle_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_StageParameterSettingSingle.BP_StageParameterSettingSingle_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_StageParameterSettingSingle(int32_t EntryPoint); // Function BP_StageParameterSettingSingle.BP_StageParameterSettingSingle_C.ExecuteUbergraph_BP_StageParameterSettingSingle // (Final|UbergraphFunction) // @ game+0x1685580
};

