// BlueprintGeneratedClass BP_EventRenderingOption.BP_EventRenderingOption_C
// Size: 0x3aa (Inherited: 0x230)
struct ABP_EventRenderingOption_C : ARSEditorCallbackActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	bool OverrideTranslucecnyResolution; // 0x240(0x01)
	enum class ERenderingSettingsType TranslucencyResolution; // 0x241(0x01)
	bool RestoreTranslucecnyResolution; // 0x242(0x01)
	bool OverrideDynamicShadow; // 0x243(0x01)
	enum class ERenderingShadowType DynamicShadow; // 0x244(0x01)
	bool OverrideVolumetricFog; // 0x245(0x01)
	enum class ERenderingVisibilityType VolumetricFog; // 0x246(0x01)
	bool OverrideSSR; // 0x247(0x01)
	enum class ERenderingVisibilityType SSR; // 0x248(0x01)
	bool OverrideLC01; // 0x249(0x01)
	enum class ERenderingVisibilityType LC01_SpotLight; // 0x24a(0x01)
	bool OverrideLC010; // 0x24b(0x01)
	enum class ERenderingVisibilityType LC10_Komorebi; // 0x24c(0x01)
	bool OverridePPMOutline; // 0x24d(0x01)
	enum class ERenderingVisibilityType PPM_Outline; // 0x24e(0x01)
	bool OverridePPMBgEdge; // 0x24f(0x01)
	enum class ERenderingVisibilityType PPM_BgEdge; // 0x250(0x01)
	bool OverridePPM8310Noise; // 0x251(0x01)
	enum class ERenderingVisibilityType PPM_8310Noise; // 0x252(0x01)
	bool RestoreAOQuality; // 0x253(0x01)
	float RestoreAAQuality; // 0x254(0x04)
	bool RestoreDynamicShadow; // 0x258(0x01)
	bool RestoreVolumetricFog; // 0x259(0x01)
	bool RestoreSSR; // 0x25a(0x01)
	bool RestoreReflectionEnvironment; // 0x25b(0x01)
	bool RestoreLightShaft; // 0x25c(0x01)
	bool RestoreLC01_SpotLight; // 0x25d(0x01)
	bool RestoreLC10_Komorebi; // 0x25e(0x01)
	bool RestoreLC10_KunadoGate; // 0x25f(0x01)
	bool RestoreLC17_enLight; // 0x260(0x01)
	bool RestoreLC22_em8310; // 0x261(0x01)
	bool RestorePPM_Outline; // 0x262(0x01)
	bool RestorePPM_BgEdge; // 0x263(0x01)
	bool RestorePPM_8310Noise; // 0x264(0x01)
	char pad_265[0x3]; // 0x265(0x03)
	struct TArray<struct ASpotLight*> LC01SpotLights; // 0x268(0x10)
	struct TArray<struct ASpotLight*> LC10Komorebi; // 0x278(0x10)
	struct TArray<struct ABP_EffectBackground_C*> LC10KunadoGate; // 0x288(0x10)
	struct TArray<struct ABP_PostProcessController_C*> LC10KunadoGatePP; // 0x298(0x10)
	struct TArray<struct ABP_en_Light01_C*> LC17enLight; // 0x2a8(0x10)
	struct TArray<struct ARSBattleEnemy_C*> LC22em8310ShadowActors; // 0x2b8(0x10)
	struct TArray<struct UStaticMeshComponent*> LC22em8310ShadowHoldMeshes; // 0x2c8(0x10)
	struct TArray<struct ARSCharacterBase*> ShadowCharacters; // 0x2d8(0x10)
	struct TArray<struct ABP_MenuPlayerBase_C*> ShadowMenuPlayers; // 0x2e8(0x10)
	bool RestoreSelectDynamicShadow; // 0x2f8(0x01)
	bool Initialize; // 0x2f9(0x01)
	char pad_2FA[0x6]; // 0x2fa(0x06)
	struct TArray<struct UPrimitiveComponent*> DynamicShadowComponents; // 0x300(0x10)
	struct TArray<struct ABP_PostProcessController_C*> PPM8310Noise; // 0x310(0x10)
	bool OverrideSelectDynamicShadow; // 0x320(0x01)
	enum class ERenderingVisibilityType SelectDynamicShadow; // 0x321(0x01)
	char pad_322[0x6]; // 0x322(0x06)
	struct AActor* SelectDynamicShadowActor1; // 0x328(0x08)
	struct AActor* SelectDynamicShadowActor2; // 0x330(0x08)
	struct AActor* SelectDynamicShadowActor3; // 0x338(0x08)
	struct AActor* SelectDynamicShadowActor4; // 0x340(0x08)
	struct AActor* SelectDynamicShadowActor5; // 0x348(0x08)
	struct AActor* SelectDynamicShadowActor6; // 0x350(0x08)
	struct AActor* SelectDynamicShadowActor7; // 0x358(0x08)
	struct AActor* SelectDynamicShadowActor8; // 0x360(0x08)
	struct AActor* SelectDynamicShadowActor9; // 0x368(0x08)
	bool OverrideLC010_KunadoGate; // 0x370(0x01)
	enum class ERenderingVisibilityType LC10_KunadoGate; // 0x371(0x01)
	bool OverrideLC017; // 0x372(0x01)
	enum class ERenderingVisibilityType LC17_enLight; // 0x373(0x01)
	bool OverrideLC22_em8310; // 0x374(0x01)
	enum class ERenderingVisibilityType LC22_em8310; // 0x375(0x01)
	bool LC22_em8310_DynamicShadowFront; // 0x376(0x01)
	bool LC22_em8310_DynamicShadowFrontHoldHand; // 0x377(0x01)
	bool LC22_em8310_DynamicShadowBack; // 0x378(0x01)
	bool LC22_em8310_DynamicShadowBackHoldHand; // 0x379(0x01)
	bool LC22_em8310_DynamicShadowRight; // 0x37a(0x01)
	bool LC22_em8310_DynamicShadowRightHoldHand; // 0x37b(0x01)
	bool LC22_em8310_DynamicShadowLeft; // 0x37c(0x01)
	bool LC22_em8310_DynamicShadowLeftHoldHand; // 0x37d(0x01)
	bool OverrideReflectionEnvironment; // 0x37e(0x01)
	enum class ERenderingVisibilityType ReflectionEnvironment; // 0x37f(0x01)
	bool OverrideLightShaft; // 0x380(0x01)
	enum class ERenderingVisibilityType LightShaft; // 0x381(0x01)
	char pad_382[0x6]; // 0x382(0x06)
	struct UPostProcessComponent* ControlPPC; // 0x388(0x08)
	struct ABP_EventRenderingOptionSimCasher_C* SimulateCasher; // 0x390(0x08)
	struct TArray<struct UPrimitiveComponent*> SelectShadowComponents; // 0x398(0x10)
	bool OverrideAOQuality; // 0x3a8(0x01)
	enum class ERenderingSettingsType AOQuality; // 0x3a9(0x01)

	void GetMeshMenuPlayer(struct ABP_MenuPlayerBase_C* Player, struct UMeshComponent* Mesh, struct TArray<struct UMeshComponent*> AttachmentMeshes); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.GetMeshMenuPlayer // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMeshBattlePlayer(struct ARSBattlePlayer_C* Player, struct UMeshComponent* Mesh, struct TArray<struct UMeshComponent*> AttachmentMeshes); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.GetMeshBattlePlayer // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SimulateBackup(); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.SimulateBackup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateRestoreEm8310DynamicShadow(); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.PrivateRestoreEm8310DynamicShadow // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetEm8310DynamicShadow(enum class ERenderingVisibilityType ShadowType); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.PrivateSetEm8310DynamicShadow // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateRestoreSelectDynamicShadow(); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.PrivateRestoreSelectDynamicShadow // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetSelectDynamicShadow(enum class ERenderingVisibilityType ShadowType); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.PrivateSetSelectDynamicShadow // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SimulateTick(); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.SimulateTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateRestorePPM_8310Noise(); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.PrivateRestorePPM_8310Noise // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetPPM_8310Noise(enum class ERenderingVisibilityType VisibilityType); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.PrivateSetPPM_8310Noise // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateRestorePPM_BgEdge(); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.PrivateRestorePPM_BgEdge // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetPPM_BgEdge(enum class ERenderingVisibilityType VisibilityType); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.PrivateSetPPM_BgEdge // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateRestorePPM_Outline(); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.PrivateRestorePPM_Outline // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetPPM_Outline(enum class ERenderingVisibilityType VisibilityType); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.PrivateSetPPM_Outline // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateRestoreLC17_enLight(); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.PrivateRestoreLC17_enLight // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetLC17_enLight(enum class ERenderingVisibilityType VisibilityType); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.PrivateSetLC17_enLight // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateRestoreLC10_KunadoGate(); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.PrivateRestoreLC10_KunadoGate // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetLC10_KunadoGate(enum class ERenderingVisibilityType VisibilityType); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.PrivateSetLC10_KunadoGate // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateRestoreLC10_Komorebi(); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.PrivateRestoreLC10_Komorebi // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetLC10_Komorebi(enum class ERenderingVisibilityType VisibilityType); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.PrivateSetLC10_Komorebi // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateRestoreLC01_SpotLight(); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.PrivateRestoreLC01_SpotLight // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetLC01_SpotLight(enum class ERenderingVisibilityType VisibilityType); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.PrivateSetLC01_SpotLight // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateRestoreLightShaft(); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.PrivateRestoreLightShaft // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetLightShaft(enum class ERenderingVisibilityType VisibilityType); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.PrivateSetLightShaft // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateRestoreReflectionEnvironment(); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.PrivateRestoreReflectionEnvironment // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetReflectionEnvironment(enum class ERenderingVisibilityType VisibilityType); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.PrivateSetReflectionEnvironment // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateRestoreSSR(); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.PrivateRestoreSSR // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetSSR(enum class ERenderingVisibilityType VisibilityType); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.PrivateSetSSR // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateRestoreVolumetricFog(); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.PrivateRestoreVolumetricFog // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetVolumetricFog(enum class ERenderingVisibilityType VisibilityType); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.PrivateSetVolumetricFog // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateRestoreDynamicShadow(); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.PrivateRestoreDynamicShadow // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetDynamicShadow(enum class ERenderingShadowType ShadowType); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.PrivateSetDynamicShadow // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateRestoreAOQuality(); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.PrivateRestoreAOQuality // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetAOQuality(enum class ERenderingSettingsType RenderingSettingType); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.PrivateSetAOQuality // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetTranslucencyResolution(enum class ERenderingSettingsType RenderingSettingType); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.PrivateSetTranslucencyResolution // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSpawnPPC(); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.PrivateSpawnPPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Restore(); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.Restore // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TickSetup(); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.TickSetup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Setup(bool IsSimulate); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.Setup // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void EventPostEditChangeProperty(); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.EventPostEditChangeProperty // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventRenderingOption(int32_t EntryPoint); // Function BP_EventRenderingOption.BP_EventRenderingOption_C.ExecuteUbergraph_BP_EventRenderingOption // (Final|UbergraphFunction) // @ game+0x1685580
};

