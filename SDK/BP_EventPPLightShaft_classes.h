// BlueprintGeneratedClass BP_EventPPLightShaft.BP_EventPPLightShaft_C
// Size: 0x2ad (Inherited: 0x269)
struct ABP_EventPPLightShaft_C : ABP_EventTypeSwitchBase_C {
	char pad_269[0x7]; // 0x269(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	float Rate; // 0x278(0x04)
	float Power; // 0x27c(0x04)
	struct FLinearColor BloomColor; // 0x280(0x10)
	float CenterX; // 0x290(0x04)
	float CenterY; // 0x294(0x04)
	float Inverse; // 0x298(0x04)
	float BlendMode; // 0x29c(0x04)
	float sparse_level; // 0x2a0(0x04)
	float sparse_start; // 0x2a4(0x04)
	float sparse_end; // 0x2a8(0x04)
	enum class EGradualQuality OptionQuality; // 0x2ac(0x01)

	void ReceiveBeginPlay(); // Function BP_EventPPLightShaft.BP_EventPPLightShaft_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void BeginPlayStaticCutScene(); // Function BP_EventPPLightShaft.BP_EventPPLightShaft_C.BeginPlayStaticCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateStaticCutScene(); // Function BP_EventPPLightShaft.BP_EventPPLightShaft_C.UpdateStaticCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayStaticCutScene(); // Function BP_EventPPLightShaft.BP_EventPPLightShaft_C.EndPlayStaticCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginPlayDynamicCutScene(); // Function BP_EventPPLightShaft.BP_EventPPLightShaft_C.BeginPlayDynamicCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDynamicCutScene(); // Function BP_EventPPLightShaft.BP_EventPPLightShaft_C.UpdateDynamicCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayDynamicCutScene(); // Function BP_EventPPLightShaft.BP_EventPPLightShaft_C.EndPlayDynamicCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EventPPLightShaft.BP_EventPPLightShaft_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventPPLightShaft(int32_t EntryPoint); // Function BP_EventPPLightShaft.BP_EventPPLightShaft_C.ExecuteUbergraph_BP_EventPPLightShaft // (Final|UbergraphFunction) // @ game+0x1685580
};

