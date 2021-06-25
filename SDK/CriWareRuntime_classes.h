// Class CriWareRuntime.AtomAreaSoundVolume
// Size: 0x2a8 (Inherited: 0x268)
struct AAtomAreaSoundVolume : AVolume {
	float Priority; // 0x268(0x04)
	char bEnabled : 1; // 0x26c(0x01)
	char pad_26C_1 : 7; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	struct FName CollisionProfile; // 0x270(0x08)
	float SoundStopDistance; // 0x278(0x04)
	bool bIsEnableAtomCompoentPack; // 0x27c(0x01)
	char pad_27D[0x2]; // 0x27d(0x02)
	bool bIsAutoPlaySound; // 0x27f(0x01)
	bool bIsDeterminationFromVolumeBoundaryPlane; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct TArray<struct UAtomComponent*> AtomComponents; // 0x288(0x10)
	struct TArray<struct USoundAtomCue*> Sounds; // 0x298(0x10)

	void SetPriority(float NewPriority); // Function CriWareRuntime.AtomAreaSoundVolume.SetPriority // (Final|Native|Public|BlueprintCallable) // @ game+0xad6060
	void SetEnabled(bool bNewEnabled); // Function CriWareRuntime.AtomAreaSoundVolume.SetEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0xad5b90
	void OnRep_bEnabled(); // Function CriWareRuntime.AtomAreaSoundVolume.OnRep_bEnabled // (Final|Native|Private) // @ game+0xad4ac0
	float GetPriority(); // Function CriWareRuntime.AtomAreaSoundVolume.GetPriority // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xad4720
	bool GetEnabled(); // Function CriWareRuntime.AtomAreaSoundVolume.GetEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xad4530
	void DestroySounds(); // Function CriWareRuntime.AtomAreaSoundVolume.DestroySounds // (Final|Native|Public|BlueprintCallable) // @ game+0xad33f0
	struct TArray<struct UAtomComponent*> CreateSounds(struct FVector listener_location); // Function CriWareRuntime.AtomAreaSoundVolume.CreateSounds // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xad32a0
};

// Class CriWareRuntime.AtomAsrRack
// Size: 0x40 (Inherited: 0x28)
struct UAtomAsrRack : UObject {
	int32_t RackId; // 0x28(0x04)
	char pad_2C[0x14]; // 0x2c(0x14)

	void SetEffectBypass(struct FString BusName, struct FString EffectName, bool Bypasses); // Function CriWareRuntime.AtomAsrRack.SetEffectBypass // (Final|Native|Public|BlueprintCallable) // @ game+0xad59e0
	void SetBusVolumeByName(struct FString BusName, float Volume); // Function CriWareRuntime.AtomAsrRack.SetBusVolumeByName // (Final|Native|Public|BlueprintCallable) // @ game+0xad5840
	void SetBusSendLevelByName(struct FString SourceBusName, struct FString DestBusName, float Level); // Function CriWareRuntime.AtomAsrRack.SetBusSendLevelByName // (Final|Native|Public|BlueprintCallable) // @ game+0xad5370
	struct UAtomAsrRack* GetDefaultAsrRack(); // Function CriWareRuntime.AtomAsrRack.GetDefaultAsrRack // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad44e0
	struct FString GetCurrentAppliedSnapshot(int32_t AsrRackID); // Function CriWareRuntime.AtomAsrRack.GetCurrentAppliedSnapshot // (Final|Native|Public|BlueprintCallable) // @ game+0xad4280
	bool GetBusAnalyzerInfo(struct FString DspBusName, int32_t num_channels, struct TArray<float> rms_levels, struct TArray<float> peak_levels, struct TArray<float> peak_hold_levels); // Function CriWareRuntime.AtomAsrRack.GetBusAnalyzerInfo // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xad3cd0
	struct UAtomAsrRack* GetAsrRack(int32_t AsrRackID); // Function CriWareRuntime.AtomAsrRack.GetAsrRack // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad3700
	void DetachDspBusSetting(); // Function CriWareRuntime.AtomAsrRack.DetachDspBusSetting // (Final|Native|Public|BlueprintCallable) // @ game+0xad3410
	void ConnectToPadSpeaker(int32_t UserIndex); // Function CriWareRuntime.AtomAsrRack.ConnectToPadSpeaker // (Final|Native|Public|BlueprintCallable) // @ game+0xad3220
	void AttachDspBusSetting(struct FString SettingName); // Function CriWareRuntime.AtomAsrRack.AttachDspBusSetting // (Final|Native|Public|BlueprintCallable) // @ game+0xad3070
	void ApplyDspBusSnapshot(struct FString SnapshotName, int32_t Milliseconds); // Function CriWareRuntime.AtomAsrRack.ApplyDspBusSnapshot // (Final|Native|Public|BlueprintCallable) // @ game+0xad2ed0
};

// Class CriWareRuntime.AtomEntranceVolume
// Size: 0x288 (Inherited: 0x268)
struct AAtomEntranceVolume : AVolume {
	float Priority; // 0x268(0x04)
	char bEnabled : 1; // 0x26c(0x01)
	char pad_26C_1 : 7; // 0x26c(0x01)
	char pad_26D[0xb]; // 0x26d(0x0b)
	struct TArray<struct TWeakObjectPtr<struct AAtomAudioVolume>> NeighbourhoodAudioVolumeArray; // 0x278(0x10)

	void SetPriority(float NewPriority); // Function CriWareRuntime.AtomEntranceVolume.SetPriority // (Final|Native|Public|BlueprintCallable) // @ game+0xad6160
	void SetEnabled(bool bNewEnabled); // Function CriWareRuntime.AtomEntranceVolume.SetEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0xad5cb0
	void OnRep_bEnabled(); // Function CriWareRuntime.AtomEntranceVolume.OnRep_bEnabled // (Final|Native|Private) // @ game+0xad4ac0
	float GetPriority(); // Function CriWareRuntime.AtomEntranceVolume.GetPriority // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xad4720
	bool GetEnabled(); // Function CriWareRuntime.AtomEntranceVolume.GetEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xad4530
};

// Class CriWareRuntime.AtomAudioVolume
// Size: 0x2f0 (Inherited: 0x268)
struct AAtomAudioVolume : AVolume {
	float Priority; // 0x268(0x04)
	char bEnabled : 1; // 0x26c(0x01)
	char pad_26C_1 : 7; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	struct FName CollisionProfile; // 0x270(0x08)
	bool bAutoSettingEntranceVolume; // 0x278(0x01)
	bool bAutoSettingNeighbourAudioVolumeToEntranceVolume; // 0x279(0x01)
	char pad_27A[0x6]; // 0x27a(0x06)
	struct TArray<struct FName> AudioVolumeTags; // 0x280(0x10)
	bool bOverrideAtomAudioVolume; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct UAtomAudioVolumeSettings* AtomAudioVolumeSettings; // 0x298(0x08)
	struct FAtomAudioVolumeParameters AtomAudioVolumeSettingsOverrides; // 0x2a0(0x40)
	struct TArray<struct AAtomEntranceVolume*> EntranceVolumes; // 0x2e0(0x10)

	void SetReverbSettings(struct FSnapshotSwitchSettings NewReverbSettings); // Function CriWareRuntime.AtomAudioVolume.SetReverbSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xad61e0
	void SetPriority(float NewPriority); // Function CriWareRuntime.AtomAudioVolume.SetPriority // (Final|Native|Public|BlueprintCallable) // @ game+0xad60e0
	void SetEnabled(bool bNewEnabled); // Function CriWareRuntime.AtomAudioVolume.SetEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0xad5c20
	void OnRep_bEnabled(); // Function CriWareRuntime.AtomAudioVolume.OnRep_bEnabled // (Final|Native|Private) // @ game+0xad4ac0
	float GetPriority(); // Function CriWareRuntime.AtomAudioVolume.GetPriority // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xad4720
	bool GetEnabled(); // Function CriWareRuntime.AtomAudioVolume.GetEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xad4530
	void EnableAllAudioVolume(bool bEnable); // Function CriWareRuntime.AtomAudioVolume.EnableAllAudioVolume // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad3430
};

// Class CriWareRuntime.AtomAudioVolumeSettings
// Size: 0x68 (Inherited: 0x28)
struct UAtomAudioVolumeSettings : UObject {
	struct FAtomAudioVolumeParameters AtomAudioVolumeParameters; // 0x28(0x40)
};

// Class CriWareRuntime.AtomCategory
// Size: 0x28 (Inherited: 0x28)
struct UAtomCategory : UBlueprintFunctionLibrary {

	void StopByName(struct FString CategoryName); // Function CriWareRuntime.AtomCategory.StopByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad66d0
	void SetVolumeByName(struct FString CategoryName, float Volume); // Function CriWareRuntime.AtomCategory.SetVolumeByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad6590
	void SetAisacControlByName(struct FString CategoryName, struct FString AisacName, float Value); // Function CriWareRuntime.AtomCategory.SetAisacControlByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad4fa0
	bool ResetAllAisacControlByName(struct FString CategoryName); // Function CriWareRuntime.AtomCategory.ResetAllAisacControlByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad4d90
	bool ResetAllAisacControlById(int32_t CategoryId); // Function CriWareRuntime.AtomCategory.ResetAllAisacControlById // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad4d10
	void PauseByName(struct FString CategoryName, bool bPause); // Function CriWareRuntime.AtomCategory.PauseByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad4b70
	bool IsPausedByName(struct FString CategoryName); // Function CriWareRuntime.AtomCategory.IsPausedByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad49b0
	float GetVolumeByName(struct FString CategoryName); // Function CriWareRuntime.AtomCategory.GetVolumeByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad4840
	int32_t GetNumAttachedAisacsByName(struct FString CategoryName); // Function CriWareRuntime.AtomCategory.GetNumAttachedAisacsByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad4610
	int32_t GetNumAttachedAisacsById(int32_t CategoryId); // Function CriWareRuntime.AtomCategory.GetNumAttachedAisacsById // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad4590
	float GetCurrentAisacControlValueByName(struct FString CategoryName, struct FString AisacControlName); // Function CriWareRuntime.AtomCategory.GetCurrentAisacControlValueByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad4110
	float GetCurrentAisacControlValueById(int32_t CategoryId, int32_t AisacControlID); // Function CriWareRuntime.AtomCategory.GetCurrentAisacControlValueById // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad4050
	void GetAttachedAisacInfoByName(struct FString CategoryName, int32_t AisacAttachedIndex, bool IsSuccess, struct FAtomAisacInfo AisacInfo); // Function CriWareRuntime.AtomCategory.GetAttachedAisacInfoByName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xad39a0
	void GetAttachedAisacInfoById(int32_t CategoryId, int32_t AisacAttachedIndex, bool IsSuccess, struct FAtomAisacInfo AisacInfo); // Function CriWareRuntime.AtomCategory.GetAttachedAisacInfoById // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xad3820
};

// Class CriWareRuntime.AtomComponent
// Size: 0x1210 (Inherited: 0x430)
struct UAtomComponent : USphereComponent {
	struct USoundAtomCue* Sound; // 0x428(0x08)
	char bAutoDestroy : 1; // 0x430(0x01)
	char bPersistAcrossLevelTransition : 1; // 0x430(0x01)
	char pad_438_2 : 1; // 0x438(0x01)
	char bStopWhenOwnerDestroyed : 1; // 0x430(0x01)
	char bIsUISound : 1; // 0x430(0x01)
	float DefaultVolume; // 0x434(0x04)
	char bEnableMultipleSoundPlayback : 1; // 0x438(0x01)
	char bUsePlaylist : 1; // 0x438(0x01)
	bool bIsMovable; // 0x439(0x01)
	bool bCanStraddleAudioVolume; // 0x43a(0x01)
	bool bUseAudioVolume; // 0x43b(0x01)
	bool bUseAreaSoundVolume; // 0x43c(0x01)
	struct UAtomSoundObject* SoundObject; // 0x440(0x08)
	int32_t DefaultBlockIndex; // 0x448(0x04)
	char pad_44C_7 : 1; // 0x44c(0x01)
	char pad_44D[0x3]; // 0x44d(0x03)
	struct TArray<struct FAtomAisacControlParam> DefaultAisacControl; // 0x450(0x10)
	struct TArray<struct FAtomSelectorParam> DefaultSelectorLabel; // 0x460(0x10)
	enum class EAtomLoopSetting LoopSetting; // 0x470(0x01)
	char bOnly2DSound : 1; // 0x471(0x01)
	char pad_471_1 : 7; // 0x471(0x01)
	char pad_472[0x6]; // 0x472(0x06)
	struct FMulticastInlineDelegate OnStatusChanged; // 0x478(0x10)
	struct FMulticastInlineDelegate OnAudioVolumeChanged; // 0x488(0x10)
	struct FMulticastInlineDelegate OnAudioFinished; // 0x498(0x10)
	struct UWorld* PlayWorld; // 0x4a8(0x08)
	struct UGameViewportClient* GameViewport; // 0x4b0(0x08)
	char pad_4B8[0x18]; // 0x4b8(0x18)
	struct UAtomSoundObject* DefaultSoundObject; // 0x4d0(0x08)
	char bOverrideAttenuation : 1; // 0x4d8(0x01)
	char pad_4D8_1 : 7; // 0x4d8(0x01)
	char pad_4D9[0x7]; // 0x4d9(0x07)
	struct USoundAttenuation* AttenuationSettings; // 0x4e0(0x08)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x4e8(0x3a0)
	char pad_888[0x950]; // 0x888(0x950)
	struct USoundAtomCueSheet* CueSheet; // 0x11d8(0x08)
	char pad_11E0[0x10]; // 0x11e0(0x10)
	struct UAtomSoundObject* AppliedSoundObject; // 0x11f0(0x08)
	char pad_11F8[0x18]; // 0x11f8(0x18)

	void StopWithoutReleaseTime(); // Function CriWareRuntime.AtomComponent.StopWithoutReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0xad67a0
	void Stop(); // Function CriWareRuntime.AtomComponent.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0xad66b0
	void SetVolume(float Volume); // Function CriWareRuntime.AtomComponent.SetVolume // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xad6510
	void SetSoundObject(struct UAtomSoundObject* InSoundObject); // Function CriWareRuntime.AtomComponent.SetSoundObject // (Final|Native|Public|BlueprintCallable) // @ game+0xad6490
	void SetSound(struct USoundAtomCue* NewSound); // Function CriWareRuntime.AtomComponent.SetSound // (Final|Native|Public|BlueprintCallable) // @ game+0xad6410
	void SetSelectorLabel(struct FString Selector, struct FString Label); // Function CriWareRuntime.AtomComponent.SetSelectorLabel // (Final|Native|Public|BlueprintCallable) // @ game+0xad62a0
	void SetPitchMultiplier(float NewPitchMultiplier); // Function CriWareRuntime.AtomComponent.SetPitchMultiplier // (Final|Native|Public|BlueprintCallable) // @ game+0xad5fe0
	void SetPitch(float Pitch); // Function CriWareRuntime.AtomComponent.SetPitch // (Final|Native|Public|BlueprintCallable) // @ game+0xad5f60
	void SetPassFilter(float Low, float High); // Function CriWareRuntime.AtomComponent.SetPassFilter // (Final|Native|Public|BlueprintCallable) // @ game+0xad5ea0
	void SetNextBlockName(struct FString BlockName); // Function CriWareRuntime.AtomComponent.SetNextBlockName // (Final|Native|Public|BlueprintCallable) // @ game+0xad5dc0
	void SetNextBlockIndex(int32_t BlockIndex); // Function CriWareRuntime.AtomComponent.SetNextBlockIndex // (Final|Native|Public|BlueprintCallable) // @ game+0xad5d40
	void SetDefaultAttenuationEnable(bool bEnable); // Function CriWareRuntime.AtomComponent.SetDefaultAttenuationEnable // (Final|Native|Static|Public) // @ game+0xad5970
	void SetBusSendLevelOffsetByName(struct FString BusName, float LevelOffset); // Function CriWareRuntime.AtomComponent.SetBusSendLevelOffsetByName // (Final|Native|Public|BlueprintCallable) // @ game+0xad5710
	void SetBusSendLevelOffset(int32_t BusId, float LevelOffset); // Function CriWareRuntime.AtomComponent.SetBusSendLevelOffset // (Final|Native|Public|BlueprintCallable) // @ game+0xad5640
	void SetBusSendLevelByName(struct FString BusName, float Level); // Function CriWareRuntime.AtomComponent.SetBusSendLevelByName // (Final|Native|Public|BlueprintCallable) // @ game+0xad5510
	void SetBusSendLevel(int32_t BusId, float Level); // Function CriWareRuntime.AtomComponent.SetBusSendLevel // (Final|Native|Public|BlueprintCallable) // @ game+0xad52a0
	void SetAsrRackIdArray(struct TArray<int32_t> AsrRackIDs); // Function CriWareRuntime.AtomComponent.SetAsrRackIdArray // (Final|Native|Public|BlueprintCallable) // @ game+0xad51c0
	void SetAsrRackID(int32_t asr_rack_id); // Function CriWareRuntime.AtomComponent.SetAsrRackID // (Final|Native|Public|BlueprintCallable) // @ game+0xad5140
	void SetAisacByName(struct FString ControlName, float ControlValue); // Function CriWareRuntime.AtomComponent.SetAisacByName // (Final|Native|Public|BlueprintCallable) // @ game+0xad4e70
	void Play(float StartTime); // Function CriWareRuntime.AtomComponent.Play // (Final|Native|Public|BlueprintCallable) // @ game+0xad4c90
	void Pause(bool bPause); // Function CriWareRuntime.AtomComponent.Pause // (Final|Native|Public|BlueprintCallable) // @ game+0xad4ae0
	void OnStatusChanged__DelegateSignature(enum class EAtomComponentStatus Status, struct UAtomComponent* AtomComponent); // DelegateFunction CriWareRuntime.AtomComponent.OnStatusChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1685580
	void OnAudioVolumeChanged__DelegateSignature(enum class EAtomAudioVolumeType Type, struct AAtomAudioVolume* AtomAudioVolume, bool bIsCalledFromTick); // DelegateFunction CriWareRuntime.AtomComponent.OnAudioVolumeChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1685580
	void OnAudioFinished__DelegateSignature(); // DelegateFunction CriWareRuntime.AtomComponent.OnAudioFinished__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1685580
	bool IsReducingTickFrequency(); // Function CriWareRuntime.AtomComponent.IsReducingTickFrequency // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xad4920
	bool IsPlaying(); // Function CriWareRuntime.AtomComponent.IsPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xad4a90
	bool IsPaused(); // Function CriWareRuntime.AtomComponent.IsPaused // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xad4980
	bool IsLoop(); // Function CriWareRuntime.AtomComponent.IsLoop // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xad4950
	bool HasBeenEconomicTick(); // Function CriWareRuntime.AtomComponent.HasBeenEconomicTick // (Final|Native|Public|Const) // @ game+0xad4920
	float GetVolume(); // Function CriWareRuntime.AtomComponent.GetVolume // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xad4800
	struct FVector GetVelocity(); // Function CriWareRuntime.AtomComponent.GetVelocity // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xad47d0
	float GetTime(); // Function CriWareRuntime.AtomComponent.GetTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xad47a0
	enum class EAtomComponentStatus GetStatus(); // Function CriWareRuntime.AtomComponent.GetStatus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xad4770
	float GetSequencePosition(); // Function CriWareRuntime.AtomComponent.GetSequencePosition // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xad4740
	int32_t GetNumQueuedSounds(); // Function CriWareRuntime.AtomComponent.GetNumQueuedSounds // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xad46f0
	float GetMaxAttenuationDistance(); // Function CriWareRuntime.AtomComponent.GetMaxAttenuationDistance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xad4560
	float GetEconomicTickFrequency(); // Function CriWareRuntime.AtomComponent.GetEconomicTickFrequency // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xad4450
	float GetEconomicTickDistanceMargin(); // Function CriWareRuntime.AtomComponent.GetEconomicTickDistanceMargin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xad4480
	float GetEconomicTickDistance(); // Function CriWareRuntime.AtomComponent.GetEconomicTickDistance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xad4420
	bool GetDefaultAttenuationEnable(); // Function CriWareRuntime.AtomComponent.GetDefaultAttenuationEnable // (Final|Native|Static|Public) // @ game+0xad4510
	float GetCurrentMaxAttenuationDistance(); // Function CriWareRuntime.AtomComponent.GetCurrentMaxAttenuationDistance // (Final|Native|Public|Const) // @ game+0xad44b0
	float GetCurrentEconomicTickMarginDistance(); // Function CriWareRuntime.AtomComponent.GetCurrentEconomicTickMarginDistance // (Final|Native|Public|Const) // @ game+0xad4480
	float GetCurrentEconomicTickFrequency(); // Function CriWareRuntime.AtomComponent.GetCurrentEconomicTickFrequency // (Final|Native|Public|Const) // @ game+0xad4450
	float GetCurrentEconomicTickBoundaryDistance(); // Function CriWareRuntime.AtomComponent.GetCurrentEconomicTickBoundaryDistance // (Final|Native|Public|Const) // @ game+0xad4420
	float GetCurrentCullingMarginDistance(); // Function CriWareRuntime.AtomComponent.GetCurrentCullingMarginDistance // (Final|Native|Public|Const) // @ game+0xad4020
	float GetCurrentCullingBoundaryDistance(); // Function CriWareRuntime.AtomComponent.GetCurrentCullingBoundaryDistance // (Final|Native|Public|Const) // @ game+0xad3ff0
	struct AAtomAudioVolume* GetCurrentBelongingAudioVolume(enum class EAtomAudioVolumeType Type, bool IsNeighbor); // Function CriWareRuntime.AtomComponent.GetCurrentBelongingAudioVolume // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xad4350
	float GetCullDistanceMargin(); // Function CriWareRuntime.AtomComponent.GetCullDistanceMargin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xad4020
	float GetCullDistance(); // Function CriWareRuntime.AtomComponent.GetCullDistance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xad3ff0
	struct FString GetCueName(); // Function CriWareRuntime.AtomComponent.GetCueName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xad3f30
	struct TMap<struct FString, float> GetAudioVolumeValueMap(enum class EAtomAudioVolumeType Type); // Function CriWareRuntime.AtomComponent.GetAudioVolumeValueMap // (Final|Native|Public|BlueprintCallable) // @ game+0xad3b80
	int32_t GetAtomComponentID(); // Function CriWareRuntime.AtomComponent.GetAtomComponentID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xad3800
	struct UAtomComponent* GetAtomComponentFromID(int32_t TargetID); // Function CriWareRuntime.AtomComponent.GetAtomComponentFromID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad3780
	void FadeOut(float FadeOutDuration, float FadeVolumeLevel); // Function CriWareRuntime.AtomComponent.FadeOut // (Final|Native|Public|BlueprintCallable) // @ game+0xad3640
	void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime); // Function CriWareRuntime.AtomComponent.FadeIn // (Final|Native|Public|BlueprintCallable) // @ game+0xad3530
	void EnqueueSound(struct USoundAtomCue* NewSound); // Function CriWareRuntime.AtomComponent.EnqueueSound // (Final|Native|Public|BlueprintCallable) // @ game+0xad34b0
	void DestroyComponentByID(int32_t TargetID); // Function CriWareRuntime.AtomComponent.DestroyComponentByID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad3380
	bool BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings OutAttenuationSettings); // Function CriWareRuntime.AtomComponent.BP_GetAttenuationSettingsToApply // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xad3150
	void AttachAreaSoundVolume(struct AAtomAreaSoundVolume* sound_shape_volume); // Function CriWareRuntime.AtomComponent.AttachAreaSoundVolume // (Final|Native|Public|BlueprintCallable) // @ game+0xad2ff0
	void AdjustAttenuation(struct FSoundAttenuationSettings InAttenuationSettings); // Function CriWareRuntime.AtomComponent.AdjustAttenuation // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xad2e00
};

// Class CriWareRuntime.AtomComponentPool
// Size: 0x68 (Inherited: 0x28)
struct UAtomComponentPool : UObject {
	struct TArray<struct UAtomComponent*> Pool; // 0x28(0x10)
	char pad_38[0x30]; // 0x38(0x30)
};

// Class CriWareRuntime.AtomCueSheetLoaderComponent
// Size: 0x2a0 (Inherited: 0x200)
struct UAtomCueSheetLoaderComponent : USceneComponent {
	struct FSoftObjectPath CueSheetReference; // 0x200(0x18)
	struct UCriFsBinderComponent* BinderComponent; // 0x218(0x08)
	struct FMulticastInlineDelegate OnLoadCompleted; // 0x220(0x10)
	struct FMulticastInlineDelegate OnLoadError; // 0x230(0x10)
	char pad_240[0x30]; // 0x240(0x30)
	struct USoundAtomCueSheet* CueSheet; // 0x270(0x08)
	char pad_278[0x28]; // 0x278(0x28)

	void OnLoadError__DelegateSignature(); // DelegateFunction CriWareRuntime.AtomCueSheetLoaderComponent.OnLoadError__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1685580
	void OnLoadCompleted__DelegateSignature(); // DelegateFunction CriWareRuntime.AtomCueSheetLoaderComponent.OnLoadCompleted__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1685580
	void OnAtomCueSheetLoaded__DelegateSignature(struct USoundAtomCueSheet* Loaded); // DelegateFunction CriWareRuntime.AtomCueSheetLoaderComponent.OnAtomCueSheetLoaded__DelegateSignature // (Public|Delegate) // @ game+0x1685580
	void LoadAtomCueSheet(struct UObject* WorldContextObject, struct TSoftObjectPtr<USoundAtomCueSheet> Asset, struct FDelegate OnLoaded, struct FLatentActionInfo LatentInfo); // Function CriWareRuntime.AtomCueSheetLoaderComponent.LoadAtomCueSheet // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xadb200
	void Load(); // Function CriWareRuntime.AtomCueSheetLoaderComponent.Load // (Final|Native|Public|BlueprintCallable) // @ game+0xadb160
	enum class EAtomCueSheetLoaderComponentStatus GetStatus(); // Function CriWareRuntime.AtomCueSheetLoaderComponent.GetStatus // (Final|Native|Public|BlueprintCallable) // @ game+0xadb140
	struct USoundAtomCueSheet* GetAtomCueSheet(); // Function CriWareRuntime.AtomCueSheetLoaderComponent.GetAtomCueSheet // (Final|Native|Public|BlueprintCallable) // @ game+0xadad90
};

// Class CriWareRuntime.AtomDeviceWatcher
// Size: 0x50 (Inherited: 0x28)
struct UAtomDeviceWatcher : UObject {
	struct FMulticastInlineDelegate OnDeviceUpdated; // 0x28(0x10)
	char pad_38[0x18]; // 0x38(0x18)

	void OnDeviceUpdated__DelegateSignature(); // DelegateFunction CriWareRuntime.AtomDeviceWatcher.OnDeviceUpdated__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1685580
	struct FString GetDeviceName(); // Function CriWareRuntime.AtomDeviceWatcher.GetDeviceName // (Final|Native|Public|BlueprintCallable) // @ game+0xadaf40
	int32_t GetDeviceChannelCount(); // Function CriWareRuntime.AtomDeviceWatcher.GetDeviceChannelCount // (Final|Native|Public|BlueprintCallable) // @ game+0xadaf10
};

// Class CriWareRuntime.AtomDisposer
// Size: 0x240 (Inherited: 0x230)
struct AAtomDisposer : AActor {
	char pad_230[0x10]; // 0x230(0x10)
};

// Class CriWareRuntime.AtomListenerFocusPoint
// Size: 0x210 (Inherited: 0x200)
struct UAtomListenerFocusPoint : USceneComponent {
	float DistanceFocusLevel; // 0x200(0x04)
	float DirectionFocusLevel; // 0x204(0x04)
	char pad_208[0x8]; // 0x208(0x08)
};

// Class CriWareRuntime.AtomParameterComponent
// Size: 0xc8 (Inherited: 0xc0)
struct UAtomParameterComponent : UActorComponent {
	struct UAtomSoundObject* SoundObject; // 0xc0(0x08)
};

// Class CriWareRuntime.AtomProfileData
// Size: 0x28 (Inherited: 0x28)
struct UAtomProfileData : UBlueprintFunctionLibrary {

	struct TArray<struct FAtomProfileItem> CriWareAdx2ProfileDataUpdate(struct UObject* WorldContextObject); // Function CriWareRuntime.AtomProfileData.CriWareAdx2ProfileDataUpdate // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xadac10
	void CriWareAdx2ProfileDataSort(struct TArray<struct FAtomProfileItem> original_item, enum class EAtomProfileSortType sort_type, enum class EAtomSortOrderType order_type, struct TArray<struct FAtomProfileItem> sorted_item); // Function CriWareRuntime.AtomProfileData.CriWareAdx2ProfileDataSort // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xada9f0
};

// Class CriWareRuntime.AtomSound
// Size: 0x238 (Inherited: 0x230)
struct AAtomSound : AActor {
	struct UAtomComponent* AtomComponent; // 0x230(0x08)
};

// Class CriWareRuntime.AtomSoundData
// Size: 0x240 (Inherited: 0x230)
struct AAtomSoundData : AActor {
	struct USoundAtomCueSheet* CueSheet; // 0x230(0x08)
	char pad_238[0x8]; // 0x238(0x08)
};

// Class CriWareRuntime.AtomSoundObject
// Size: 0x48 (Inherited: 0x30)
struct UAtomSoundObject : UDataAsset {
	bool EnableVoiceLimitScope; // 0x30(0x01)
	bool EnableCategoryCueLimitScope; // 0x31(0x01)
	char pad_32[0x16]; // 0x32(0x16)
};

// Class CriWareRuntime.AtomSpectrumAnalyzer
// Size: 0x28 (Inherited: 0x28)
struct UAtomSpectrumAnalyzer : UBlueprintFunctionLibrary {

	void GetLevelsDB(float display_range, struct TArray<float> spectra); // Function CriWareRuntime.AtomSpectrumAnalyzer.GetLevelsDB // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xadb060
	void GetLevels(struct TArray<float> spectra); // Function CriWareRuntime.AtomSpectrumAnalyzer.GetLevels // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xadafc0
	void CreateDspSpectra(struct UAtomAsrRack* asr_rack, struct FString bus_name, int32_t num_bands); // Function CriWareRuntime.AtomSpectrumAnalyzer.CreateDspSpectra // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xada7e0
};

// Class CriWareRuntime.AtomStatics
// Size: 0x28 (Inherited: 0x28)
struct UAtomStatics : UBlueprintFunctionLibrary {

	void UpdateDistanceFactorForAllSounds(float ArgDistanceFactor); // Function CriWareRuntime.AtomStatics.UpdateDistanceFactorForAllSounds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xadd2f0
	void StopAllSoundsForKeyFromAtomComponentIds(struct UObject* AtomPlayGateRef, struct UObject* SkeltalMeshComponentRef); // Function CriWareRuntime.AtomStatics.StopAllSoundsForKeyFromAtomComponentIds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xadd240
	void StopAllSounds(); // Function CriWareRuntime.AtomStatics.StopAllSounds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xadd220
	struct UAtomComponent* SpawnSoundAttachedAtComponent(struct UObject* ComponentClass, struct USoundAtomCue* Sound, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, enum class EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, struct USoundAttenuation* AttenuationSettings, struct USoundConcurrency* ConcurrencySettings); // Function CriWareRuntime.AtomStatics.SpawnSoundAttachedAtComponent // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xadce90
	struct UAtomComponent* SpawnSoundAttached(struct USoundAtomCue* Sound, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, enum class EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, struct USoundAttenuation* AttenuationSettings, struct USoundConcurrency* ConcurrencySettings, bool bAutoDestroy); // Function CriWareRuntime.AtomStatics.SpawnSoundAttached // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xadcb00
	struct UAtomComponent* SpawnSoundAtLocationAtComponent(struct UObject* WorldContextObject, struct UObject* ComponentClass, struct USoundAtomCue* Sound, struct FVector Location, struct FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, struct USoundAttenuation* AttenuationSettings, struct USoundConcurrency* ConcurrencySettings); // Function CriWareRuntime.AtomStatics.SpawnSoundAtLocationAtComponent // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xadc830
	struct UAtomComponent* SpawnSoundAtLocation(struct UObject* WorldContextObject, struct USoundAtomCue* Sound, struct FVector Location, struct FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, struct USoundAttenuation* AttenuationSettings, struct USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool bAutoPlay); // Function CriWareRuntime.AtomStatics.SpawnSoundAtLocation // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xadc520
	struct UAtomComponent* SpawnSound2D(struct UObject* WorldContextObject, struct USoundAtomCue* Sound, float PitchMultiplier, float StartTime, bool bPersistAcrossLevelTransition, bool bAutoDestroy); // Function CriWareRuntime.AtomStatics.SpawnSound2D // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0xadc370
	void SetAtomGameVariable(struct FString GameVariableName, float Value); // Function CriWareRuntime.AtomStatics.SetAtomGameVariable // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xadc1e0
	struct UAtomComponent* PlaySoundForAnimNotify(struct USoundAtomCue* Sound, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, struct USoundAttenuation* AttenuationSettings, bool bFollow); // Function CriWareRuntime.AtomStatics.PlaySoundForAnimNotify // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xadbf20
	struct UAtomComponent* PlaySoundAttachedAtComponent(struct UObject* ComponentClass, struct USoundAtomCue* Sound, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, enum class EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, struct USoundAttenuation* AttenuationSettings); // Function CriWareRuntime.AtomStatics.PlaySoundAttachedAtComponent // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xadbc20
	struct UAtomComponent* PlaySoundAttached(struct USoundAtomCue* Sound, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, struct USoundAttenuation* AttenuationSettings); // Function CriWareRuntime.AtomStatics.PlaySoundAttached // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xadb9a0
	void PlaySoundAtLocationAtComponent(struct UObject* WorldContextObject, struct UObject* ComponentClass, struct USoundAtomCue* Sound, struct FVector Location, struct FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, struct USoundAttenuation* AttenuationSettings, struct USoundConcurrency* ConcurrencySettings); // Function CriWareRuntime.AtomStatics.PlaySoundAtLocationAtComponent // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xadb6d0
	void PlaySoundAtLocation(struct UObject* WorldContextObject, struct USoundAtomCue* Sound, struct FVector Location, struct FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, struct USoundAttenuation* AttenuationSettings, struct USoundConcurrency* ConcurrencySettings); // Function CriWareRuntime.AtomStatics.PlaySoundAtLocation // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xadb440
	void PauseAudioOutput(bool bPause); // Function CriWareRuntime.AtomStatics.PauseAudioOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xadb3c0
	bool LoadAtomConfig(struct USoundAtomConfig* AcfObject); // Function CriWareRuntime.AtomStatics.LoadAtomConfig // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xadb180
	float GetAtomGameVariable(struct FString GameVariableName); // Function CriWareRuntime.AtomStatics.GetAtomGameVariable // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xadadc0
	struct UAtomComponent* CreateRootedAtomComponent(struct UObject* WorldContextObject, bool bAutoDestroy); // Function CriWareRuntime.AtomStatics.CreateRootedAtomComponent // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0xada930
	void AddToAtomComponentIds(struct UObject* AtomPlayGateRef, struct UObject* SkeltalMeshComponentRef, int32_t AtomComponentID); // Function CriWareRuntime.AtomStatics.AddToAtomComponentIds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xada6f0
};

// Class CriWareRuntime.AtomTriggerTableFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAtomTriggerTableFunctionLibrary : UBlueprintFunctionLibrary {

	bool GetDataTableRowFromName(struct UDataTable* Table, struct FName RowName, struct FAtomTriggerRow OutRow); // Function CriWareRuntime.AtomTriggerTableFunctionLibrary.GetDataTableRowFromName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xadfe40
};

// Class CriWareRuntime.AtomUnrealSoundRenderer
// Size: 0x83b0 (Inherited: 0x360)
struct UAtomUnrealSoundRenderer : USoundWaveProcedural {
	char pad_360[0x8050]; // 0x360(0x8050)
};

// Class CriWareRuntime.CriFsBinderComponent
// Size: 0x260 (Inherited: 0x200)
struct UCriFsBinderComponent : USceneComponent {
	struct FString FilePath; // 0x200(0x10)
	struct FMulticastInlineDelegate OnBindCompleted; // 0x210(0x10)
	struct FMulticastInlineDelegate OnBindError; // 0x220(0x10)
	char pad_230[0x30]; // 0x230(0x30)

	void Stop(); // Function CriWareRuntime.CriFsBinderComponent.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0xae12d0
	void OnBindError__DelegateSignature(); // DelegateFunction CriWareRuntime.CriFsBinderComponent.OnBindError__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1685580
	void OnBindCompleted__DelegateSignature(); // DelegateFunction CriWareRuntime.CriFsBinderComponent.OnBindCompleted__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1685580
	enum class ECriFsBinderStatus GetStatus(); // Function CriWareRuntime.CriFsBinderComponent.GetStatus // (Final|Native|Public|BlueprintCallable) // @ game+0xae0060
	void Bind(); // Function CriWareRuntime.CriFsBinderComponent.Bind // (Final|Native|Public|BlueprintCallable) // @ game+0xadfb70
};

// Class CriWareRuntime.CriFsLoader
// Size: 0x238 (Inherited: 0x230)
struct ACriFsLoader : AActor {
	struct UCriFsLoaderComponent* LoaderComponent; // 0x230(0x08)
};

// Class CriWareRuntime.CriFsLoaderComponent
// Size: 0x280 (Inherited: 0x200)
struct UCriFsLoaderComponent : USceneComponent {
	struct FString FilePath; // 0x200(0x10)
	struct FMulticastInlineDelegate OnLoadCompleted; // 0x210(0x10)
	struct FMulticastInlineDelegate OnLoadError; // 0x220(0x10)
	char pad_230[0x50]; // 0x230(0x50)

	void OnLoadError__DelegateSignature(); // DelegateFunction CriWareRuntime.CriFsLoaderComponent.OnLoadError__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1685580
	void OnLoadCompleted__DelegateSignature(); // DelegateFunction CriWareRuntime.CriFsLoaderComponent.OnLoadCompleted__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1685580
	void Load(); // Function CriWareRuntime.CriFsLoaderComponent.Load // (Final|Native|Public|BlueprintCallable) // @ game+0xae02d0
	enum class ECriFsLoaderStatus GetStatus(); // Function CriWareRuntime.CriFsLoaderComponent.GetStatus // (Final|Native|Public|BlueprintCallable) // @ game+0xae0090
	struct TArray<char> GetDataArray(); // Function CriWareRuntime.CriFsLoaderComponent.GetDataArray // (Final|Native|Public|BlueprintCallable) // @ game+0xadfdb0
};

// Class CriWareRuntime.CriWareFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UCriWareFunctionLibrary : UBlueprintFunctionLibrary {

	void SetSpeakerAngleArray(enum class ECriWareSpeakerSystem SpeakerSystem, struct TArray<float> Angles); // Function CriWareRuntime.CriWareFunctionLibrary.SetSpeakerAngleArray // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xae0e40
	void SetGlobalLabelToSelectorByName(struct FString SelectorName, struct FString LabelName); // Function CriWareRuntime.CriWareFunctionLibrary.SetGlobalLabelToSelectorByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xae0be0
	void SetGameVariableByName(struct FString GameVariableName, float Value); // Function CriWareRuntime.CriWareFunctionLibrary.SetGameVariableByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xae0ac0
};

// Class CriWareRuntime.CriWareInitializer
// Size: 0x28 (Inherited: 0x28)
struct UCriWareInitializer : UObject {
};

// Class CriWareRuntime.CriWarePluginSettings
// Size: 0x320 (Inherited: 0x28)
struct UCriWarePluginSettings : UObject {
	bool bNoExistCriWareIni; // 0x28(0x01)
	bool bEditableCriWareAdxLipSyncSetting; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct FDirectoryPath NonAssetContentDir; // 0x30(0x10)
	struct FString ContentDir; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)
	int32_t NumBinders; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	int32_t MaxBinds; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	int32_t NumLoaders; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	int32_t MaxPath; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	bool OutputsLogFileSystem; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	int32_t PS4_FileAccessThreadAffinityMask; // 0x84(0x04)
	char pad_88[0x4]; // 0x88(0x04)
	int32_t PS4_DataDecompressionThreadAffinityMask; // 0x8c(0x04)
	char pad_90[0x4]; // 0x90(0x04)
	int32_t PS4_MemoryFileSystemThreadAffinityMask; // 0x94(0x04)
	char pad_98[0x4]; // 0x98(0x04)
	int32_t PS4_FileAccessThreadPriority; // 0x9c(0x04)
	char pad_A0[0x4]; // 0xa0(0x04)
	int32_t PS4_DataDecompressionThreadPriority; // 0xa4(0x04)
	char pad_A8[0x4]; // 0xa8(0x04)
	int32_t PS4_MemoryFileSystemThreadPriority; // 0xac(0x04)
	char pad_B0[0x4]; // 0xb0(0x04)
	bool AutomaticallyCreateCueAsset; // 0xb4(0x01)
	bool UsesInGamePreview; // 0xb5(0x01)
	char pad_B6[0x1]; // 0xb6(0x01)
	bool OutputsLogAtom; // 0xb7(0x01)
	char pad_B8[0x4]; // 0xb8(0x04)
	int32_t MonitorCommunicationBufferSize; // 0xbc(0x04)
	char pad_C0[0x4]; // 0xc0(0x04)
	int32_t MaxPitch; // 0xc4(0x04)
	char pad_C8[0x4]; // 0xc8(0x04)
	int32_t MaxVirtualVoices; // 0xcc(0x04)
	char pad_D0[0x4]; // 0xd0(0x04)
	int32_t NumStandardMemoryVoices; // 0xd4(0x04)
	char pad_D8[0x4]; // 0xd8(0x04)
	int32_t StandardMemoryVoiceNumChannels; // 0xdc(0x04)
	char pad_E0[0x4]; // 0xe0(0x04)
	int32_t StandardMemoryVoiceSamplingRate; // 0xe4(0x04)
	char pad_E8[0x4]; // 0xe8(0x04)
	int32_t NumStandardStreamingVoices; // 0xec(0x04)
	char pad_F0[0x4]; // 0xf0(0x04)
	int32_t StandardStreamingVoiceNumChannels; // 0xf4(0x04)
	char pad_F8[0x4]; // 0xf8(0x04)
	int32_t StandardStreamingVoiceSamplingRate; // 0xfc(0x04)
	char pad_100[0x4]; // 0x100(0x04)
	bool PoolAtomComponent; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	struct FSoftObjectPath AtomConfig; // 0x108(0x18)
	char pad_120[0x18]; // 0x120(0x18)
	struct FString AcfFileName; // 0x138(0x10)
	struct FSoftObjectPath AtomConfigDataTable; // 0x148(0x18)
	char pad_160[0x18]; // 0x160(0x18)
	float DistanceFactor; // 0x178(0x04)
	char pad_17C[0x4]; // 0x17c(0x04)
	enum class EAtomSoundRendererType SoundRendererTypeUI; // 0x180(0x01)
	char pad_181[0x3]; // 0x181(0x03)
	int32_t SoundRendererType; // 0x184(0x04)
	char pad_188[0x8]; // 0x188(0x08)
	struct TArray<struct FAtomAsrRackConfigUI> AsrRackConfigUI; // 0x190(0x10)
	struct TArray<struct FAtomAsrRackConfig> AsrRackConfig; // 0x1a0(0x10)
	char pad_1B0[0x10]; // 0x1b0(0x10)
	struct FString Hardware1; // 0x1c0(0x10)
	struct FString Hardware2; // 0x1d0(0x10)
	struct FString Hardware3; // 0x1e0(0x10)
	struct FString Hardware4; // 0x1f0(0x10)
	float EconomicTickMarginDistance; // 0x200(0x04)
	char pad_204[0x4]; // 0x204(0x04)
	int32_t EconomicTickFrequency; // 0x208(0x04)
	char pad_20C[0x4]; // 0x20c(0x04)
	float CullingMarginDistance; // 0x210(0x04)
	char pad_214[0x4]; // 0x214(0x04)
	int32_t HcaMxVoiceSamplingRate; // 0x218(0x04)
	char pad_21C[0x4]; // 0x21c(0x04)
	int32_t NumHcaMxMemoryVoices; // 0x220(0x04)
	char pad_224[0x4]; // 0x224(0x04)
	int32_t HcaMxMemoryVoiceNumChannels; // 0x228(0x04)
	char pad_22C[0x4]; // 0x22c(0x04)
	int32_t NumHcaMxStreamingVoices; // 0x230(0x04)
	char pad_234[0x4]; // 0x234(0x04)
	int32_t HcaMxStreamingVoiceNumChannels; // 0x238(0x04)
	char pad_23C[0x4]; // 0x23c(0x04)
	bool WASAPI_IsExclusive; // 0x240(0x01)
	char pad_241[0x3]; // 0x241(0x03)
	int32_t WASAPI_BitsPerSample; // 0x244(0x04)
	char pad_248[0x4]; // 0x248(0x04)
	int32_t WASAPI_SamplingRate; // 0x24c(0x04)
	char pad_250[0x4]; // 0x250(0x04)
	int32_t WASAPI_NumChannels; // 0x254(0x04)
	char pad_258[0x4]; // 0x258(0x04)
	bool UseUnrealSoundRenderer; // 0x25c(0x01)
	char pad_25D[0x3]; // 0x25d(0x03)
	int32_t PS4_ServerThreadAffinityMask; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
	int32_t PS4_OutputThreadAffinityMask; // 0x268(0x04)
	char pad_26C[0x4]; // 0x26c(0x04)
	int32_t PS4_ServerThreadPriority; // 0x270(0x04)
	char pad_274[0x4]; // 0x274(0x04)
	int32_t PS4_OutputThreadPriority; // 0x278(0x04)
	char pad_27C[0x4]; // 0x27c(0x04)
	bool PS4_UseAudio3d; // 0x280(0x01)
	char pad_281[0x3]; // 0x281(0x03)
	int32_t PS4_NumberOfAudio3dMemoryVoices; // 0x284(0x04)
	char pad_288[0x4]; // 0x288(0x04)
	int32_t PS4_SamplingRateOfAudio3dMemoryVoices; // 0x28c(0x04)
	char pad_290[0x4]; // 0x290(0x04)
	int32_t PS4_NumberOfAudio3dStreamingVoices; // 0x294(0x04)
	char pad_298[0x4]; // 0x298(0x04)
	int32_t PS4_SamplingRateOfAudio3dStreamingVoices; // 0x29c(0x04)
	char pad_2A0[0x4]; // 0x2a0(0x04)
	int32_t Switch_NumOpusMemoryVoices; // 0x2a4(0x04)
	char pad_2A8[0x4]; // 0x2a8(0x04)
	int32_t Switch_OpusMemoryVoiceNumChannels; // 0x2ac(0x04)
	char pad_2B0[0x4]; // 0x2b0(0x04)
	int32_t Switch_OpusMemoryVoiceSamplingRate; // 0x2b4(0x04)
	char pad_2B8[0x4]; // 0x2b8(0x04)
	int32_t Switch_NumOpusStreamingVoices; // 0x2bc(0x04)
	char pad_2C0[0x4]; // 0x2c0(0x04)
	int32_t Switch_OpusStreamingVoiceNumChannels; // 0x2c4(0x04)
	char pad_2C8[0x4]; // 0x2c8(0x04)
	int32_t Switch_OpusStreamingVoiceSamplingRate; // 0x2cc(0x04)
	char pad_2D0[0x4]; // 0x2d0(0x04)
	bool InitializeMana; // 0x2d4(0x01)
	char pad_2D5[0x1]; // 0x2d5(0x01)
	bool EnableDecodeSkip; // 0x2d6(0x01)
	char pad_2D7[0x1]; // 0x2d7(0x01)
	int32_t MaxDecoderHandles; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	int32_t MaxManaBPS; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	int32_t MaxManaStreams; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	bool UseH264Decoder; // 0x2f0(0x01)
	char pad_2F1[0x1]; // 0x2f1(0x01)
	bool InitializeAdxLipSync; // 0x2f2(0x01)
	char pad_2F3[0x1]; // 0x2f3(0x01)
	int32_t MaxNumAnalyzerHandles; // 0x2f4(0x04)
	char pad_2F8[0x4]; // 0x2f8(0x04)
	bool bUseManaStartupMovies; // 0x2fc(0x01)
	bool bWaitForMoviesToComplete; // 0x2fd(0x01)
	bool bMoviesAreSkippable; // 0x2fe(0x01)
	char pad_2FF[0x1]; // 0x2ff(0x01)
	struct TArray<struct FString> StartupMovies; // 0x300(0x10)
	char pad_310[0x10]; // 0x310(0x10)
};

// Class CriWareRuntime.ManaComponent
// Size: 0x250 (Inherited: 0xc0)
struct UManaComponent : UActorComponent {
	struct UManaTexture* Movie; // 0xc0(0x08)
	struct FMulticastInlineDelegate OnEventPoint; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnSubtitleChanged; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnStatusChanged; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnMovieChanged; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnSeekCompleted; // 0x108(0x10)
	struct FDelegate OnRequestData; // 0x118(0x10)
	char pad_128[0x40]; // 0x128(0x40)
	struct UManaPlaylist* Playlist; // 0x168(0x08)
	int32_t PlaylistIndex; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	bool bLoop; // 0x178(0x01)
	char pad_179[0x3]; // 0x179(0x03)
	int32_t AudioTrack; // 0x17c(0x04)
	int32_t SubAudioTrack; // 0x180(0x04)
	int32_t ExtraAudioTrack; // 0x184(0x04)
	struct FString AudioCategoryName; // 0x188(0x10)
	struct FString SubAudioCategoryName; // 0x198(0x10)
	struct FString ExtraAudioCategoryName; // 0x1a8(0x10)
	bool bSubtitlesEnabled; // 0x1b8(0x01)
	char pad_1B9[0x3]; // 0x1b9(0x03)
	int32_t SubtitlesChannel; // 0x1bc(0x04)
	enum class EManaSubtitlesEncoding SubtitlesEncoding; // 0x1c0(0x01)
	enum class EManaFrameAction EndFrameAction; // 0x1c1(0x01)
	enum class EManaPlaybackTimer PlaybackTimer; // 0x1c2(0x01)
	enum class EManaMaxFrameDrop MaxFrameDrop; // 0x1c3(0x01)
	char pad_1C4[0x8c]; // 0x1c4(0x8c)

	bool ToIndex(int32_t Index); // Function CriWareRuntime.ManaComponent.ToIndex // (Final|Native|Public|BlueprintCallable) // @ game+0xae1310
	void Stop(); // Function CriWareRuntime.ManaComponent.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0xae12f0
	void SetVolume(float Volume); // Function CriWareRuntime.ManaComponent.SetVolume // (Final|Native|Public|BlueprintCallable) // @ game+0xae1250
	void SetTexture(struct UManaTexture* Texture); // Function CriWareRuntime.ManaComponent.SetTexture // (Final|Native|Public|BlueprintCallable) // @ game+0xae11d0
	void SetSubVolume(float Volume); // Function CriWareRuntime.ManaComponent.SetSubVolume // (Final|Native|Public|BlueprintCallable) // @ game+0xae1150
	void SetSubAudioTrack(int32_t Track); // Function CriWareRuntime.ManaComponent.SetSubAudioTrack // (Final|Native|Public|BlueprintCallable) // @ game+0xae10d0
	void SetSubAudioSendLevel(int32_t Channel, enum class EAtomSpeakerID SpeakerId, float Volume); // Function CriWareRuntime.ManaComponent.SetSubAudioSendLevel // (Final|Native|Public|BlueprintCallable) // @ game+0xae0fc0
	void SetSubAudioCategory(struct FString CategoryName); // Function CriWareRuntime.ManaComponent.SetSubAudioCategory // (Final|Native|Public|BlueprintCallable) // @ game+0xae0f20
	void SetPlaybackTimer(enum class EManaPlaybackTimer InPlaybackTimer); // Function CriWareRuntime.ManaComponent.SetPlaybackTimer // (Final|Native|Public|BlueprintCallable) // @ game+0xae0dc0
	void SetMaxDropFrames(enum class EManaMaxFrameDrop InMaxDropFrames); // Function CriWareRuntime.ManaComponent.SetMaxDropFrames // (Final|Native|Public|BlueprintCallable) // @ game+0xae0d40
	void SetFile(struct FString MovieFilePath); // Function CriWareRuntime.ManaComponent.SetFile // (Final|Native|Public|BlueprintCallable) // @ game+0xae0a20
	void SetExtraVolume(float Volume); // Function CriWareRuntime.ManaComponent.SetExtraVolume // (Final|Native|Public|BlueprintCallable) // @ game+0xae09a0
	void SetExtraAudioTrack(int32_t Track); // Function CriWareRuntime.ManaComponent.SetExtraAudioTrack // (Final|Native|Public|BlueprintCallable) // @ game+0xae0920
	void SetExtraAudioCategory(struct FString CategoryName); // Function CriWareRuntime.ManaComponent.SetExtraAudioCategory // (Final|Native|Public|BlueprintCallable) // @ game+0xae0880
	void SetCachedData(struct TArray<char> DataArray); // Function CriWareRuntime.ManaComponent.SetCachedData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xae07d0
	void SetAudioTrack(int32_t Track); // Function CriWareRuntime.ManaComponent.SetAudioTrack // (Final|Native|Public|BlueprintCallable) // @ game+0xae0750
	void SetAudioCategory(struct FString CategoryName); // Function CriWareRuntime.ManaComponent.SetAudioCategory // (Final|Native|Public|BlueprintCallable) // @ game+0xae06b0
	void SeekToPosition(int32_t FrameNumber); // Function CriWareRuntime.ManaComponent.SeekToPosition // (Final|Native|Public|BlueprintCallable) // @ game+0xae0630
	void Seek(struct FTimespan Time); // Function CriWareRuntime.ManaComponent.Seek // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xae05b0
	void ResetCachedData(); // Function CriWareRuntime.ManaComponent.ResetCachedData // (Final|Native|Public|BlueprintCallable) // @ game+0xae0590
	void RemoveSubAudioCategory(); // Function CriWareRuntime.ManaComponent.RemoveSubAudioCategory // (Final|Native|Public|BlueprintCallable) // @ game+0xae0570
	void RemoveExtraAudioCategory(); // Function CriWareRuntime.ManaComponent.RemoveExtraAudioCategory // (Final|Native|Public|BlueprintCallable) // @ game+0xae0550
	void RemoveAudioCategory(); // Function CriWareRuntime.ManaComponent.RemoveAudioCategory // (Final|Native|Public|BlueprintCallable) // @ game+0xae0530
	bool Previous(); // Function CriWareRuntime.ManaComponent.Previous // (Final|Native|Public|BlueprintCallable) // @ game+0xae0500
	void PreparePlaylistIndex(int32_t Index); // Function CriWareRuntime.ManaComponent.PreparePlaylistIndex // (Final|Native|Public|BlueprintCallable) // @ game+0xae0480
	void Prepare(); // Function CriWareRuntime.ManaComponent.Prepare // (Final|Native|Public|BlueprintCallable) // @ game+0xae0460
	void Play(); // Function CriWareRuntime.ManaComponent.Play // (Final|Native|Public|BlueprintCallable) // @ game+0xae0440
	void Pause(bool bPause); // Function CriWareRuntime.ManaComponent.Pause // (Final|Native|Public|BlueprintCallable) // @ game+0xae03b0
	void OnSubtitleChanged__DelegateSignature(struct FText Subtitle); // DelegateFunction CriWareRuntime.ManaComponent.OnSubtitleChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1685580
	void OnStatusChanged__DelegateSignature(enum class EManaComponentStatus Status, struct UManaComponent* ManaComponent); // DelegateFunction CriWareRuntime.ManaComponent.OnStatusChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1685580
	void OnSeekCompleted__DelegateSignature(int32_t FrameNumber, struct UManaComponent* ManaComponent); // DelegateFunction CriWareRuntime.ManaComponent.OnSeekCompleted__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1685580
	void OnRequestData__DelegateSignature(struct UManaComponent* ManaComponent); // DelegateFunction CriWareRuntime.ManaComponent.OnRequestData__DelegateSignature // (Public|Delegate) // @ game+0x1685580
	void OnMovieChanged__DelegateSignature(struct UManaMovie* Movie, struct UManaComponent* ManaComponent); // DelegateFunction CriWareRuntime.ManaComponent.OnMovieChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1685580
	void OnEventPoint__DelegateSignature(struct FManaEventPointInfo EventPointInfo); // DelegateFunction CriWareRuntime.ManaComponent.OnEventPoint__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1685580
	bool Next(); // Function CriWareRuntime.ManaComponent.Next // (Final|Native|Public|BlueprintCallable) // @ game+0xae0380
	void Loop(bool bInLoop); // Function CriWareRuntime.ManaComponent.Loop // (Final|Native|Public|BlueprintCallable) // @ game+0xae02f0
	bool IsReady(); // Function CriWareRuntime.ManaComponent.IsReady // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xae02a0
	bool IsPreparing(); // Function CriWareRuntime.ManaComponent.IsPreparing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xae0270
	bool IsPlaying(); // Function CriWareRuntime.ManaComponent.IsPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xae0240
	bool IsPaused(); // Function CriWareRuntime.ManaComponent.IsPaused // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xae0210
	bool IsManaPlayerAvailable(); // Function CriWareRuntime.ManaComponent.IsManaPlayerAvailable // (Final|Native|Public|BlueprintCallable) // @ game+0xae01e0
	bool IsLooping(); // Function CriWareRuntime.ManaComponent.IsLooping // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xae01c0
	float GetVolume(); // Function CriWareRuntime.ManaComponent.GetVolume // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xae0190
	struct FTimespan GetTime(); // Function CriWareRuntime.ManaComponent.GetTime // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xae0150
	struct UManaTexture* GetTexture(); // Function CriWareRuntime.ManaComponent.GetTexture // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xae0120
	float GetSubVolume(); // Function CriWareRuntime.ManaComponent.GetSubVolume // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xae00f0
	enum class EManaComponentStatus GetStatus(); // Function CriWareRuntime.ManaComponent.GetStatus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xae00c0
	struct UManaMovie* GetSource(); // Function CriWareRuntime.ManaComponent.GetSource // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xae0030
	int32_t GetPosition(); // Function CriWareRuntime.ManaComponent.GetPosition // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xae0000
	struct FTimespan GetMovieTime(); // Function CriWareRuntime.ManaComponent.GetMovieTime // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xadffc0
	int32_t GetFrameNumber(); // Function CriWareRuntime.ManaComponent.GetFrameNumber // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadff90
	float GetExtraVolume(); // Function CriWareRuntime.ManaComponent.GetExtraVolume // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadff60
	void EnableSubtitles(bool bEnable); // Function CriWareRuntime.ManaComponent.EnableSubtitles // (Final|Native|Public|BlueprintCallable) // @ game+0xadfd20
	void EnableSeamless(bool bEnable); // Function CriWareRuntime.ManaComponent.EnableSeamless // (Final|Native|Public|BlueprintCallable) // @ game+0xadfc90
	void ChangeSubtitlesEncoding(enum class EManaSubtitlesEncoding Encoding); // Function CriWareRuntime.ManaComponent.ChangeSubtitlesEncoding // (Final|Native|Public|BlueprintCallable) // @ game+0xadfc10
	void ChangeSubtitlesChannel(int32_t Channel); // Function CriWareRuntime.ManaComponent.ChangeSubtitlesChannel // (Final|Native|Public|BlueprintCallable) // @ game+0xadfb90
	void AdvanceTime(struct FTimespan DeltaTime); // Function CriWareRuntime.ManaComponent.AdvanceTime // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xadfaf0
};

// Class CriWareRuntime.ManaComponentTexture
// Size: 0x110 (Inherited: 0xb8)
struct UManaComponentTexture : UTexture {
	int32_t SizeX; // 0xb8(0x04)
	int32_t SizeY; // 0xbc(0x04)
	enum class EPixelFormat Format; // 0xc0(0x01)
	enum class EManaComponentTextureType ComponentType; // 0xc1(0x01)
	enum class TextureAddress AddressX; // 0xc2(0x01)
	enum class TextureAddress AddressY; // 0xc3(0x01)
	char pad_C4[0x4c]; // 0xc4(0x4c)
};

// Class CriWareRuntime.ManaSource
// Size: 0x28 (Inherited: 0x28)
struct UManaSource : UObject {
};

// Class CriWareRuntime.ManaMovie
// Size: 0x78 (Inherited: 0x28)
struct UManaMovie : UManaSource {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct FManaVideoTrackInfo> VideoTracks; // 0x30(0x10)
	struct TArray<struct FManaAudioTrackInfo> AudioTracks; // 0x40(0x10)
	struct TArray<struct FManaEventPointInfo> EventPoints; // 0x50(0x10)
	int32_t NumSubtitleChannels; // 0x60(0x04)
	int32_t MaxSubtitleSize; // 0x64(0x04)
	char bIsAlpha : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0xf]; // 0x69(0x0f)
};

// Class CriWareRuntime.FileManaMovie
// Size: 0x90 (Inherited: 0x78)
struct UFileManaMovie : UManaMovie {
	bool bPrecacheFile; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FString FilePath; // 0x80(0x10)

	void SetFilePath(struct FString Path); // Function CriWareRuntime.FileManaMovie.SetFilePath // (Final|Native|Public|BlueprintCallable) // @ game+0xae53b0
};

// Class CriWareRuntime.DataManaMovie
// Size: 0x80 (Inherited: 0x78)
struct UDataManaMovie : UManaMovie {
	char pad_78[0x8]; // 0x78(0x08)

	void SetDataArray(struct TArray<char> InDataArray); // Function CriWareRuntime.DataManaMovie.SetDataArray // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xae5300
	struct TArray<char> GetDataArray(); // Function CriWareRuntime.DataManaMovie.GetDataArray // (Final|Native|Public|BlueprintCallable) // @ game+0xae4a80
};

// Class CriWareRuntime.ManaPlaylist
// Size: 0x40 (Inherited: 0x28)
struct UManaPlaylist : UManaSource {
	struct TArray<struct UManaMovie*> Movies; // 0x28(0x10)
	bool bIsAlpha; // 0x38(0x01)
	bool bIsMixedTypes; // 0x39(0x01)
	bool bIsSeamless; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)

	void RemoveAt(int32_t Index); // Function CriWareRuntime.ManaPlaylist.RemoveAt // (Final|Native|Public|BlueprintCallable) // @ game+0xae5280
	void Remove(struct UManaMovie* ManaMovie); // Function CriWareRuntime.ManaPlaylist.Remove // (Final|Native|Public|BlueprintCallable) // @ game+0xae5200
	int32_t Num(); // Function CriWareRuntime.ManaPlaylist.Num // (Final|Native|Public|BlueprintCallable) // @ game+0xae5170
	bool IsSeamless(); // Function CriWareRuntime.ManaPlaylist.IsSeamless // (Final|Native|Public|BlueprintCallable) // @ game+0xae4fd0
	bool IsMixedTypes(); // Function CriWareRuntime.ManaPlaylist.IsMixedTypes // (Final|Native|Public|BlueprintCallable) // @ game+0xae4fb0
	bool IsAlpha(); // Function CriWareRuntime.ManaPlaylist.IsAlpha // (Final|Native|Public|BlueprintCallable) // @ game+0xae4f00
	void Insert(struct UManaMovie* ManaMovie, int32_t Index); // Function CriWareRuntime.ManaPlaylist.Insert // (Final|Native|Public|BlueprintCallable) // @ game+0xae4e40
	struct UManaMovie* GetRandom(int32_t InOutIndex); // Function CriWareRuntime.ManaPlaylist.GetRandom // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xae4da0
	struct UManaMovie* GetPrevious(int32_t InOutIndex); // Function CriWareRuntime.ManaPlaylist.GetPrevious // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xae4d00
	struct UManaMovie* GetNext(int32_t InOutIndex); // Function CriWareRuntime.ManaPlaylist.GetNext // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xae4c00
	struct UManaMovie* Get(int32_t Index); // Function CriWareRuntime.ManaPlaylist.Get // (Final|Native|Public|BlueprintCallable) // @ game+0xae46a0
	void Add(struct UManaMovie* ManaMovie); // Function CriWareRuntime.ManaPlaylist.Add // (Final|Native|Public|BlueprintCallable) // @ game+0xae4050
};

// Class CriWareRuntime.ManaTexture
// Size: 0x168 (Inherited: 0xb8)
struct UManaTexture : UTexture {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct UManaSource* MovieSource; // 0xc0(0x08)
	struct FString MovieFilePath; // 0xc8(0x10)
	char bRenderToTexture : 1; // 0xd8(0x01)
	char pad_D8_1 : 7; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	float TargetGamma; // 0xdc(0x04)
	char bHDR : 1; // 0xe0(0x01)
	char pad_E0_1 : 7; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	enum class TextureAddress AddressX; // 0xe4(0x01)
	enum class TextureAddress AddressY; // 0xe5(0x01)
	char pad_E6[0x2]; // 0xe6(0x02)
	struct FLinearColor ClearColor; // 0xe8(0x10)
	enum class EPixelFormat OverrideFormat; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct FMulticastInlineDelegate OnTextureUpdated; // 0x100(0x10)
	struct TArray<struct UManaComponentTexture*> ComponentTextures; // 0x110(0x10)
	char pad_120[0x48]; // 0x120(0x48)

	void SetMovieSource(struct UManaSource* InSource); // Function CriWareRuntime.ManaTexture.SetMovieSource // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0xae5450
	void OnTextureUpdated__DelegateSignature(struct UManaTexture* ManaTexture); // DelegateFunction CriWareRuntime.ManaTexture.OnTextureUpdated__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1685580
};

// Class CriWareRuntime.MaterialExpressionManaColorSpaceConverter
// Size: 0xb0 (Inherited: 0x40)
struct UMaterialExpressionManaColorSpaceConverter : UMaterialExpression {
	struct FExpressionInput Luma; // 0x40(0x0c)
	char pad_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput ChromaB; // 0x54(0x0c)
	char pad_60[0x8]; // 0x60(0x08)
	struct FExpressionInput ChromaR; // 0x68(0x0c)
	char pad_74[0x8]; // 0x74(0x08)
	struct FExpressionInput Alpha; // 0x7c(0x0c)
	char pad_88[0x8]; // 0x88(0x08)
	struct FExpressionInput Gamma; // 0x90(0x0c)
	char pad_9C[0x8]; // 0x9c(0x08)
	bool bH264; // 0xa4(0x01)
	enum class EManaMovieType MovieType; // 0xa5(0x01)
	enum class EManaColorSpace ColorSpace; // 0xa6(0x01)
	bool bUseGammaExponent; // 0xa7(0x01)
	float ConstGamma; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// Class CriWareRuntime.MaterialExpressionManaMovieFormatSwitch
// Size: 0x90 (Inherited: 0x40)
struct UMaterialExpressionManaMovieFormatSwitch : UMaterialExpression {
	struct FExpressionInput Inputs[0x4]; // 0x40(0x30)
	char pad_70[0x20]; // 0x70(0x20)
};

// Class CriWareRuntime.MovieSceneAtomSection
// Size: 0x238 (Inherited: 0xe0)
struct UMovieSceneAtomSection : UMovieSceneSection {
	struct USoundAtomCue* Sound; // 0xe0(0x08)
	float StartOffset; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct FMovieSceneFloatChannel SoundVolume; // 0xf0(0xa0)
	struct FMovieSceneFloatChannel PitchMultiplier; // 0x190(0xa0)
	bool bSuppressSubtitles; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)
};

// Class CriWareRuntime.MovieSceneAtomTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneAtomTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> AtomSections; // 0x58(0x10)
};

// Class CriWareRuntime.PlatformManaMovie
// Size: 0x80 (Inherited: 0x78)
struct UPlatformManaMovie : UManaMovie {
	struct UManaMovie* ManaMovie; // 0x78(0x08)
};

// Class CriWareRuntime.SoundAtomConfig
// Size: 0x60 (Inherited: 0x28)
struct USoundAtomConfig : UObject {
	struct FString AcfFilePath; // 0x28(0x10)
	char pad_38[0x28]; // 0x38(0x28)

	struct TArray<struct FAtomCategoryInfoParam> GetCategoryInfoArray(); // Function CriWareRuntime.SoundAtomConfig.GetCategoryInfoArray // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xae4940
};

// Class CriWareRuntime.SoundAtomCue
// Size: 0xb8 (Inherited: 0x28)
struct USoundAtomCue : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct USoundAtomCueSheet* CueSheet; // 0x30(0x08)
	struct FString CueName; // 0x38(0x10)
	enum class EAtomLoopSetting LoopSetting; // 0x48(0x01)
	bool bApplyAtomParameter; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	float Duration; // 0x4c(0x04)
	float FirstWaveDuration; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct USoundAttenuation* AttenuationSettings; // 0x58(0x08)
	bool bEnableAudioVolume; // 0x60(0x01)
	bool bIsMovable; // 0x61(0x01)
	bool bCanStraddleAudioVolume; // 0x62(0x01)
	bool bUseDistanceToEnableAudioVolume; // 0x63(0x01)
	float MinDistanceToEnableAudioVolume; // 0x64(0x04)
	bool bUseAreaSoundVolume; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	int32_t UpdateRateForFrame; // 0x6c(0x04)
	bool bEconomicTick; // 0x70(0x01)
	bool bOverrideEconomicTickSettings; // 0x71(0x01)
	char pad_72[0x2]; // 0x72(0x02)
	float EconomicTickDistanceMargin; // 0x74(0x04)
	int32_t EconomicTickFrequency; // 0x78(0x04)
	bool bEnableDistanceCulling; // 0x7c(0x01)
	bool bOverrideCullSettings; // 0x7d(0x01)
	char pad_7E[0x2]; // 0x7e(0x02)
	float CullDistanceMargin; // 0x80(0x04)
	float EconomicTickMarginDistance; // 0x84(0x04)
	bool bLoopSettingByAtomCraft; // 0x88(0x01)
	bool bCullingSoundPlayingProcessByDistance; // 0x89(0x01)
	bool bUseLegacyCullingSettings; // 0x8a(0x01)
	char pad_8B[0x1]; // 0x8b(0x01)
	float MaxProcessDistance; // 0x8c(0x04)
	bool bOverrideCullingSettings; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	float CullingMarginDistance; // 0x94(0x04)
	bool bLoop; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct USoundAttenuation* DefaultAttenuation; // 0xa0(0x08)
	char pad_A8[0x10]; // 0xa8(0x10)

	bool IsLooping(); // Function CriWareRuntime.SoundAtomCue.IsLooping // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xae4f80
	bool IsEconomicTickEnabled(); // Function CriWareRuntime.SoundAtomCue.IsEconomicTickEnabled // (Final|Native|Public|Const) // @ game+0xae4f20
	float GetMaxAttenuationDistanceToUse(); // Function CriWareRuntime.SoundAtomCue.GetMaxAttenuationDistanceToUse // (Final|Native|Public|Const) // @ game+0xae4bd0
	float GetMaxAttenuationDistanceToApply(); // Function CriWareRuntime.SoundAtomCue.GetMaxAttenuationDistanceToApply // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xae4ba0
	float GetEconomicTickMarginDistanceToUse(); // Function CriWareRuntime.SoundAtomCue.GetEconomicTickMarginDistanceToUse // (Final|Native|Public|Const) // @ game+0xae4b40
	float GetEconomicTickFrequencyToUse(); // Function CriWareRuntime.SoundAtomCue.GetEconomicTickFrequencyToUse // (Final|Native|Public|Const) // @ game+0xae4b70
	float GetEconomicTickFrequencyToApply(); // Function CriWareRuntime.SoundAtomCue.GetEconomicTickFrequencyToApply // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xae4b70
	float GetEconomicTickDistanceMarginToApply(); // Function CriWareRuntime.SoundAtomCue.GetEconomicTickDistanceMarginToApply // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xae4b40
	float GetEconomicTickDistance(); // Function CriWareRuntime.SoundAtomCue.GetEconomicTickDistance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xae4b10
	float GetEconomicTickBoundaryDistanceToUse(); // Function CriWareRuntime.SoundAtomCue.GetEconomicTickBoundaryDistanceToUse // (Final|Native|Public|Const) // @ game+0xae4b10
	float GetCullingMarginDistanceToUse(); // Function CriWareRuntime.SoundAtomCue.GetCullingMarginDistanceToUse // (Final|Native|Public|Const) // @ game+0xae4a50
	float GetCullingBoundaryDistanceToUse(); // Function CriWareRuntime.SoundAtomCue.GetCullingBoundaryDistanceToUse // (Final|Native|Public|Const) // @ game+0xae4a20
	float GetCullDistanceMarginToApply(); // Function CriWareRuntime.SoundAtomCue.GetCullDistanceMarginToApply // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xae4a50
	float GetCullDistance(); // Function CriWareRuntime.SoundAtomCue.GetCullDistance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xae4a20
	bool BP_GetCueInfo(struct FAtomCueInfo CueInfo); // Function CriWareRuntime.SoundAtomCue.BP_GetCueInfo // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xae42b0
};

// Class CriWareRuntime.SoundAtomCueSheet
// Size: 0x118 (Inherited: 0x28)
struct USoundAtomCueSheet : UObject {
	bool Contains; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FString AcbFilePath; // 0x30(0x10)
	struct FString CueSheetName; // 0x40(0x10)
	int32_t NumSlots; // 0x50(0x04)
	bool bOverrideAwbDirectory; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct FDirectoryPath AwbDirectory; // 0x58(0x10)
	struct UDataTable* AdditionalData; // 0x68(0x08)
	struct TArray<struct FAtomCueInfo> CueInfos; // 0x70(0x10)
	char pad_80[0x98]; // 0x80(0x98)

	void ReleaseAcb(struct FName AcbName); // Function CriWareRuntime.SoundAtomCueSheet.ReleaseAcb // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xae5190
	struct USoundAtomCueSheet* LoadAtomCueSheet(struct USoundAtomCueSheet* CueSheet, bool bAddToLevel); // Function CriWareRuntime.SoundAtomCueSheet.LoadAtomCueSheet // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xae50b0
	struct USoundAtomCueSheet* LoadAcb(struct FName AcbName, bool bAddToLevel); // Function CriWareRuntime.SoundAtomCueSheet.LoadAcb // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xae4ff0
	bool IsLoaded(); // Function CriWareRuntime.SoundAtomCueSheet.IsLoaded // (Final|Native|Public|BlueprintCallable) // @ game+0xae4f50
	int32_t GetNumCues(); // Function CriWareRuntime.SoundAtomCueSheet.GetNumCues // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xae4ca0
	struct USoundAtomCue* GetAtomCueByName(struct FString CueName); // Function CriWareRuntime.SoundAtomCueSheet.GetAtomCueByName // (Final|Native|Public|BlueprintCallable) // @ game+0xae4850
	struct USoundAtomCue* GetAtomCueByIndex(int32_t CueIndex); // Function CriWareRuntime.SoundAtomCueSheet.GetAtomCueByIndex // (Final|Native|Public|BlueprintCallable) // @ game+0xae47c0
	struct USoundAtomCue* GetAtomCueById(int32_t CueId); // Function CriWareRuntime.SoundAtomCueSheet.GetAtomCueById // (Final|Native|Public|BlueprintCallable) // @ game+0xae4730
	void DetachDspBusSetting(); // Function CriWareRuntime.SoundAtomCueSheet.DetachDspBusSetting // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xae4680
	bool BP_GetCueInfoFromName(struct FString Name, struct FAtomCueInfo CueInfo); // Function CriWareRuntime.SoundAtomCueSheet.BP_GetCueInfoFromName // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xae4570
	bool BP_GetCueInfoFromIndex(int32_t Index, struct FAtomCueInfo CueInfo); // Function CriWareRuntime.SoundAtomCueSheet.BP_GetCueInfoFromIndex // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xae4470
	bool BP_GetCueInfoFromId(int32_t ID, struct FAtomCueInfo CueInfo); // Function CriWareRuntime.SoundAtomCueSheet.BP_GetCueInfoFromId // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xae4370
	void AttachDspBusSetting(struct FString SettingName); // Function CriWareRuntime.SoundAtomCueSheet.AttachDspBusSetting // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xae41e0
	void ApplyDspBusSnapshot(struct FString SnapshotName, int32_t Milliseconds); // Function CriWareRuntime.SoundAtomCueSheet.ApplyDspBusSnapshot // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xae40d0
};

