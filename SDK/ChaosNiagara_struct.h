// Enum ChaosNiagara.ELocationZToSpawnEnum
enum class ELocationZToSpawnEnum : uint8 {
	ChaosNiagara_LocationZToSpawn_None,
	ChaosNiagara_LocationZToSpawn_Min,
	ChaosNiagara_LocationZToSpawn_Max,
	ChaosNiagara_LocationZToSpawn_MinMax,
	ChaosNiagara_Max,
};

// Enum ChaosNiagara.ELocationYToSpawnEnum
enum class ELocationYToSpawnEnum : uint8 {
	ChaosNiagara_LocationYToSpawn_None,
	ChaosNiagara_LocationYToSpawn_Min,
	ChaosNiagara_LocationYToSpawn_Max,
	ChaosNiagara_LocationYToSpawn_MinMax,
	ChaosNiagara_Max,
};

// Enum ChaosNiagara.ELocationXToSpawnEnum
enum class ELocationXToSpawnEnum : uint8 {
	ChaosNiagara_LocationXToSpawn_None,
	ChaosNiagara_LocationXToSpawn_Min,
	ChaosNiagara_LocationXToSpawn_Max,
	ChaosNiagara_LocationXToSpawn_MinMax,
	ChaosNiagara_Max,
};

// Enum ChaosNiagara.ELocationFilteringModeEnum
enum class ELocationFilteringModeEnum : uint8 {
	ChaosNiagara_LocationFilteringMode_Inclusive,
	ChaosNiagara_LocationFilteringMode_Exclusive,
	ChaosNiagara_Max,
};

// Enum ChaosNiagara.EDataSourceTypeEnum
enum class EDataSourceTypeEnum : uint8 {
	ChaosNiagara_DataSourceType_Collision,
	ChaosNiagara_DataSourceType_Breaking,
	ChaosNiagara_DataSourceType_Trailing,
	ChaosNiagara_Max,
};

// Enum ChaosNiagara.EDebugTypeEnum
enum class EDebugTypeEnum : uint8 {
	ChaosNiagara_DebugType_NoDebug,
	ChaosNiagara_DebugType_ColorBySolver,
	ChaosNiagara_DebugType_ColorByParticleIndex,
	ChaosNiagara_Max,
};

// Enum ChaosNiagara.ERandomVelocityGenerationTypeEnum
enum class ERandomVelocityGenerationTypeEnum : uint8 {
	ChaosNiagara_RandomVelocityGenerationType_RandomDistribution,
	ChaosNiagara_RandomVelocityGenerationType_RandomDistributionWithStreamers,
	ChaosNiagara_RandomVelocityGenerationType_CollisionNormalBased,
	ChaosNiagara_Max,
};

// Enum ChaosNiagara.EDataSortTypeEnum
enum class EDataSortTypeEnum : uint8 {
	ChaosNiagara_DataSortType_NoSorting,
	ChaosNiagara_DataSortType_RandomShuffle,
	ChaosNiagara_DataSortType_SortByMassMaxToMin,
	ChaosNiagara_DataSortType_SortByMassMinToMax,
	ChaosNiagara_Max,
};

// ScriptStruct ChaosNiagara.ChaosDestructionEvent
// Size: 0x44 (Inherited: 0x00)
struct FChaosDestructionEvent {
	struct FVector Position; // 0x00(0x0c)
	struct FVector Normal; // 0x0c(0x0c)
	struct FVector Velocity; // 0x18(0x0c)
	struct FVector AngularVelocity; // 0x24(0x0c)
	float ExtentMin; // 0x30(0x04)
	float ExtentMax; // 0x34(0x04)
	int32_t ParticleId; // 0x38(0x04)
	float Time; // 0x3c(0x04)
	int32_t Type; // 0x40(0x04)
};

