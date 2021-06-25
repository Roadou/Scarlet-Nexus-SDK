// BlueprintGeneratedClass BP_EventSettings.BP_EventSettings_C
// Size: 0xa21 (Inherited: 0x230)
struct ABP_EventSettings_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UPostProcessComponent* EventManagerPostProcess; // 0x238(0x08)
	struct UPostProcessComponent* SequencerPostProcess; // 0x240(0x08)
	struct UPostProcessComponent* DynamicToStaticPostProcess; // 0x248(0x08)
	struct UPostProcessComponent* StaticCutscenePostProcess; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	bool IsDynamicToStatic; // 0x260(0x01)
	char pad_261[0x3]; // 0x261(0x03)
	float DynamicToStaticInterpolateTime; // 0x264(0x04)
	char pad_268[0x8]; // 0x268(0x08)
	struct FPostProcessSettings CurentPostProcessSetting; // 0x270(0x780)
	float SequencerPostProcessWeight; // 0x9f0(0x04)
	float EventManagerPostProcessWeight; // 0x9f4(0x04)
	bool EditorSetting; // 0x9f8(0x01)
	char pad_9F9[0x3]; // 0x9f9(0x03)
	float RestoreShadowRes; // 0x9fc(0x04)
	float RestoreShadowResPoint; // 0xa00(0x04)
	float RestoreShadowResSpot; // 0xa04(0x04)
	float RestoreShadowResRect; // 0xa08(0x04)
	float DynamicToStaticTime; // 0xa0c(0x04)
	float StaticCutShadowRes; // 0xa10(0x04)
	float StaticCutShadowResPointLight; // 0xa14(0x04)
	float StaticCutShadowResSpotLight; // 0xa18(0x04)
	float StaticCutShadowResRectLight; // 0xa1c(0x04)
	bool SetupRestoreShadowRes; // 0xa20(0x01)

	void RestoreStaticEventShadowRes(); // Function BP_EventSettings.BP_EventSettings_C.RestoreStaticEventShadowRes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartStaticEventShadowRes(); // Function BP_EventSettings.BP_EventSettings_C.StartStaticEventShadowRes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StoreCurrentPPS(); // Function BP_EventSettings.BP_EventSettings_C.StoreCurrentPPS // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdate(float DeltaTimeSeconds); // Function BP_EventSettings.BP_EventSettings_C.PrivateUpdate // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupDynamicToStatic(); // Function BP_EventSettings.BP_EventSettings_C.SetupDynamicToStatic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndEvent(); // Function BP_EventSettings.BP_EventSettings_C.EndEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartEvent(); // Function BP_EventSettings.BP_EventSettings_C.StartEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EventSettings.BP_EventSettings_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventSettings.BP_EventSettings_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventSettings(int32_t EntryPoint); // Function BP_EventSettings.BP_EventSettings_C.ExecuteUbergraph_BP_EventSettings // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

