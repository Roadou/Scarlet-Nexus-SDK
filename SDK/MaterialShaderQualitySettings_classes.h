// Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
// Size: 0x78 (Inherited: 0x28)
struct UMaterialShaderQualitySettings : UObject {
	struct TMap<struct FName, struct UShaderPlatformQualitySettings*> ForwardSettingMap; // 0x28(0x50)
};

// Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
// Size: 0x58 (Inherited: 0x28)
struct UShaderPlatformQualitySettings : UObject {
	struct FMaterialQualityOverrides QualityOverrides[0x3]; // 0x28(0x1b)
	char pad_43[0x15]; // 0x43(0x15)
};

