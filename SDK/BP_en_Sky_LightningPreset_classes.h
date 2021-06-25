// BlueprintGeneratedClass BP_en_Sky_LightningPreset.BP_en_Sky_LightningPreset_C
// Size: 0x6c (Inherited: 0x28)
struct UBP_en_Sky_LightningPreset_C : UObject {
	struct FVector2D PositionMin; // 0x28(0x08)
	struct FVector2D PositionMax; // 0x30(0x08)
	struct FVector2D RadiusMinMax; // 0x38(0x08)
	struct FVector2D IntensityMinMax; // 0x40(0x08)
	struct FLinearColor Color; // 0x48(0x10)
	float Clouds; // 0x58(0x04)
	float Scattering; // 0x5c(0x04)
	float SkyLight; // 0x60(0x04)
	struct FVector2D DelayMinMax; // 0x64(0x08)

	void ApplyOnMaterial(); // Function BP_en_Sky_LightningPreset.BP_en_Sky_LightningPreset_C.ApplyOnMaterial // (Public|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
};

