// Enum LuminRuntimeSettings.ELuminPrivilege
enum class ELuminPrivilege : uint8 {
	Invalid,
	BatteryInfo,
	CameraCapture,
	ComputerVision,
	WorldReconstruction,
	InAppPurchase,
	AudioCaptureMic,
	DrmCertificates,
	Occlusion,
	LowLatencyLightwear,
	Internet,
	IdentityRead,
	BackgroundDownload,
	BackgroundUpload,
	MediaDrm,
	Media,
	MediaMetadata,
	PowerInfo,
	LocalAreaNetwork,
	VoiceInput,
	Documents,
	ConnectBackgroundMusicService,
	RegisterBackgroundMusicService,
	PcfRead,
	PwFoundObjRead,
	NormalNotificationsUsage,
	MusicService,
	ControllerPose,
	GesturesSubscribe,
	GesturesConfig,
	AddressBookRead,
	AddressBookWrite,
	AddressBookBasicAccess,
	CoarseLocation,
	FineLocation,
	HandMesh,
	WifiStatusRead,
	SocialConnectionsInvitesAccess,
	ELuminPrivilege_MAX,
};

// Enum LuminRuntimeSettings.ELuminFrameTimingHint
enum class ELuminFrameTimingHint : uint8 {
	Unspecified,
	Maximum,
	FPS_61,
	FPS_121,
	ELuminFrameTimingHint_MAX,
};

// Enum LuminRuntimeSettings.ELuminComponentType
enum class ELuminComponentType : uint8 {
	Universe,
	Fullscreen,
	SearchProvider,
	MusicService,
	Screens,
	ScreensImmersive,
	Console,
	SystemUI,
	ELuminComponentType_MAX,
};

// Enum LuminRuntimeSettings.ELuminComponentSubElementType
enum class ELuminComponentSubElementType : uint8 {
	FileExtension,
	MimeType,
	Mode,
	MusicAttribute,
	Schema,
	ELuminComponentSubElementType_MAX,
};

// ScriptStruct LuminRuntimeSettings.LocalizedIconInfos
// Size: 0x10 (Inherited: 0x00)
struct FLocalizedIconInfos {
	struct TArray<struct FLocalizedIconInfo> IconData; // 0x00(0x10)
};

// ScriptStruct LuminRuntimeSettings.LocalizedIconInfo
// Size: 0x30 (Inherited: 0x00)
struct FLocalizedIconInfo {
	struct FString LanguageCode; // 0x00(0x10)
	struct FDirectoryPath IconModelPath; // 0x10(0x10)
	struct FDirectoryPath IconPortalPath; // 0x20(0x10)
};

// ScriptStruct LuminRuntimeSettings.LocalizedAppName
// Size: 0x20 (Inherited: 0x00)
struct FLocalizedAppName {
	struct FString LanguageCode; // 0x00(0x10)
	struct FString AppName; // 0x10(0x10)
};

// ScriptStruct LuminRuntimeSettings.LuminComponentElement
// Size: 0x48 (Inherited: 0x00)
struct FLuminComponentElement {
	struct FString Name; // 0x00(0x10)
	struct FString VisibleName; // 0x10(0x10)
	struct FString ExecutableName; // 0x20(0x10)
	enum class ELuminComponentType ComponentType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct FLuminComponentSubElement> ExtraComponentSubElements; // 0x38(0x10)
};

// ScriptStruct LuminRuntimeSettings.LuminComponentSubElement
// Size: 0x18 (Inherited: 0x00)
struct FLuminComponentSubElement {
	enum class ELuminComponentSubElementType ElementType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Value; // 0x08(0x10)
};

