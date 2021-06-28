// BlueprintGeneratedClass BP_EventScreenLight.BP_EventScreenLight_C
// Size: 0x2e8 (Inherited: 0x269)
struct ABP_EventScreenLight_C : ABP_EventTypeSwitchBase_C {
	char pad_269[0x7]; // 0x269(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UPostProcessComponent* PostProcess; // 0x278(0x08)
	struct UMaterialInstanceDynamic* ScreenLightMaterial; // 0x280(0x08)
	struct FLinearColor [1]Color; // 0x288(0x10)
	struct FLinearColor [2]Color; // 0x298(0x10)
	float [1]CenterU; // 0x2a8(0x04)
	float [2]CenterU; // 0x2ac(0x04)
	float [1]CenterV; // 0x2b0(0x04)
	float [2]CenterV; // 0x2b4(0x04)
	float [1]Size; // 0x2b8(0x04)
	float [2]Size; // 0x2bc(0x04)
	float [1] Intensity; // 0x2c0(0x04)
	float [2] Intensity; // 0x2c4(0x04)
	struct UMaterialInterface* ScreenLight; // 0x2c8(0x08)
	float GradationPower; // 0x2d0(0x04)
	float [1]method; // 0x2d4(0x04)
	float [2]method; // 0x2d8(0x04)
	float GlobalRate; // 0x2dc(0x04)
	float [1]ReverceEffect; // 0x2e0(0x04)
	float [2]ReverceEffect; // 0x2e4(0x04)

	void EndPlayNoEventCutScene(); // Function BP_EventScreenLight.BP_EventScreenLight_C.EndPlayNoEventCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateNoEventScene(); // Function BP_EventScreenLight.BP_EventScreenLight_C.UpdateNoEventScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginPlayNoEventScene(); // Function BP_EventScreenLight.BP_EventScreenLight_C.BeginPlayNoEventScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateStaticCutScene(); // Function BP_EventScreenLight.BP_EventScreenLight_C.UpdateStaticCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayStaticCutScene(); // Function BP_EventScreenLight.BP_EventScreenLight_C.EndPlayStaticCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDynamicCutScene(); // Function BP_EventScreenLight.BP_EventScreenLight_C.UpdateDynamicCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayDynamicCutScene(); // Function BP_EventScreenLight.BP_EventScreenLight_C.EndPlayDynamicCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginPlayDynamicCutScene(); // Function BP_EventScreenLight.BP_EventScreenLight_C.BeginPlayDynamicCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginPlayStaticCutScene(); // Function BP_EventScreenLight.BP_EventScreenLight_C.BeginPlayStaticCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventScreenLight(int32_t EntryPoint); // Function BP_EventScreenLight.BP_EventScreenLight_C.ExecuteUbergraph_BP_EventScreenLight // (Final|UbergraphFunction) // @ game+0x1685580
};

