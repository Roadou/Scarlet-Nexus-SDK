// Class AppleVision.AppleVisionDetectFacesAsyncTaskBlueprintProxy
// Size: 0x78 (Inherited: 0x28)
struct UAppleVisionDetectFacesAsyncTaskBlueprintProxy : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)
	struct FFaceDetectionResult FaceDetectionResult; // 0x60(0x10)
	char pad_70[0x8]; // 0x70(0x08)

	struct UAppleVisionDetectFacesAsyncTaskBlueprintProxy* CreateProxyObjectForDetectFaces(struct UTexture* SourceImage); // Function AppleVision.AppleVisionDetectFacesAsyncTaskBlueprintProxy.CreateProxyObjectForDetectFaces // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x78f370
};

