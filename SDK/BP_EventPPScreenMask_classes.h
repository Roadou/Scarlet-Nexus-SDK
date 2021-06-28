// BlueprintGeneratedClass BP_EventPPScreenMask.BP_EventPPScreenMask_C
// Size: 0x2d0 (Inherited: 0x269)
struct ABP_EventPPScreenMask_C : ABP_EventTypeSwitchBase_C {
	char pad_269[0x7]; // 0x269(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	bool MaskPlayer; // 0x278(0x01)
	bool MaskEnemy; // 0x279(0x01)
	bool MaskParticle; // 0x27a(0x01)
	bool MaskBG; // 0x27b(0x01)
	float Rate; // 0x27c(0x04)
	struct FLinearColor Color; // 0x280(0x10)
	struct TArray<struct ABP_SequencerParticle_C*> CustomSteniclActors; // 0x290(0x10)
	struct TArray<int32_t> RestoreCustomStencil; // 0x2a0(0x10)
	bool RenderBeforeOutline; // 0x2b0(0x01)
	bool RenderAfterDOF; // 0x2b1(0x01)
	enum class EEventPostProcessID UseEventPPID; // 0x2b2(0x01)
	char pad_2B3[0x5]; // 0x2b3(0x05)
	struct UMaterialInstanceDynamic* DevelopBeforeOutlinePPM; // 0x2b8(0x08)
	struct TArray<struct ASequencerParticle*> CustomSteniclParticles; // 0x2c0(0x10)

	void PrivateSetBeforeOutlineParameter(); // Function BP_EventPPScreenMask.BP_EventPPScreenMask_C.PrivateSetBeforeOutlineParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateFinalize(); // Function BP_EventPPScreenMask.BP_EventPPScreenMask_C.PrivateFinalize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateInitialize(); // Function BP_EventPPScreenMask.BP_EventPPScreenMask_C.PrivateInitialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginPlayStaticCutScene(); // Function BP_EventPPScreenMask.BP_EventPPScreenMask_C.BeginPlayStaticCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginPlayDynamicCutScene(); // Function BP_EventPPScreenMask.BP_EventPPScreenMask_C.BeginPlayDynamicCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateStaticCutScene(); // Function BP_EventPPScreenMask.BP_EventPPScreenMask_C.UpdateStaticCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDynamicCutScene(); // Function BP_EventPPScreenMask.BP_EventPPScreenMask_C.UpdateDynamicCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayStaticCutScene(); // Function BP_EventPPScreenMask.BP_EventPPScreenMask_C.EndPlayStaticCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayDynamicCutScene(); // Function BP_EventPPScreenMask.BP_EventPPScreenMask_C.EndPlayDynamicCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventPPScreenMask(int32_t EntryPoint); // Function BP_EventPPScreenMask.BP_EventPPScreenMask_C.ExecuteUbergraph_BP_EventPPScreenMask // (Final|UbergraphFunction) // @ game+0x1685580
};

