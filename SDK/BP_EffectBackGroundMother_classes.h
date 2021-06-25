// BlueprintGeneratedClass BP_EffectBackGroundMother.BP_EffectBackGroundMother_C
// Size: 0x258 (Inherited: 0x238)
struct ABP_EffectBackGroundMother_C : AEffectBackgroundMother {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	struct TArray<struct UBP_RSParticleBackgroundComponent_C*> effectBGComponents; // 0x248(0x10)

	void PortingComponentSate(struct UBP_RSParticleBackgroundComponent_C* FromComponent, struct UBP_RSParticleBackgroundComponent_C* ToComponent, bool SetWorldTransform, struct FTransform component transform); // Function BP_EffectBackGroundMother.BP_EffectBackGroundMother_C.PortingComponentSate // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool MergeEffectBG(); // Function BP_EffectBackGroundMother.BP_EffectBackGroundMother_C.MergeEffectBG // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MergeEffectbackGround(); // Function BP_EffectBackGroundMother.BP_EffectBackGroundMother_C.MergeEffectbackGround // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BurstComponentToActor(); // Function BP_EffectBackGroundMother.BP_EffectBackGroundMother_C.BurstComponentToActor // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EffectBackGroundMother.BP_EffectBackGroundMother_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void PrivateRetryRegistParticleManager(); // Function BP_EffectBackGroundMother.BP_EffectBackGroundMother_C.PrivateRetryRegistParticleManager // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EffectBackGroundMother.BP_EffectBackGroundMother_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EffectBackGroundMother(int32_t EntryPoint); // Function BP_EffectBackGroundMother.BP_EffectBackGroundMother_C.ExecuteUbergraph_BP_EffectBackGroundMother // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

