// Enum PhysicsCore.EChaosBufferMode
enum class EChaosBufferMode : uint8 {
	Double,
	Triple,
	Num,
	Invalid,
	EChaosBufferMode_MAX,
};

// Enum PhysicsCore.EChaosThreadingMode
enum class EChaosThreadingMode : uint8 {
	DedicatedThread,
	TaskGraph,
	SingleThread,
	Num,
	Invalid,
	EChaosThreadingMode_MAX,
};

// Enum PhysicsCore.EChaosSolverTickMode
enum class EChaosSolverTickMode : uint8 {
	Fixed,
	Variable,
	VariableCapped,
	VariableCappedWithTarget,
	EChaosSolverTickMode_MAX,
};

