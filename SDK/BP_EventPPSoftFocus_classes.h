// BlueprintGeneratedClass BP_EventPPSoftFocus.BP_EventPPSoftFocus_C
// Size: 0x281 (Inherited: 0x269)
struct ABP_EventPPSoftFocus_C : ABP_EventTypeSwitchBase_C {
	char pad_269[0x7]; // 0x269(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	float Rate; // 0x278(0x04)
	float Radius; // 0x27c(0x04)
	enum class EGradualQuality OptionQuality; // 0x280(0x01)

	void CalcWeight(float X, float Weight); // Function BP_EventPPSoftFocus.BP_EventPPSoftFocus_C.CalcWeight // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventPPSoftFocus.BP_EventPPSoftFocus_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void BeginPlayStaticCutScene(); // Function BP_EventPPSoftFocus.BP_EventPPSoftFocus_C.BeginPlayStaticCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateStaticCutScene(); // Function BP_EventPPSoftFocus.BP_EventPPSoftFocus_C.UpdateStaticCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayStaticCutScene(); // Function BP_EventPPSoftFocus.BP_EventPPSoftFocus_C.EndPlayStaticCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginPlayDynamicCutScene(); // Function BP_EventPPSoftFocus.BP_EventPPSoftFocus_C.BeginPlayDynamicCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDynamicCutScene(); // Function BP_EventPPSoftFocus.BP_EventPPSoftFocus_C.UpdateDynamicCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayDynamicCutScene(); // Function BP_EventPPSoftFocus.BP_EventPPSoftFocus_C.EndPlayDynamicCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EventPPSoftFocus.BP_EventPPSoftFocus_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventPPSoftFocus(int32_t EntryPoint); // Function BP_EventPPSoftFocus.BP_EventPPSoftFocus_C.ExecuteUbergraph_BP_EventPPSoftFocus // (Final|UbergraphFunction) // @ game+0x1685580
};

