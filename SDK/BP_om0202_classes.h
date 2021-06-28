// BlueprintGeneratedClass BP_om0202.BP_om0202_C
// Size: 0x2b8 (Inherited: 0x230)
struct ABP_om0202_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USphereComponent* Sphere; // 0x238(0x08)
	struct URSStaticMeshComponent* SM_pr_Drone_MassMedia; // 0x240(0x08)
	struct AActor* HitActor; // 0x248(0x08)
	struct FVector CharaPositionOffset; // 0x250(0x0c)
	struct FVector HitPositionOffset; // 0x25c(0x0c)
	bool DebugDraw; // 0x268(0x01)
	bool UpdatePosition; // 0x269(0x01)
	char pad_26A[0x2]; // 0x26a(0x02)
	float HitRadius; // 0x26c(0x04)
	bool ZaxisActive; // 0x270(0x01)
	bool UpVector; // 0x271(0x01)
	char pad_272[0xe]; // 0x272(0x0e)
	struct FTransform DefaultTransform; // 0x280(0x30)
	float BlendRateRot; // 0x2b0(0x04)
	float Rand; // 0x2b4(0x04)

	void Update(float DeltaSeconds); // Function BP_om0202.BP_om0202_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_om0202.BP_om0202_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_om0202.BP_om0202_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_om0202.BP_om0202_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_om0202.BP_om0202_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1685580
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_om0202.BP_om0202_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_om0202(int32_t EntryPoint); // Function BP_om0202.BP_om0202_C.ExecuteUbergraph_BP_om0202 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

