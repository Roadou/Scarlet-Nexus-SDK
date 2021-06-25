// BlueprintGeneratedClass BP_PsychicObjectSkeletal.BP_PsychicObjectSkeletal_C
// Size: 0x5c0 (Inherited: 0x5a0)
struct ABP_PsychicObjectSkeletal_C : ABP_PsychicObjectBasic_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5a0(0x08)
	struct USkeletalMeshComponent* ShadowMesh; // 0x5a8(0x08)
	struct USkeletalMeshComponent* AuraMesh; // 0x5b0(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x5b8(0x08)

	bool GetDebrisEffectData(struct UParticleSystem* ParticleTemplate, struct UMaterialInterface* OverrideMaterial); // Function BP_PsychicObjectSkeletal.BP_PsychicObjectSkeletal_C.GetDebrisEffectData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool GetDebrisEffect(enum class EEffectObjectDebrisType Type, struct UMaterialInterface* OverrideMaterial); // Function BP_PsychicObjectSkeletal.BP_PsychicObjectSkeletal_C.GetDebrisEffect // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetTriangleData(struct FMeshTriangleData triangle data); // Function BP_PsychicObjectSkeletal.BP_PsychicObjectSkeletal_C.GetTriangleData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void Initialize(bool return); // Function BP_PsychicObjectSkeletal.BP_PsychicObjectSkeletal_C.Initialize // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_PsychicObjectSkeletal.BP_PsychicObjectSkeletal_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_PsychicObjectSkeletal.BP_PsychicObjectSkeletal_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PsychicObjectSkeletal(int32_t EntryPoint); // Function BP_PsychicObjectSkeletal.BP_PsychicObjectSkeletal_C.ExecuteUbergraph_BP_PsychicObjectSkeletal // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

