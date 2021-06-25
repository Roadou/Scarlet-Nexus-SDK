// BlueprintGeneratedClass BP_CutsceneRootTransform.BP_CutsceneRootTransform_C
// Size: 0x254 (Inherited: 0x230)
struct ABP_CutsceneRootTransform_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UArrowComponent* arrow; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	enum class ECutsceneRootTransformID ID; // 0x248(0x01)
	char pad_249[0x3]; // 0x249(0x03)
	struct FName Name; // 0x24c(0x08)

	void ReceiveBeginPlay(); // Function BP_CutsceneRootTransform.BP_CutsceneRootTransform_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void Setup(); // Function BP_CutsceneRootTransform.BP_CutsceneRootTransform_C.Setup // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_CutsceneRootTransform(int32_t EntryPoint); // Function BP_CutsceneRootTransform.BP_CutsceneRootTransform_C.ExecuteUbergraph_BP_CutsceneRootTransform // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

