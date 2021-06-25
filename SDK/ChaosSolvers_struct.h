// ScriptStruct ChaosSolvers.SolverBreakingFilterSettings
// Size: 0x10 (Inherited: 0x00)
struct FSolverBreakingFilterSettings {
	bool FilterEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MinMass; // 0x04(0x04)
	float MinSpeed; // 0x08(0x04)
	float MinVolume; // 0x0c(0x04)
};

// ScriptStruct ChaosSolvers.SolverCollisionFilterSettings
// Size: 0x10 (Inherited: 0x00)
struct FSolverCollisionFilterSettings {
	bool FilterEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MinMass; // 0x04(0x04)
	float MinSpeed; // 0x08(0x04)
	float MinImpulse; // 0x0c(0x04)
};

// ScriptStruct ChaosSolvers.SolverTrailingFilterSettings
// Size: 0x10 (Inherited: 0x00)
struct FSolverTrailingFilterSettings {
	bool FilterEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MinMass; // 0x04(0x04)
	float MinSpeed; // 0x08(0x04)
	float MinVolume; // 0x0c(0x04)
};

