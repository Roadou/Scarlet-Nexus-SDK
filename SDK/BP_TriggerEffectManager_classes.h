// BlueprintGeneratedClass BP_TriggerEffectManager.BP_TriggerEffectManager_C
// Size: 0x363 (Inherited: 0x350)
struct ABP_TriggerEffectManager_C : ATriggerEffectManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x358(0x08)
	bool IsGamePaused; // 0x360(0x01)
	bool IsEventPause; // 0x361(0x01)
	bool IsSystemPuase; // 0x362(0x01)

	void SetGamePauseForSystem(bool IsPause); // Function BP_TriggerEffectManager.BP_TriggerEffectManager_C.SetGamePauseForSystem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_TriggerEffectManager.BP_TriggerEffectManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_TriggerEffectManager.BP_TriggerEffectManager_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_TriggerEffectManager(int32_t EntryPoint); // Function BP_TriggerEffectManager.BP_TriggerEffectManager_C.ExecuteUbergraph_BP_TriggerEffectManager // (Final|UbergraphFunction) // @ game+0x1685580
};

