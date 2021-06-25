// Enum GeometryCollectionSimulationCore.EEmissionPatternTypeEnum
enum class EEmissionPatternTypeEnum : uint8 {
	Chaos_Emission_Pattern_First_Frame,
	Chaos_Emission_Pattern_On_Demand,
	Chaos_Max,
};

// Enum GeometryCollectionSimulationCore.EInitialVelocityTypeEnum
enum class EInitialVelocityTypeEnum : uint8 {
	Chaos_Initial_Velocity_User_Defined,
	Chaos_Initial_Velocity_None,
	Chaos_Max,
};

// Enum GeometryCollectionSimulationCore.EGeometryCollectionPhysicsTypeEnum
enum class EGeometryCollectionPhysicsTypeEnum : uint8 {
	Chaos_AngularVelocity,
	Chaos_DynamicState,
	Chaos_LinearVelocity,
	Chaos_InitialAngularVelocity,
	Chaos_InitialLinearVelocity,
	Chaos_CollisionGroup,
	Chaos_LinearForce,
	Chaos_AngularTorque,
	Chaos_Max,
};

// Enum GeometryCollectionSimulationCore.EObjectStateTypeEnum
enum class EObjectStateTypeEnum : uint8 {
	Chaos_NONE,
	Chaos_Object_Sleeping,
	Chaos_Object_Kinematic,
	Chaos_Object_Static,
	Chaos_Object_Dynamic,
	Chaos_Object_UserDefined,
	Chaos_Max,
};

// Enum GeometryCollectionSimulationCore.EImplicitTypeEnum
enum class EImplicitTypeEnum : uint8 {
	Chaos_Implicit_Box,
	Chaos_Implicit_Sphere,
	Chaos_Implicit_Capsule,
	Chaos_Implicit_LevelSet,
	Chaos_Implicit_None,
	Chaos_Max,
};

// Enum GeometryCollectionSimulationCore.ECollisionTypeEnum
enum class ECollisionTypeEnum : uint8 {
	Chaos_Volumetric,
	Chaos_Surface_Volumetric,
	Chaos_Max,
};

