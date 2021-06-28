// BlueprintGeneratedClass BP_EventPPFieldBlur.BP_EventPPFieldBlur_C
// Size: 0x29e (Inherited: 0x269)
struct ABP_EventPPFieldBlur_C : ABP_EventTypeSwitchBase_C {
	char pad_269[0x7]; // 0x269(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	float Rate; // 0x278(0x04)
	float Radius; // 0x27c(0x04)
	bool MaskPlayer; // 0x280(0x01)
	bool MaskEnemy; // 0x281(0x01)
	bool MaskBG; // 0x282(0x01)
	bool MaskParticle; // 0x283(0x01)
	float EdgeBlurrinessRate; // 0x284(0x04)
	struct FLinearColor RadialCenter; // 0x288(0x10)
	float RadialRadius; // 0x298(0x04)
	bool HighBokeh_heavy; // 0x29c(0x01)
	enum class EGradualQuality OptionQuality; // 0x29d(0x01)

	void ReceiveBeginPlay(); // Function BP_EventPPFieldBlur.BP_EventPPFieldBlur_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void BeginPlayStaticCutScene(); // Function BP_EventPPFieldBlur.BP_EventPPFieldBlur_C.BeginPlayStaticCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateStaticCutScene(); // Function BP_EventPPFieldBlur.BP_EventPPFieldBlur_C.UpdateStaticCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayStaticCutScene(); // Function BP_EventPPFieldBlur.BP_EventPPFieldBlur_C.EndPlayStaticCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginPlayDynamicCutScene(); // Function BP_EventPPFieldBlur.BP_EventPPFieldBlur_C.BeginPlayDynamicCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDynamicCutScene(); // Function BP_EventPPFieldBlur.BP_EventPPFieldBlur_C.UpdateDynamicCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayDynamicCutScene(); // Function BP_EventPPFieldBlur.BP_EventPPFieldBlur_C.EndPlayDynamicCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EventPPFieldBlur.BP_EventPPFieldBlur_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventPPFieldBlur(int32_t EntryPoint); // Function BP_EventPPFieldBlur.BP_EventPPFieldBlur_C.ExecuteUbergraph_BP_EventPPFieldBlur // (Final|UbergraphFunction) // @ game+0x1685580
};

