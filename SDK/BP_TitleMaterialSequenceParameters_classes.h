// BlueprintGeneratedClass BP_TitleMaterialSequenceParameters.BP_TitleMaterialSequenceParameters_C
// Size: 0x2a8 (Inherited: 0x230)
struct ABP_TitleMaterialSequenceParameters_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	struct AActor* TargetActor; // 0x240(0x08)
	struct TArray<struct USkeletalMeshComponent*> TargetSkelMeshComps; // 0x248(0x10)
	struct FLinearColor RimLightEmissionColor; // 0x258(0x10)
	float RimLightEmissionFresnelIntensity; // 0x268(0x04)
	float RimLightEmissionFresnelOffset; // 0x26c(0x04)
	float RimLightEmissionSmooth; // 0x270(0x04)
	float RimLightEmission; // 0x274(0x04)
	struct FLinearColor HeightGradationColor; // 0x278(0x10)
	float HeightGradationMidpointRatio; // 0x288(0x04)
	float HeightGradationMidPointAlpha; // 0x28c(0x04)
	struct FVector HeightGradationStartLocation; // 0x290(0x0c)
	struct FVector HeightGradationEndLocation; // 0x29c(0x0c)

	void Update(); // Function BP_TitleMaterialSequenceParameters.BP_TitleMaterialSequenceParameters_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function BP_TitleMaterialSequenceParameters.BP_TitleMaterialSequenceParameters_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_TitleMaterialSequenceParameters.BP_TitleMaterialSequenceParameters_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_TitleMaterialSequenceParameters.BP_TitleMaterialSequenceParameters_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_TitleMaterialSequenceParameters(int32_t EntryPoint); // Function BP_TitleMaterialSequenceParameters.BP_TitleMaterialSequenceParameters_C.ExecuteUbergraph_BP_TitleMaterialSequenceParameters // (Final|UbergraphFunction) // @ game+0x1685580
};

