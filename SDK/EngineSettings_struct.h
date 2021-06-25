// Enum EngineSettings.ESubLevelStripMode
enum class ESubLevelStripMode : uint8 {
	ExactClass,
	IsChildOf,
	ESubLevelStripMode_MAX,
};

// Enum EngineSettings.EFourPlayerSplitScreenType
enum class EFourPlayerSplitScreenType : uint8 {
	Grid,
	Vertical,
	Horizontal,
	EFourPlayerSplitScreenType_MAX,
};

// Enum EngineSettings.EThreePlayerSplitScreenType
enum class EThreePlayerSplitScreenType : uint8 {
	FavorTop,
	FavorBottom,
	Vertical,
	Horizontal,
	EThreePlayerSplitScreenType_MAX,
};

// Enum EngineSettings.ETwoPlayerSplitScreenType
enum class ETwoPlayerSplitScreenType : uint8 {
	Horizontal,
	Vertical,
	ETwoPlayerSplitScreenType_MAX,
};

// ScriptStruct EngineSettings.AutoCompleteCommand
// Size: 0x28 (Inherited: 0x00)
struct FAutoCompleteCommand {
	struct FString Command; // 0x00(0x10)
	struct FString Desc; // 0x10(0x10)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct EngineSettings.GameModeName
// Size: 0x28 (Inherited: 0x00)
struct FGameModeName {
	struct FString Name; // 0x00(0x10)
	struct FSoftClassPath GameMode; // 0x10(0x18)
};

