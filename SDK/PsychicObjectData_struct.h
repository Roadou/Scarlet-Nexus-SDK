// UserDefinedStruct PsychicObjectData.PsychicObjectData
// Size: 0x38 (Inherited: 0x00)
struct FPsychicObjectData {
	enum class EPsychicObjectID ObjectID_43_338D650E4071E3A8F198CCACD046394D; // 0x00(0x01)
	enum class EPsychicObjectSizeType ObjectSize_32_64656D8247857838BD8606B68D1BB66E; // 0x01(0x01)
	enum class EPsychicObjectSizeType EffectSize_34_7B402F504114446B6F24EF96540B1932; // 0x02(0x01)
	enum class EPsychicObjectUniqueMontageType MontageType_46_659B5B2648DBA73E039C298B732E6679; // 0x03(0x01)
	bool Deformable_15_19BFBE1C4C1B4980C98B2D85C52FAC5F; // 0x04(0x01)
	enum class PsychicObjectSoundGroup SoundGroup_8_3620151B46443AEFBCCE7994525C1DDF; // 0x05(0x01)
	bool UseDebris_50_3DD2FFB141CF1B2A0D153E847120F9DE; // 0x06(0x01)
	char pad_7[0x1]; // 0x07(0x01)
	struct TSoftObjectPtr<UParticleSystem> DebrisParticle_57_D146E5E442B5176B8D8B0DBA4C5DF6E9; // 0x08(0x28)
	bool UseDebrisOverrideMaterial_53_3D8E7AB541CEDC97F93733A4425E6319; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t DebrisOverrideMaterialSlot_56_FDBFCF9B4972A5CF05CCB09EED11392A; // 0x34(0x04)
};

