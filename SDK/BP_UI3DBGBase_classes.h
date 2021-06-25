// BlueprintGeneratedClass BP_UI3DBGBase.BP_UI3DBGBase_C
// Size: 0x2d9 (Inherited: 0x230)
struct ABP_UI3DBGBase_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UCameraComponent* Camera; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	struct TArray<struct FString> BGLevelName; // 0x248(0x10)
	struct TArray<struct ULevelStreamingDynamic*> BGLevel; // 0x258(0x10)
	int32_t LoadLevelCounter; // 0x268(0x04)
	bool IsLoadEnd; // 0x26c(0x01)
	bool WaitStart; // 0x26d(0x01)
	char pad_26E[0x2]; // 0x26e(0x02)
	struct AActor* RestoreViewTarget; // 0x270(0x08)
	float CameraAngle; // 0x278(0x04)
	struct FUIMain3DBGCameraSetting CameraParameter; // 0x27c(0x20)
	struct FVector RestoreCelLookLightDirection; // 0x29c(0x0c)
	struct FVector CelLookLightDirection; // 0x2a8(0x0c)
	bool InPlay; // 0x2b4(0x01)
	char pad_2B5[0x3]; // 0x2b5(0x03)
	struct FMulticastInlineDelegate ED_OnShown; // 0x2b8(0x10)
	bool UseLevelCamera; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct ACameraActor* LevelCamera; // 0x2d0(0x08)
	bool WaitLevelVisible; // 0x2d8(0x01)

	void UpdateCheckLevelVisible(); // Function BP_UI3DBGBase.BP_UI3DBGBase_C.UpdateCheckLevelVisible // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLevelRenderLayer(char RenderLayer); // Function BP_UI3DBGBase.BP_UI3DBGBase_C.SetLevelRenderLayer // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsValidUseLevelCamera(bool Valid); // Function BP_UI3DBGBase.BP_UI3DBGBase_C.IsValidUseLevelCamera // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetCameraAngle(float Angle); // Function BP_UI3DBGBase.BP_UI3DBGBase_C.SetCameraAngle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventLevelShown(); // Function BP_UI3DBGBase.BP_UI3DBGBase_C.EventLevelShown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateLevelLoad(); // Function BP_UI3DBGBase.BP_UI3DBGBase_C.PrivateLevelLoad // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateBGLevelLoadEnd(); // Function BP_UI3DBGBase.BP_UI3DBGBase_C.PrivateBGLevelLoadEnd // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateTickBGCamera(float DeltaSeconds); // Function BP_UI3DBGBase.BP_UI3DBGBase_C.PrivateTickBGCamera // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCameraParameter(struct FUIMain3DBGCameraSetting CameraSetting); // Function BP_UI3DBGBase.BP_UI3DBGBase_C.SetCameraParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateStartVisible(); // Function BP_UI3DBGBase.BP_UI3DBGBase_C.PrivateStartVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void End(); // Function BP_UI3DBGBase.BP_UI3DBGBase_C.End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Start(); // Function BP_UI3DBGBase.BP_UI3DBGBase_C.Start // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_UI3DBGBase.BP_UI3DBGBase_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_UI3DBGBase.BP_UI3DBGBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_UI3DBGBase.BP_UI3DBGBase_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveDestroyed(); // Function BP_UI3DBGBase.BP_UI3DBGBase_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_UI3DBGBase(int32_t EntryPoint); // Function BP_UI3DBGBase.BP_UI3DBGBase_C.ExecuteUbergraph_BP_UI3DBGBase // (Final|UbergraphFunction) // @ game+0x1685580
	void ED_OnShown__DelegateSignature(); // Function BP_UI3DBGBase.BP_UI3DBGBase_C.ED_OnShown__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

