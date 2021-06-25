// BlueprintGeneratedClass BP_CameraTriggerBox.BP_CameraTriggerBox_C
// Size: 0x298 (Inherited: 0x259)
struct ABP_CameraTriggerBox_C : ABP_TriggerBoxBase_C {
	char pad_259[0x7]; // 0x259(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct ABP_RSPlayerCameraManager_C* CameraManager; // 0x268(0x08)
	struct FCameraTriggerInfo triggerInfo; // 0x270(0x28)

	void SetEventTriggerInfo(bool flag in, struct AActor* ply actor in, struct FCameraTriggerInfo trg info in); // Function BP_CameraTriggerBox.BP_CameraTriggerBox_C.SetEventTriggerInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCameraManager(struct ABP_RSPlayerCameraManager_C* camera manager); // Function BP_CameraTriggerBox.BP_CameraTriggerBox_C.GetCameraManager // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_CameraTriggerBox.BP_CameraTriggerBox_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function BP_CameraTriggerBox.BP_CameraTriggerBox_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveActorEndOverlap(struct AActor* OtherActor); // Function BP_CameraTriggerBox.BP_CameraTriggerBox_C.ReceiveActorEndOverlap // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_CameraTriggerBox(int32_t EntryPoint); // Function BP_CameraTriggerBox.BP_CameraTriggerBox_C.ExecuteUbergraph_BP_CameraTriggerBox // (Final|UbergraphFunction) // @ game+0x1685580
};

