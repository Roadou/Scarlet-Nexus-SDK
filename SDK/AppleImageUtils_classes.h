// Class AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy
// Size: 0x88 (Inherited: 0x28)
struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)
	struct FAppleImageUtilsImageConversionResult ConversionResult; // 0x60(0x20)
	char pad_80[0x8]; // 0x80(0x08)

	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToTIFF(struct UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, enum class ETextureRotationDirection Rotate); // Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToTIFF // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7916d0
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToPNG(struct UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, enum class ETextureRotationDirection Rotate); // Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToPNG // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x791530
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToJPEG(struct UTexture* SourceImage, int32_t Quality, bool bWantColor, bool bUseGpu, float Scale, enum class ETextureRotationDirection Rotate); // Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToJPEG // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x791360
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToHEIF(struct UTexture* SourceImage, int32_t Quality, bool bWantColor, bool bUseGpu, float Scale, enum class ETextureRotationDirection Rotate); // Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToHEIF // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x791190
};

// Class AppleImageUtils.AppleImageInterface
// Size: 0x28 (Inherited: 0x28)
struct UAppleImageInterface : UInterface {
};

