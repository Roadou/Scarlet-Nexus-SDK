// BlueprintGeneratedClass BP_EventControllerVibration.BP_EventControllerVibration_C
// Size: 0x24d (Inherited: 0x230)
struct ABP_EventControllerVibration_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	struct UForceFeedbackEffect* VibrationParameterAsset; // 0x240(0x08)
	bool VibrationLoop; // 0x248(0x01)
	bool VibrationOneShot; // 0x249(0x01)
	bool PreviousVibrationLoop; // 0x24a(0x01)
	bool PreviousVibrationOneShot; // 0x24b(0x01)
	bool isPlay; // 0x24c(0x01)

	void Play(bool IsLoop); // Function BP_EventControllerVibration.BP_EventControllerVibration_C.Play // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Stop(); // Function BP_EventControllerVibration.BP_EventControllerVibration_C.Stop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(); // Function BP_EventControllerVibration.BP_EventControllerVibration_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EventControllerVibration.BP_EventControllerVibration_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventControllerVibration.BP_EventControllerVibration_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EventControllerVibration.BP_EventControllerVibration_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventControllerVibration(int32_t EntryPoint); // Function BP_EventControllerVibration.BP_EventControllerVibration_C.ExecuteUbergraph_BP_EventControllerVibration // (Final|UbergraphFunction) // @ game+0x1685580
};

