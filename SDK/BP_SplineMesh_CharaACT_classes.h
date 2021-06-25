// BlueprintGeneratedClass BP_SplineMesh_CharaACT.BP_SplineMesh_CharaACT_C
// Size: 0x319 (Inherited: 0x2d9)
struct ABP_SplineMesh_CharaACT_C : ABP_SplineMesh_C {
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UMaterialInstanceDynamic* Mid; // 0x2e8(0x08)
	struct AActor* Actor; // 0x2f0(0x08)
	struct FVector L_ActorLocation; // 0x2f8(0x0c)
	char pad_304[0x4]; // 0x304(0x04)
	struct USphereComponent* Sphere; // 0x308(0x08)
	float HitSphereRadius; // 0x310(0x04)
	float MaterialAlpha; // 0x314(0x04)
	bool CharaPositionUse; // 0x318(0x01)

	void SetMaterialAlpha(); // Function BP_SplineMesh_CharaACT.BP_SplineMesh_CharaACT_C.SetMaterialAlpha // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_SplineMesh_CharaACT.BP_SplineMesh_CharaACT_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_SplineMesh_CharaACT.BP_SplineMesh_CharaACT_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_SplineMesh_CharaACT.BP_SplineMesh_CharaACT_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_SplineMesh_CharaACT.BP_SplineMesh_CharaACT_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1685580
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_SplineMesh_CharaACT.BP_SplineMesh_CharaACT_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_SplineMesh_CharaACT(int32_t EntryPoint); // Function BP_SplineMesh_CharaACT.BP_SplineMesh_CharaACT_C.ExecuteUbergraph_BP_SplineMesh_CharaACT // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

