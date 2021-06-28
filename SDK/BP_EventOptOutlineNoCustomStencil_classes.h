// BlueprintGeneratedClass BP_EventOptOutlineNoCustomStencil.BP_EventOptOutlineNoCustomStencil_C
// Size: 0x241 (Inherited: 0x230)
struct ABP_EventOptOutlineNoCustomStencil_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	bool OptionSASPPMCancelCelLookALL; // 0x240(0x01)

	void SetOptimize(bool UseOptimize); // Function BP_EventOptOutlineNoCustomStencil.BP_EventOptOutlineNoCustomStencil_C.SetOptimize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventOptOutlineNoCustomStencil.BP_EventOptOutlineNoCustomStencil_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EventOptOutlineNoCustomStencil.BP_EventOptOutlineNoCustomStencil_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventOptOutlineNoCustomStencil(int32_t EntryPoint); // Function BP_EventOptOutlineNoCustomStencil.BP_EventOptOutlineNoCustomStencil_C.ExecuteUbergraph_BP_EventOptOutlineNoCustomStencil // (Final|UbergraphFunction) // @ game+0x1685580
};

