// BlueprintGeneratedClass BP_en_ProceduralSky.BP_en_ProceduralSky_C
// Size: 0x549 (Inherited: 0x230)
struct ABP_en_ProceduralSky_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UStaticMeshComponent* dummy; // 0x238(0x08)
	struct UStaticMeshComponent* SkyMesh; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	struct ADirectionalLight* SunLightSource; // 0x250(0x08)
	float TimeOfDay; // 0x258(0x04)
	struct FBP_en_Sky_TimeOfDayData TimeOfDaySettings; // 0x25c(0x90)
	struct FBP_en_Sky_WeatherData WeatherSettings; // 0x2ec(0x64)
	bool MoonUse; // 0x350(0x01)
	char pad_351[0x3]; // 0x351(0x03)
	struct FRotator MoonDirection; // 0x354(0x0c)
	float SunHeight; // 0x360(0x04)
	char pad_364[0x4]; // 0x364(0x04)
	struct UMaterialInstanceDynamic* SkyMaterialInst; // 0x368(0x08)
	struct UMaterialInstanceConstant* SkydomeMaterial; // 0x370(0x08)
	float Saturation; // 0x378(0x04)
	float CloudsBloom; // 0x37c(0x04)
	float CloudsFluffy; // 0x380(0x04)
	float UVHorizon; // 0x384(0x04)
	float UVRoundness; // 0x388(0x04)
	float UVScale; // 0x38c(0x04)
	struct FLinearColor UVBaseLayerPosition; // 0x390(0x10)
	struct FLinearColor UVBaseLayerSize; // 0x3a0(0x10)
	struct FLinearColor UVSecondLayerSize; // 0x3b0(0x10)
	struct FLinearColor UVSecondLayerPosition; // 0x3c0(0x10)
	struct UTexture* CloudsLayer1; // 0x3d0(0x08)
	struct UTexture* CloudsLayer2; // 0x3d8(0x08)
	float HorizonTilt; // 0x3e0(0x04)
	struct FVector2D WindForce; // 0x3e4(0x08)
	float SunRadius; // 0x3ec(0x04)
	float SunShine; // 0x3f0(0x04)
	float SunSaturation; // 0x3f4(0x04)
	float SunMaxAltitude; // 0x3f8(0x04)
	float SunAzimuth; // 0x3fc(0x04)
	float SunVisibleDuration; // 0x400(0x04)
	struct FRotator SunDirection; // 0x404(0x0c)
	float StarsBrightness; // 0x410(0x04)
	float MoonBightness; // 0x414(0x04)
	float MoonRadius; // 0x418(0x04)
	float MoonClouds; // 0x41c(0x04)
	float MoonShine; // 0x420(0x04)
	float MoonRoll; // 0x424(0x04)
	float MoonVisibleDuration; // 0x428(0x04)
	struct FRotator MoonRotation; // 0x42c(0x0c)
	float WorldRotation; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct UTexture* WorldLayerTexture; // 0x440(0x08)
	float WorldLayerFog; // 0x448(0x04)
	float WorldLayerDepth; // 0x44c(0x04)
	struct FLinearColor WorldLayerColor; // 0x450(0x10)
	struct UMaterialInstanceConstant* GroundShadowMaterial; // 0x460(0x08)
	float GroundShadowScale; // 0x468(0x04)
	float GroundShadowSoft; // 0x46c(0x04)
	struct UMaterialInstanceDynamic* GroundShadowMaterialInst; // 0x470(0x08)
	bool UseWorldSpaceRotation; // 0x478(0x01)
	char pad_479[0x7]; // 0x479(0x07)
	struct AActor* LightningEpicenter; // 0x480(0x08)
	int32_t LightningIterations; // 0x488(0x04)
	char pad_48C[0x4]; // 0x48c(0x04)
	struct FMulticastInlineDelegate OnWeatherPresetChanged; // 0x490(0x10)
	struct FMulticastInlineDelegate OnTimeOfDayPresetChanged; // 0x4a0(0x10)
	struct FMulticastInlineDelegate OnLightningPlayed; // 0x4b0(0x10)
	bool UseDanzetsu; // 0x4c0(0x01)
	char pad_4C1[0x3]; // 0x4c1(0x03)
	float DanzetsuOpacity; // 0x4c4(0x04)
	bool UpdateColorHSV; // 0x4c8(0x01)
	char pad_4C9[0x3]; // 0x4c9(0x03)
	struct FVector SkyUpperHSV; // 0x4cc(0x0c)
	float SkyUpperA; // 0x4d8(0x04)
	struct FVector SkyLowerHSV; // 0x4dc(0x0c)
	float SkyLowerA; // 0x4e8(0x04)
	struct FVector CloudsUpperHSV; // 0x4ec(0x0c)
	float CloudsUpperA; // 0x4f8(0x04)
	struct FVector CloudsLowerHSV; // 0x4fc(0x0c)
	float CloudsLowerA; // 0x508(0x04)
	struct FVector CloudsSecondaryHSV; // 0x50c(0x0c)
	float CloudsSecondaryA; // 0x518(0x04)
	struct FVector CloudsBackgroundHSV; // 0x51c(0x0c)
	float CloudsBackgroundA; // 0x528(0x04)
	struct FVector SunColorHSV; // 0x52c(0x0c)
	float SunColorA; // 0x538(0x04)
	struct FVector MoonRotationOverride; // 0x53c(0x0c)
	bool MoonRotationUse; // 0x548(0x01)

	void ColorToHSVOverride(); // Function BP_en_ProceduralSky.BP_en_ProceduralSky_C.ColorToHSVOverride // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDanzetsuPrameters(); // Function BP_en_ProceduralSky.BP_en_ProceduralSky_C.UpdateDanzetsuPrameters // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLightning(struct UBP_en_Sky_LightningPreset_C* Preset, struct UCurveFloat* Scale, int32_t iterations); // Function BP_en_ProceduralSky.BP_en_ProceduralSky_C.SetLightning // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetShadowFunction(struct UMaterialInstanceConstant* Material); // Function BP_en_ProceduralSky.BP_en_ProceduralSky_C.SetShadowFunction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateShadowParameters(); // Function BP_en_ProceduralSky.BP_en_ProceduralSky_C.UpdateShadowParameters // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateSunParameters(); // Function BP_en_ProceduralSky.BP_en_ProceduralSky_C.UpdateSunParameters // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateExternalActors(); // Function BP_en_ProceduralSky.BP_en_ProceduralSky_C.UpdateExternalActors // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SampleCurveBySunHeight(struct UCurveLinearColor* Curve, struct FLinearColor Default, struct FLinearColor Color); // Function BP_en_ProceduralSky.BP_en_ProceduralSky_C.SampleCurveBySunHeight // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateNightParameters(); // Function BP_en_ProceduralSky.BP_en_ProceduralSky_C.UpdateNightParameters // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateLayersParameters(float DeltaTime); // Function BP_en_ProceduralSky.BP_en_ProceduralSky_C.UpdateLayersParameters // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCloudsParameters(); // Function BP_en_ProceduralSky.BP_en_ProceduralSky_C.UpdateCloudsParameters // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateHorizonParameters(); // Function BP_en_ProceduralSky.BP_en_ProceduralSky_C.UpdateHorizonParameters // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCurves(); // Function BP_en_ProceduralSky.BP_en_ProceduralSky_C.UpdateCurves // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateSkyParameters(float DeltaTime); // Function BP_en_ProceduralSky.BP_en_ProceduralSky_C.UpdateSkyParameters // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_en_ProceduralSky.BP_en_ProceduralSky_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PostConstructionScript(); // Function BP_en_ProceduralSky.BP_en_ProceduralSky_C.PostConstructionScript // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_en_ProceduralSky.BP_en_ProceduralSky_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void SetCinematicMode(); // Function BP_en_ProceduralSky.BP_en_ProceduralSky_C.SetCinematicMode // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBGMode(); // Function BP_en_ProceduralSky.BP_en_ProceduralSky_C.SetBGMode // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_en_ProceduralSky(int32_t EntryPoint); // Function BP_en_ProceduralSky.BP_en_ProceduralSky_C.ExecuteUbergraph_BP_en_ProceduralSky // (Final|UbergraphFunction) // @ game+0x1685580
	void OnLightningPlayed__DelegateSignature(); // Function BP_en_ProceduralSky.BP_en_ProceduralSky_C.OnLightningPlayed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTimeOfDayPresetChanged__DelegateSignature(struct UBP_en_Sky_TimeOfDayPreset_C* Preset, float TransitionDuraion); // Function BP_en_ProceduralSky.BP_en_ProceduralSky_C.OnTimeOfDayPresetChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnWeatherPresetChanged__DelegateSignature(struct UBP_en_Sky_WeatherPreset_C* Preset, float TransitionDuration); // Function BP_en_ProceduralSky.BP_en_ProceduralSky_C.OnWeatherPresetChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

