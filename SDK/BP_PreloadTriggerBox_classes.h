// BlueprintGeneratedClass BP_PreloadTriggerBox.BP_PreloadTriggerBox_C
// Size: 0x24a (Inherited: 0x238)
struct ABP_PreloadTriggerBox_C : ATriggerBox {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct ABP_JumpArea_C* RelatedJumpArea; // 0x240(0x08)
	bool NotLoadEnemyLevels; // 0x248(0x01)
	bool NotLoadEventLevels; // 0x249(0x01)

	void BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_PreloadTriggerBox.BP_PreloadTriggerBox_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1685580
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function BP_PreloadTriggerBox.BP_PreloadTriggerBox_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PreloadTriggerBox(int32_t EntryPoint); // Function BP_PreloadTriggerBox.BP_PreloadTriggerBox_C.ExecuteUbergraph_BP_PreloadTriggerBox // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

