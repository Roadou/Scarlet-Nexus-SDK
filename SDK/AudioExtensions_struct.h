// ScriptStruct AudioExtensions.SoundModulationParameter
// Size: 0x14 (Inherited: 0x00)
struct FSoundModulationParameter {
	struct FName Control; // 0x00(0x08)
	float Value; // 0x08(0x04)
	char pad_C[0x8]; // 0x0c(0x08)
};

// ScriptStruct AudioExtensions.SoundModulation
// Size: 0x10 (Inherited: 0x00)
struct FSoundModulation {
	struct TArray<struct USoundModulationPluginSourceSettingsBase*> Settings; // 0x00(0x10)
};

