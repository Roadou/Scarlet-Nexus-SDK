// BlueprintGeneratedClass BP_EventPPFade.BP_EventPPFade_C
// Size: 0x280 (Inherited: 0x269)
struct ABP_EventPPFade_C : ABP_EventTypeSwitchBase_C {
	char pad_269[0x7]; // 0x269(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	float FadeSeconds; // 0x278(0x04)
	enum class EEventFadeType FadeType; // 0x27c(0x01)
	bool Wake; // 0x27d(0x01)
	bool LastWake; // 0x27e(0x01)
	bool isUnderCaption; // 0x27f(0x01)

	void UpdateStaticCutScene(); // Function BP_EventPPFade.BP_EventPPFade_C.UpdateStaticCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDynamicCutScene(); // Function BP_EventPPFade.BP_EventPPFade_C.UpdateDynamicCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayStaticCutScene(); // Function BP_EventPPFade.BP_EventPPFade_C.EndPlayStaticCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayDynamicCutScene(); // Function BP_EventPPFade.BP_EventPPFade_C.EndPlayDynamicCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginPlayStaticCutScene(); // Function BP_EventPPFade.BP_EventPPFade_C.BeginPlayStaticCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventPPFade(int32_t EntryPoint); // Function BP_EventPPFade.BP_EventPPFade_C.ExecuteUbergraph_BP_EventPPFade // (Final|UbergraphFunction) // @ game+0x1685580
};

