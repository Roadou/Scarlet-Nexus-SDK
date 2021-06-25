// Enum RMAFoliageTools.ERMAFoliageToolsFoliageSelectionMode
enum class ERMAFoliageToolsFoliageSelectionMode : uint8 {
	FTFSM_All,
	FTFSM_Selection,
	FTFSM_MAX,
};

// ScriptStruct RMAFoliageTools.RMAFoliageToolsFoliageBuffer
// Size: 0x20 (Inherited: 0x00)
struct FRMAFoliageToolsFoliageBuffer {
	struct TArray<struct FTransform> _Transform; // 0x00(0x10)
	struct TArray<struct UStaticMesh*> _Mesh; // 0x10(0x10)
};

