// UserDefinedStruct FAttackEffectData.FAttackEffectData
// Size: 0x28 (Inherited: 0x00)
struct FFAttackEffectData {
	struct UParticleSystem* Particle_6_0A86438B4C120842493907970C57FB7D; // 0x00(0x08)
	enum class EAttackEffectStopType StopTiming_33_E9C4C5E942A89A0C7E7AC9AF12D90E4E; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FName AttachPointName_26_3B8D001A45A272AC510906B990EA47A2; // 0x0c(0x08)
	bool bUseActorParameter_24_1409D7C24B5613D56E928487F3ACF11A; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName ParameterName_21_2DF39DF14F62CADD860A6081FC080715; // 0x18(0x08)
	struct UParticleSystemComponent* ParticleHandle_32_7E565DF34AE2C9135E9DF6A0CE33F6BD; // 0x20(0x08)
};

