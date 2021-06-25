// Enum Synthesis.ESynth1PatchDestination
enum class ESynth1PatchDestination : uint8 {
	Osc1Gain,
	Osc1Frequency,
	Osc1Pulsewidth,
	Osc2Gain,
	Osc2Frequency,
	Osc2Pulsewidth,
	FilterFrequency,
	FilterQ,
	Gain,
	Pan,
	LFO1Frequency,
	LFO1Gain,
	LFO2Frequency,
	LFO2Gain,
	Count,
	ESynth1PatchDestination_MAX,
};

// Enum Synthesis.ESynth1PatchSource
enum class ESynth1PatchSource : uint8 {
	LFO1,
	LFO2,
	Envelope,
	BiasEnvelope,
	Count,
	ESynth1PatchSource_MAX,
};

// Enum Synthesis.ESynthStereoDelayMode
enum class ESynthStereoDelayMode : uint8 {
	Normal,
	Cross,
	PingPong,
	Count,
	ESynthStereoDelayMode_MAX,
};

// Enum Synthesis.ESynthFilterAlgorithm
enum class ESynthFilterAlgorithm : uint8 {
	OnePole,
	StateVariable,
	Ladder,
	Count,
	ESynthFilterAlgorithm_MAX,
};

// Enum Synthesis.ESynthFilterType
enum class ESynthFilterType : uint8 {
	LowPass,
	HighPass,
	BandPass,
	BandStop,
	Count,
	ESynthFilterType_MAX,
};

// Enum Synthesis.ESynthModEnvBiasPatch
enum class ESynthModEnvBiasPatch : uint8 {
	PatchToNone,
	PatchToOscFreq,
	PatchToFilterFreq,
	PatchToFilterQ,
	PatchToLFO1Gain,
	PatchToLFO2Gain,
	PatchToLFO1Freq,
	PatchToLFO2Freq,
	Count,
	ESynthModEnvBiasPatch_MAX,
};

// Enum Synthesis.ESynthModEnvPatch
enum class ESynthModEnvPatch : uint8 {
	PatchToNone,
	PatchToOscFreq,
	PatchToFilterFreq,
	PatchToFilterQ,
	PatchToLFO1Gain,
	PatchToLFO2Gain,
	PatchToLFO1Freq,
	PatchToLFO2Freq,
	Count,
	ESynthModEnvPatch_MAX,
};

// Enum Synthesis.ESynthLFOPatchType
enum class ESynthLFOPatchType : uint8 {
	PatchToNone,
	PatchToGain,
	PatchToOscFreq,
	PatchToFilterFreq,
	PatchToFilterQ,
	PatchToOscPulseWidth,
	PatchToOscPan,
	PatchLFO1ToLFO2Frequency,
	PatchLFO1ToLFO2Gain,
	Count,
	ESynthLFOPatchType_MAX,
};

// Enum Synthesis.ESynthLFOMode
enum class ESynthLFOMode : uint8 {
	Sync,
	OneShot,
	Free,
	Count,
	ESynthLFOMode_MAX,
};

// Enum Synthesis.ESynthLFOType
enum class ESynthLFOType : uint8 {
	Sine,
	UpSaw,
	DownSaw,
	Square,
	Triangle,
	Exponential,
	RandomSampleHold,
	Count,
	ESynthLFOType_MAX,
};

// Enum Synthesis.ESynth1OscType
enum class ESynth1OscType : uint8 {
	Sine,
	Saw,
	Triangle,
	Square,
	Noise,
	Count,
	ESynth1OscType_MAX,
};

// Enum Synthesis.ESourceEffectDynamicsPeakMode
enum class ESourceEffectDynamicsPeakMode : uint8 {
	MeanSquared,
	RootMeanSquared,
	Peak,
	Count,
	ESourceEffectDynamicsPeakMode_MAX,
};

// Enum Synthesis.ESourceEffectDynamicsProcessorType
enum class ESourceEffectDynamicsProcessorType : uint8 {
	Compressor,
	Limiter,
	Expander,
	Gate,
	Count,
	ESourceEffectDynamicsProcessorType_MAX,
};

// Enum Synthesis.EEnvelopeFollowerPeakMode
enum class EEnvelopeFollowerPeakMode : uint8 {
	MeanSquared,
	RootMeanSquared,
	Peak,
	Count,
	EEnvelopeFollowerPeakMode_MAX,
};

// Enum Synthesis.ESourceEffectFilterType
enum class ESourceEffectFilterType : uint8 {
	LowPass,
	HighPass,
	BandPass,
	BandStop,
	Count,
	ESourceEffectFilterType_MAX,
};

// Enum Synthesis.ESourceEffectFilterCircuit
enum class ESourceEffectFilterCircuit : uint8 {
	OnePole,
	StateVariable,
	Ladder,
	Count,
	ESourceEffectFilterCircuit_MAX,
};

// Enum Synthesis.EStereoChannelMode
enum class EStereoChannelMode : uint8 {
	MidSide,
	LeftRight,
	count,
	EStereoChannelMode_MAX,
};

// Enum Synthesis.EPhaserLFOType
enum class EPhaserLFOType : uint8 {
	Sine,
	UpSaw,
	DownSaw,
	Square,
	Triangle,
	Exponential,
	RandomSampleHold,
	Count,
	EPhaserLFOType_MAX,
};

// Enum Synthesis.ERingModulatorTypeSourceEffect
enum class ERingModulatorTypeSourceEffect : uint8 {
	Sine,
	Saw,
	Triangle,
	Square,
	Count,
	ERingModulatorTypeSourceEffect_MAX,
};

// Enum Synthesis.EStereoDelaySourceEffect
enum class EStereoDelaySourceEffect : uint8 {
	Normal,
	Cross,
	PingPong,
	Count,
	EStereoDelaySourceEffect_MAX,
};

// Enum Synthesis.ESubmixEffectConvolutionReverbBlockSize
enum class ESubmixEffectConvolutionReverbBlockSize : uint8 {
	BlockSize256,
	BlockSize512,
	BlockSize1024,
	ESubmixEffectConvolutionReverbBlockSize_MAX,
};

// Enum Synthesis.ESubmixFilterAlgorithm
enum class ESubmixFilterAlgorithm : uint8 {
	OnePole,
	StateVariable,
	Ladder,
	Count,
	ESubmixFilterAlgorithm_MAX,
};

// Enum Synthesis.ESubmixFilterType
enum class ESubmixFilterType : uint8 {
	LowPass,
	HighPass,
	BandPass,
	BandStop,
	Count,
	ESubmixFilterType_MAX,
};

// Enum Synthesis.ETapLineMode
enum class ETapLineMode : uint8 {
	SendToChannel,
	Panning,
	Disabled,
	ETapLineMode_MAX,
};

// Enum Synthesis.EGranularSynthSeekType
enum class EGranularSynthSeekType : uint8 {
	FromBeginning,
	FromCurrentPosition,
	Count,
	EGranularSynthSeekType_MAX,
};

// Enum Synthesis.EGranularSynthEnvelopeType
enum class EGranularSynthEnvelopeType : uint8 {
	Rectangular,
	Triangle,
	DownwardTriangle,
	UpwardTriangle,
	ExponentialDecay,
	ExponentialIncrease,
	Gaussian,
	Hanning,
	Lanczos,
	Cosine,
	CosineSquared,
	Welch,
	Blackman,
	BlackmanHarris,
	Count,
	EGranularSynthEnvelopeType_MAX,
};

// Enum Synthesis.CurveInterpolationType
enum class CurveInterpolationType : uint8 {
	AUTOINTERP,
	LINEAR,
	CONSTANT,
	CurveInterpolationType_MAX,
};

// Enum Synthesis.ESamplePlayerSeekType
enum class ESamplePlayerSeekType : uint8 {
	FromBeginning,
	FromCurrentPosition,
	FromEnd,
	Count,
	ESamplePlayerSeekType_MAX,
};

// Enum Synthesis.ESynthKnobSize
enum class ESynthKnobSize : uint8 {
	Medium,
	Large,
	Count,
	ESynthKnobSize_MAX,
};

// Enum Synthesis.ESynthSlateColorStyle
enum class ESynthSlateColorStyle : uint8 {
	Light,
	Dark,
	Count,
	ESynthSlateColorStyle_MAX,
};

// Enum Synthesis.ESynthSlateSizeType
enum class ESynthSlateSizeType : uint8 {
	Small,
	Medium,
	Large,
	Count,
	ESynthSlateSizeType_MAX,
};

// ScriptStruct Synthesis.ModularSynthPresetBankEntry
// Size: 0xf0 (Inherited: 0x00)
struct FModularSynthPresetBankEntry {
	struct FString PresetName; // 0x00(0x10)
	struct FModularSynthPreset Preset; // 0x10(0xe0)
};

// ScriptStruct Synthesis.ModularSynthPreset
// Size: 0xe0 (Inherited: 0x08)
struct FModularSynthPreset : FTableRowBase {
	char bEnablePolyphony : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	enum class ESynth1OscType Osc1Type; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float Osc1Gain; // 0x10(0x04)
	float Osc1Octave; // 0x14(0x04)
	float Osc1Semitones; // 0x18(0x04)
	float Osc1Cents; // 0x1c(0x04)
	float Osc1PulseWidth; // 0x20(0x04)
	enum class ESynth1OscType Osc2Type; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float Osc2Gain; // 0x28(0x04)
	float Osc2Octave; // 0x2c(0x04)
	float Osc2Semitones; // 0x30(0x04)
	float Osc2Cents; // 0x34(0x04)
	float Osc2PulseWidth; // 0x38(0x04)
	float Portamento; // 0x3c(0x04)
	char bEnableUnison : 1; // 0x40(0x01)
	char bEnableOscillatorSync : 1; // 0x40(0x01)
	char pad_40_2 : 6; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float Spread; // 0x44(0x04)
	float Pan; // 0x48(0x04)
	float LFO1Frequency; // 0x4c(0x04)
	float LFO1Gain; // 0x50(0x04)
	enum class ESynthLFOType LFO1Type; // 0x54(0x01)
	enum class ESynthLFOMode LFO1Mode; // 0x55(0x01)
	enum class ESynthLFOPatchType LFO1PatchType; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
	float LFO2Frequency; // 0x58(0x04)
	float LFO2Gain; // 0x5c(0x04)
	enum class ESynthLFOType LFO2Type; // 0x60(0x01)
	enum class ESynthLFOMode LFO2Mode; // 0x61(0x01)
	enum class ESynthLFOPatchType LFO2PatchType; // 0x62(0x01)
	char pad_63[0x1]; // 0x63(0x01)
	float GainDb; // 0x64(0x04)
	float AttackTime; // 0x68(0x04)
	float DecayTime; // 0x6c(0x04)
	float SustainGain; // 0x70(0x04)
	float ReleaseTime; // 0x74(0x04)
	enum class ESynthModEnvPatch ModEnvPatchType; // 0x78(0x01)
	enum class ESynthModEnvBiasPatch ModEnvBiasPatchType; // 0x79(0x01)
	char pad_7A[0x2]; // 0x7a(0x02)
	char bInvertModulationEnvelope : 1; // 0x7c(0x01)
	char bInvertModulationEnvelopeBias : 1; // 0x7c(0x01)
	char pad_7C_2 : 6; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	float ModulationEnvelopeDepth; // 0x80(0x04)
	float ModulationEnvelopeAttackTime; // 0x84(0x04)
	float ModulationEnvelopeDecayTime; // 0x88(0x04)
	float ModulationEnvelopeSustainGain; // 0x8c(0x04)
	float ModulationEnvelopeReleaseTime; // 0x90(0x04)
	char bLegato : 1; // 0x94(0x01)
	char bRetrigger : 1; // 0x94(0x01)
	char pad_94_2 : 6; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	float FilterFrequency; // 0x98(0x04)
	float FilterQ; // 0x9c(0x04)
	enum class ESynthFilterType FilterType; // 0xa0(0x01)
	enum class ESynthFilterAlgorithm FilterAlgorithm; // 0xa1(0x01)
	char pad_A2[0x2]; // 0xa2(0x02)
	char bStereoDelayEnabled : 1; // 0xa4(0x01)
	char pad_A4_1 : 7; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	enum class ESynthStereoDelayMode StereoDelayMode; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	float StereoDelayTime; // 0xac(0x04)
	float StereoDelayFeedback; // 0xb0(0x04)
	float StereoDelayWetlevel; // 0xb4(0x04)
	float StereoDelayRatio; // 0xb8(0x04)
	char bChorusEnabled : 1; // 0xbc(0x01)
	char pad_BC_1 : 7; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	float ChorusDepth; // 0xc0(0x04)
	float ChorusFeedback; // 0xc4(0x04)
	float ChorusFrequency; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct TArray<struct FEpicSynth1Patch> Patches; // 0xd0(0x10)
};

// ScriptStruct Synthesis.EpicSynth1Patch
// Size: 0x18 (Inherited: 0x00)
struct FEpicSynth1Patch {
	enum class ESynth1PatchSource PatchSource; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FSynth1PatchCable> PatchCables; // 0x08(0x10)
};

// ScriptStruct Synthesis.Synth1PatchCable
// Size: 0x08 (Inherited: 0x00)
struct FSynth1PatchCable {
	float Depth; // 0x00(0x04)
	enum class ESynth1PatchDestination Destination; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Synthesis.PatchId
// Size: 0x04 (Inherited: 0x00)
struct FPatchId {
	int32_t ID; // 0x00(0x04)
};

// ScriptStruct Synthesis.SourceEffectBitCrusherSettings
// Size: 0x08 (Inherited: 0x00)
struct FSourceEffectBitCrusherSettings {
	float CrushedSampleRate; // 0x00(0x04)
	float CrushedBits; // 0x04(0x04)
};

// ScriptStruct Synthesis.SourceEffectChorusSettings
// Size: 0x18 (Inherited: 0x00)
struct FSourceEffectChorusSettings {
	float Depth; // 0x00(0x04)
	float Frequency; // 0x04(0x04)
	float Feedback; // 0x08(0x04)
	float WetLevel; // 0x0c(0x04)
	float DryLevel; // 0x10(0x04)
	float Spread; // 0x14(0x04)
};

// ScriptStruct Synthesis.SourceEffectDynamicsProcessorSettings
// Size: 0x28 (Inherited: 0x00)
struct FSourceEffectDynamicsProcessorSettings {
	enum class ESourceEffectDynamicsProcessorType DynamicsProcessorType; // 0x00(0x01)
	enum class ESourceEffectDynamicsPeakMode PeakMode; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float LookAheadMsec; // 0x04(0x04)
	float AttackTimeMsec; // 0x08(0x04)
	float ReleaseTimeMsec; // 0x0c(0x04)
	float ThresholdDb; // 0x10(0x04)
	float Ratio; // 0x14(0x04)
	float KneeBandwidthDb; // 0x18(0x04)
	float InputGainDb; // 0x1c(0x04)
	float OutputGainDb; // 0x20(0x04)
	char bStereoLinked : 1; // 0x24(0x01)
	char bAnalogMode : 1; // 0x24(0x01)
	char pad_24_2 : 6; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct Synthesis.SourceEffectEnvelopeFollowerSettings
// Size: 0x0c (Inherited: 0x00)
struct FSourceEffectEnvelopeFollowerSettings {
	float AttackTime; // 0x00(0x04)
	float ReleaseTime; // 0x04(0x04)
	enum class EEnvelopeFollowerPeakMode PeakMode; // 0x08(0x01)
	bool bIsAnalogMode; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct Synthesis.SourceEffectEQSettings
// Size: 0x10 (Inherited: 0x00)
struct FSourceEffectEQSettings {
	struct TArray<struct FSourceEffectEQBand> EQBands; // 0x00(0x10)
};

// ScriptStruct Synthesis.SourceEffectEQBand
// Size: 0x10 (Inherited: 0x00)
struct FSourceEffectEQBand {
	float Frequency; // 0x00(0x04)
	float Bandwidth; // 0x04(0x04)
	float GainDb; // 0x08(0x04)
	char bEnabled : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Synthesis.SourceEffectFilterSettings
// Size: 0x0c (Inherited: 0x00)
struct FSourceEffectFilterSettings {
	enum class ESourceEffectFilterCircuit FilterCircuit; // 0x00(0x01)
	enum class ESourceEffectFilterType FilterType; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float CutoffFrequency; // 0x04(0x04)
	float FilterQ; // 0x08(0x04)
};

// ScriptStruct Synthesis.SourceEffectFoldbackDistortionSettings
// Size: 0x0c (Inherited: 0x00)
struct FSourceEffectFoldbackDistortionSettings {
	float InputGainDb; // 0x00(0x04)
	float ThresholdDb; // 0x04(0x04)
	float OutputGainDb; // 0x08(0x04)
};

// ScriptStruct Synthesis.SourceEffectMidSideSpreaderSettings
// Size: 0x0c (Inherited: 0x00)
struct FSourceEffectMidSideSpreaderSettings {
	enum class EStereoChannelMode InputMode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float SpreadAmount; // 0x04(0x04)
	enum class EStereoChannelMode OutputMode; // 0x08(0x01)
	bool bEqualPower; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct Synthesis.SourceEffectPannerSettings
// Size: 0x08 (Inherited: 0x00)
struct FSourceEffectPannerSettings {
	float Spread; // 0x00(0x04)
	float Pan; // 0x04(0x04)
};

// ScriptStruct Synthesis.SourceEffectPhaserSettings
// Size: 0x10 (Inherited: 0x00)
struct FSourceEffectPhaserSettings {
	float WetLevel; // 0x00(0x04)
	float Frequency; // 0x04(0x04)
	float Feedback; // 0x08(0x04)
	enum class EPhaserLFOType LFOType; // 0x0c(0x01)
	bool UseQuadraturePhase; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct Synthesis.SourceEffectRingModulationSettings
// Size: 0x14 (Inherited: 0x00)
struct FSourceEffectRingModulationSettings {
	enum class ERingModulatorTypeSourceEffect ModulatorType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Frequency; // 0x04(0x04)
	float Depth; // 0x08(0x04)
	float DryLevel; // 0x0c(0x04)
	float WetLevel; // 0x10(0x04)
};

// ScriptStruct Synthesis.SourceEffectSimpleDelaySettings
// Size: 0x18 (Inherited: 0x00)
struct FSourceEffectSimpleDelaySettings {
	float SpeedOfSound; // 0x00(0x04)
	float DelayAmount; // 0x04(0x04)
	float DryAmount; // 0x08(0x04)
	float WetAmount; // 0x0c(0x04)
	float Feedback; // 0x10(0x04)
	char bDelayBasedOnDistance : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Synthesis.SourceEffectStereoDelaySettings
// Size: 0x14 (Inherited: 0x00)
struct FSourceEffectStereoDelaySettings {
	enum class EStereoDelaySourceEffect DelayMode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float DelayTimeMsec; // 0x04(0x04)
	float Feedback; // 0x08(0x04)
	float DelayRatio; // 0x0c(0x04)
	float WetLevel; // 0x10(0x04)
};

// ScriptStruct Synthesis.SourceEffectWaveShaperSettings
// Size: 0x08 (Inherited: 0x00)
struct FSourceEffectWaveShaperSettings {
	float Amount; // 0x00(0x04)
	float OutputGainDb; // 0x04(0x04)
};

// ScriptStruct Synthesis.SubmixEffectConvolutionReverbSettings
// Size: 0x20 (Inherited: 0x00)
struct FSubmixEffectConvolutionReverbSettings {
	float NormalizationVolumeDb; // 0x00(0x04)
	float SurroundRearChannelBleedDb; // 0x04(0x04)
	bool bInvertRearChannelBleedPhase; // 0x08(0x01)
	bool bSurroundRearChannelFlip; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float SurroundRearChannelBleedAmount; // 0x0c(0x04)
	struct UAudioImpulseResponse* ImpulseResponse; // 0x10(0x08)
	bool AllowHArdwareAcceleration; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Synthesis.SubmixEffectDelaySettings
// Size: 0x0c (Inherited: 0x00)
struct FSubmixEffectDelaySettings {
	float MaximumDelayLength; // 0x00(0x04)
	float InterpolationTime; // 0x04(0x04)
	float DelayLength; // 0x08(0x04)
};

// ScriptStruct Synthesis.SubmixEffectFilterSettings
// Size: 0x0c (Inherited: 0x00)
struct FSubmixEffectFilterSettings {
	enum class ESubmixFilterType FilterType; // 0x00(0x01)
	enum class ESubmixFilterAlgorithm FilterAlgorithm; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float FilterFrequency; // 0x04(0x04)
	float FilterQ; // 0x08(0x04)
};

// ScriptStruct Synthesis.SubmixEffectFlexiverbSettings
// Size: 0x10 (Inherited: 0x00)
struct FSubmixEffectFlexiverbSettings {
	float PreDelay; // 0x00(0x04)
	float DecayTime; // 0x04(0x04)
	float RoomDampening; // 0x08(0x04)
	int32_t Complexity; // 0x0c(0x04)
};

// ScriptStruct Synthesis.SubmixEffectTapDelaySettings
// Size: 0x18 (Inherited: 0x00)
struct FSubmixEffectTapDelaySettings {
	float MaximumDelayLength; // 0x00(0x04)
	float InterpolationTime; // 0x04(0x04)
	struct TArray<struct FTapDelayInfo> Taps; // 0x08(0x10)
};

// ScriptStruct Synthesis.TapDelayInfo
// Size: 0x18 (Inherited: 0x00)
struct FTapDelayInfo {
	enum class ETapLineMode TapLineMode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float DelayLength; // 0x04(0x04)
	float Gain; // 0x08(0x04)
	int32_t OutputChannel; // 0x0c(0x04)
	float PanInDegrees; // 0x10(0x04)
	int32_t TapId; // 0x14(0x04)
};

// ScriptStruct Synthesis.Synth2DSliderStyle
// Size: 0x2b8 (Inherited: 0x08)
struct FSynth2DSliderStyle : FSlateWidgetStyle {
	struct FSlateBrush NormalThumbImage; // 0x08(0x88)
	struct FSlateBrush DisabledThumbImage; // 0x90(0x88)
	struct FSlateBrush NormalBarImage; // 0x118(0x88)
	struct FSlateBrush DisabledBarImage; // 0x1a0(0x88)
	struct FSlateBrush BackgroundImage; // 0x228(0x88)
	float BarThickness; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
};

// ScriptStruct Synthesis.SynthKnobStyle
// Size: 0x238 (Inherited: 0x08)
struct FSynthKnobStyle : FSlateWidgetStyle {
	struct FSlateBrush LargeKnob; // 0x08(0x88)
	struct FSlateBrush LargeKnobOverlay; // 0x90(0x88)
	struct FSlateBrush MediumKnob; // 0x118(0x88)
	struct FSlateBrush MediumKnobOverlay; // 0x1a0(0x88)
	float MinValueAngle; // 0x228(0x04)
	float MaxValueAngle; // 0x22c(0x04)
	enum class ESynthKnobSize KnobSize; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)
};

// ScriptStruct Synthesis.SynthSlateStyle
// Size: 0x10 (Inherited: 0x08)
struct FSynthSlateStyle : FSlateWidgetStyle {
	enum class ESynthSlateSizeType SizeType; // 0x08(0x01)
	enum class ESynthSlateColorStyle ColorStyle; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

