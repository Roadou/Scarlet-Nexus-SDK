// BlueprintGeneratedClass BP_StageManager.BP_StageManager_C
// Size: 0x274 (Inherited: 0x258)
struct ABP_StageManager_C : AStageManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	struct FVector StageCelLookLightDirection; // 0x268(0x0c)

	void SetupSceneLight(); // Function BP_StageManager.BP_StageManager_C.SetupSceneLight // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeLight(); // Function BP_StageManager.BP_StageManager_C.InitializeLight // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetCelLookLight(); // Function BP_StageManager.BP_StageManager_C.ResetCelLookLight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AreaStart(); // Function BP_StageManager.BP_StageManager_C.AreaStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_StageManager.BP_StageManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_StageManager(int32_t EntryPoint); // Function BP_StageManager.BP_StageManager_C.ExecuteUbergraph_BP_StageManager // (Final|UbergraphFunction) // @ game+0x1685580
};

