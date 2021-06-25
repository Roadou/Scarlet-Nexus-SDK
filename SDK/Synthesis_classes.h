// Class Synthesis.ModularSynthPresetBank
// Size: 0x38 (Inherited: 0x28)
struct UModularSynthPresetBank : UObject {
	struct TArray<struct FModularSynthPresetBankEntry> Presets; // 0x28(0x10)
};

// Class Synthesis.ModularSynthLibrary
// Size: 0x28 (Inherited: 0x28)
struct UModularSynthLibrary : UBlueprintFunctionLibrary {

	void AddModularSynthPresetToBankAsset(struct UModularSynthPresetBank* InBank, struct FModularSynthPreset Preset, struct FString PresetName); // Function Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0xda3230
};

// Class Synthesis.ModularSynthComponent
// Size: 0xd80 (Inherited: 0x6e0)
struct UModularSynthComponent : USynthComponent {
	int32_t VoiceCount; // 0x6e0(0x04)
	char pad_6E4[0x69c]; // 0x6e4(0x69c)

	void SetSynthPreset(struct FModularSynthPreset SynthPreset); // Function Synthesis.ModularSynthComponent.SetSynthPreset // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xda57a0
	void SetSustainGain(float SustainGain); // Function Synthesis.ModularSynthComponent.SetSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0xda5720
	void SetStereoDelayWetlevel(float DelayWetlevel); // Function Synthesis.ModularSynthComponent.SetStereoDelayWetlevel // (Final|Native|Public|BlueprintCallable) // @ game+0xda56a0
	void SetStereoDelayTime(float DelayTimeMsec); // Function Synthesis.ModularSynthComponent.SetStereoDelayTime // (Final|Native|Public|BlueprintCallable) // @ game+0xda5620
	void SetStereoDelayRatio(float DelayRatio); // Function Synthesis.ModularSynthComponent.SetStereoDelayRatio // (Final|Native|Public|BlueprintCallable) // @ game+0xda55a0
	void SetStereoDelayMode(enum class ESynthStereoDelayMode StereoDelayMode); // Function Synthesis.ModularSynthComponent.SetStereoDelayMode // (Final|Native|Public|BlueprintCallable) // @ game+0xda5520
	void SetStereoDelayIsEnabled(bool StereoDelayEnabled); // Function Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0xda5490
	void SetStereoDelayFeedback(float DelayFeedback); // Function Synthesis.ModularSynthComponent.SetStereoDelayFeedback // (Final|Native|Public|BlueprintCallable) // @ game+0xda5410
	void SetSpread(float Spread); // Function Synthesis.ModularSynthComponent.SetSpread // (Final|Native|Public|BlueprintCallable) // @ game+0xda5390
	void SetReleaseTime(float ReleaseTimeMsec); // Function Synthesis.ModularSynthComponent.SetReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0xda5310
	void SetPortamento(float Portamento); // Function Synthesis.ModularSynthComponent.SetPortamento // (Final|Native|Public|BlueprintCallable) // @ game+0xda5290
	void SetPitchBend(float PitchBend); // Function Synthesis.ModularSynthComponent.SetPitchBend // (Final|Native|Public|BlueprintCallable) // @ game+0xda5210
	void SetPan(float Pan); // Function Synthesis.ModularSynthComponent.SetPan // (Final|Native|Public|BlueprintCallable) // @ game+0xda5190
	void SetOscType(int32_t OscIndex, enum class ESynth1OscType OscType); // Function Synthesis.ModularSynthComponent.SetOscType // (Final|Native|Public|BlueprintCallable) // @ game+0xda50d0
	void SetOscSync(bool bIsSynced); // Function Synthesis.ModularSynthComponent.SetOscSync // (Final|Native|Public|BlueprintCallable) // @ game+0xda5040
	void SetOscSemitones(int32_t OscIndex, float Semitones); // Function Synthesis.ModularSynthComponent.SetOscSemitones // (Final|Native|Public|BlueprintCallable) // @ game+0xda4f70
	void SetOscPulsewidth(int32_t OscIndex, float Pulsewidth); // Function Synthesis.ModularSynthComponent.SetOscPulsewidth // (Final|Native|Public|BlueprintCallable) // @ game+0xda4ea0
	void SetOscOctave(int32_t OscIndex, float Octave); // Function Synthesis.ModularSynthComponent.SetOscOctave // (Final|Native|Public|BlueprintCallable) // @ game+0xda4dd0
	void SetOscGainMod(int32_t OscIndex, float OscGainMod); // Function Synthesis.ModularSynthComponent.SetOscGainMod // (Final|Native|Public|BlueprintCallable) // @ game+0xda4d00
	void SetOscGain(int32_t OscIndex, float OscGain); // Function Synthesis.ModularSynthComponent.SetOscGain // (Final|Native|Public|BlueprintCallable) // @ game+0xda4c30
	void SetOscFrequencyMod(int32_t OscIndex, float OscFreqMod); // Function Synthesis.ModularSynthComponent.SetOscFrequencyMod // (Final|Native|Public|BlueprintCallable) // @ game+0xda4b60
	void SetOscCents(int32_t OscIndex, float Cents); // Function Synthesis.ModularSynthComponent.SetOscCents // (Final|Native|Public|BlueprintCallable) // @ game+0xda4a90
	void SetModEnvSustainGain(float SustainGain); // Function Synthesis.ModularSynthComponent.SetModEnvSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0xda4a10
	void SetModEnvReleaseTime(float Release); // Function Synthesis.ModularSynthComponent.SetModEnvReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0xda4990
	void SetModEnvPatch(enum class ESynthModEnvPatch InPatchType); // Function Synthesis.ModularSynthComponent.SetModEnvPatch // (Final|Native|Public|BlueprintCallable) // @ game+0xda4910
	void SetModEnvInvert(bool bInvert); // Function Synthesis.ModularSynthComponent.SetModEnvInvert // (Final|Native|Public|BlueprintCallable) // @ game+0xda4880
	void SetModEnvDepth(float Depth); // Function Synthesis.ModularSynthComponent.SetModEnvDepth // (Final|Native|Public|BlueprintCallable) // @ game+0xda4800
	void SetModEnvDecayTime(float DecayTimeMsec); // Function Synthesis.ModularSynthComponent.SetModEnvDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0xda4780
	void SetModEnvBiasPatch(enum class ESynthModEnvBiasPatch InPatchType); // Function Synthesis.ModularSynthComponent.SetModEnvBiasPatch // (Final|Native|Public|BlueprintCallable) // @ game+0xda4700
	void SetModEnvBiasInvert(bool bInvert); // Function Synthesis.ModularSynthComponent.SetModEnvBiasInvert // (Final|Native|Public|BlueprintCallable) // @ game+0xda4670
	void SetModEnvAttackTime(float AttackTimeMsec); // Function Synthesis.ModularSynthComponent.SetModEnvAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0xda45f0
	void SetLFOType(int32_t LFOIndex, enum class ESynthLFOType LFOType); // Function Synthesis.ModularSynthComponent.SetLFOType // (Final|Native|Public|BlueprintCallable) // @ game+0xda4530
	void SetLFOPatch(int32_t LFOIndex, enum class ESynthLFOPatchType LFOPatchType); // Function Synthesis.ModularSynthComponent.SetLFOPatch // (Final|Native|Public|BlueprintCallable) // @ game+0xda4470
	void SetLFOMode(int32_t LFOIndex, enum class ESynthLFOMode LFOMode); // Function Synthesis.ModularSynthComponent.SetLFOMode // (Final|Native|Public|BlueprintCallable) // @ game+0xda43b0
	void SetLFOGainMod(int32_t LFOIndex, float GainMod); // Function Synthesis.ModularSynthComponent.SetLFOGainMod // (Final|Native|Public|BlueprintCallable) // @ game+0xda42e0
	void SetLFOGain(int32_t LFOIndex, float Gain); // Function Synthesis.ModularSynthComponent.SetLFOGain // (Final|Native|Public|BlueprintCallable) // @ game+0xda4210
	void SetLFOFrequencyMod(int32_t LFOIndex, float FrequencyModHz); // Function Synthesis.ModularSynthComponent.SetLFOFrequencyMod // (Final|Native|Public|BlueprintCallable) // @ game+0xda4140
	void SetLFOFrequency(int32_t LFOIndex, float FrequencyHz); // Function Synthesis.ModularSynthComponent.SetLFOFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0xda4070
	void SetGainDb(float GainDb); // Function Synthesis.ModularSynthComponent.SetGainDb // (Final|Native|Public|BlueprintCallable) // @ game+0xda3ff0
	void SetFilterType(enum class ESynthFilterType FilterType); // Function Synthesis.ModularSynthComponent.SetFilterType // (Final|Native|Public|BlueprintCallable) // @ game+0xda3f70
	void SetFilterQMod(float FilterQ); // Function Synthesis.ModularSynthComponent.SetFilterQMod // (Final|Native|Public|BlueprintCallable) // @ game+0xda3ef0
	void SetFilterQ(float FilterQ); // Function Synthesis.ModularSynthComponent.SetFilterQ // (Final|Native|Public|BlueprintCallable) // @ game+0xda3e70
	void SetFilterFrequencyMod(float FilterFrequencyHz); // Function Synthesis.ModularSynthComponent.SetFilterFrequencyMod // (Final|Native|Public|BlueprintCallable) // @ game+0xda3df0
	void SetFilterFrequency(float FilterFrequencyHz); // Function Synthesis.ModularSynthComponent.SetFilterFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0xda3d70
	void SetFilterAlgorithm(enum class ESynthFilterAlgorithm FilterAlgorithm); // Function Synthesis.ModularSynthComponent.SetFilterAlgorithm // (Final|Native|Public|BlueprintCallable) // @ game+0xda3cf0
	void SetEnableUnison(bool EnableUnison); // Function Synthesis.ModularSynthComponent.SetEnableUnison // (Final|Native|Public|BlueprintCallable) // @ game+0xda3c60
	void SetEnableRetrigger(bool RetriggerEnabled); // Function Synthesis.ModularSynthComponent.SetEnableRetrigger // (Final|Native|Public|BlueprintCallable) // @ game+0xda3bd0
	void SetEnablePolyphony(bool bEnablePolyphony); // Function Synthesis.ModularSynthComponent.SetEnablePolyphony // (Final|Native|Public|BlueprintCallable) // @ game+0xda3b40
	bool SetEnablePatch(struct FPatchId PatchId, bool bIsEnabled); // Function Synthesis.ModularSynthComponent.SetEnablePatch // (Final|Native|Public|BlueprintCallable) // @ game+0xda3a70
	void SetEnableLegato(bool LegatoEnabled); // Function Synthesis.ModularSynthComponent.SetEnableLegato // (Final|Native|Public|BlueprintCallable) // @ game+0xda39e0
	void SetDecayTime(float DecayTimeMsec); // Function Synthesis.ModularSynthComponent.SetDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0xda3960
	void SetChorusFrequency(float Frequency); // Function Synthesis.ModularSynthComponent.SetChorusFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0xda38e0
	void SetChorusFeedback(float Feedback); // Function Synthesis.ModularSynthComponent.SetChorusFeedback // (Final|Native|Public|BlueprintCallable) // @ game+0xda3860
	void SetChorusEnabled(bool EnableChorus); // Function Synthesis.ModularSynthComponent.SetChorusEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0xda37d0
	void SetChorusDepth(float Depth); // Function Synthesis.ModularSynthComponent.SetChorusDepth // (Final|Native|Public|BlueprintCallable) // @ game+0xda3750
	void SetAttackTime(float AttackTimeMsec); // Function Synthesis.ModularSynthComponent.SetAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0xda36d0
	void NoteOn(float Note, int32_t Velocity, float Duration); // Function Synthesis.ModularSynthComponent.NoteOn // (Final|Native|Public|BlueprintCallable) // @ game+0xda35c0
	void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes); // Function Synthesis.ModularSynthComponent.NoteOff // (Final|Native|Public|BlueprintCallable) // @ game+0xda34b0
	struct FPatchId CreatePatch(enum class ESynth1PatchSource PatchSource, struct TArray<struct FSynth1PatchCable> PatchCables, bool bEnableByDefault); // Function Synthesis.ModularSynthComponent.CreatePatch // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xda3370
};

// Class Synthesis.SourceEffectBitCrusherPreset
// Size: 0x78 (Inherited: 0x40)
struct USourceEffectBitCrusherPreset : USoundEffectSourcePreset {
	char pad_40[0x30]; // 0x40(0x30)
	struct FSourceEffectBitCrusherSettings Settings; // 0x70(0x08)

	void SetSettings(struct FSourceEffectBitCrusherSettings InSettings); // Function Synthesis.SourceEffectBitCrusherPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xdaa290
};

// Class Synthesis.SourceEffectChorusPreset
// Size: 0x98 (Inherited: 0x40)
struct USourceEffectChorusPreset : USoundEffectSourcePreset {
	char pad_40[0x40]; // 0x40(0x40)
	struct FSourceEffectChorusSettings Settings; // 0x80(0x18)

	void SetSettings(struct FSourceEffectChorusSettings InSettings); // Function Synthesis.SourceEffectChorusPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xdaa340
};

// Class Synthesis.SourceEffectDynamicsProcessorPreset
// Size: 0xb8 (Inherited: 0x40)
struct USourceEffectDynamicsProcessorPreset : USoundEffectSourcePreset {
	char pad_40[0x50]; // 0x40(0x50)
	struct FSourceEffectDynamicsProcessorSettings Settings; // 0x90(0x28)

	void SetSettings(struct FSourceEffectDynamicsProcessorSettings InSettings); // Function Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xdaa3f0
};

// Class Synthesis.EnvelopeFollowerListener
// Size: 0xe0 (Inherited: 0xc0)
struct UEnvelopeFollowerListener : UActorComponent {
	struct FMulticastInlineDelegate OnEnvelopeFollowerUpdate; // 0xc0(0x10)
	char pad_D0[0x10]; // 0xd0(0x10)
};

// Class Synthesis.SourceEffectEnvelopeFollowerPreset
// Size: 0x80 (Inherited: 0x40)
struct USourceEffectEnvelopeFollowerPreset : USoundEffectSourcePreset {
	char pad_40[0x34]; // 0x40(0x34)
	struct FSourceEffectEnvelopeFollowerSettings Settings; // 0x74(0x0c)

	void UnregisterEnvelopeFollowerListener(struct UEnvelopeFollowerListener* EnvelopeFollowerListener); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener // (Final|Native|Public|BlueprintCallable) // @ game+0xdaac10
	void SetSettings(struct FSourceEffectEnvelopeFollowerSettings InSettings); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xdaa550
	void RegisterEnvelopeFollowerListener(struct UEnvelopeFollowerListener* EnvelopeFollowerListener); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener // (Final|Native|Public|BlueprintCallable) // @ game+0xdaa190
};

// Class Synthesis.SourceEffectEQPreset
// Size: 0x88 (Inherited: 0x40)
struct USourceEffectEQPreset : USoundEffectSourcePreset {
	char pad_40[0x38]; // 0x40(0x38)
	struct FSourceEffectEQSettings Settings; // 0x78(0x10)

	void SetSettings(struct FSourceEffectEQSettings InSettings); // Function Synthesis.SourceEffectEQPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xdaa4a0
};

// Class Synthesis.SourceEffectFilterPreset
// Size: 0x80 (Inherited: 0x40)
struct USourceEffectFilterPreset : USoundEffectSourcePreset {
	char pad_40[0x34]; // 0x40(0x34)
	struct FSourceEffectFilterSettings Settings; // 0x74(0x0c)

	void SetSettings(struct FSourceEffectFilterSettings InSettings); // Function Synthesis.SourceEffectFilterPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xdaa600
};

// Class Synthesis.SourceEffectFoldbackDistortionPreset
// Size: 0x80 (Inherited: 0x40)
struct USourceEffectFoldbackDistortionPreset : USoundEffectSourcePreset {
	char pad_40[0x34]; // 0x40(0x34)
	struct FSourceEffectFoldbackDistortionSettings Settings; // 0x74(0x0c)

	void SetSettings(struct FSourceEffectFoldbackDistortionSettings InSettings); // Function Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xdaa6b0
};

// Class Synthesis.SourceEffectMidSideSpreaderPreset
// Size: 0x80 (Inherited: 0x40)
struct USourceEffectMidSideSpreaderPreset : USoundEffectSourcePreset {
	char pad_40[0x34]; // 0x40(0x34)
	struct FSourceEffectMidSideSpreaderSettings Settings; // 0x74(0x0c)

	void SetSettings(struct FSourceEffectMidSideSpreaderSettings InSettings); // Function Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xdaa760
};

// Class Synthesis.SourceEffectPannerPreset
// Size: 0x78 (Inherited: 0x40)
struct USourceEffectPannerPreset : USoundEffectSourcePreset {
	char pad_40[0x30]; // 0x40(0x30)
	struct FSourceEffectPannerSettings Settings; // 0x70(0x08)

	void SetSettings(struct FSourceEffectPannerSettings InSettings); // Function Synthesis.SourceEffectPannerPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xdaa810
};

// Class Synthesis.SourceEffectPhaserPreset
// Size: 0x88 (Inherited: 0x40)
struct USourceEffectPhaserPreset : USoundEffectSourcePreset {
	char pad_40[0x38]; // 0x40(0x38)
	struct FSourceEffectPhaserSettings Settings; // 0x78(0x10)

	void SetSettings(struct FSourceEffectPhaserSettings InSettings); // Function Synthesis.SourceEffectPhaserPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xdaa8c0
};

// Class Synthesis.SourceEffectRingModulationPreset
// Size: 0x90 (Inherited: 0x40)
struct USourceEffectRingModulationPreset : USoundEffectSourcePreset {
	char pad_40[0x3c]; // 0x40(0x3c)
	struct FSourceEffectRingModulationSettings Settings; // 0x7c(0x14)

	void SetSettings(struct FSourceEffectRingModulationSettings InSettings); // Function Synthesis.SourceEffectRingModulationPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xdaa980
};

// Class Synthesis.SourceEffectSimpleDelayPreset
// Size: 0x98 (Inherited: 0x40)
struct USourceEffectSimpleDelayPreset : USoundEffectSourcePreset {
	char pad_40[0x40]; // 0x40(0x40)
	struct FSourceEffectSimpleDelaySettings Settings; // 0x80(0x18)

	void SetSettings(struct FSourceEffectSimpleDelaySettings InSettings); // Function Synthesis.SourceEffectSimpleDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xdaaa20
};

// Class Synthesis.SourceEffectStereoDelayPreset
// Size: 0x90 (Inherited: 0x40)
struct USourceEffectStereoDelayPreset : USoundEffectSourcePreset {
	char pad_40[0x3c]; // 0x40(0x3c)
	struct FSourceEffectStereoDelaySettings Settings; // 0x7c(0x14)

	void SetSettings(struct FSourceEffectStereoDelaySettings InSettings); // Function Synthesis.SourceEffectStereoDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xdaaad0
};

// Class Synthesis.SourceEffectWaveShaperPreset
// Size: 0x78 (Inherited: 0x40)
struct USourceEffectWaveShaperPreset : USoundEffectSourcePreset {
	char pad_40[0x30]; // 0x40(0x30)
	struct FSourceEffectWaveShaperSettings Settings; // 0x70(0x08)

	void SetSettings(struct FSourceEffectWaveShaperSettings InSettings); // Function Synthesis.SourceEffectWaveShaperPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xdaa810
};

// Class Synthesis.AudioImpulseResponse
// Size: 0x58 (Inherited: 0x28)
struct UAudioImpulseResponse : UObject {
	struct TArray<float> ImpulseResponse; // 0x28(0x10)
	int32_t NumChannels; // 0x38(0x04)
	int32_t SampleRate; // 0x3c(0x04)
	float NormalizationVolumeDb; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<float> IRData; // 0x48(0x10)
};

// Class Synthesis.SubmixEffectConvolutionReverbPreset
// Size: 0xb8 (Inherited: 0x40)
struct USubmixEffectConvolutionReverbPreset : USoundEffectSubmixPreset {
	struct FSubmixEffectConvolutionReverbSettings Settings; // 0x40(0x20)
	struct UAudioImpulseResponse* ImpulseResponse; // 0x60(0x08)
	enum class ESubmixEffectConvolutionReverbBlockSize BlockSize; // 0x68(0x01)
	bool bEnableHardwareAcceleration; // 0x69(0x01)
	char pad_6A[0x4e]; // 0x6a(0x4e)

	void SetSettings(struct FSubmixEffectConvolutionReverbSettings InSettings); // Function Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xdaab70
	void SetImpulseResponse(struct UAudioImpulseResponse* InImpulseResponse); // Function Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse // (Final|Native|Public|BlueprintCallable) // @ game+0xdaa210
};

// Class Synthesis.SubmixEffectDelayPreset
// Size: 0x90 (Inherited: 0x40)
struct USubmixEffectDelayPreset : USoundEffectSubmixPreset {
	char pad_40[0x34]; // 0x40(0x34)
	struct FSubmixEffectDelaySettings Settings; // 0x74(0x0c)
	struct FSubmixEffectDelaySettings DynamicSettings; // 0x80(0x0c)
	char pad_8C[0x4]; // 0x8c(0x04)

	void SetSettings(struct FSubmixEffectDelaySettings InSettings); // Function Synthesis.SubmixEffectDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xdb0310
	void SetInterpolationTime(float Time); // Function Synthesis.SubmixEffectDelayPreset.SetInterpolationTime // (Final|Native|Public|BlueprintCallable) // @ game+0xdaf850
	void SetDelay(float Length); // Function Synthesis.SubmixEffectDelayPreset.SetDelay // (Final|Native|Public|BlueprintCallable) // @ game+0xdaea20
	float GetMaxDelayInMilliseconds(); // Function Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds // (Final|Native|Public|BlueprintCallable) // @ game+0xdadbd0
};

// Class Synthesis.SubmixEffectFilterPreset
// Size: 0x80 (Inherited: 0x40)
struct USubmixEffectFilterPreset : USoundEffectSubmixPreset {
	char pad_40[0x34]; // 0x40(0x34)
	struct FSubmixEffectFilterSettings Settings; // 0x74(0x0c)

	void SetSettings(struct FSubmixEffectFilterSettings InSettings); // Function Synthesis.SubmixEffectFilterPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xdb03d0
	void SetFilterType(enum class ESubmixFilterType InType); // Function Synthesis.SubmixEffectFilterPreset.SetFilterType // (Final|Native|Public|BlueprintCallable) // @ game+0xdaf140
	void SetFilterQMod(float InQ); // Function Synthesis.SubmixEffectFilterPreset.SetFilterQMod // (Final|Native|Public|BlueprintCallable) // @ game+0xdaf0c0
	void SetFilterQ(float InQ); // Function Synthesis.SubmixEffectFilterPreset.SetFilterQ // (Final|Native|Public|BlueprintCallable) // @ game+0xdaf040
	void SetFilterCutoffFrequencyMod(float InFrequency); // Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod // (Final|Native|Public|BlueprintCallable) // @ game+0xdaeba0
	void SetFilterCutoffFrequency(float InFrequency); // Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0xdaeb20
	void SetFilterAlgorithm(enum class ESubmixFilterAlgorithm InAlgorithm); // Function Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm // (Final|Native|Public|BlueprintCallable) // @ game+0xdaeaa0
};

// Class Synthesis.SubmixEffectFlexiverbPreset
// Size: 0x88 (Inherited: 0x40)
struct USubmixEffectFlexiverbPreset : USoundEffectSubmixPreset {
	char pad_40[0x38]; // 0x40(0x38)
	struct FSubmixEffectFlexiverbSettings Settings; // 0x78(0x10)

	void SetSettings(struct FSubmixEffectFlexiverbSettings InSettings); // Function Synthesis.SubmixEffectFlexiverbPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xdb0480
};

// Class Synthesis.SubmixEffectTapDelayPreset
// Size: 0xb0 (Inherited: 0x40)
struct USubmixEffectTapDelayPreset : USoundEffectSubmixPreset {
	char pad_40[0x40]; // 0x40(0x40)
	struct FSubmixEffectTapDelaySettings Settings; // 0x80(0x18)
	char pad_98[0x18]; // 0x98(0x18)

	void SetTap(int32_t TapId, struct FTapDelayInfo TapInfo); // Function Synthesis.SubmixEffectTapDelayPreset.SetTap // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xdb0890
	void SetSettings(struct FSubmixEffectTapDelaySettings InSettings); // Function Synthesis.SubmixEffectTapDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xdb0540
	void SetInterpolationTime(float Time); // Function Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime // (Final|Native|Public|BlueprintCallable) // @ game+0xdaf8d0
	void RemoveTap(int32_t TapId); // Function Synthesis.SubmixEffectTapDelayPreset.RemoveTap // (Final|Native|Public|BlueprintCallable) // @ game+0xdae270
	void GetTapIds(struct TArray<int32_t> TapIds); // Function Synthesis.SubmixEffectTapDelayPreset.GetTapIds // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xdadd90
	void GetTap(int32_t TapId, struct FTapDelayInfo TapInfo); // Function Synthesis.SubmixEffectTapDelayPreset.GetTap // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xdadcb0
	float GetMaxDelayInMilliseconds(); // Function Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds // (Final|Native|Public|BlueprintCallable) // @ game+0xdadbf0
	void AddTap(int32_t TapId); // Function Synthesis.SubmixEffectTapDelayPreset.AddTap // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xdad9a0
};

// Class Synthesis.Synth2DSlider
// Size: 0x478 (Inherited: 0x108)
struct USynth2DSlider : UWidget {
	float ValueX; // 0x108(0x04)
	float ValueY; // 0x10c(0x04)
	struct FDelegate ValueXDelegate; // 0x110(0x10)
	struct FDelegate ValueYDelegate; // 0x120(0x10)
	struct FSynth2DSliderStyle WidgetStyle; // 0x130(0x2b8)
	struct FLinearColor SliderHandleColor; // 0x3e8(0x10)
	bool IndentHandle; // 0x3f8(0x01)
	bool Locked; // 0x3f9(0x01)
	char pad_3FA[0x2]; // 0x3fa(0x02)
	float StepSize; // 0x3fc(0x04)
	bool IsFocusable; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x408(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x418(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x428(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x438(0x10)
	struct FMulticastInlineDelegate OnValueChangedX; // 0x448(0x10)
	struct FMulticastInlineDelegate OnValueChangedY; // 0x458(0x10)
	char pad_468[0x10]; // 0x468(0x10)

	void SetValue(struct FVector2D InValue); // Function Synthesis.Synth2DSlider.SetValue // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xdb0970
	void SetStepSize(float InValue); // Function Synthesis.Synth2DSlider.SetStepSize // (Final|Native|Public|BlueprintCallable) // @ game+0xdb0700
	void SetSliderHandleColor(struct FLinearColor InValue); // Function Synthesis.Synth2DSlider.SetSliderHandleColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xdb0600
	void SetLocked(bool InValue); // Function Synthesis.Synth2DSlider.SetLocked // (Final|Native|Public|BlueprintCallable) // @ game+0xdaf950
	void SetIndentHandle(bool InValue); // Function Synthesis.Synth2DSlider.SetIndentHandle // (Final|Native|Public|BlueprintCallable) // @ game+0xdaf7c0
	struct FVector2D GetValue(); // Function Synthesis.Synth2DSlider.GetValue // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xdade40
};

// Class Synthesis.GranularSynth
// Size: 0xaa0 (Inherited: 0x6e0)
struct UGranularSynth : USynthComponent {
	struct USoundWave* GranulatedSoundWave; // 0x6e0(0x08)
	char pad_6E8[0x3b8]; // 0x6e8(0x3b8)

	void SetSustainGain(float SustainGain); // Function Synthesis.GranularSynth.SetSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0xdb0780
	void SetSoundWave(struct USoundWave* InSoundWave); // Function Synthesis.GranularSynth.SetSoundWave // (Final|Native|Public|BlueprintCallable) // @ game+0xdb0680
	void SetScrubMode(bool bScrubMode); // Function Synthesis.GranularSynth.SetScrubMode // (Final|Native|Public|BlueprintCallable) // @ game+0xdb0280
	void SetReleaseTimeMsec(float ReleaseTimeMsec); // Function Synthesis.GranularSynth.SetReleaseTimeMsec // (Final|Native|Public|BlueprintCallable) // @ game+0xdb0200
	void SetPlayheadTime(float InPositionSec, float LerpTimeSec, enum class EGranularSynthSeekType SeekType); // Function Synthesis.GranularSynth.SetPlayheadTime // (Final|Native|Public|BlueprintCallable) // @ game+0xdafb60
	void SetPlaybackSpeed(float InPlayheadRate); // Function Synthesis.GranularSynth.SetPlaybackSpeed // (Final|Native|Public|BlueprintCallable) // @ game+0xdafae0
	void SetGrainVolume(float BaseVolume, struct FVector2D VolumeRange); // Function Synthesis.GranularSynth.SetGrainVolume // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xdaf680
	void SetGrainsPerSecond(float InGrainsPerSecond); // Function Synthesis.GranularSynth.SetGrainsPerSecond // (Final|Native|Public|BlueprintCallable) // @ game+0xdaf740
	void SetGrainProbability(float InGrainProbability); // Function Synthesis.GranularSynth.SetGrainProbability // (Final|Native|Public|BlueprintCallable) // @ game+0xdaf600
	void SetGrainPitch(float BasePitch, struct FVector2D PitchRange); // Function Synthesis.GranularSynth.SetGrainPitch // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xdaf540
	void SetGrainPan(float BasePan, struct FVector2D PanRange); // Function Synthesis.GranularSynth.SetGrainPan // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xdaf480
	void SetGrainEnvelopeType(enum class EGranularSynthEnvelopeType EnvelopeType); // Function Synthesis.GranularSynth.SetGrainEnvelopeType // (Final|Native|Public|BlueprintCallable) // @ game+0xdaf400
	void SetGrainDuration(float BaseDurationMsec, struct FVector2D DurationRange); // Function Synthesis.GranularSynth.SetGrainDuration // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xdaf340
	void SetDecayTime(float DecayTimeMsec); // Function Synthesis.GranularSynth.SetDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0xdae710
	void SetAttackTime(float AttackTimeMsec); // Function Synthesis.GranularSynth.SetAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0xdae710
	void NoteOn(float Note, int32_t Velocity, float Duration); // Function Synthesis.GranularSynth.NoteOn // (Final|Native|Public|BlueprintCallable) // @ game+0xdae000
	void NoteOff(float Note, bool bKill); // Function Synthesis.GranularSynth.NoteOff // (Final|Native|Public|BlueprintCallable) // @ game+0xdadeb0
	bool IsLoaded(); // Function Synthesis.GranularSynth.IsLoaded // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xdade80
	float GetSampleDuration(); // Function Synthesis.GranularSynth.GetSampleDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xdadc80
	float GetCurrentPlayheadTime(); // Function Synthesis.GranularSynth.GetCurrentPlayheadTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xdada30
};

// Class Synthesis.MonoWaveTableSynthPreset
// Size: 0x170 (Inherited: 0x28)
struct UMonoWaveTableSynthPreset : UObject {
	struct FString PresetName; // 0x28(0x10)
	char bLockKeyframesToGridBool : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t LockKeyframesToGrid; // 0x3c(0x04)
	int32_t WaveTableResolution; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FRuntimeFloatCurve> WaveTable; // 0x48(0x10)
	char bNormalizeWaveTables : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x117]; // 0x59(0x117)
};

// Class Synthesis.SynthComponentMonoWaveTable
// Size: 0xe20 (Inherited: 0x6e0)
struct USynthComponentMonoWaveTable : USynthComponent {
	struct FMulticastInlineDelegate OnTableAltered; // 0x6e0(0x10)
	struct FMulticastInlineDelegate OnNumTablesChanged; // 0x6f0(0x10)
	struct UMonoWaveTableSynthPreset* CurrentPreset; // 0x700(0x08)
	char pad_708[0x718]; // 0x708(0x718)

	void SetWaveTablePosition(float InPosition); // Function Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition // (Final|Native|Public|BlueprintCallable) // @ game+0xdb09f0
	void SetSustainPedalState(bool InSustainPedalState); // Function Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState // (Final|Native|Public|BlueprintCallable) // @ game+0xdb0800
	void SetPosLfoType(enum class ESynthLFOType InLfoType); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoType // (Final|Native|Public|BlueprintCallable) // @ game+0xdafd60
	void SetPosLfoFrequency(float InLfoFrequency); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0xdafce0
	void SetPosLfoDepth(float InLfoDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth // (Final|Native|Public|BlueprintCallable) // @ game+0xdafc60
	void SetPositionEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0xdb0180
	void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0xdb0100
	void SetPositionEnvelopeInvert(bool bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert // (Final|Native|Public|BlueprintCallable) // @ game+0xdb0070
	void SetPositionEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth // (Final|Native|Public|BlueprintCallable) // @ game+0xdafff0
	void SetPositionEnvelopeDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0xdaff70
	void SetPositionEnvelopeBiasInvert(bool bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert // (Final|Native|Public|BlueprintCallable) // @ game+0xdafee0
	void SetPositionEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth // (Final|Native|Public|BlueprintCallable) // @ game+0xdafe60
	void SetPositionEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0xdafde0
	void SetLowPassFilterResonance(float InNewQ); // Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance // (Final|Native|Public|BlueprintCallable) // @ game+0xdafa60
	void SetLowPassFilterFrequency(float InNewFrequency); // Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0xdaf9e0
	void SetFrequencyWithMidiNote(float InMidiNote); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote // (Final|Native|Public|BlueprintCallable) // @ game+0xdaf2c0
	void SetFrequencyPitchBend(float FrequencyOffsetCents); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend // (Final|Native|Public|BlueprintCallable) // @ game+0xdaf240
	void SetFrequency(float FrequencyHz); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0xdaf1c0
	void SetFilterEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0xdaef40
	void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0xdaeec0
	void SetFilterEnvelopenDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0xdaefc0
	void SetFilterEnvelopeInvert(bool bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert // (Final|Native|Public|BlueprintCallable) // @ game+0xdaee30
	void SetFilterEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth // (Final|Native|Public|BlueprintCallable) // @ game+0xdaedb0
	void SetFilterEnvelopeBiasInvert(bool bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert // (Final|Native|Public|BlueprintCallable) // @ game+0xdaed20
	void SetFilterEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth // (Final|Native|Public|BlueprintCallable) // @ game+0xdaeca0
	void SetFilterEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0xdaec20
	bool SetCurveValue(int32_t TableIndex, int32_t KeyframeIndex, float NewValue); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveValue // (Final|Native|Public|BlueprintCallable) // @ game+0xdae920
	bool SetCurveTangent(int32_t TableIndex, float InNewTangent); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveTangent // (Final|Native|Public|BlueprintCallable) // @ game+0xdae850
	bool SetCurveInterpolationType(enum class CurveInterpolationType InterpolationType, int32_t TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType // (Final|Native|Public|BlueprintCallable) // @ game+0xdae790
	void SetAmpEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0xdae690
	void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0xdae610
	void SetAmpEnvelopeInvert(bool bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert // (Final|Native|Public|BlueprintCallable) // @ game+0xdae580
	void SetAmpEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth // (Final|Native|Public|BlueprintCallable) // @ game+0xdae500
	void SetAmpEnvelopeDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0xdae480
	void SetAmpEnvelopeBiasInvert(bool bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert // (Final|Native|Public|BlueprintCallable) // @ game+0xdae3f0
	void SetAmpEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth // (Final|Native|Public|BlueprintCallable) // @ game+0xdae370
	void SetAmpEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0xdae2f0
	void RefreshWaveTable(int32_t Index); // Function Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable // (Final|Native|Public|BlueprintCallable) // @ game+0xdae1f0
	void RefreshAllWaveTables(); // Function Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables // (Final|Native|Public|BlueprintCallable) // @ game+0xdae1d0
	void NoteOn(float InMidiNote, float InVelocity); // Function Synthesis.SynthComponentMonoWaveTable.NoteOn // (Final|Native|Public|BlueprintCallable) // @ game+0xdae110
	void NoteOff(float InMidiNote); // Function Synthesis.SynthComponentMonoWaveTable.NoteOff // (Final|Native|Public|BlueprintCallable) // @ game+0xdadf80
	int32_t GetNumTableEntries(); // Function Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries // (Final|Native|Public|BlueprintCallable) // @ game+0xdadc50
	int32_t GetMaxTableIndex(); // Function Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xdadc10
	struct TArray<float> GetKeyFrameValuesForTable(float TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xdadaf0
	float GetCurveTangent(int32_t TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.GetCurveTangent // (Final|Native|Public|BlueprintCallable) // @ game+0xdada60
};

// Class Synthesis.SynthSamplePlayer
// Size: 0x810 (Inherited: 0x6e0)
struct USynthSamplePlayer : USynthComponent {
	struct USoundWave* SoundWave; // 0x6e0(0x08)
	struct FMulticastInlineDelegate OnSampleLoaded; // 0x6e8(0x10)
	struct FMulticastInlineDelegate OnSamplePlaybackProgress; // 0x6f8(0x10)
	char pad_708[0x108]; // 0x708(0x108)

	void SetSoundWave(struct USoundWave* InSoundWave); // Function Synthesis.SynthSamplePlayer.SetSoundWave // (Final|Native|Public|BlueprintCallable) // @ game+0xdb1af0
	void SetScrubTimeWidth(float InScrubTimeWidthSec); // Function Synthesis.SynthSamplePlayer.SetScrubTimeWidth // (Final|Native|Public|BlueprintCallable) // @ game+0xdb1a70
	void SetScrubMode(bool bScrubMode); // Function Synthesis.SynthSamplePlayer.SetScrubMode // (Final|Native|Public|BlueprintCallable) // @ game+0xdb19e0
	void SetPitch(float InPitch, float TimeSec); // Function Synthesis.SynthSamplePlayer.SetPitch // (Final|Native|Public|BlueprintCallable) // @ game+0xdb1920
	void SeekToTime(float TimeSec, enum class ESamplePlayerSeekType SeekType, bool bWrap); // Function Synthesis.SynthSamplePlayer.SeekToTime // (Final|Native|Public|BlueprintCallable) // @ game+0xdb1780
	bool IsLoaded(); // Function Synthesis.SynthSamplePlayer.IsLoaded // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xdb1750
	float GetSampleDuration(); // Function Synthesis.SynthSamplePlayer.GetSampleDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xdb16f0
	float GetCurrentPlaybackProgressTime(); // Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xdb16c0
	float GetCurrentPlaybackProgressPercent(); // Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xdb1690
};

// Class Synthesis.SynthKnob
// Size: 0x400 (Inherited: 0x108)
struct USynthKnob : UWidget {
	float Value; // 0x108(0x04)
	float StepSize; // 0x10c(0x04)
	float MouseSpeed; // 0x110(0x04)
	float MouseFineTuneSpeed; // 0x114(0x04)
	char ShowTooltipInfo : 1; // 0x118(0x01)
	char pad_118_1 : 7; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct FText ParameterName; // 0x120(0x18)
	struct FText ParameterUnits; // 0x138(0x18)
	struct FDelegate ValueDelegate; // 0x150(0x10)
	struct FSynthKnobStyle WidgetStyle; // 0x160(0x238)
	bool Locked; // 0x398(0x01)
	bool IsFocusable; // 0x399(0x01)
	char pad_39A[0x6]; // 0x39a(0x06)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x3a0(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x3b0(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x3c0(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x3d0(0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x3e0(0x10)
	char pad_3F0[0x10]; // 0x3f0(0x10)

	void SetValue(float InValue); // Function Synthesis.SynthKnob.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0xdb1bf0
	void SetStepSize(float InValue); // Function Synthesis.SynthKnob.SetStepSize // (Final|Native|Public|BlueprintCallable) // @ game+0xdb1b70
	void SetLocked(bool InValue); // Function Synthesis.SynthKnob.SetLocked // (Final|Native|Public|BlueprintCallable) // @ game+0xdb1890
	float GetValue(); // Function Synthesis.SynthKnob.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xdb1720
};

