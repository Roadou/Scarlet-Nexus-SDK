// Enum HorizonUI.EHorizonDialogueTextOverflowWarpMethod
enum class EHorizonDialogueTextOverflowWarpMethod : uint8 {
	Normal,
	BreakAll,
	EHorizonDialogueTextOverflowWarpMethod_MAX,
};

// Enum HorizonUI.EHorizonDialogueSegmentType
enum class EHorizonDialogueSegmentType : uint8 {
	Invalidated,
	Text,
	NewLine,
	Image,
	PaperFlipbook,
	Material,
	HyperText,
	Custom,
	EHorizonDialogueSegmentType_MAX,
};

// Enum HorizonUI.EHorizonUIInputMode
enum class EHorizonUIInputMode : uint8 {
	Invalidated,
	GameAndUI,
	UIOnly,
	GameOnly,
	EHorizonUIInputMode_MAX,
};

// ScriptStruct HorizonUI.HorizonDialogueBlockInfo
// Size: 0x38 (Inherited: 0x00)
struct FHorizonDialogueBlockInfo {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct HorizonUI.HorizonDialogueSegmentInfo
// Size: 0x1d8 (Inherited: 0x00)
struct FHorizonDialogueSegmentInfo {
	struct FString text; // 0x00(0x10)
	struct FSlateColor ColorAndOpacity; // 0x10(0x28)
	struct FSlateFontInfo Font; // 0x38(0x50)
	struct FVector2D ShadowOffset; // 0x88(0x08)
	struct FSlateColor ShadowColorAndOpacity; // 0x90(0x28)
	float DialogueMsgSpeed; // 0xb8(0x04)
	float DialogueMsgWait; // 0xbc(0x04)
	char pad_C0[0x4]; // 0xc0(0x04)
	struct FMargin PaddingMargin; // 0xc4(0x10)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FSlateColor HypertextHoveredColor; // 0xd8(0x28)
	struct FSlateColor HypertextVisitedColor; // 0x100(0x28)
	struct UHorizonButton* BackgroundButtonClass; // 0x128(0x08)
	float DialogueSoundVolumeMultiplier; // 0x130(0x04)
	float DialogueSoundPitchMultiplier; // 0x134(0x04)
	float DialogueSoundStartTime; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct USoundBase* DialogueSound; // 0x140(0x08)
	char pad_148[0x80]; // 0x148(0x80)
	struct FString EventPayload; // 0x1c8(0x10)
};

// ScriptStruct HorizonUI.HorizonDialogueDialoguePageResult
// Size: 0x04 (Inherited: 0x00)
struct FHorizonDialogueDialoguePageResult {
	int32_t PageIndex; // 0x00(0x04)
};

// ScriptStruct HorizonUI.HorizonDialogueHypertextResult
// Size: 0x78 (Inherited: 0x00)
struct FHorizonDialogueHypertextResult {
	struct UHorizonDialogueMsgTextBlock* DialogueMsgTextBlock; // 0x00(0x08)
	int32_t SegmentIndex; // 0x08(0x04)
	int32_t LineIndex; // 0x0c(0x04)
	int32_t BlockIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString HypertextReference; // 0x18(0x10)
	struct TMap<struct FString, struct FString> UrlEncodeMap; // 0x28(0x50)
};

// ScriptStruct HorizonUI.HorizonDialogueSegmentInfoStyle
// Size: 0x1f0 (Inherited: 0x00)
struct FHorizonDialogueSegmentInfoStyle {
	struct FName StyleName; // 0x00(0x08)
	struct TArray<struct FString> text; // 0x08(0x10)
	struct TArray<struct FSlateColor> ColorAndOpacity; // 0x18(0x10)
	struct TArray<struct FSlateFontInfo> Font; // 0x28(0x10)
	struct TArray<int32_t> FontSize; // 0x38(0x10)
	struct TArray<struct FName> TypefaceFontName; // 0x48(0x10)
	struct TArray<struct FVector2D> ShadowOffset; // 0x58(0x10)
	struct TArray<struct FSlateColor> ShadowColorAndOpacity; // 0x68(0x10)
	struct TArray<float> DialogueMsgSpeed; // 0x78(0x10)
	struct TArray<float> DialogueMsgWait; // 0x88(0x10)
	struct TArray<struct FMargin> PaddingMargin; // 0x98(0x10)
	struct TArray<struct FString> HypertextReference; // 0xa8(0x10)
	struct TArray<struct FSlateColor> HypertextHoveredColor; // 0xb8(0x10)
	struct TArray<struct FSlateColor> HypertextVisitedColor; // 0xc8(0x10)
	struct TArray<struct UHorizonButton*> BackgroundButtonClass; // 0xd8(0x10)
	struct TSoftObjectPtr<UTexture2D> Texture2D; // 0xe8(0x28)
	struct TSoftObjectPtr<UMaterial> Material; // 0x110(0x28)
	struct TSoftObjectPtr<UPaperSprite> PaperSprite; // 0x138(0x28)
	struct TSoftObjectPtr<USoundBase> DialogueSound; // 0x160(0x28)
	struct TArray<float> DialogueSoundVolumeMultiplier; // 0x188(0x10)
	struct TArray<float> DialogueSoundPitchMultiplier; // 0x198(0x10)
	struct TArray<float> DialogueSoundStartTime; // 0x1a8(0x10)
	struct TSoftObjectPtr<UPaperFlipbook> PaperFlipbook; // 0x1b8(0x28)
	struct TArray<struct FVector2D> ImageSize; // 0x1e0(0x10)
};

// ScriptStruct HorizonUI.HorizonDialoguePageInfo
// Size: 0x0c (Inherited: 0x00)
struct FHorizonDialoguePageInfo {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct HorizonUI.HorizonDialogueLineInfo
// Size: 0x28 (Inherited: 0x00)
struct FHorizonDialogueLineInfo {
	char pad_0[0x28]; // 0x00(0x28)
};

