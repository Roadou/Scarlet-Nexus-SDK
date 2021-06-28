// BlueprintGeneratedClass BP_EventPPVignetteMask.BP_EventPPVignetteMask_C
// Size: 0x2c8 (Inherited: 0x269)
struct ABP_EventPPVignetteMask_C : ABP_EventTypeSwitchBase_C {
	char pad_269[0x7]; // 0x269(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UTexture2D* MaskMap; // 0x278(0x08)
	float Rate; // 0x280(0x04)
	struct FLinearColor ModulateColor; // 0x284(0x10)
	char pad_294[0x4]; // 0x294(0x04)
	struct TSoftObjectPtr<UMaterialInterface> NoEventMaterial; // 0x298(0x28)
	struct UMaterialInstanceDynamic* NoEventMID; // 0x2c0(0x08)

	void BeginPlayDynamicCutScene(); // Function BP_EventPPVignetteMask.BP_EventPPVignetteMask_C.BeginPlayDynamicCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayDynamicCutScene(); // Function BP_EventPPVignetteMask.BP_EventPPVignetteMask_C.EndPlayDynamicCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDynamicCutScene(); // Function BP_EventPPVignetteMask.BP_EventPPVignetteMask_C.UpdateDynamicCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginPlayStaticCutScene(); // Function BP_EventPPVignetteMask.BP_EventPPVignetteMask_C.BeginPlayStaticCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateStaticCutScene(); // Function BP_EventPPVignetteMask.BP_EventPPVignetteMask_C.UpdateStaticCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayStaticCutScene(); // Function BP_EventPPVignetteMask.BP_EventPPVignetteMask_C.EndPlayStaticCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginPlayNoEventScene(); // Function BP_EventPPVignetteMask.BP_EventPPVignetteMask_C.BeginPlayNoEventScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayNoEventCutScene(); // Function BP_EventPPVignetteMask.BP_EventPPVignetteMask_C.EndPlayNoEventCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateNoEventScene(); // Function BP_EventPPVignetteMask.BP_EventPPVignetteMask_C.UpdateNoEventScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventPPVignetteMask(int32_t EntryPoint); // Function BP_EventPPVignetteMask.BP_EventPPVignetteMask_C.ExecuteUbergraph_BP_EventPPVignetteMask // (Final|UbergraphFunction) // @ game+0x1685580
};

