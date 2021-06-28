// BlueprintGeneratedClass BP_EventPPRadialBlur.BP_EventPPRadialBlur_C
// Size: 0x298 (Inherited: 0x269)
struct ABP_EventPPRadialBlur_C : ABP_EventTypeSwitchBase_C {
	char pad_269[0x7]; // 0x269(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	float Rate; // 0x278(0x04)
	float BlurSize; // 0x27c(0x04)
	struct FVector BlurCenter; // 0x280(0x0c)
	struct FVector BlurColor; // 0x28c(0x0c)

	void UpdateStaticCutScene(); // Function BP_EventPPRadialBlur.BP_EventPPRadialBlur_C.UpdateStaticCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDynamicCutScene(); // Function BP_EventPPRadialBlur.BP_EventPPRadialBlur_C.UpdateDynamicCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayStaticCutScene(); // Function BP_EventPPRadialBlur.BP_EventPPRadialBlur_C.EndPlayStaticCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayDynamicCutScene(); // Function BP_EventPPRadialBlur.BP_EventPPRadialBlur_C.EndPlayDynamicCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginPlayStaticCutScene(); // Function BP_EventPPRadialBlur.BP_EventPPRadialBlur_C.BeginPlayStaticCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventPPRadialBlur(int32_t EntryPoint); // Function BP_EventPPRadialBlur.BP_EventPPRadialBlur_C.ExecuteUbergraph_BP_EventPPRadialBlur // (Final|UbergraphFunction) // @ game+0x1685580
};

