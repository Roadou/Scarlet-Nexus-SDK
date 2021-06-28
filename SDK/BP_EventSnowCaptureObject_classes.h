// BlueprintGeneratedClass BP_EventSnowCaptureObject.BP_EventSnowCaptureObject_C
// Size: 0x270 (Inherited: 0x230)
struct ABP_EventSnowCaptureObject_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UStaticMeshComponent* Cylinder4; // 0x238(0x08)
	struct UStaticMeshComponent* Cylinder3; // 0x240(0x08)
	struct UStaticMeshComponent* Cylinder2; // 0x248(0x08)
	struct UStaticMeshComponent* Cylinder1; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	struct TArray<struct ASnowCaptureBase*> TargetSnowCaptures; // 0x260(0x10)

	void Restore(); // Function BP_EventSnowCaptureObject.BP_EventSnowCaptureObject_C.Restore // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function BP_EventSnowCaptureObject.BP_EventSnowCaptureObject_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventSnowCaptureObject.BP_EventSnowCaptureObject_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EventSnowCaptureObject.BP_EventSnowCaptureObject_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventSnowCaptureObject(int32_t EntryPoint); // Function BP_EventSnowCaptureObject.BP_EventSnowCaptureObject_C.ExecuteUbergraph_BP_EventSnowCaptureObject // (Final|UbergraphFunction) // @ game+0x1685580
};

