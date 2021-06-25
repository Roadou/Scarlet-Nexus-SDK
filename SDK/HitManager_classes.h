// BlueprintGeneratedClass HitManager.HitManager_C
// Size: 0x250 (Inherited: 0x230)
struct AHitManager_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UCharacterHitCheckComponent* CharacterHitCheck; // 0x238(0x08)
	struct UHitCheckComponent* HitCheck; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)

	bool IsNeedFrameWait(); // Function HitManager.HitManager_C.IsNeedFrameWait // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool FinalizeManager(enum class EManagerProcTiming Timing); // Function HitManager.HitManager_C.FinalizeManager // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool InitializeManager(enum class EManagerProcTiming Timing); // Function HitManager.HitManager_C.InitializeManager // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DelayBeginPlay(); // Function HitManager.HitManager_C.DelayBeginPlay // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function HitManager.HitManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_HitManager(int32_t EntryPoint); // Function HitManager.HitManager_C.ExecuteUbergraph_HitManager // (Final|UbergraphFunction) // @ game+0x1685580
};

