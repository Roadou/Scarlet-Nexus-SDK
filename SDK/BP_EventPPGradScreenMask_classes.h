// BlueprintGeneratedClass BP_EventPPGradScreenMask.BP_EventPPGradScreenMask_C
// Size: 0x328 (Inherited: 0x269)
struct ABP_EventPPGradScreenMask_C : ABP_EventTypeSwitchBase_C {
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
	bool RenderAfterDOF; // 0x2b0(0x01)
	enum class EEventPostProcessID UseEventPPID; // 0x2b1(0x01)
	char pad_2B2[0x2]; // 0x2b2(0x02)
	struct FLinearColor BeginColor; // 0x2b4(0x10)
	struct FLinearColor EndColor; // 0x2c4(0x10)
	struct FLinearColor BeginPos; // 0x2d4(0x10)
	struct FLinearColor EndPos; // 0x2e4(0x10)
	struct FLinearColor Center; // 0x2f4(0x10)
	float Radius; // 0x304(0x04)
	float RadialSlopeScale; // 0x308(0x04)
	bool IsRadiusGrad; // 0x30c(0x01)
	char pad_30D[0x3]; // 0x30d(0x03)
	float BlendMode; // 0x310(0x04)
	enum class EGradualQuality OptionQuality; // 0x314(0x01)
	char pad_315[0x3]; // 0x315(0x03)
	struct TArray<struct ASequencerParticle*> CustomSteniclParticles; // 0x318(0x10)

	void UpdateRenderAfterDOF(bool first); // Function BP_EventPPGradScreenMask.BP_EventPPGradScreenMask_C.UpdateRenderAfterDOF // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateFinalize(); // Function BP_EventPPGradScreenMask.BP_EventPPGradScreenMask_C.PrivateFinalize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateInitialize(); // Function BP_EventPPGradScreenMask.BP_EventPPGradScreenMask_C.PrivateInitialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginPlayStaticCutScene(); // Function BP_EventPPGradScreenMask.BP_EventPPGradScreenMask_C.BeginPlayStaticCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginPlayDynamicCutScene(); // Function BP_EventPPGradScreenMask.BP_EventPPGradScreenMask_C.BeginPlayDynamicCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateStaticCutScene(); // Function BP_EventPPGradScreenMask.BP_EventPPGradScreenMask_C.UpdateStaticCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDynamicCutScene(); // Function BP_EventPPGradScreenMask.BP_EventPPGradScreenMask_C.UpdateDynamicCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayStaticCutScene(); // Function BP_EventPPGradScreenMask.BP_EventPPGradScreenMask_C.EndPlayStaticCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayDynamicCutScene(); // Function BP_EventPPGradScreenMask.BP_EventPPGradScreenMask_C.EndPlayDynamicCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventPPGradScreenMask.BP_EventPPGradScreenMask_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventPPGradScreenMask(int32_t EntryPoint); // Function BP_EventPPGradScreenMask.BP_EventPPGradScreenMask_C.ExecuteUbergraph_BP_EventPPGradScreenMask // (Final|UbergraphFunction) // @ game+0x1685580
};

