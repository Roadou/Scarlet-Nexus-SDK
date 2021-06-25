// BlueprintGeneratedClass BP_BSPPortal.BP_BSPPortal_C
// Size: 0x270 (Inherited: 0x258)
struct ABP_BSPPortal_C : ABSPPortalBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	struct UBoxComponent* Box; // 0x260(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x268(0x08)

	void _InitializeNearBlockVolumes(); // Function BP_BSPPortal.BP_BSPPortal_C._InitializeNearBlockVolumes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckOverlapComponent(); // Function BP_BSPPortal.BP_BSPPortal_C.CheckOverlapComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_BSPPortal.BP_BSPPortal_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_BSPPortal.BP_BSPPortal_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_BSPPortal.BP_BSPPortal_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1685580
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_BSPPortal.BP_BSPPortal_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_BSPPortal(int32_t EntryPoint); // Function BP_BSPPortal.BP_BSPPortal_C.ExecuteUbergraph_BP_BSPPortal // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

