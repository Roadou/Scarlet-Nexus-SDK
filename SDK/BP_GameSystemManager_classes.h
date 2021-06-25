// BlueprintGeneratedClass BP_GameSystemManager.BP_GameSystemManager_C
// Size: 0x258 (Inherited: 0x230)
struct ABP_GameSystemManager_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBP_VibrationComponent_C* BP_VibrationComponent; // 0x238(0x08)
	struct UBP_PostProcessVolumeAccess_C* BP_PostProcessVolumeAccess; // 0x240(0x08)
	struct UBP_CalcCustomTImeDilationComponent_C* CalcCustomTimeDilation; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)

	bool IsNeedFrameWait(); // Function BP_GameSystemManager.BP_GameSystemManager_C.IsNeedFrameWait // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool FinalizeManager(enum class EManagerProcTiming Timing); // Function BP_GameSystemManager.BP_GameSystemManager_C.FinalizeManager // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool InitializeManager(enum class EManagerProcTiming Timing); // Function BP_GameSystemManager.BP_GameSystemManager_C.InitializeManager // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DelayBeginPlay(); // Function BP_GameSystemManager.BP_GameSystemManager_C.DelayBeginPlay // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_GameSystemManager.BP_GameSystemManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_GameSystemManager(int32_t EntryPoint); // Function BP_GameSystemManager.BP_GameSystemManager_C.ExecuteUbergraph_BP_GameSystemManager // (Final|UbergraphFunction) // @ game+0x1685580
};

