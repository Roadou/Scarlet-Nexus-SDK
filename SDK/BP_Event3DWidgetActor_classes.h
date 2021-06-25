// BlueprintGeneratedClass BP_Event3DWidgetActor.BP_Event3DWidgetActor_C
// Size: 0x279 (Inherited: 0x230)
struct ABP_Event3DWidgetActor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct URSWidgetComponent* RSWidget_Backface; // 0x238(0x08)
	struct URSWidgetComponent* RSWidget; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	struct FString threadID; // 0x250(0x10)
	struct FName BeforeThreadID; // 0x260(0x08)
	struct UMaterialInterface* OverrideWidgetMaterial; // 0x268(0x08)
	struct UMaterialInterface* PreviousOverrideWidgetMaterial; // 0x270(0x08)
	bool IsCapWaitTAA; // 0x278(0x01)

	void UpdateOverrideMaterial(); // Function BP_Event3DWidgetActor.BP_Event3DWidgetActor_C.UpdateOverrideMaterial // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainMesCurrentThreadID(struct FName threadID); // Function BP_Event3DWidgetActor.BP_Event3DWidgetActor_C.SetBrainMesCurrentThreadID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_Event3DWidgetActor.BP_Event3DWidgetActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_Event3DWidgetActor.BP_Event3DWidgetActor_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Event3DWidgetActor.BP_Event3DWidgetActor_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Event3DWidgetActor(int32_t EntryPoint); // Function BP_Event3DWidgetActor.BP_Event3DWidgetActor_C.ExecuteUbergraph_BP_Event3DWidgetActor // (Final|UbergraphFunction) // @ game+0x1685580
};

