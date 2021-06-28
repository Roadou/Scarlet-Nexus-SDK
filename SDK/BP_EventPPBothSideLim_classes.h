// BlueprintGeneratedClass BP_EventPPBothSideLim.BP_EventPPBothSideLim_C
// Size: 0x2ad (Inherited: 0x269)
struct ABP_EventPPBothSideLim_C : ABP_EventTypeSwitchBase_C {
	char pad_269[0x7]; // 0x269(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	float Rate; // 0x278(0x04)
	float LeftPower; // 0x27c(0x04)
	float RightPower; // 0x280(0x04)
	struct FLinearColor LeftColor; // 0x284(0x10)
	struct FLinearColor RightColor; // 0x294(0x10)
	float LeftPercentage; // 0x2a4(0x04)
	float RightPercentage; // 0x2a8(0x04)
	enum class EGradualQuality OptionQuality; // 0x2ac(0x01)

	void ReceiveBeginPlay(); // Function BP_EventPPBothSideLim.BP_EventPPBothSideLim_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void BeginPlayStaticCutScene(); // Function BP_EventPPBothSideLim.BP_EventPPBothSideLim_C.BeginPlayStaticCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateStaticCutScene(); // Function BP_EventPPBothSideLim.BP_EventPPBothSideLim_C.UpdateStaticCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayStaticCutScene(); // Function BP_EventPPBothSideLim.BP_EventPPBothSideLim_C.EndPlayStaticCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginPlayDynamicCutScene(); // Function BP_EventPPBothSideLim.BP_EventPPBothSideLim_C.BeginPlayDynamicCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDynamicCutScene(); // Function BP_EventPPBothSideLim.BP_EventPPBothSideLim_C.UpdateDynamicCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayDynamicCutScene(); // Function BP_EventPPBothSideLim.BP_EventPPBothSideLim_C.EndPlayDynamicCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EventPPBothSideLim.BP_EventPPBothSideLim_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventPPBothSideLim(int32_t EntryPoint); // Function BP_EventPPBothSideLim.BP_EventPPBothSideLim_C.ExecuteUbergraph_BP_EventPPBothSideLim // (Final|UbergraphFunction) // @ game+0x1685580
};

