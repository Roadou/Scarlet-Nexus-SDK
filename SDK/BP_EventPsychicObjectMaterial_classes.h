// BlueprintGeneratedClass BP_EventPsychicObjectMaterial.BP_EventPsychicObjectMaterial_C
// Size: 0x5e6 (Inherited: 0x230)
struct ABP_EventPsychicObjectMaterial_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	struct FMACVariableFloat MatCaptureRate; // 0x240(0x28)
	enum class EMaterialAccessorSetupID MatCaptureRateOverride; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct FMACVariableFloat MatFadeoutRate; // 0x270(0x28)
	enum class EMaterialAccessorSetupID MatFadeoutRateOverride; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	struct FMACVariableFloat MatTelepoRate; // 0x2a0(0x28)
	enum class EMaterialAccessorSetupID MatTelepoRateOverride; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct FMACVariableFloat MatStealthRate; // 0x2d0(0x28)
	enum class EMaterialAccessorSetupID MatStealthRateOverride; // 0x2f8(0x01)
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct FMACVariableFloat MatCaptureTypeNormalRate; // 0x300(0x28)
	struct FMACVariableFloat MatCaptureTypeFireRate; // 0x328(0x28)
	struct FMACVariableFloat MatCaptureTypeElectricRate; // 0x350(0x28)
	enum class EMaterialAccessorSetupID MatCaptureTypeOverride; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct FSPsychicCaptureMaterial CaptureParameterNormal; // 0x380(0xa0)
	struct FSPsychicCaptureMaterial CaptureParameterFire; // 0x420(0xa0)
	struct FSPsychicCaptureMaterial CaptureParameterElectric; // 0x4c0(0xa0)
	struct TArray<struct UMeshComponent*> ControlMeshes; // 0x560(0x10)
	struct FMACVariableFloat MatCopyRate; // 0x570(0x28)
	enum class EMaterialAccessorSetupID MatCopyRateOverride; // 0x598(0x01)
	char pad_599[0x7]; // 0x599(0x07)
	struct FMACVariableFloat MatCopyInstance; // 0x5a0(0x28)
	enum class EMaterialAccessorSetupID MatCopyInstanceOverride; // 0x5c8(0x01)
	bool Initialized; // 0x5c9(0x01)
	char pad_5CA[0x2]; // 0x5ca(0x02)
	float MatFadeoutRatePrev; // 0x5cc(0x04)
	float MatTelepoRatePrev; // 0x5d0(0x04)
	float MatStealthRatePrev; // 0x5d4(0x04)
	float MatCaptureRatePrev; // 0x5d8(0x04)
	float MatCopyRatePrev; // 0x5dc(0x04)
	float MatCopyInstancePrev; // 0x5e0(0x04)
	bool FirstUpdateOnly; // 0x5e4(0x01)
	bool FirstUpdate; // 0x5e5(0x01)

	void InitializeMeshes(bool Success); // Function BP_EventPsychicObjectMaterial.BP_EventPsychicObjectMaterial_C.InitializeMeshes // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCaptureType(); // Function BP_EventPsychicObjectMaterial.BP_EventPsychicObjectMaterial_C.SetCaptureType // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetScalarParameter(struct FMACVariableFloat Variable, enum class EMaterialAccessorSetupID Override); // Function BP_EventPsychicObjectMaterial.BP_EventPsychicObjectMaterial_C.SetScalarParameter // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateMateiral(); // Function BP_EventPsychicObjectMaterial.BP_EventPsychicObjectMaterial_C.UpdateMateiral // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function BP_EventPsychicObjectMaterial.BP_EventPsychicObjectMaterial_C.Initialize // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_EventPsychicObjectMaterial.BP_EventPsychicObjectMaterial_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventPsychicObjectMaterial.BP_EventPsychicObjectMaterial_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EventPsychicObjectMaterial.BP_EventPsychicObjectMaterial_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventPsychicObjectMaterial(int32_t EntryPoint); // Function BP_EventPsychicObjectMaterial.BP_EventPsychicObjectMaterial_C.ExecuteUbergraph_BP_EventPsychicObjectMaterial // (Final|UbergraphFunction) // @ game+0x1685580
};

