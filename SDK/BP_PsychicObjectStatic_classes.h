// BlueprintGeneratedClass BP_PsychicObjectStatic.BP_PsychicObjectStatic_C
// Size: 0x5c8 (Inherited: 0x5a0)
struct ABP_PsychicObjectStatic_C : ABP_PsychicObjectBasic_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5a0(0x08)
	struct UCapsuleComponent* PhysicsCapsule; // 0x5a8(0x08)
	struct UStaticMeshComponent* ShadowMesh; // 0x5b0(0x08)
	struct UStaticMeshComponent* AuraMesh; // 0x5b8(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x5c0(0x08)

	int32_t GetDataRevision(); // Function BP_PsychicObjectStatic.BP_PsychicObjectStatic_C.GetDataRevision // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool GetDebrisEffectData(struct UParticleSystem* ParticleTemplate, struct UMaterialInterface* OverrideMaterial); // Function BP_PsychicObjectStatic.BP_PsychicObjectStatic_C.GetDebrisEffectData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetTriangleData(struct FMeshTriangleData triangle data); // Function BP_PsychicObjectStatic.BP_PsychicObjectStatic_C.GetTriangleData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void Initialize(bool return); // Function BP_PsychicObjectStatic.BP_PsychicObjectStatic_C.Initialize // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_PsychicObjectStatic.BP_PsychicObjectStatic_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_PsychicObjectStatic.BP_PsychicObjectStatic_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_PsychicObjectStatic.BP_PsychicObjectStatic_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_PsychicObjectStatic.BP_PsychicObjectStatic_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PsychicObjectStatic(int32_t EntryPoint); // Function BP_PsychicObjectStatic.BP_PsychicObjectStatic_C.ExecuteUbergraph_BP_PsychicObjectStatic // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

