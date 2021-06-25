// BlueprintGeneratedClass BP_EventTypeSwitchBase.BP_EventTypeSwitchBase_C
// Size: 0x269 (Inherited: 0x230)
struct ABP_EventTypeSwitchBase_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	bool DynamicCutScene; // 0x240(0x01)
	char pad_241[0x7]; // 0x241(0x07)
	struct ABP_EventManager_C* EventManager; // 0x248(0x08)
	struct ABP_PostProcessManager_C* PostProcessManager; // 0x250(0x08)
	bool IsRuntimeSequencer; // 0x258(0x01)
	bool SetupEventUnknownIsDynamic; // 0x259(0x01)
	bool UseNoEventFlow; // 0x25a(0x01)
	bool EventSceneOnly; // 0x25b(0x01)
	bool FirstSetup; // 0x25c(0x01)
	bool NoCutScene; // 0x25d(0x01)
	char pad_25E[0x2]; // 0x25e(0x02)
	struct UPostProcessComponent* NoEventPPC; // 0x260(0x08)
	bool PreTickEventManager; // 0x268(0x01)

	void UseNoEventPPM(struct UMaterialInterface* Material, bool Enabled); // Function BP_EventTypeSwitchBase.BP_EventTypeSwitchBase_C.UseNoEventPPM // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DestroyNoEventPPM(); // Function BP_EventTypeSwitchBase.BP_EventTypeSwitchBase_C.DestroyNoEventPPM // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupNoEventPPM(struct TSoftObjectPtr<UMaterialInterface> PPM, struct UMaterialInstanceDynamic* Mid); // Function BP_EventTypeSwitchBase.BP_EventTypeSwitchBase_C.SetupNoEventPPM // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayNoEventCutScene(); // Function BP_EventTypeSwitchBase.BP_EventTypeSwitchBase_C.EndPlayNoEventCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginPlayNoEventScene(); // Function BP_EventTypeSwitchBase.BP_EventTypeSwitchBase_C.BeginPlayNoEventScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateGetManagers(); // Function BP_EventTypeSwitchBase.BP_EventTypeSwitchBase_C.PrivateGetManagers // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateSimulate(); // Function BP_EventTypeSwitchBase.BP_EventTypeSwitchBase_C.UpdateSimulate // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateNoEventScene(); // Function BP_EventTypeSwitchBase.BP_EventTypeSwitchBase_C.UpdateNoEventScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ForceUpdateStaticPPS(); // Function BP_EventTypeSwitchBase.BP_EventTypeSwitchBase_C.ForceUpdateStaticPPS // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupPlaySimulate(); // Function BP_EventTypeSwitchBase.BP_EventTypeSwitchBase_C.PrivateSetupPlaySimulate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginPlayDynamicCutScene(); // Function BP_EventTypeSwitchBase.BP_EventTypeSwitchBase_C.BeginPlayDynamicCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginPlayStaticCutScene(); // Function BP_EventTypeSwitchBase.BP_EventTypeSwitchBase_C.BeginPlayStaticCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayDynamicCutScene(); // Function BP_EventTypeSwitchBase.BP_EventTypeSwitchBase_C.EndPlayDynamicCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayStaticCutScene(); // Function BP_EventTypeSwitchBase.BP_EventTypeSwitchBase_C.EndPlayStaticCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDynamicCutScene(); // Function BP_EventTypeSwitchBase.BP_EventTypeSwitchBase_C.UpdateDynamicCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateStaticCutScene(); // Function BP_EventTypeSwitchBase.BP_EventTypeSwitchBase_C.UpdateStaticCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EventTypeSwitchBase.BP_EventTypeSwitchBase_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EventTypeSwitchBase.BP_EventTypeSwitchBase_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventTypeSwitchBase.BP_EventTypeSwitchBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventTypeSwitchBase(int32_t EntryPoint); // Function BP_EventTypeSwitchBase.BP_EventTypeSwitchBase_C.ExecuteUbergraph_BP_EventTypeSwitchBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

