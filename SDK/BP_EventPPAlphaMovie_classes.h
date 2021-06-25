// BlueprintGeneratedClass BP_EventPPAlphaMovie.BP_EventPPAlphaMovie_C
// Size: 0x2fd (Inherited: 0x269)
struct ABP_EventPPAlphaMovie_C : ABP_EventTypeSwitchBase_C {
	char pad_269[0x7]; // 0x269(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	float Rate; // 0x278(0x04)
	bool m_manaPreparing; // 0x27c(0x01)
	bool m_manaPrepared; // 0x27d(0x01)
	char pad_27E[0x2]; // 0x27e(0x02)
	struct UManaSource* Sofdec2MovieSource; // 0x280(0x08)
	struct UManaTexture* Sofdec2MovieTexture; // 0x288(0x08)
	int32_t BlendMode; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
	struct UMaterialInstance* AlphaMovieMaterialInstance; // 0x298(0x08)
	struct UMaterialInstanceDynamic* AlphaMovieDynamicMI; // 0x2a0(0x08)
	struct APostProcessVolume* PPV; // 0x2a8(0x08)
	struct TArray<struct APostProcessVolume*> foundPPVs; // 0x2b0(0x10)
	bool RevU; // 0x2c0(0x01)
	bool RevV; // 0x2c1(0x01)
	bool m_movieAppiled; // 0x2c2(0x01)
	bool seeked; // 0x2c3(0x01)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct UMaterialInstance* AlphaMovieMaterialInstanceOnUI_Mul; // 0x2c8(0x08)
	struct UMaterialInstance* AlphaMovieMaterialInstanceOnUI_Add; // 0x2d0(0x08)
	struct UMaterialInstanceDynamic* AlphaMovieDynamicMIOnUI_Add; // 0x2d8(0x08)
	struct UMaterialInstanceDynamic* AlphaMovieDynamicMIOnUI_Mul; // 0x2e0(0x08)
	struct ABP_MovieManager_C* MovieManager; // 0x2e8(0x08)
	struct URSManaComponent* manaComp; // 0x2f0(0x08)
	bool m_movieManagerHasLoadedMovie; // 0x2f8(0x01)
	bool WaitPlay; // 0x2f9(0x01)
	bool WaitPrepare; // 0x2fa(0x01)
	bool Loop; // 0x2fb(0x01)
	bool ChangedWidgetMaterial; // 0x2fc(0x01)

	void StopMovie(); // Function BP_EventPPAlphaMovie.BP_EventPPAlphaMovie_C.StopMovie // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EditorStopMovie(); // Function BP_EventPPAlphaMovie.BP_EventPPAlphaMovie_C.EditorStopMovie // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MovieManagerLoadedMovie(bool Result); // Function BP_EventPPAlphaMovie.BP_EventPPAlphaMovie_C.MovieManagerLoadedMovie // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MovieManagerHasMovie(bool Result); // Function BP_EventPPAlphaMovie.BP_EventPPAlphaMovie_C.MovieManagerHasMovie // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadMovieFromPath(struct FString Path); // Function BP_EventPPAlphaMovie.BP_EventPPAlphaMovie_C.LoadMovieFromPath // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void invisibleForManner(); // Function BP_EventPPAlphaMovie.BP_EventPPAlphaMovie_C.invisibleForManner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void setBlendModeSub(); // Function BP_EventPPAlphaMovie.BP_EventPPAlphaMovie_C.setBlendModeSub // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void setBlendModeAdd(); // Function BP_EventPPAlphaMovie.BP_EventPPAlphaMovie_C.setBlendModeAdd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void setBlendModeMul(); // Function BP_EventPPAlphaMovie.BP_EventPPAlphaMovie_C.setBlendModeMul // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void seekAlphaMovie(int32_t seekFrameNumber); // Function BP_EventPPAlphaMovie.BP_EventPPAlphaMovie_C.seekAlphaMovie // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void prepareAlphaMovie(bool succeeded); // Function BP_EventPPAlphaMovie.BP_EventPPAlphaMovie_C.prepareAlphaMovie // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMovieSource(struct UManaSource* newMovieSource); // Function BP_EventPPAlphaMovie.BP_EventPPAlphaMovie_C.SetMovieSource // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void applyMovieSource(bool Result); // Function BP_EventPPAlphaMovie.BP_EventPPAlphaMovie_C.applyMovieSource // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void clearPrepareFlags(); // Function BP_EventPPAlphaMovie.BP_EventPPAlphaMovie_C.clearPrepareFlags // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void playAlphaMovie(); // Function BP_EventPPAlphaMovie.BP_EventPPAlphaMovie_C.playAlphaMovie // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventPPAlphaMovie.BP_EventPPAlphaMovie_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EventPPAlphaMovie.BP_EventPPAlphaMovie_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void Start(); // Function BP_EventPPAlphaMovie.BP_EventPPAlphaMovie_C.Start // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Rewind(); // Function BP_EventPPAlphaMovie.BP_EventPPAlphaMovie_C.Rewind // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Play(); // Function BP_EventPPAlphaMovie.BP_EventPPAlphaMovie_C.Play // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Prepare(); // Function BP_EventPPAlphaMovie.BP_EventPPAlphaMovie_C.Prepare // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Seek(int32_t FrameNumber); // Function BP_EventPPAlphaMovie.BP_EventPPAlphaMovie_C.Seek // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EventPPAlphaMovie.BP_EventPPAlphaMovie_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void BeginPlayStaticCutScene(); // Function BP_EventPPAlphaMovie.BP_EventPPAlphaMovie_C.BeginPlayStaticCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateStaticCutScene(); // Function BP_EventPPAlphaMovie.BP_EventPPAlphaMovie_C.UpdateStaticCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayStaticCutScene(); // Function BP_EventPPAlphaMovie.BP_EventPPAlphaMovie_C.EndPlayStaticCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginPlayDynamicCutScene(); // Function BP_EventPPAlphaMovie.BP_EventPPAlphaMovie_C.BeginPlayDynamicCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDynamicCutScene(); // Function BP_EventPPAlphaMovie.BP_EventPPAlphaMovie_C.UpdateDynamicCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayDynamicCutScene(); // Function BP_EventPPAlphaMovie.BP_EventPPAlphaMovie_C.EndPlayDynamicCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStatusChanged(manaComp)(enum class EManaComponentStatus Status, struct UManaComponent* ManaComponent); // Function BP_EventPPAlphaMovie.BP_EventPPAlphaMovie_C.OnStatusChanged(manaComp) // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void setupMovieManagerProperties(); // Function BP_EventPPAlphaMovie.BP_EventPPAlphaMovie_C.setupMovieManagerProperties // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Stop(); // Function BP_EventPPAlphaMovie.BP_EventPPAlphaMovie_C.Stop // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoopMovie(); // Function BP_EventPPAlphaMovie.BP_EventPPAlphaMovie_C.LoopMovie // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventPPAlphaMovie(int32_t EntryPoint); // Function BP_EventPPAlphaMovie.BP_EventPPAlphaMovie_C.ExecuteUbergraph_BP_EventPPAlphaMovie // (Final|UbergraphFunction) // @ game+0x1685580
};

