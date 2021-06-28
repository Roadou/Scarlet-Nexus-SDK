// BlueprintGeneratedClass BP_EventPPSetting.BP_EventPPSetting_C
// Size: 0xa10 (Inherited: 0x269)
struct ABP_EventPPSetting_C : ABP_EventTypeSwitchBase_C {
	char pad_269[0x7]; // 0x269(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UPostProcessComponent* PostProcess; // 0x278(0x08)
	int32_t StaticHandle; // 0x280(0x04)
	char pad_284[0xc]; // 0x284(0x0c)
	struct FPostProcessSettings Settings; // 0x290(0x780)

	void AddPPM(struct UMaterialInterface* Material, float Weight); // Function BP_EventPPSetting.BP_EventPPSetting_C.AddPPM // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_EventPPSetting.BP_EventPPSetting_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginPlayDynamicCutScene(); // Function BP_EventPPSetting.BP_EventPPSetting_C.BeginPlayDynamicCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginPlayStaticCutScene(); // Function BP_EventPPSetting.BP_EventPPSetting_C.BeginPlayStaticCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayStaticCutScene(); // Function BP_EventPPSetting.BP_EventPPSetting_C.EndPlayStaticCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayDynamicCutScene(); // Function BP_EventPPSetting.BP_EventPPSetting_C.EndPlayDynamicCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateStaticCutScene(); // Function BP_EventPPSetting.BP_EventPPSetting_C.UpdateStaticCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDynamicCutScene(); // Function BP_EventPPSetting.BP_EventPPSetting_C.UpdateDynamicCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventPPSetting(int32_t EntryPoint); // Function BP_EventPPSetting.BP_EventPPSetting_C.ExecuteUbergraph_BP_EventPPSetting // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

