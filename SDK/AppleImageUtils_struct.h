// Enum AppleImageUtils.EAppleTextureType
enum class EAppleTextureType : uint8 {
	Unknown,
	Image,
	PixelBuffer,
	Surface,
	MetalTexture,
	EAppleTextureType_MAX,
};

// Enum AppleImageUtils.ETextureRotationDirection
enum class ETextureRotationDirection : uint8 {
	None,
	Left,
	Right,
	Down,
	ETextureRotationDirection_MAX,
};

// ScriptStruct AppleImageUtils.AppleImageUtilsImageConversionResult
// Size: 0x20 (Inherited: 0x00)
struct FAppleImageUtilsImageConversionResult {
	struct FString Error; // 0x00(0x10)
	struct TArray<char> ImageData; // 0x10(0x10)
};

