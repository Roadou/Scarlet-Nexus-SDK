// BlueprintGeneratedClass BP_MapGimmickManager.BP_MapGimmickManager_C
// Size: 0x358 (Inherited: 0x338)
struct ABP_MapGimmickManager_C : AMapGimmickManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x340(0x08)
	struct TArray<struct FName> GimmickUseScenarioFlags; // 0x348(0x10)

	void InitializeMapGimmickUse(); // Function BP_MapGimmickManager.BP_MapGimmickManager_C.InitializeMapGimmickUse // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetMapGimmickUseTimesAll(); // Function BP_MapGimmickManager.BP_MapGimmickManager_C.ResetMapGimmickUseTimesAll // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckInYuitoScenario(bool IsYuitoScenario); // Function BP_MapGimmickManager.BP_MapGimmickManager_C.CheckInYuitoScenario // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckUsedGimmickAnyTypes(struct TArray<enum class EMapGimmickType> Type, bool Used); // Function BP_MapGimmickManager.BP_MapGimmickManager_C.CheckUsedGimmickAnyTypes // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckUsedGimmickType(enum class EMapGimmickType Type, bool Used); // Function BP_MapGimmickManager.BP_MapGimmickManager_C.CheckUsedGimmickType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddMapGimmickUseTimeByType(enum class EMapGimmickType Type); // Function BP_MapGimmickManager.BP_MapGimmickManager_C.AddMapGimmickUseTimeByType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool AddMapGimmickUseTime(struct AMapGimmickObject* gimmick); // Function BP_MapGimmickManager.BP_MapGimmickManager_C.AddMapGimmickUseTime // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_MapGimmickManager.BP_MapGimmickManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_MapGimmickManager(int32_t EntryPoint); // Function BP_MapGimmickManager.BP_MapGimmickManager_C.ExecuteUbergraph_BP_MapGimmickManager // (Final|UbergraphFunction) // @ game+0x1685580
};

