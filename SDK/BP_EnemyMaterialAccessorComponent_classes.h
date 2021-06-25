// BlueprintGeneratedClass BP_EnemyMaterialAccessorComponent.BP_EnemyMaterialAccessorComponent_C
// Size: 0x938 (Inherited: 0x360)
struct UBP_EnemyMaterialAccessorComponent_C : UEnemyMaterialAccessorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x360(0x08)
	struct FMACVariableFloat MatVertexColorEmissivePower; // 0x368(0x28)
	enum class EMaterialAccessorSetupID MatVertexColorEmissivePowerOverride; // 0x390(0x01)
	char pad_391[0x7]; // 0x391(0x07)
	struct FMACVariableFloat MatWetEffectPower; // 0x398(0x28)
	enum class EMaterialAccessorSetupID MatWetEffectPowerOverride; // 0x3c0(0x01)
	char pad_3C1[0x7]; // 0x3c1(0x07)
	struct FMACVariableFloat MatWetWaterToOil; // 0x3c8(0x28)
	enum class EMaterialAccessorSetupID MatWetWaterToOilOverride; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)
	struct FMACVariableFloat MatBerserkRate; // 0x3f8(0x28)
	struct FMACVariableFloat MatBerserkSignRate; // 0x420(0x28)
	enum class EMaterialAccessorSetupID MatBerserkRateOverride; // 0x448(0x01)
	char pad_449[0x7]; // 0x449(0x07)
	struct FMACVariableFloat MatFlashRate; // 0x450(0x28)
	enum class EMaterialAccessorSetupID MatFlashRateOverride; // 0x478(0x01)
	char pad_479[0x7]; // 0x479(0x07)
	struct FMACVariableFloat MatVanishRate; // 0x480(0x28)
	enum class EMaterialAccessorSetupID MatVanishRateOverride; // 0x4a8(0x01)
	char pad_4A9[0x7]; // 0x4a9(0x07)
	struct FMACVariableFloat MatVanishArmour; // 0x4b0(0x28)
	enum class EMaterialAccessorSetupID MatVanishArmourOverride; // 0x4d8(0x01)
	char pad_4D9[0x7]; // 0x4d9(0x07)
	struct FMACVariableFloat MatWeakEmissiveRate; // 0x4e0(0x28)
	enum class EMaterialAccessorSetupID MatWeakEmissiveRateOverride; // 0x508(0x01)
	char pad_509[0x7]; // 0x509(0x07)
	struct FMACVariableFloat MatWeakPointRate; // 0x510(0x28)
	enum class EMaterialAccessorSetupID MatWeakPointRateOverride; // 0x538(0x01)
	char pad_539[0x7]; // 0x539(0x07)
	struct FMACVariableFloat MatBrainFieldRate; // 0x540(0x28)
	enum class EMaterialAccessorSetupID MatBrainFieldRateOverride; // 0x568(0x01)
	char pad_569[0x7]; // 0x569(0x07)
	struct FMACVariableFloat MatAvatarEffectPower; // 0x570(0x28)
	enum class EMaterialAccessorSetupID MatAvatarEffectPowerOverride; // 0x598(0x01)
	char pad_599[0x7]; // 0x599(0x07)
	struct FMACVariableFloat MatStealthRate; // 0x5a0(0x28)
	enum class EMaterialAccessorSetupID MatStealthRateOverride; // 0x5c8(0x01)
	char pad_5C9[0x7]; // 0x5c9(0x07)
	struct FMACVariableFloat MatSeeThroughStealthRate; // 0x5d0(0x28)
	enum class EMaterialAccessorSetupID MatSeeThroughStealthRateOverride; // 0x5f8(0x01)
	char pad_5F9[0x3]; // 0x5f9(0x03)
	int32_t BerserkState; // 0x5fc(0x04)
	float BerserkCurveTimer; // 0x600(0x04)
	char pad_604[0x4]; // 0x604(0x04)
	struct UCurveLinearColor* BerserkStartColorCurve; // 0x608(0x08)
	struct UCurveLinearColor* BerserkLoopColorCurve; // 0x610(0x08)
	struct UCurveLinearColor* BerserkSignStartColorCurve; // 0x618(0x08)
	struct UCurveLinearColor* BerserkSignLoopColorCurve; // 0x620(0x08)
	struct UCurveLinearColor* BerserkSignEndColorCurve; // 0x628(0x08)
	struct UCurveVector* WeakEmissiveCurve; // 0x630(0x08)
	struct TArray<struct FString> SlotNames; // 0x638(0x10)
	struct FMACVariableFloat MatSlot00Visibility; // 0x648(0x28)
	struct FMACVariableFloat MatSlot01Visibility; // 0x670(0x28)
	struct FMACVariableFloat MatSlot02Visibility; // 0x698(0x28)
	struct FMACVariableFloat MatSlot03Visibility; // 0x6c0(0x28)
	struct FMACVariableFloat MatSlot04Visibility; // 0x6e8(0x28)
	struct FMACVariableFloat MatBrainCrashRate; // 0x710(0x28)
	enum class EMaterialAccessorSetupID MatBrainCrashRateOverride; // 0x738(0x01)
	char pad_739[0x7]; // 0x739(0x07)
	struct FMACVariableFloat MatBrainCrashIntensity; // 0x740(0x28)
	enum class EMaterialAccessorSetupID MatBrainCrashIntensityOverride; // 0x768(0x01)
	char pad_769[0x7]; // 0x769(0x07)
	struct FMACVariableFloat MatTwistCenterOffsetX; // 0x770(0x28)
	struct FMACVariableFloat MatTwistCenterOffsetY; // 0x798(0x28)
	struct FMACVariableFloat MatTwistMaxRange; // 0x7c0(0x28)
	struct FMACVariableFloat MatTwistPower; // 0x7e8(0x28)
	enum class EMaterialAccessorSetupID MatTwistOverride; // 0x810(0x01)
	char pad_811[0x7]; // 0x811(0x07)
	struct FMACVariableFloat MatEm1210IcePhase; // 0x818(0x28)
	enum class EMaterialAccessorSetupID MatEm1210IcePhaseOverride; // 0x840(0x01)
	char pad_841[0x7]; // 0x841(0x07)
	struct FMACVariableFloat MatEm1210IcePunch; // 0x848(0x28)
	enum class EMaterialAccessorSetupID MatEm1210IcePunchOverride; // 0x870(0x01)
	char pad_871[0x7]; // 0x871(0x07)
	struct FMACVariableFloat MatAddRateMaskColor; // 0x878(0x28)
	enum class EMaterialAccessorSetupID MatAddRateMaskColorOverride; // 0x8a0(0x01)
	char pad_8A1[0x7]; // 0x8a1(0x07)
	struct FMACVariableFloat MatVanishRateSlotArmour; // 0x8a8(0x28)
	int32_t SlotArmour; // 0x8d0(0x04)
	enum class EMaterialAccessorSetupID MatVanishRateSlotArmourOverride; // 0x8d4(0x01)
	char pad_8D5[0x3]; // 0x8d5(0x03)
	struct FMACVariableFloat MatVertexWavingRate; // 0x8d8(0x28)
	enum class EMaterialAccessorSetupID MatVertexWavingRateOverride; // 0x900(0x01)
	char pad_901[0x7]; // 0x901(0x07)
	struct FMACVariableFloat MatWeakVisible; // 0x908(0x28)
	enum class EMaterialAccessorSetupID MatWeakVisibleOverride; // 0x930(0x01)
	char pad_931[0x3]; // 0x931(0x03)
	int32_t SlotWeak; // 0x934(0x04)

	void PrivateIinitializeSlot(); // Function BP_EnemyMaterialAccessorComponent.BP_EnemyMaterialAccessorComponent_C.PrivateIinitializeSlot // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdateEm1210(); // Function BP_EnemyMaterialAccessorComponent.BP_EnemyMaterialAccessorComponent_C.PrivateUpdateEm1210 // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdateVisiblitySlot(); // Function BP_EnemyMaterialAccessorComponent.BP_EnemyMaterialAccessorComponent_C.PrivateUpdateVisiblitySlot // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdateMaterialWeakEmissive(); // Function BP_EnemyMaterialAccessorComponent.BP_EnemyMaterialAccessorComponent_C.PrivateUpdateMaterialWeakEmissive // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdateMaterialBerserk(); // Function BP_EnemyMaterialAccessorComponent.BP_EnemyMaterialAccessorComponent_C.PrivateUpdateMaterialBerserk // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateInitialize(); // Function BP_EnemyMaterialAccessorComponent.BP_EnemyMaterialAccessorComponent_C.PrivateInitialize // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateRestoreDefaultParameter(); // Function BP_EnemyMaterialAccessorComponent.BP_EnemyMaterialAccessorComponent_C.PrivateRestoreDefaultParameter // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdateMaterial(); // Function BP_EnemyMaterialAccessorComponent.BP_EnemyMaterialAccessorComponent_C.PrivateUpdateMaterial // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupDefaultParameter(struct AActor* Enemy); // Function BP_EnemyMaterialAccessorComponent.BP_EnemyMaterialAccessorComponent_C.PrivateSetupDefaultParameter // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupEnemyMesh(); // Function BP_EnemyMaterialAccessorComponent.BP_EnemyMaterialAccessorComponent_C.PrivateSetupEnemyMesh // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RestoreParameter(); // Function BP_EnemyMaterialAccessorComponent.BP_EnemyMaterialAccessorComponent_C.RestoreParameter // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateMateiral(); // Function BP_EnemyMaterialAccessorComponent.BP_EnemyMaterialAccessorComponent_C.UpdateMateiral // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupDefaultParameter(struct ACharacter* Enemy); // Function BP_EnemyMaterialAccessorComponent.BP_EnemyMaterialAccessorComponent_C.SetupDefaultParameter // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyMesh(struct USkeletalMeshComponent* EnemyMesh); // Function BP_EnemyMaterialAccessorComponent.BP_EnemyMaterialAccessorComponent_C.SetEnemyMesh // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EnemyMaterialAccessorComponent(int32_t EntryPoint); // Function BP_EnemyMaterialAccessorComponent.BP_EnemyMaterialAccessorComponent_C.ExecuteUbergraph_BP_EnemyMaterialAccessorComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

