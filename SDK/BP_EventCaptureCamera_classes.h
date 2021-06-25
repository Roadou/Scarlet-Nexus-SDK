// BlueprintGeneratedClass BP_EventCaptureCamera.BP_EventCaptureCamera_C
// Size: 0x19e0 (Inherited: 0xa70)
struct ABP_EventCaptureCamera_C : ABP_CaptureCineCameraActor_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	char pad_A78[0x8]; // 0xa78(0x08)
	struct FPostProcessSettings DefaultPPS; // 0xa80(0x780)
	struct TSoftObjectPtr<UMaterialInterface> PPOutlineAsset; // 0x1200(0x28)
	struct UMaterialInterface* PPOutlineObject; // 0x1228(0x08)
	struct TSoftObjectPtr<UMaterialInterface> PPOutlineFrontAsset; // 0x1230(0x28)
	struct UMaterialInterface* PPOutlineFrontObject; // 0x1258(0x08)
	struct FPostProcessSettings DefaultPPSOutlineFront; // 0x1260(0x780)

	void GetDefaultPPS_OutlineFront(struct FPostProcessSettings PPS); // Function BP_EventCaptureCamera.BP_EventCaptureCamera_C.GetDefaultPPS_OutlineFront // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void LoadAssets(); // Function BP_EventCaptureCamera.BP_EventCaptureCamera_C.LoadAssets // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetDefaultPPS(struct FPostProcessSettings PPS); // Function BP_EventCaptureCamera.BP_EventCaptureCamera_C.GetDefaultPPS // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetCaptureCompFOVToCamComp(); // Function BP_EventCaptureCamera.BP_EventCaptureCamera_C.SetCaptureCompFOVToCamComp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTicks(bool bEnabled); // Function BP_EventCaptureCamera.BP_EventCaptureCamera_C.SetTicks // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_EventCaptureCamera.BP_EventCaptureCamera_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventCaptureCamera.BP_EventCaptureCamera_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EventCaptureCamera.BP_EventCaptureCamera_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventCaptureCamera(int32_t EntryPoint); // Function BP_EventCaptureCamera.BP_EventCaptureCamera_C.ExecuteUbergraph_BP_EventCaptureCamera // (Final|UbergraphFunction) // @ game+0x1685580
};

