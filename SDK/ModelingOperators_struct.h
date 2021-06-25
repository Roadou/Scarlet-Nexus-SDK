// Enum ModelingOperators.ESplitNormalMethod
enum class ESplitNormalMethod : uint8 {
	UseExistingTopology,
	FaceNormalThreshold,
	FaceGroupID,
	ESplitNormalMethod_MAX,
};

// Enum ModelingOperators.ENormalCalculationMethod
enum class ENormalCalculationMethod : uint8 {
	AreaWeighted,
	AngleWeighted,
	AreaAngleWeighting,
	ENormalCalculationMethod_MAX,
};

// Enum ModelingOperators.ERemeshSmoothingType
enum class ERemeshSmoothingType : uint8 {
	Uniform,
	Cotangent,
	MeanValue,
	ERemeshSmoothingType_MAX,
};

// Enum ModelingOperators.EUVProjectionMethod
enum class EUVProjectionMethod : uint8 {
	Cube,
	Cylinder,
	Plane,
	EUVProjectionMethod_MAX,
};

