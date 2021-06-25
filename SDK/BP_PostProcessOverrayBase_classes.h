// BlueprintGeneratedClass BP_PostProcessOverrayBase.BP_PostProcessOverrayBase_C
// Size: 0x280 (Inherited: 0x230)
struct ABP_PostProcessOverrayBase_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UStaticMeshComponent* Cube; // 0x238(0x08)
	struct UArrowComponent* arrow; // 0x240(0x08)
	struct USphereComponent* SmoothRadius; // 0x248(0x08)
	struct USphereComponent* Radius; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	bool UseOverray; // 0x260(0x01)
	char pad_261[0x7]; // 0x261(0x07)
	struct ABP_PostProcessOverraySystem_C* OverraySystem; // 0x268(0x08)
	bool UseRange; // 0x270(0x01)
	char pad_271[0x7]; // 0x271(0x07)
	struct ABP_PostProcessOverrayVolume_C* Volume; // 0x278(0x08)

	void CalcRotationRate(struct FVector CameraLocation, struct FRotator CameraRotation, float Rate); // Function BP_PostProcessOverrayBase.BP_PostProcessOverrayBase_C.CalcRotationRate // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcLengthRate(struct FVector CameraLocation, struct FRotator CameraRotation, float Rate); // Function BP_PostProcessOverrayBase.BP_PostProcessOverrayBase_C.CalcLengthRate // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcRate(struct FVector CameraVector, struct FRotator CameraRotation, float Rate); // Function BP_PostProcessOverrayBase.BP_PostProcessOverrayBase_C.CalcRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RemoveSystem(); // Function BP_PostProcessOverrayBase.BP_PostProcessOverrayBase_C.RemoveSystem // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddSystem(); // Function BP_PostProcessOverrayBase.BP_PostProcessOverrayBase_C.AddSystem // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_PostProcessOverrayBase.BP_PostProcessOverrayBase_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BndEvt__SmoothRadius_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_PostProcessOverrayBase.BP_PostProcessOverrayBase_C.BndEvt__SmoothRadius_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1685580
	void BndEvt__SmoothRadius_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_PostProcessOverrayBase.BP_PostProcessOverrayBase_C.BndEvt__SmoothRadius_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_PostProcessOverrayBase.BP_PostProcessOverrayBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_PostProcessOverrayBase.BP_PostProcessOverrayBase_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void GetSystem(); // Function BP_PostProcessOverrayBase.BP_PostProcessOverrayBase_C.GetSystem // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PostProcessOverrayBase(int32_t EntryPoint); // Function BP_PostProcessOverrayBase.BP_PostProcessOverrayBase_C.ExecuteUbergraph_BP_PostProcessOverrayBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

