// Enum ClothingSystemRuntimeNv.EClothingWindMethodNv
enum class EClothingWindMethodNv : uint8 {
	Legacy,
	Accurate,
	EClothingWindMethodNv_MAX,
};

// ScriptStruct ClothingSystemRuntimeNv.ClothConstraintSetupNv
// Size: 0x10 (Inherited: 0x00)
struct FClothConstraintSetupNv {
	float Stiffness; // 0x00(0x04)
	float StiffnessMultiplier; // 0x04(0x04)
	float StretchLimit; // 0x08(0x04)
	float CompressionLimit; // 0x0c(0x04)
};

