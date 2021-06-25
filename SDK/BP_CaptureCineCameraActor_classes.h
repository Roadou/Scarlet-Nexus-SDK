// BlueprintGeneratedClass BP_CaptureCineCameraActor.BP_CaptureCineCameraActor_C
// Size: 0xa70 (Inherited: 0xa40)
struct ABP_CaptureCineCameraActor_C : ACineCameraActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa40(0x08)
	struct URSSceneCaptureComponent2D* RSSceneCaptureComponent2D; // 0xa48(0x08)
	struct TArray<struct ABP_CaptureCineCameraActor_C*> CaptureCameraArray; // 0xa50(0x10)
	struct UTextureRenderTarget2D* RT_Cutin; // 0xa60(0x08)
	bool StaticHighResExposureManual; // 0xa68(0x01)
	char pad_A69[0x3]; // 0xa69(0x03)
	float StaticHighResExposureValue; // 0xa6c(0x04)

	void GetSceneCaptureComponent2D(struct USceneCaptureComponent2D* SceneCaptureComponent2D); // Function BP_CaptureCineCameraActor.BP_CaptureCineCameraActor_C.GetSceneCaptureComponent2D // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCelLookLight(float Yaw, float Pitch); // Function BP_CaptureCineCameraActor.BP_CaptureCineCameraActor_C.UpdateCelLookLight // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetCutinBufferIndex(int32_t Index); // Function BP_CaptureCineCameraActor.BP_CaptureCineCameraActor_C.PrivateSetCutinBufferIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetTickFlags(bool Enable); // Function BP_CaptureCineCameraActor.BP_CaptureCineCameraActor_C.PrivateSetTickFlags // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CameraSetup(bool Success); // Function BP_CaptureCineCameraActor.BP_CaptureCineCameraActor_C.CameraSetup // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_CaptureCineCameraActor.BP_CaptureCineCameraActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_CaptureCineCameraActor.BP_CaptureCineCameraActor_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void SetCutinBufferIndex(int32_t Index); // Function BP_CaptureCineCameraActor.BP_CaptureCineCameraActor_C.SetCutinBufferIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTickFlags(bool Enable); // Function BP_CaptureCineCameraActor.BP_CaptureCineCameraActor_C.SetTickFlags // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUseBloom(bool UseBloom); // Function BP_CaptureCineCameraActor.BP_CaptureCineCameraActor_C.SetUseBloom // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddPostProcessMaterial(struct UMaterialInstanceDynamic* Mid); // Function BP_CaptureCineCameraActor.BP_CaptureCineCameraActor_C.AddPostProcessMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupCutinBuffer(); // Function BP_CaptureCineCameraActor.BP_CaptureCineCameraActor_C.SetupCutinBuffer // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetRenderTarget(enum class ERenderTargetType RenderTargetType, struct UTextureRenderTarget2D* NewTarget); // Function BP_CaptureCineCameraActor.BP_CaptureCineCameraActor_C.ResetRenderTarget // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_CaptureCineCameraActor.BP_CaptureCineCameraActor_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_CaptureCineCameraActor(int32_t EntryPoint); // Function BP_CaptureCineCameraActor.BP_CaptureCineCameraActor_C.ExecuteUbergraph_BP_CaptureCineCameraActor // (Final|UbergraphFunction) // @ game+0x1685580
};

