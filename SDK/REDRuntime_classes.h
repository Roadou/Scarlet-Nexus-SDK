// Class REDRuntime.ParticleModuleLocationTrail
// Size: 0x80 (Inherited: 0x30)
struct UParticleModuleLocationTrail : UParticleModuleLocationBase {
	enum class ELocationTrailSource SourceType; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t WidthSplitNum; // 0x34(0x04)
	struct FRawDistributionVector Velocity; // 0x38(0x48)
};

