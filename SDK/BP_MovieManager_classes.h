// BlueprintGeneratedClass BP_MovieManager.BP_MovieManager_C
// Size: 0x2e9 (Inherited: 0x288)
struct ABP_MovieManager_C : ARSMovieManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	struct URSManaComponent* RSManaComponent; // 0x298(0x08)
	struct UWB_CriMovie_C* WB_Movie; // 0x2a0(0x08)
	struct UMaterialInstanceDynamic* MovieMaterialInstance; // 0x2a8(0x08)
	enum class EManaComponentStatus isPlay; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct FMulticastInlineDelegate OnFinishMovie; // 0x2b8(0x10)
	bool IndividualFlag; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct UImage* WBImageData; // 0x2d0(0x08)
	bool bLoop; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct UMaterialInstanceDynamic* WidgetMaterial; // 0x2e0(0x08)
	bool MovieViewUp; // 0x2e8(0x01)

	void SetMovieAlphaRate(float AlphaRate); // Function BP_MovieManager.BP_MovieManager_C.SetMovieAlphaRate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	enum class EManaComponentStatus GetStatusNative(); // Function BP_MovieManager.BP_MovieManager_C.GetStatusNative // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool ResetManaComponentOtherNative(); // Function BP_MovieManager.BP_MovieManager_C.ResetManaComponentOtherNative // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFinishMovie_(enum class EManaComponentStatus Stat, struct UManaComponent* mana); // Function BP_MovieManager.BP_MovieManager_C.OnFinishMovie_ // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetManaComponent(); // Function BP_MovieManager.BP_MovieManager_C.ResetManaComponent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetWidgetMaterial(); // Function BP_MovieManager.BP_MovieManager_C.ResetWidgetMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWidgetMaterial(struct UMaterialInterface* Material); // Function BP_MovieManager.BP_MovieManager_C.SetWidgetMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMovieTextureAndPrepare(struct UManaTexture* movieTexture); // Function BP_MovieManager.BP_MovieManager_C.SetMovieTextureAndPrepare // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetIndividualSetting(bool Flag); // Function BP_MovieManager.BP_MovieManager_C.SetIndividualSetting // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetMoviePrepareSetting(); // Function BP_MovieManager.BP_MovieManager_C.SetMoviePrepareSetting // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetMovieImageTexture(struct UImage* Image); // Function BP_MovieManager.BP_MovieManager_C.SetMovieImageTexture // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsLoop(bool IsLoop); // Function BP_MovieManager.BP_MovieManager_C.IsLoop // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLoop(bool SetLoop); // Function BP_MovieManager.BP_MovieManager_C.SetLoop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsStop(bool IsStop); // Function BP_MovieManager.BP_MovieManager_C.IsStop // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsReady(bool IsReady); // Function BP_MovieManager.BP_MovieManager_C.IsReady // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPreparing(bool IsPreparing); // Function BP_MovieManager.BP_MovieManager_C.IsPreparing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPlaying(bool IsPlaying); // Function BP_MovieManager.BP_MovieManager_C.IsPlaying // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrepareMovie(); // Function BP_MovieManager.BP_MovieManager_C.PrepareMovie // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMovieTexture(struct UManaTexture* movieTexture); // Function BP_MovieManager.BP_MovieManager_C.SetMovieTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopMovie(); // Function BP_MovieManager.BP_MovieManager_C.StopMovie // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Play Movie(); // Function BP_MovieManager.BP_MovieManager_C.Play Movie // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_MovieManager.BP_MovieManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void EventPoint(struct FManaEventPointInfo EventPointInfo); // Function BP_MovieManager.BP_MovieManager_C.EventPoint // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BndEvt__RSManaComponent_K2Node_ComponentBoundEvent_0_OnStatusChanged__DelegateSignature(enum class EManaComponentStatus Status, struct UManaComponent* ManaComponent); // Function BP_MovieManager.BP_MovieManager_C.BndEvt__RSManaComponent_K2Node_ComponentBoundEvent_0_OnStatusChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void OnEndCutScene(); // Function BP_MovieManager.BP_MovieManager_C.OnEndCutScene // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_MovieManager(int32_t EntryPoint); // Function BP_MovieManager.BP_MovieManager_C.ExecuteUbergraph_BP_MovieManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
	void OnFinishMovie__DelegateSignature(); // Function BP_MovieManager.BP_MovieManager_C.OnFinishMovie__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

