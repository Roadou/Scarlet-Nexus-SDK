// BlueprintGeneratedClass BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C
// Size: 0xb10 (Inherited: 0x230)
struct ABP_UIMain3DPlayerCapture_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USpotLightComponent* SpotLight; // 0x238(0x08)
	struct URSSceneCaptureComponent2D* RSSceneCaptureComponent2D; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	float NoiseTimeline_NoiseRate_395B957949C984D718ECB89DE1AC7841; // 0x250(0x04)
	enum class ETimelineDirection NoiseTimeline__Direction_395B957949C984D718ECB89DE1AC7841; // 0x254(0x01)
	char pad_255[0x3]; // 0x255(0x03)
	struct UTimelineComponent* NoiseTimeline; // 0x258(0x08)
	struct FUIMain3DCharacterSceneSetting SceneParameter; // 0x260(0x800)
	struct FUIMain3DCharacterPlayerSetting PlayerParameter; // 0xa60(0x40)
	struct ABP_MenuPlayerBase_C* MenuPlayer; // 0xaa0(0x08)
	struct TSoftObjectPtr<UMaterialInterface> OutlineMaterialAsset; // 0xaa8(0x28)
	struct UMaterialInstanceDynamic* OutlineMaterial; // 0xad0(0x08)
	bool CaptureStart; // 0xad8(0x01)
	char pad_AD9[0x3]; // 0xad9(0x03)
	float NoiseRate; // 0xadc(0x04)
	struct TSoftObjectPtr<UMaterialInterface> SetupAlphaMaterialAsset; // 0xae0(0x28)
	struct UMaterialInterface* SetupAlphaMaterial; // 0xb08(0x08)

	void PrivateSetupViewRect(float CutoutRate); // Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.PrivateSetupViewRect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEquipParameter(struct FUIMain3DCharacterEquipSetting EquipData); // Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.SetEquipParameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetNoiseRate(float NoiseRate); // Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.GetNoiseRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void PrivateSetupCapture(); // Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.PrivateSetupCapture // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndCapture(); // Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.EndCapture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartCapture(); // Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.StartCapture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetTexture(struct UTextureRenderTarget2D* Texture, struct UTextureRenderTarget2D* AlphaTexture); // Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.GetTexture // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRenderTarget(struct UTextureRenderTarget2D* RenderTarget2D, struct UTextureRenderTarget2D* AlphaRenderTarget2D); // Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.SetRenderTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPlayerParameter(struct FUIMain3DCharacterPlayerSetting PlayerSetting); // Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.SetPlayerParameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadAsset(); // Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.LoadAsset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCelLookLightDirection(struct FVector Direction); // Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.SetCelLookLightDirection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSceneParameter(struct FUIMain3DCharacterSceneSetting SceneSetting); // Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.SetSceneParameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPlayer(struct ABP_MenuPlayerBase_C* InMenuPlayer, bool Chenged); // Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.SetPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NoiseTimeline__FinishedFunc(); // Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.NoiseTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1685580
	void NoiseTimeline__UpdateFunc(); // Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.NoiseTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void StartNoise(bool Reverse); // Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.StartNoise // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndCaptureClearTarget(); // Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.EndCaptureClearTarget // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_UIMain3DPlayerCapture(int32_t EntryPoint); // Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.ExecuteUbergraph_BP_UIMain3DPlayerCapture // (Final|UbergraphFunction) // @ game+0x1685580
};

