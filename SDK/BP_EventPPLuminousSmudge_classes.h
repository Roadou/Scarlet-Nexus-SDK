// BlueprintGeneratedClass BP_EventPPLuminousSmudge.BP_EventPPLuminousSmudge_C
// Size: 0x29a (Inherited: 0x269)
struct ABP_EventPPLuminousSmudge_C : ABP_EventTypeSwitchBase_C {
	char pad_269[0x7]; // 0x269(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UPostProcessComponent* PostProcess; // 0x278(0x08)
	struct UTexture2D* LUTTexture; // 0x280(0x08)
	float Size; // 0x288(0x04)
	float Intensity; // 0x28c(0x04)
	char ResolutionQuality; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	int32_t StaticHandle; // 0x294(0x04)
	bool DebugVisuallize; // 0x298(0x01)
	enum class EGradualQuality OptionQuality; // 0x299(0x01)

	void UpdatePPC(); // Function BP_EventPPLuminousSmudge.BP_EventPPLuminousSmudge_C.UpdatePPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginPlayStaticCutScene(); // Function BP_EventPPLuminousSmudge.BP_EventPPLuminousSmudge_C.BeginPlayStaticCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginPlayDynamicCutScene(); // Function BP_EventPPLuminousSmudge.BP_EventPPLuminousSmudge_C.BeginPlayDynamicCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDynamicCutScene(); // Function BP_EventPPLuminousSmudge.BP_EventPPLuminousSmudge_C.UpdateDynamicCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateStaticCutScene(); // Function BP_EventPPLuminousSmudge.BP_EventPPLuminousSmudge_C.UpdateStaticCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayDynamicCutScene(); // Function BP_EventPPLuminousSmudge.BP_EventPPLuminousSmudge_C.EndPlayDynamicCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayStaticCutScene(); // Function BP_EventPPLuminousSmudge.BP_EventPPLuminousSmudge_C.EndPlayStaticCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventPPLuminousSmudge.BP_EventPPLuminousSmudge_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventPPLuminousSmudge(int32_t EntryPoint); // Function BP_EventPPLuminousSmudge.BP_EventPPLuminousSmudge_C.ExecuteUbergraph_BP_EventPPLuminousSmudge // (Final|UbergraphFunction) // @ game+0x1685580
};

