// BlueprintGeneratedClass BP_GameMainManager.BP_GameMainManager_C
// Size: 0x308 (Inherited: 0x2d0)
struct ABP_GameMainManager_C : AGameMainManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct USceneCaptureComponent2D* SaveDataIconCapture; // 0x2d8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2e0(0x08)
	bool IsLoop; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)
	struct AHUDMainGame_C* HudMain; // 0x2f0(0x08)
	struct UTextureRenderTarget2D* SaveDataIconTexture; // 0x2f8(0x08)
	struct FName SelectedItemForRetry; // 0x300(0x08)

	bool DoSaveDataCapture(); // Function BP_GameMainManager.BP_GameMainManager_C.DoSaveDataCapture // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct UTextureRenderTarget2D* GetSaveDataCapture(); // Function BP_GameMainManager.BP_GameMainManager_C.GetSaveDataCapture // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CaptureScreen(); // Function BP_GameMainManager.BP_GameMainManager_C.CaptureScreen // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartPlayerDeadFlow(); // Function BP_GameMainManager.BP_GameMainManager_C.StartPlayerDeadFlow // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartGameoverFlow(enum class EGameOverResult resultType); // Function BP_GameMainManager.BP_GameMainManager_C.StartGameoverFlow // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_GameMainManager.BP_GameMainManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_GameMainManager(int32_t EntryPoint); // Function BP_GameMainManager.BP_GameMainManager_C.ExecuteUbergraph_BP_GameMainManager // (Final|UbergraphFunction) // @ game+0x1685580
};

