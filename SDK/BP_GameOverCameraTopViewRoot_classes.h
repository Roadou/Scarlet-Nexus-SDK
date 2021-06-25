// BlueprintGeneratedClass BP_GameOverCameraTopViewRoot.BP_GameOverCameraTopViewRoot_C
// Size: 0x264 (Inherited: 0x230)
struct ABP_GameOverCameraTopViewRoot_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	float CameraMinLength; // 0x240(0x04)
	float CameraLength; // 0x244(0x04)
	float CameraAnimationLength; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
	struct TArray<struct FName> CollCheckSockets; // 0x250(0x10)
	int32_t AdjustHitNum; // 0x260(0x04)

	void Reset(); // Function BP_GameOverCameraTopViewRoot.BP_GameOverCameraTopViewRoot_C.Reset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupCollision(struct ARSBattlePlayer_C* Player); // Function BP_GameOverCameraTopViewRoot.BP_GameOverCameraTopViewRoot_C.SetupCollision // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_GameOverCameraTopViewRoot.BP_GameOverCameraTopViewRoot_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_GameOverCameraTopViewRoot(int32_t EntryPoint); // Function BP_GameOverCameraTopViewRoot.BP_GameOverCameraTopViewRoot_C.ExecuteUbergraph_BP_GameOverCameraTopViewRoot // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

