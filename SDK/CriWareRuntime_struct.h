// Enum CriWareRuntime.EAtomAudioVolumeType
enum class EAtomAudioVolumeType : uint8 {
	UseSnapshot,
	UseBus,
	UseAisacControl,
	UseEntranceVolume,
	Num,
	EAtomAudioVolumeType_MAX,
};

// Enum CriWareRuntime.EAtomComponentStatus
enum class EAtomComponentStatus : uint8 {
	Stop,
	Prep,
	Playing,
	PlayEnd,
	Error,
	EAtomComponentStatus_MAX,
};

// Enum CriWareRuntime.EAtomLoopSetting
enum class EAtomLoopSetting : uint8 {
	Inherited,
	Loop,
	OneShot,
	EAtomLoopSetting_MAX,
};

// Enum CriWareRuntime.ECriFsBinderStatus
enum class ECriFsBinderStatus : uint8 {
	Stop,
	Binding,
	Complete,
	Error,
	ECriFsBinderStatus_MAX,
};

// Enum CriWareRuntime.EAtomCueSheetLoaderComponentStatus
enum class EAtomCueSheetLoaderComponentStatus : uint8 {
	Stop,
	Loading,
	LoadEnd,
	Serializing,
	SerializeEnd,
	Binding,
	BindEnd,
	LoadCueSheet,
	Complete,
	Error,
	EAtomCueSheetLoaderComponentStatus_MAX,
};

// Enum CriWareRuntime.ECriFsLoaderStatus
enum class ECriFsLoaderStatus : uint8 {
	Stop,
	Loading,
	Complete,
	Error,
	ECriFsLoaderStatus_MAX,
};

// Enum CriWareRuntime.EManaSubtitlesEncoding
enum class EManaSubtitlesEncoding : uint8 {
	Default,
	ANSI,
	Utf8,
	Utf16,
	EManaSubtitlesEncoding_MAX,
};

// Enum CriWareRuntime.EManaComponentStatus
enum class EManaComponentStatus : uint8 {
	Stop,
	DecHdr,
	WaitPrep,
	Prep,
	Ready,
	Playing,
	PlayEnd,
	Error,
	StopProcessing,
	EManaComponentStatus_MAX,
};

// Enum CriWareRuntime.EManaMaxFrameDrop
enum class EManaMaxFrameDrop : uint8 {
	Disabled,
	One,
	Two,
	Three,
	For,
	Five,
	Six,
	Seven,
	Eight,
	Nine,
	Ten,
	Infinite,
	EManaMaxFrameDrop_MAX,
};

// Enum CriWareRuntime.EManaPlaybackTimer
enum class EManaPlaybackTimer : uint8 {
	Default,
	RealTime,
	FrameTime,
	Manual,
	EManaPlaybackTimer_MAX,
};

// Enum CriWareRuntime.EAtomSpeakerID
enum class EAtomSpeakerID : uint8 {
	FrontLeft,
	FrontRight,
	FrontCenter,
	LowFrequency,
	SurroundLeft,
	SurroundRight,
	SurroundBackLeft,
	SurroundBackRight,
	EAtomSpeakerID_MAX,
};

// Enum CriWareRuntime.EManaFrameAction
enum class EManaFrameAction : uint8 {
	Default,
	Hold,
	Clear,
	EManaFrameAction_MAX,
};

// Enum CriWareRuntime.EAtomSortOrderType
enum class EAtomSortOrderType : uint8 {
	Ascending,
	Descending,
	EAtomSortOrderType_MAX,
};

// Enum CriWareRuntime.EAtomProfileSortType
enum class EAtomProfileSortType : uint8 {
	AtomComponentID,
	Distance,
	Name,
	Time,
	EAtomProfileSortType_MAX,
};

// Enum CriWareRuntime.ECriWareSpeakerSystem
enum class ECriWareSpeakerSystem : uint8 {
	Surround5Point1,
	Surround7Point1,
	ECriWareSpeakerSystem_MAX,
};

// Enum CriWareRuntime.EAtomLoopSettingID_DEPRECEATED
enum class EAtomLoopSettingID_DEPRECEATED : uint8 {
	DefaultLoop_DEPRECATED,
	ForceLoop_DEPRECATED,
	IgnoreLoop_DEPRECATED,
	EAtomLoopSettingID_MAX,
};

// Enum CriWareRuntime.EAtomSoundRendererType
enum class EAtomSoundRendererType : uint8 {
	Any,
	Native,
	Asr,
	Hardware1,
	Hardware2,
	Hardware3,
	Hardware4,
	Pad,
	EAtomSoundRendererType_MAX,
};

// Enum CriWareRuntime.EEngineIniFileType
enum class EEngineIniFileType : uint8 {
	EngBaseEngineIni,
	EngWindowsEngineIni,
	ProjDefaultEngineIni,
	ProjWindowsEngineIni,
	EEngineIniFileType_MAX,
};

// Enum CriWareRuntime.EManaComponentTextureType
enum class EManaComponentTextureType : uint8 {
	Texture_Y,
	Texture_U,
	Texture_V,
	Texture_A,
	Texture_UV,
	Texture_RGB,
	Texture_External,
	Texture_MAX,
};

// Enum CriWareRuntime.EManaSoundType
enum class EManaSoundType : uint8 {
	Adx,
	HCA,
	Num,
	Unknown,
	EManaSoundType_MAX,
};

// Enum CriWareRuntime.EManaColorSpace
enum class EManaColorSpace : uint8 {
	Rec601,
	Rec709,
	Num,
	EManaColorSpace_MAX,
};

// Enum CriWareRuntime.EManaMovieType
enum class EManaMovieType : uint8 {
	SofdecPrime,
	H264,
	VP9,
	Num,
	Unknown,
	EManaMovieType_MAX,
};

// ScriptStruct CriWareRuntime.AtomSelectorParam
// Size: 0x20 (Inherited: 0x00)
struct FAtomSelectorParam {
	struct FString Selector; // 0x00(0x10)
	struct FString Label; // 0x10(0x10)
};

// ScriptStruct CriWareRuntime.AtomAisacControlParam
// Size: 0x18 (Inherited: 0x00)
struct FAtomAisacControlParam {
	struct FString Name; // 0x00(0x10)
	float Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct CriWareRuntime.ManaEventPointInfo
// Size: 0x28 (Inherited: 0x00)
struct FManaEventPointInfo {
	struct FString Name; // 0x00(0x10)
	float Time; // 0x10(0x04)
	int32_t Type; // 0x14(0x04)
	struct FString Parameter; // 0x18(0x10)
};

// ScriptStruct CriWareRuntime.AtomAisacInfo
// Size: 0x30 (Inherited: 0x00)
struct FAtomAisacInfo {
	struct FString Name; // 0x00(0x10)
	bool DefaultControlFlag; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float DefaultControlValue; // 0x14(0x04)
	int32_t ControlId; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString ControlName; // 0x20(0x10)
};

// ScriptStruct CriWareRuntime.AtomAudioVolumeParameters
// Size: 0x40 (Inherited: 0x00)
struct FAtomAudioVolumeParameters {
	bool bUseSnapshotSettings; // 0x00(0x01)
	bool bUseBusSendSettings; // 0x01(0x01)
	bool bUseAisacControlSettings; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float MaxDistanceForEntranceVolume; // 0x04(0x04)
	bool bSwitchIntepolationInsideForBus; // 0x08(0x01)
	bool bSwitchIntepolationInsideForAisac; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct TArray<struct FSnapshotSwitchSettings> SnapshotSwitchSettings; // 0x10(0x10)
	struct TArray<struct FBusSendInterpolationSettings> BusSendInterpolateSettings; // 0x20(0x10)
	struct TArray<struct FAisacControlInterpolationSettings> AisacControlInterpolateSettings; // 0x30(0x10)
};

// ScriptStruct CriWareRuntime.AisacControlInterpolationSettings
// Size: 0x30 (Inherited: 0x00)
struct FAisacControlInterpolationSettings {
	int32_t AisacControlID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString AisacControlName; // 0x08(0x10)
	float AisacControlValueForInside; // 0x18(0x04)
	float AisacControlValueForOutside; // 0x1c(0x04)
	float Width; // 0x20(0x04)
	char pad_24[0xc]; // 0x24(0x0c)
};

// ScriptStruct CriWareRuntime.BusSendInterpolationSettings
// Size: 0x48 (Inherited: 0x00)
struct FBusSendInterpolationSettings {
	int32_t DspBusSettingsID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString DspBusSettingsName; // 0x08(0x10)
	int32_t BusId; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString BusName; // 0x20(0x10)
	float BusSendLevelForInside; // 0x30(0x04)
	float BusSendLevelForOutside; // 0x34(0x04)
	float Width; // 0x38(0x04)
	char pad_3C[0xc]; // 0x3c(0x0c)
};

// ScriptStruct CriWareRuntime.SnapshotSwitchSettings
// Size: 0x38 (Inherited: 0x00)
struct FSnapshotSwitchSettings {
	int32_t AsrRackID; // 0x00(0x04)
	int32_t DspBusSettingsID; // 0x04(0x04)
	struct FString DspBusSettingsName; // 0x08(0x10)
	int32_t SnapshotID; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString SnapshotName; // 0x20(0x10)
	float FadeTime; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct CriWareRuntime.AtomConfigDataTable
// Size: 0xb8 (Inherited: 0x08)
struct FAtomConfigDataTable : FTableRowBase {
	struct FString BuildDate; // 0x08(0x10)
	int32_t NumCategoriesPerPlayback; // 0x18(0x04)
	int32_t NumCategories; // 0x1c(0x04)
	int32_t NumAisacControls; // 0x20(0x04)
	int32_t NumGlobalAisacs; // 0x24(0x04)
	int32_t NumVoiceLimitGroups; // 0x28(0x04)
	int32_t NumDspBusSettings; // 0x2c(0x04)
	int32_t NumDspBusSettingSnapshots; // 0x30(0x04)
	int32_t NumDspBus; // 0x34(0x04)
	int32_t NumGameVariables; // 0x38(0x04)
	int32_t NumSelectors; // 0x3c(0x04)
	int32_t NumReacts; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FAtomSelectorSettingsParam> Selector; // 0x48(0x10)
	struct TArray<struct FAtomAisacControlSettingsParam> AisacControl; // 0x58(0x10)
	struct TArray<struct FAtomGameVariableParam> GameVariable; // 0x68(0x10)
	struct TArray<struct FAtomGlobalAisacSettingsParam> GlobalAisac; // 0x78(0x10)
	struct TArray<struct FAtomCategoryParam> Category; // 0x88(0x10)
	struct TArray<struct FAtomDspBusSettingsParam> DspBusSettings; // 0x98(0x10)
	struct TArray<struct FAtomStringWithComment> React; // 0xa8(0x10)
};

// ScriptStruct CriWareRuntime.AtomStringWithComment
// Size: 0x10 (Inherited: 0x00)
struct FAtomStringWithComment {
	struct FString Name; // 0x00(0x10)
};

// ScriptStruct CriWareRuntime.AtomDspBusSettingsParam
// Size: 0x30 (Inherited: 0x00)
struct FAtomDspBusSettingsParam {
	struct FString BusSettingsName; // 0x00(0x10)
	struct TArray<struct FAtomStringWithComment> Snapshot; // 0x10(0x10)
	struct TArray<struct FAtomStringWithComment> Bus; // 0x20(0x10)
};

// ScriptStruct CriWareRuntime.AtomCategoryParam
// Size: 0x30 (Inherited: 0x00)
struct FAtomCategoryParam {
	int32_t ID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Name; // 0x08(0x10)
	struct FString Group; // 0x18(0x10)
	float Volume; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct CriWareRuntime.AtomGlobalAisacSettingsParam
// Size: 0x10 (Inherited: 0x00)
struct FAtomGlobalAisacSettingsParam {
	struct FString AisacControl; // 0x00(0x10)
};

// ScriptStruct CriWareRuntime.AtomGameVariableParam
// Size: 0x18 (Inherited: 0x00)
struct FAtomGameVariableParam {
	struct FString Name; // 0x00(0x10)
	float Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct CriWareRuntime.AtomAisacControlSettingsParam
// Size: 0x18 (Inherited: 0x00)
struct FAtomAisacControlSettingsParam {
	int32_t ID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Name; // 0x08(0x10)
};

// ScriptStruct CriWareRuntime.AtomSelectorSettingsParam
// Size: 0x30 (Inherited: 0x00)
struct FAtomSelectorSettingsParam {
	struct FString Name; // 0x00(0x10)
	struct FString DefaultSelectorLabel; // 0x10(0x10)
	struct TArray<struct FAtomStringWithComment> Labels; // 0x20(0x10)
};

// ScriptStruct CriWareRuntime.AcfDataTable
// Size: 0xb8 (Inherited: 0xb8)
struct FAcfDataTable : FAtomConfigDataTable {
};

// ScriptStruct CriWareRuntime.AtomCueSheetDataTable
// Size: 0x70 (Inherited: 0x08)
struct FAtomCueSheetDataTable : FTableRowBase {
	struct FString Name; // 0x08(0x10)
	struct FString BuildDate; // 0x18(0x10)
	struct FString WorkUnit; // 0x28(0x10)
	float Volume; // 0x38(0x04)
	bool EnableCueLimit; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	int32_t NumCueLimits; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString PriorityType; // 0x48(0x10)
	int32_t PriorityTypeIndex; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<struct FAtomCueInfoDataTable> Cue; // 0x60(0x10)
};

// ScriptStruct CriWareRuntime.AtomCueInfoDataTable
// Size: 0x100 (Inherited: 0x08)
struct FAtomCueInfoDataTable : FTableRowBase {
	struct FString Name; // 0x08(0x10)
	int32_t CueId; // 0x18(0x04)
	int32_t CueTypeIndex; // 0x1c(0x04)
	struct FString CueType; // 0x20(0x10)
	struct FAtomCueInfoSelectorParam DefaultSelectorLabel; // 0x30(0x20)
	float Volume; // 0x50(0x04)
	bool Public; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	int32_t CategoryCuePriority; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString CategoryCuePriorityType; // 0x60(0x10)
	int32_t CategoryCuePriorityTypeIndex; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FString CuePriorityType; // 0x78(0x10)
	int32_t CuePriorityTypeIndex; // 0x88(0x04)
	bool EnableCueLimit; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	int32_t NumCueLimits; // 0x90(0x04)
	int32_t Probability; // 0x94(0x04)
	int32_t Length; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct TArray<struct FAtomCueInfoCategoryParam> Category; // 0xa0(0x10)
	struct TArray<struct FAtomCueInfoTrackParam> Track; // 0xb0(0x10)
	struct TArray<struct FAtomCueInfoBusSendParam> BusSend; // 0xc0(0x10)
	struct TArray<struct FAtomCueInfoBlocksParam> Blocks; // 0xd0(0x10)
	struct TArray<struct FAtomCueInfoAttachedSelectorParam> AttachedSelector; // 0xe0(0x10)
	struct TArray<struct FAtomCueInfoAttachedAisacControlParam> AttachedAisacControl; // 0xf0(0x10)
};

// ScriptStruct CriWareRuntime.AtomCueInfoAttachedAisacControlParam
// Size: 0x18 (Inherited: 0x00)
struct FAtomCueInfoAttachedAisacControlParam {
	struct FString Name; // 0x00(0x10)
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct CriWareRuntime.AtomCueInfoAttachedSelectorParam
// Size: 0x10 (Inherited: 0x00)
struct FAtomCueInfoAttachedSelectorParam {
	struct FString Name; // 0x00(0x10)
};

// ScriptStruct CriWareRuntime.AtomCueInfoBlocksParam
// Size: 0x18 (Inherited: 0x00)
struct FAtomCueInfoBlocksParam {
	struct FString Name; // 0x00(0x10)
	int32_t StartPosition; // 0x10(0x04)
	int32_t Length; // 0x14(0x04)
};

// ScriptStruct CriWareRuntime.AtomCueInfoBusSendParam
// Size: 0x18 (Inherited: 0x00)
struct FAtomCueInfoBusSendParam {
	struct FString Name; // 0x00(0x10)
	bool Enable; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float Level; // 0x14(0x04)
};

// ScriptStruct CriWareRuntime.AtomCueInfoTrackParam
// Size: 0x38 (Inherited: 0x00)
struct FAtomCueInfoTrackParam {
	float Volume; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Name; // 0x08(0x10)
	struct FAtomCueInfoSelectorParam Selector; // 0x18(0x20)
};

// ScriptStruct CriWareRuntime.AtomCueInfoSelectorParam
// Size: 0x20 (Inherited: 0x00)
struct FAtomCueInfoSelectorParam {
	struct FString Name; // 0x00(0x10)
	struct FString Label; // 0x10(0x10)
};

// ScriptStruct CriWareRuntime.AtomCueInfoCategoryParam
// Size: 0x10 (Inherited: 0x00)
struct FAtomCueInfoCategoryParam {
	struct FString Name; // 0x00(0x10)
};

// ScriptStruct CriWareRuntime.AtomProfileItem
// Size: 0x78 (Inherited: 0x00)
struct FAtomProfileItem {
	int32_t AtomComponentID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString AtomCueName; // 0x08(0x10)
	struct FVector AtomComponentLocation; // 0x18(0x0c)
	float DistanceFromListener; // 0x24(0x04)
	float PlayingTime; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString PlayerState; // 0x30(0x10)
	int32_t NumSounds; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString ConcurrencyName; // 0x48(0x10)
	char pad_58[0x20]; // 0x58(0x20)
};

// ScriptStruct CriWareRuntime.AtomSoundManager
// Size: 0x01 (Inherited: 0x00)
struct FAtomSoundManager {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct CriWareRuntime.AtomTriggerRow
// Size: 0x20 (Inherited: 0x08)
struct FAtomTriggerRow : FTableRowBase {
	float Time; // 0x08(0x04)
	struct FName Bone; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
	struct USoundAtomCue* Cue; // 0x18(0x08)
};

// ScriptStruct CriWareRuntime.AtomAsrRackConfig
// Size: 0x08 (Inherited: 0x00)
struct FAtomAsrRackConfig {
	int32_t SoundRendererType; // 0x00(0x04)
	int32_t ElementID; // 0x04(0x04)
};

// ScriptStruct CriWareRuntime.AtomAsrRackConfigUI
// Size: 0x08 (Inherited: 0x00)
struct FAtomAsrRackConfigUI {
	enum class EAtomSoundRendererType SoundRendererTypeUI; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ElementID; // 0x04(0x04)
};

// ScriptStruct CriWareRuntime.ManaAudioTrackInfo
// Size: 0x10 (Inherited: 0x00)
struct FManaAudioTrackInfo {
	int32_t NumChannels; // 0x00(0x04)
	int32_t SamplingRate; // 0x04(0x04)
	int32_t TotalSamples; // 0x08(0x04)
	bool bIsAmbisonics; // 0x0c(0x01)
	enum class EManaSoundType Type; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct CriWareRuntime.ManaVideoTrackInfo
// Size: 0x1c (Inherited: 0x00)
struct FManaVideoTrackInfo {
	struct FIntPoint TextureDimensions; // 0x00(0x08)
	struct FIntPoint DisplayDimensions; // 0x08(0x08)
	float FrameRate; // 0x10(0x04)
	int32_t TotalFrames; // 0x14(0x04)
	bool bIsAlpha; // 0x18(0x01)
	enum class EManaMovieType Type; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
};

// ScriptStruct CriWareRuntime.MovieSceneAtomSectionTemplate
// Size: 0x180 (Inherited: 0x20)
struct FMovieSceneAtomSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneAtomSectionTemplateData AtomData; // 0x20(0x160)
};

// ScriptStruct CriWareRuntime.MovieSceneAtomSectionTemplateData
// Size: 0x160 (Inherited: 0x00)
struct FMovieSceneAtomSectionTemplateData {
	struct USoundAtomCue* Sound; // 0x00(0x08)
	float AtomStartOffset; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	double SectionStartTimeSeconds; // 0x10(0x08)
	struct FMovieSceneFloatChannel AtomPitchMultiplierCurve; // 0x18(0xa0)
	struct FMovieSceneFloatChannel AtomVolumeCurve; // 0xb8(0xa0)
	int32_t RowIndex; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
};

// ScriptStruct CriWareRuntime.AtomCategoryInfoParam
// Size: 0x20 (Inherited: 0x00)
struct FAtomCategoryInfoParam {
	struct FString Name; // 0x00(0x10)
	int32_t category_id; // 0x10(0x04)
	int32_t group_no; // 0x14(0x04)
	float Volume; // 0x18(0x04)
	bool IsPaused; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct CriWareRuntime.AtomCueInfo
// Size: 0x70 (Inherited: 0x00)
struct FAtomCueInfo {
	int32_t ID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Name; // 0x08(0x10)
	struct FTimespan Duration; // 0x18(0x08)
	struct FString UserData; // 0x20(0x10)
	struct TArray<struct FString> CategoryNames; // 0x30(0x10)
	struct TArray<struct FString> AisacControlNames; // 0x40(0x10)
	struct FAtomAttenuationDistanceParam AttenuationDistance; // 0x50(0x08)
	char bLooping : 1; // 0x58(0x01)
	char bIsParameterPalletAssigned : 1; // 0x58(0x01)
	char pad_58_2 : 6; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct TArray<struct USoundAtomCue*> SoundAtomCues; // 0x60(0x10)
};

// ScriptStruct CriWareRuntime.AtomAttenuationDistanceParam
// Size: 0x08 (Inherited: 0x00)
struct FAtomAttenuationDistanceParam {
	float MinDistance; // 0x00(0x04)
	float MaxDistance; // 0x04(0x04)
};

