// BlueprintGeneratedClass BP_PostProcessOverrayVolume.BP_PostProcessOverrayVolume_C
// Size: 0x251 (Inherited: 0x238)
struct ABP_PostProcessOverrayVolume_C : ATriggerBox {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	bool UseGradiationVolume; // 0x240(0x01)
	bool UseScreenLightVolume; // 0x241(0x01)
	char pad_242[0x6]; // 0x242(0x06)
	struct ABP_PostProcessOverraySystem_C* OverraySystem; // 0x248(0x08)
	bool InVolume; // 0x250(0x01)

	void BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_PostProcessOverrayVolume.BP_PostProcessOverrayVolume_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1685580
	void BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_PostProcessOverrayVolume.BP_PostProcessOverrayVolume_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_PostProcessOverrayVolume.BP_PostProcessOverrayVolume_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void GetSystem(); // Function BP_PostProcessOverrayVolume.BP_PostProcessOverrayVolume_C.GetSystem // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PostProcessOverrayVolume(int32_t EntryPoint); // Function BP_PostProcessOverrayVolume.BP_PostProcessOverrayVolume_C.ExecuteUbergraph_BP_PostProcessOverrayVolume // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

