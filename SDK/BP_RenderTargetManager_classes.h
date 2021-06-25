// BlueprintGeneratedClass BP_RenderTargetManager.BP_RenderTargetManager_C
// Size: 0x308 (Inherited: 0x230)
struct ABP_RenderTargetManager_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	struct UTextureRenderTarget2D* RT_SASCutin; // 0x240(0x08)
	struct UTextureRenderTarget2D* RT_EventTransitionScreen; // 0x248(0x08)
	bool IsInitialize; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)
	struct UTextureRenderTarget2D* RT_UIMinimap; // 0x258(0x08)
	struct UTextureRenderTarget2D* RT_CutSceneFaceA; // 0x260(0x08)
	struct UTextureRenderTarget2D* RT_CutSceneFaceB; // 0x268(0x08)
	struct UTextureRenderTarget2D* RT_CutSceneFaceC; // 0x270(0x08)
	int32_t RenderTargetTypeFlag; // 0x278(0x04)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct UTextureRenderTarget2D* RT_CutSceneFaceD; // 0x280(0x08)
	struct UTextureRenderTarget2D* RT_CutSceneFaceE; // 0x288(0x08)
	struct UTextureRenderTarget2D* RT_CutSceneFaceF; // 0x290(0x08)
	struct UTextureRenderTarget2D* RT_CutSceneFaceG; // 0x298(0x08)
	struct UTextureRenderTarget2D* RT_CutSceneFaceH; // 0x2a0(0x08)
	struct UTextureRenderTarget2D* RT_CutSceneFaceI; // 0x2a8(0x08)
	struct UTextureRenderTarget2D* RT_BrainFieldMonitor; // 0x2b0(0x08)
	struct UTextureRenderTarget2D* SpecialCutSceneA; // 0x2b8(0x08)
	struct UTextureRenderTarget2D* SpecialCutSceneB; // 0x2c0(0x08)
	struct UTextureRenderTarget2D* RT_MenuCharacterA_Alpha; // 0x2c8(0x08)
	struct UTextureRenderTarget2D* RT_MenuCharacterB_Alpha; // 0x2d0(0x08)
	struct UTextureRenderTarget2D* SpecialCutSceneE; // 0x2d8(0x08)
	struct UTextureRenderTarget2D* RT_WorldMap; // 0x2e0(0x08)
	float RenderScreenPercentage; // 0x2e8(0x04)
	float PlatformScreenPercentage; // 0x2ec(0x04)
	bool Resolution4k; // 0x2f0(0x01)
	char pad_2F1[0x7]; // 0x2f1(0x07)
	struct FMulticastInlineDelegate ED_ResetRenderTarget; // 0x2f8(0x10)

	bool IsNeedFrameWait(); // Function BP_RenderTargetManager.BP_RenderTargetManager_C.IsNeedFrameWait // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool FinalizeManager(enum class EManagerProcTiming Timing); // Function BP_RenderTargetManager.BP_RenderTargetManager_C.FinalizeManager // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool InitializeManager(enum class EManagerProcTiming Timing); // Function BP_RenderTargetManager.BP_RenderTargetManager_C.InitializeManager // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPlatformScreenPercentage(float ScreenPercentage); // Function BP_RenderTargetManager.BP_RenderTargetManager_C.GetPlatformScreenPercentage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugForceResetRenderTarget(); // Function BP_RenderTargetManager.BP_RenderTargetManager_C.DebugForceResetRenderTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateResetRenderTarget(bool InitializeSetting, bool ForceReset); // Function BP_RenderTargetManager.BP_RenderTargetManager_C.PrivateResetRenderTarget // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugGetRenderTargetList(struct TArray<struct UTextureRenderTarget2D*> RenderTargetList); // Function BP_RenderTargetManager.BP_RenderTargetManager_C.DebugGetRenderTargetList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndDebuggingManager(int32_t RestoreFlag); // Function BP_RenderTargetManager.BP_RenderTargetManager_C.EndDebuggingManager // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetScreenTargetSize(int32_t BaseWidth, int32_t BaseHeight, bool Allow4k, int32_t Width, int32_t Height); // Function BP_RenderTargetManager.BP_RenderTargetManager_C.GetScreenTargetSize // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void PrivateCreateCutSceneFaceTarget(struct UTextureRenderTarget2D* Target); // Function BP_RenderTargetManager.BP_RenderTargetManager_C.PrivateCreateCutSceneFaceTarget // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearEventRenderTargetFlag(); // Function BP_RenderTargetManager.BP_RenderTargetManager_C.ClearEventRenderTargetFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginDebuggingManager(int32_t RestoreFlag); // Function BP_RenderTargetManager.BP_RenderTargetManager_C.BeginDebuggingManager // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSpecialCutSceneRenderTarget(struct UTextureRenderTarget2D* RenderTarget, enum class ERenderTargetType UsedRenderTargetType); // Function BP_RenderTargetManager.BP_RenderTargetManager_C.GetSpecialCutSceneRenderTarget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetERenderTargetTypeBitMask(enum class ERenderTargetType ERenderTargetType, int32_t BitMask); // Function BP_RenderTargetManager.BP_RenderTargetManager_C.GetERenderTargetTypeBitMask // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetRenderTarget(enum class ERenderTargetType RenderTargetType, struct UTextureRenderTarget2D* RenderTarget); // Function BP_RenderTargetManager.BP_RenderTargetManager_C.GetRenderTarget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsOnRenderTargetTypeFlag(int32_t BitMask); // Function BP_RenderTargetManager.BP_RenderTargetManager_C.IsOnRenderTargetTypeFlag // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OffRenderTargetTypeFlag(int32_t BitMask); // Function BP_RenderTargetManager.BP_RenderTargetManager_C.OffRenderTargetTypeFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnRendetTargetTypeFlag(int32_t BitMask); // Function BP_RenderTargetManager.BP_RenderTargetManager_C.OnRendetTargetTypeFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function BP_RenderTargetManager.BP_RenderTargetManager_C.Initialize // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCutSceneFaceRenderTarget(struct UTextureRenderTarget2D* RenderTarget, enum class ERenderTargetType UsedRenderTargetType); // Function BP_RenderTargetManager.BP_RenderTargetManager_C.GetCutSceneFaceRenderTarget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_RenderTargetManager.BP_RenderTargetManager_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DelayBeginPlay(); // Function BP_RenderTargetManager.BP_RenderTargetManager_C.DelayBeginPlay // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetRenderTarget(); // Function BP_RenderTargetManager.BP_RenderTargetManager_C.ResetRenderTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_RenderTargetManager(int32_t EntryPoint); // Function BP_RenderTargetManager.BP_RenderTargetManager_C.ExecuteUbergraph_BP_RenderTargetManager // (Final|UbergraphFunction) // @ game+0x1685580
	void ED_ResetRenderTarget__DelegateSignature(enum class ERenderTargetType RenderTargetType, struct UTextureRenderTarget2D* NewTarget); // Function BP_RenderTargetManager.BP_RenderTargetManager_C.ED_ResetRenderTarget__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

