// Class LiveLinkInterface.LiveLinkSourceFactory
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkSourceFactory : UObject {
};

// Class LiveLinkInterface.LiveLinkRole
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkRole : UObject {
};

// Class LiveLinkInterface.LiveLinkBasicRole
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkBasicRole : ULiveLinkRole {
};

// Class LiveLinkInterface.LiveLinkAnimationRole
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkAnimationRole : ULiveLinkBasicRole {
};

// Class LiveLinkInterface.LiveLinkTransformRole
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkTransformRole : ULiveLinkBasicRole {
};

// Class LiveLinkInterface.LiveLinkCameraRole
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkCameraRole : ULiveLinkTransformRole {
};

// Class LiveLinkInterface.LiveLinkController
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkController : UObject {
};

// Class LiveLinkInterface.LiveLinkSourceSettings
// Size: 0x98 (Inherited: 0x28)
struct ULiveLinkSourceSettings : UObject {
	enum class ELiveLinkSourceMode Mode; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FLiveLinkSourceBufferManagementSettings BufferSettings; // 0x30(0x50)
	struct FString ConnectionString; // 0x80(0x10)
	struct ULiveLinkSourceFactory* Factory; // 0x90(0x08)
};

// Class LiveLinkInterface.LiveLinkCurveRemapSettings
// Size: 0xe8 (Inherited: 0x98)
struct ULiveLinkCurveRemapSettings : ULiveLinkSourceSettings {
	struct FLiveLinkCurveConversionSettings CurveConversionSettings; // 0x98(0x50)
};

// Class LiveLinkInterface.LiveLinkFrameInterpolationProcessor
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkFrameInterpolationProcessor : UObject {
};

// Class LiveLinkInterface.LiveLinkFramePreProcessor
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkFramePreProcessor : UObject {
};

// Class LiveLinkInterface.LiveLinkFrameTranslator
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkFrameTranslator : UObject {
};

// Class LiveLinkInterface.LiveLinkLightRole
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkLightRole : ULiveLinkTransformRole {
};

// Class LiveLinkInterface.LiveLinkSubjectSettings
// Size: 0x58 (Inherited: 0x28)
struct ULiveLinkSubjectSettings : UObject {
	struct TArray<struct ULiveLinkFramePreProcessor*> PreProcessors; // 0x28(0x10)
	struct ULiveLinkFrameInterpolationProcessor* InterpolationProcessor; // 0x38(0x08)
	struct TArray<struct ULiveLinkFrameTranslator*> Translators; // 0x40(0x10)
	struct ULiveLinkRole* Role; // 0x50(0x08)
};

// Class LiveLinkInterface.LiveLinkVirtualSubject
// Size: 0xd8 (Inherited: 0x28)
struct ULiveLinkVirtualSubject : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct ULiveLinkRole* Role; // 0x30(0x08)
	struct TArray<struct FLiveLinkSubjectName> Subjects; // 0x38(0x10)
	struct TArray<struct ULiveLinkFrameTranslator*> FrameTranslators; // 0x48(0x10)
	char pad_58[0x80]; // 0x58(0x80)
};

