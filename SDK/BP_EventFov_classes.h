// BlueprintGeneratedClass BP_EventFov.BP_EventFov_C
// Size: 0x260 (Inherited: 0x230)
struct ABP_EventFov_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	float BaseFOV; // 0x240(0x04)
	float AddFOV; // 0x244(0x04)
	struct ARSBattlePlayer_C* Target; // 0x248(0x08)
	bool DirectViewSet; // 0x250(0x01)
	char pad_251[0x3]; // 0x251(0x03)
	float StartInterpolateSeconds; // 0x254(0x04)
	float LocalStartInterpolateSeconds; // 0x258(0x04)
	float FinalizeInterpolateTime; // 0x25c(0x04)

	void SetPlayerCameraFov(bool Enable, float FOV, float InterpolateTime); // Function BP_EventFov.BP_EventFov_C.SetPlayerCameraFov // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDirectCameraFov(float FOV); // Function BP_EventFov.BP_EventFov_C.SetDirectCameraFov // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(float DeltaSeconds); // Function BP_EventFov.BP_EventFov_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventFov.BP_EventFov_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EventFov.BP_EventFov_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EventFov.BP_EventFov_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventFov(int32_t EntryPoint); // Function BP_EventFov.BP_EventFov_C.ExecuteUbergraph_BP_EventFov // (Final|UbergraphFunction) // @ game+0x1685580
};

