// BlueprintGeneratedClass BP_SoundManager.BP_SoundManager_C
// Size: 0x741 (Inherited: 0x4d8)
struct ABP_SoundManager_C : ARSSoundManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4d8(0x08)
	struct USIWManager_C* SIWManager; // 0x4e0(0x08)
	struct UBP_RSCvManager_C* BP_RSCvManager; // 0x4e8(0x08)
	struct UBP_EnvComponent_C* EnvComponent; // 0x4f0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x4f8(0x08)
	struct TArray<struct UAtomComponent*> TempComponents; // 0x500(0x10)
	bool IsBattling; // 0x510(0x01)
	char pad_511[0x7]; // 0x511(0x07)
	struct TArray<struct FRSCollisionSound> CollisionSoundArray; // 0x518(0x10)
	struct TSoftObjectPtr<USoundAtomCue> BgmBrainFieldCue; // 0x528(0x28)
	struct TSoftObjectPtr<USoundAtomCue> BgmSpBrainFieldCue; // 0x550(0x28)
	struct TSoftObjectPtr<USoundAtomCue> MeBattleOutCue; // 0x578(0x28)
	bool IgnoreChangeBattleBgm; // 0x5a0(0x01)
	char pad_5A1[0x7]; // 0x5a1(0x07)
	struct USoundAtomCue* LevelBgmCue; // 0x5a8(0x08)
	struct USoundAtomCue* LevelEnvCue; // 0x5b0(0x08)
	struct USoundAtomCue* LastBgmCue; // 0x5b8(0x08)
	enum class EBgmCategory LastBgmCategory; // 0x5c0(0x01)
	char pad_5C1[0x3]; // 0x5c1(0x03)
	float LastBgmVolume; // 0x5c4(0x04)
	struct USoundAtomCue* ShopBeforeBgmCue; // 0x5c8(0x08)
	enum class EBgmCategory ShopBeforeBgmCategory; // 0x5d0(0x01)
	char pad_5D1[0x3]; // 0x5d1(0x03)
	float ShopBeforeBgmVolume; // 0x5d4(0x04)
	bool ShopBeforeSaveFlag; // 0x5d8(0x01)
	char pad_5D9[0x7]; // 0x5d9(0x07)
	struct TArray<struct TSoftObjectPtr<USoundAtomCueSheet>> LoadCueSheetList; // 0x5e0(0x10)
	enum class ESoundState LastSoundState; // 0x5f0(0x01)
	char pad_5F1[0x3]; // 0x5f1(0x03)
	float menuStateVolumeBackupSe_Env; // 0x5f4(0x04)
	float NonPlayerCueSheetVolume; // 0x5f8(0x04)
	bool isDriving; // 0x5fc(0x01)
	char pad_5FD[0x3]; // 0x5fd(0x03)
	struct FSoundSnapshot DSPBus_SnapShot; // 0x600(0x08)
	struct FFSasCutInVoiceData SasCutInVoiceVar; // 0x608(0x30)
	struct TSoftObjectPtr<USoundAtomCue> tmpCueRef1; // 0x638(0x28)
	struct TSoftObjectPtr<USoundAtomCue> tmpCueRef2; // 0x660(0x28)
	enum class EBgmCategory LevelBgmCategory; // 0x688(0x01)
	char pad_689[0x7]; // 0x689(0x07)
	struct USoundAtomCue* LevelBgmCtrlCue; // 0x690(0x08)
	struct FString ConstSelectorName; // 0x698(0x10)
	bool isBattleFieldActive; // 0x6a8(0x01)
	bool DriveAtLoaction; // 0x6a9(0x01)
	enum class EBgmCategory PreviousBgmCategoryByBrainField; // 0x6aa(0x01)
	bool isTitle; // 0x6ab(0x01)
	bool isEventInProgress; // 0x6ac(0x01)
	bool isDriveOut; // 0x6ad(0x01)
	bool battleIoBufSwitch; // 0x6ae(0x01)
	char pad_6AF[0x1]; // 0x6af(0x01)
	int32_t tmpExpBeforeBattle; // 0x6b0(0x04)
	bool changingLocation; // 0x6b4(0x01)
	bool isSkipping; // 0x6b5(0x01)
	char pad_6B6[0x2]; // 0x6b6(0x02)
	struct USoundAtomCue* TmpAtomCue; // 0x6b8(0x08)
	struct FName ChangeLevelSoundLabel; // 0x6c0(0x08)
	bool isApllyChangeLevelSoundOnEventIn; // 0x6c8(0x01)
	char pad_6C9[0x7]; // 0x6c9(0x07)
	struct UDataTable* AlertSoundSpecification; // 0x6d0(0x08)
	struct FFAlertSoundSpecification fAlertSound; // 0x6d8(0x38)
	struct URSAtomComponentBase* AlertSound; // 0x710(0x08)
	int32_t ProgressIdTmp; // 0x718(0x04)
	bool PlayNow; // 0x71c(0x01)
	char pad_71D[0x3]; // 0x71d(0x03)
	int32_t DriveBgmLevel; // 0x720(0x04)
	char pad_724[0x4]; // 0x724(0x04)
	struct URSAtomComponentBase* DriveModifyAtomComponentRef; // 0x728(0x08)
	struct TArray<struct TSoftObjectPtr<USoundAtomCue>> DriveResumeCue; // 0x730(0x10)
	bool isDrivePause; // 0x740(0x01)

	bool EventManagerEnd(bool RestoreEnableTick, bool RestoreVisibility); // Function BP_SoundManager.BP_SoundManager_C.EventManagerEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool EventManagerStart(bool EnableTick, bool Visibility); // Function BP_SoundManager.BP_SoundManager_C.EventManagerStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SAS_CommonEnd(enum class E_SASKind SAS_Kind, bool bCancelSASCost, bool bDummy, float RemainTime); // Function BP_SoundManager.BP_SoundManager_C.SAS_CommonEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SAS_CommonStart(struct FFSASCommand SAS_Command, bool dummy); // Function BP_SoundManager.BP_SoundManager_C.SAS_CommonStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAccelerating(bool Accelerating); // Function BP_SoundManager.BP_SoundManager_C.IsAccelerating // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsAcceleratorValid(bool Valid); // Function BP_SoundManager.BP_SoundManager_C.IsAcceleratorValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void PlayAlert(struct USoundAtomCue* Sound, float Volume); // Function BP_SoundManager.BP_SoundManager_C.PlayAlert // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopAlert(float FadeTime); // Function BP_SoundManager.BP_SoundManager_C.StopAlert // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayAlertAtAC(); // Function BP_SoundManager.BP_SoundManager_C.PlayAlertAtAC // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PreLoadPhaseAnimSE(struct TArray<struct USoundAtomCue*> outAtomCues); // Function BP_SoundManager.BP_SoundManager_C.PreLoadPhaseAnimSE // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPlayerIDFromSASKind(enum class E_SASKind sas, enum class EPlayerID playerId); // Function BP_SoundManager.BP_SoundManager_C.GetPlayerIDFromSASKind // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	bool IsPlayingByBgmComponent(enum class EBgmCategory Category); // Function BP_SoundManager.BP_SoundManager_C.IsPlayingByBgmComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BgmStopAllDestroyReserveList(); // Function BP_SoundManager.BP_SoundManager_C.BgmStopAllDestroyReserveList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BGMComponentOnPlayEnd(enum class EAtomComponentStatus Status, struct UAtomComponent* AtomComponent); // Function BP_SoundManager.BP_SoundManager_C.BGMComponentOnPlayEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CleanUpBgm(enum class EBgmCategory Category); // Function BP_SoundManager.BP_SoundManager_C.CleanUpBgm // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Get Movie Volume(struct UManaComponent* ManaComponent, float Volume); // Function BP_SoundManager.BP_SoundManager_C.Get Movie Volume // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadSASExtraAdlibVoiceData(struct ULevelSequence* targetSequence); // Function BP_SoundManager.BP_SoundManager_C.LoadSASExtraAdlibVoiceData // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct URSAtomComponentBase* PlayCueWeaponLocation(struct AActor* OwnerPlayer, struct USoundAtomCue* Sound, enum class EGetPlayerWeaponType WeaponType, struct URSAtomComponentBase* ComponentClass, struct USoundAttenuation* AttenuationSettings); // Function BP_SoundManager.BP_SoundManager_C.PlayCueWeaponLocation // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct URSAtomComponentBase* PlayVoice(struct USoundAtomCue* Sound, bool isAttache, bool isAutoActivate, struct USceneComponent* AttachToComponent, struct FName AttachPointName, enum class EFilterCallbackType filterCallbackType); // Function BP_SoundManager.BP_SoundManager_C.PlayVoice // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlaySoundBySoundManager(struct URSAtomComponentBase* ComponentClass, struct TSoftObjectPtr<USoundAtomCue> AtomSound); // Function BP_SoundManager.BP_SoundManager_C.PlaySoundBySoundManager // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDspSnapShot(struct FSoundSnapshot DspSnapShot); // Function BP_SoundManager.BP_SoundManager_C.SetDspSnapShot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReserveApllyChangeLevelSound(); // Function BP_SoundManager.BP_SoundManager_C.ReserveApllyChangeLevelSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnChangeArea_SoundSetting(enum class EChangeAreaStatus Stat, bool IsChangeLocation); // Function BP_SoundManager.BP_SoundManager_C.OnChangeArea_SoundSetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void On Battle Field Changed(bool IsStart); // Function BP_SoundManager.BP_SoundManager_C.On Battle Field Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBgmControl(struct USoundAtomCue* ControlCue); // Function BP_SoundManager.BP_SoundManager_C.SetBgmControl // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Set Selector Label(struct UAtomComponent* AtomComponent, struct FString SelectorString); // Function BP_SoundManager.BP_SoundManager_C.Set Selector Label // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool LoadBondsCueSheet(enum class EPlayerID heroID, enum class EPlayerID partnerId); // Function BP_SoundManager.BP_SoundManager_C.LoadBondsCueSheet // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool LoadScenarioCueSheet(); // Function BP_SoundManager.BP_SoundManager_C.LoadScenarioCueSheet // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayBGEffectSound(struct FName EventName, struct FVector Location); // Function BP_SoundManager.BP_SoundManager_C.PlayBGEffectSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayEnvFromEV(struct USoundAtomCue* Cue, float FadeTime, float FadeVolume); // Function BP_SoundManager.BP_SoundManager_C.PlayEnvFromEV // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ChangeSoundState(enum class ESoundState sndState); // Function BP_SoundManager.BP_SoundManager_C.ChangeSoundState // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ResumeFromPauseAllSound(); // Function BP_SoundManager.BP_SoundManager_C.ResumeFromPauseAllSound // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool PauseAllSound(); // Function BP_SoundManager.BP_SoundManager_C.PauseAllSound // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetFadeAllCategory(float FadeTime, float DestVol); // Function BP_SoundManager.BP_SoundManager_C.SetFadeAllCategory // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetFadeByCategoryName(enum class ESoundCategory Category, float FadeTime, float DestVol); // Function BP_SoundManager.BP_SoundManager_C.SetFadeByCategoryName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetInGameVolumeAll(float DestVol); // Function BP_SoundManager.BP_SoundManager_C.SetInGameVolumeAll // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetMuteAll(); // Function BP_SoundManager.BP_SoundManager_C.SetMuteAll // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetInGameVolumeByCategoryName(enum class ESoundCategory Category, float DestVol); // Function BP_SoundManager.BP_SoundManager_C.SetInGameVolumeByCategoryName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetResumeFromMuteAll(); // Function BP_SoundManager.BP_SoundManager_C.SetResumeFromMuteAll // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetConfigVolumeByCategoryName(enum class ESoundCategory soundCategory, float DestVolume); // Function BP_SoundManager.BP_SoundManager_C.SetConfigVolumeByCategoryName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Debug_Print_Sound(); // Function BP_SoundManager.BP_SoundManager_C.Debug_Print_Sound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsBossBatlle(bool IsBossBattle); // Function BP_SoundManager.BP_SoundManager_C.IsBossBatlle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	float GetBaseSoundVolume(enum class ESoundCategory soundCategory, struct FString ParamName); // Function BP_SoundManager.BP_SoundManager_C.GetBaseSoundVolume // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetBaseSoundVolume(enum class ESoundCategory soundCategory, struct FString ParamName, float Volume); // Function BP_SoundManager.BP_SoundManager_C.SetBaseSoundVolume // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool LoadVoiceCueSheetPlayStage(struct FString seName); // Function BP_SoundManager.BP_SoundManager_C.LoadVoiceCueSheetPlayStage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ReplacedVoiceSheet(bool isJapanese); // Function BP_SoundManager.BP_SoundManager_C.ReplacedVoiceSheet // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool StopLoopSe(struct FName Name, float FadeTime, float FadeVolume); // Function BP_SoundManager.BP_SoundManager_C.StopLoopSe // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool PlayLoopSe(struct FName Name, struct USoundAtomCue* AtomCue, struct FVector Location, struct FRotator Rotation, float FadeTime, float FadeVolume, bool forceFirstStart); // Function BP_SoundManager.BP_SoundManager_C.PlayLoopSe // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopSoundEmitter(float FadeTime); // Function BP_SoundManager.BP_SoundManager_C.StopSoundEmitter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlaySoundEmitter(float Volume); // Function BP_SoundManager.BP_SoundManager_C.PlaySoundEmitter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopSoundEmitterByPlayID(struct FName PlayID, float FadeTime); // Function BP_SoundManager.BP_SoundManager_C.StopSoundEmitterByPlayID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlaySoundEmitterByPlayID(struct FName PlayID); // Function BP_SoundManager.BP_SoundManager_C.PlaySoundEmitterByPlayID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BgmChangeFromShop(); // Function BP_SoundManager.BP_SoundManager_C.BgmChangeFromShop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BgmChangeToShop(); // Function BP_SoundManager.BP_SoundManager_C.BgmChangeToShop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSoundEmitterVolume(float Volume); // Function BP_SoundManager.BP_SoundManager_C.SetSoundEmitterVolume // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLevelSound(struct FSoundLevelParam LevelParam); // Function BP_SoundManager.BP_SoundManager_C.SetLevelSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsBrainField(bool IsBrainField); // Function BP_SoundManager.BP_SoundManager_C.IsBrainField // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SelectBgmCue(struct USoundAtomCue* OldCue, struct USoundAtomCue* NewCue, struct USoundAtomCue* return); // Function BP_SoundManager.BP_SoundManager_C.SelectBgmCue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBgmComponent(enum class EBgmCategory Category, struct URSAtomComponentBase* Component); // Function BP_SoundManager.BP_SoundManager_C.GetBgmComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsValidBgmIndex(int32_t Index, bool Valid); // Function BP_SoundManager.BP_SoundManager_C.IsValidBgmIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool ResumeEnv(float FadeTime, float FadeVolume); // Function BP_SoundManager.BP_SoundManager_C.ResumeEnv // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool PauseEnv(float FadeTime, float FadeVolume); // Function BP_SoundManager.BP_SoundManager_C.PauseEnv // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool StopEnv(float FadeTime, float FadeVolume); // Function BP_SoundManager.BP_SoundManager_C.StopEnv // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool PlayEnv(struct USoundAtomCue* AtomCue, float FadeTime, float FadeVolume); // Function BP_SoundManager.BP_SoundManager_C.PlayEnv // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool PauseBgm(enum class EBgmCategory Category, float FadeTime, float FadeVolume); // Function BP_SoundManager.BP_SoundManager_C.PauseBgm // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ResumeBgm(enum class EBgmCategory Category, float FadeTime, float FadeVolume); // Function BP_SoundManager.BP_SoundManager_C.ResumeBgm // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool StopBgm(enum class EBgmCategory Category, float FadeTime, float FadeVolume); // Function BP_SoundManager.BP_SoundManager_C.StopBgm // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool PlayBgm(enum class EBgmCategory Category, struct USoundAtomCue* AtomCue, float FadeTime, float FadeVolume, bool forceFirstStart); // Function BP_SoundManager.BP_SoundManager_C.PlayBgm // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeBgmLcOrBt(bool isBattleIn); // Function BP_SoundManager.BP_SoundManager_C.ChangeBgmLcOrBt // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Aplly Change Level Sound Setting(); // Function BP_SoundManager.BP_SoundManager_C.Aplly Change Level Sound Setting // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Change Level(struct FName Name); // Function BP_SoundManager.BP_SoundManager_C.Change Level // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function BP_SoundManager.BP_SoundManager_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPhyshicsCollisionSound(struct FRSCollisionSoundInfo CollisionSoundInfo, struct FRSCollisionSound CollisionSound); // Function BP_SoundManager.BP_SoundManager_C.GetPhyshicsCollisionSound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateOcclusion(); // Function BP_SoundManager.BP_SoundManager_C.UpdateOcclusion // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_SoundManager.BP_SoundManager_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCutInStart(); // Function BP_SoundManager.BP_SoundManager_C.OnCutInStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCutInEnd(); // Function BP_SoundManager.BP_SoundManager_C.OnCutInEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPsychicStart(struct FFSASPsychicParam Param, struct AActor* Owner); // Function BP_SoundManager.BP_SoundManager_C.OnPsychicStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPsychicEnd(struct FFSASPsychicParam Param, struct AActor* Owner, float RemainTime); // Function BP_SoundManager.BP_SoundManager_C.OnPsychicEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEventStart(enum class ESequencerSoundDemoType DemoType, int32_t EventID, struct USoundAtomCue* SoundCue); // Function BP_SoundManager.BP_SoundManager_C.OnEventStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEventEnd(enum class ESequencerSoundDemoType DemoType, int32_t EventID, struct USoundAtomCue* SoundCue); // Function BP_SoundManager.BP_SoundManager_C.OnEventEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Bgm Selector For Static Event In(); // Function BP_SoundManager.BP_SoundManager_C.Bgm Selector For Static Event In // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Bgm Selector For Static Event Out(); // Function BP_SoundManager.BP_SoundManager_C.Bgm Selector For Static Event Out // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadAdlibVoiceCue(struct ULevelSequence* Sequencer); // Function BP_SoundManager.BP_SoundManager_C.LoadAdlibVoiceCue // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadSASExtraAdlibVoice(struct ULevelSequence* targetSequence); // Function BP_SoundManager.BP_SoundManager_C.LoadSASExtraAdlibVoice // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStartCutScene_SoundSetting(); // Function BP_SoundManager.BP_SoundManager_C.OnStartCutScene_SoundSetting // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEndCutScene_SoundSetting(); // Function BP_SoundManager.BP_SoundManager_C.OnEndCutScene_SoundSetting // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainFieldCloseFromNative(); // Function BP_SoundManager.BP_SoundManager_C.OnBrainFieldCloseFromNative // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnStartJustDodge(); // Function BP_SoundManager.BP_SoundManager_C.OnStartJustDodge // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEndJustDodge(); // Function BP_SoundManager.BP_SoundManager_C.OnEndJustDodge // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBonusGhostStart(); // Function BP_SoundManager.BP_SoundManager_C.OnBonusGhostStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBonusGhostEnd(); // Function BP_SoundManager.BP_SoundManager_C.OnBonusGhostEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainCrashTarget(struct ARSCharacterBase* Target); // Function BP_SoundManager.BP_SoundManager_C.OnBrainCrashTarget // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPlayVoArmorBreak(); // Function BP_SoundManager.BP_SoundManager_C.OnPlayVoArmorBreak // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainCrashOn(); // Function BP_SoundManager.BP_SoundManager_C.OnBrainCrashOn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnRevitalizationStart(); // Function BP_SoundManager.BP_SoundManager_C.OnRevitalizationStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnRevitalizationEnd(); // Function BP_SoundManager.BP_SoundManager_C.OnRevitalizationEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPlaySeTargetLockOn(); // Function BP_SoundManager.BP_SoundManager_C.OnPlaySeTargetLockOn // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPlaySeTargetLockOff(); // Function BP_SoundManager.BP_SoundManager_C.OnPlaySeTargetLockOff // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPlaySeTargetLockCursor(); // Function BP_SoundManager.BP_SoundManager_C.OnPlaySeTargetLockCursor // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPlaySeItemChange(); // Function BP_SoundManager.BP_SoundManager_C.OnPlaySeItemChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPlaySeItemUse(); // Function BP_SoundManager.BP_SoundManager_C.OnPlaySeItemUse // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPlaySeBrainGaugeUp(); // Function BP_SoundManager.BP_SoundManager_C.OnPlaySeBrainGaugeUp // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPlaySeSASCommandOn(bool IsSAS); // Function BP_SoundManager.BP_SoundManager_C.OnPlaySeSASCommandOn // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPlaySeBrainGaugeMAX(); // Function BP_SoundManager.BP_SoundManager_C.OnPlaySeBrainGaugeMAX // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPlaySeEmAppearStart(struct FVector Location, struct FRotator Rotation, struct UObject* Creator); // Function BP_SoundManager.BP_SoundManager_C.OnPlaySeEmAppearStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPlaySeEmAppearEnd(struct FVector Location, struct FRotator Rotation, struct UObject* Creator); // Function BP_SoundManager.BP_SoundManager_C.OnPlaySeEmAppearEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPlaySoundSASCode(); // Function BP_SoundManager.BP_SoundManager_C.OnPlaySoundSASCode // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPlaySeSASCommandPageChange(); // Function BP_SoundManager.BP_SoundManager_C.OnPlaySeSASCommandPageChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCrashGuageEmphasis(); // Function BP_SoundManager.BP_SoundManager_C.OnCrashGuageEmphasis // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnProceedMessage(); // Function BP_SoundManager.BP_SoundManager_C.OnProceedMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStaticEventPhaseMove_(struct FString AnimPath); // Function BP_SoundManager.BP_SoundManager_C.OnStaticEventPhaseMove_ // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCrashGuageFull(); // Function BP_SoundManager.BP_SoundManager_C.OnCrashGuageFull // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCrashGuageFull_Boss(); // Function BP_SoundManager.BP_SoundManager_C.OnCrashGuageFull_Boss // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCrashGuageEmphasis_Boss(); // Function BP_SoundManager.BP_SoundManager_C.OnCrashGuageEmphasis_Boss // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnNoticeQuestRewardIn(); // Function BP_SoundManager.BP_SoundManager_C.OnNoticeQuestRewardIn // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnNoticeQuestRewareOut(); // Function BP_SoundManager.BP_SoundManager_C.OnNoticeQuestRewareOut // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnNoticeQuest(); // Function BP_SoundManager.BP_SoundManager_C.OnNoticeQuest // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAcceleratorStart(struct FAcceleratorParam Parameter, struct AActor* Owner, bool bHologram); // Function BP_SoundManager.BP_SoundManager_C.OnAcceleratorStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAcceleratorEnd(struct FAcceleratorParam Parameter, struct AActor* Owner, float RemainTime, bool bHologram); // Function BP_SoundManager.BP_SoundManager_C.OnAcceleratorEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnElectricStart(struct FFSASElectricParam Param, struct AActor* Owner); // Function BP_SoundManager.BP_SoundManager_C.OnElectricStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnElectricEnd(struct FFSASElectricParam Param, struct AActor* Owner, float RemainTime); // Function BP_SoundManager.BP_SoundManager_C.OnElectricEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSASCutinStart(); // Function BP_SoundManager.BP_SoundManager_C.OnSASCutinStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFireStart(struct FFSASFireParam Param, struct AActor* Owner); // Function BP_SoundManager.BP_SoundManager_C.OnFireStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFireEnd(struct FFSASFireParam Param, struct AActor* Owner, float RemainTime); // Function BP_SoundManager.BP_SoundManager_C.OnFireEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSeeThroughStart(struct FFSASSeeThroughParam Param, struct AActor* Owner); // Function BP_SoundManager.BP_SoundManager_C.OnSeeThroughStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSeeThroughEnd(struct FFSASSeeThroughParam Param, struct AActor* Owner, float RemainTime); // Function BP_SoundManager.BP_SoundManager_C.OnSeeThroughEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTelepoStart(struct FFSASTelepoParam Param, struct AActor* Owner); // Function BP_SoundManager.BP_SoundManager_C.OnTelepoStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTelepoEnd(struct FFSASTelepoParam Param, struct AActor* Owner, float RemainTime); // Function BP_SoundManager.BP_SoundManager_C.OnTelepoEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMetalStart(struct FFSASMetalParam Param, struct AActor* Owner); // Function BP_SoundManager.BP_SoundManager_C.OnMetalStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMetalEnd(struct FFSASMetalParam Param, struct AActor* Owner, float RemainTime); // Function BP_SoundManager.BP_SoundManager_C.OnMetalEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStealthEnd(struct FFSASStealthParam Param, struct AActor* Owner, float RemainTime); // Function BP_SoundManager.BP_SoundManager_C.OnStealthEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStealthStart(struct FFSASStealthParam Param, struct AActor* Owner); // Function BP_SoundManager.BP_SoundManager_C.OnStealthStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCopyStart(struct FFSASCopyParam Param, struct AActor* Owner); // Function BP_SoundManager.BP_SoundManager_C.OnCopyStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCopyEnd(struct FFSASCopyParam Param, struct AActor* Owner, float RemainTime); // Function BP_SoundManager.BP_SoundManager_C.OnCopyEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnChangeBattleBgm(enum class Enum_EnemySound enemySound); // Function BP_SoundManager.BP_SoundManager_C.OnChangeBattleBgm // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnChangeLocationBgm(); // Function BP_SoundManager.BP_SoundManager_C.OnChangeLocationBgm // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTitleStart(); // Function BP_SoundManager.BP_SoundManager_C.OnTitleStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTitleEnd(); // Function BP_SoundManager.BP_SoundManager_C.OnTitleEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAreaChangeLocationBgm(); // Function BP_SoundManager.BP_SoundManager_C.OnAreaChangeLocationBgm // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnDriveStart(int32_t DriveLevel); // Function BP_SoundManager.BP_SoundManager_C.OnDriveStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnDriveEnd(); // Function BP_SoundManager.BP_SoundManager_C.OnDriveEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnChangeDriveLevel(int32_t DriveLevel); // Function BP_SoundManager.BP_SoundManager_C.OnChangeDriveLevel // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnLastBattlePhase2(); // Function BP_SoundManager.BP_SoundManager_C.OnLastBattlePhase2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnLastBattlePhase3(); // Function BP_SoundManager.BP_SoundManager_C.OnLastBattlePhase3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBattleEndDriveBgmModifyPause(); // Function BP_SoundManager.BP_SoundManager_C.OnBattleEndDriveBgmModifyPause // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBattleStartDriveBgmModifyResume(); // Function BP_SoundManager.BP_SoundManager_C.OnBattleStartDriveBgmModifyResume // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_SoundManager.BP_SoundManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_SoundManager.BP_SoundManager_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_SoundManager.BP_SoundManager_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void OnBattleFieldBegin(); // Function BP_SoundManager.BP_SoundManager_C.OnBattleFieldBegin // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBattleFieldEnd(); // Function BP_SoundManager.BP_SoundManager_C.OnBattleFieldEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnChangeArea(enum class EChangeAreaStatus Status, bool IsChangeLocation); // Function BP_SoundManager.BP_SoundManager_C.OnChangeArea // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStartCutScene(); // Function BP_SoundManager.BP_SoundManager_C.OnStartCutScene // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEndCutScene(); // Function BP_SoundManager.BP_SoundManager_C.OnEndCutScene // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMessageSkipSePlay(); // Function BP_SoundManager.BP_SoundManager_C.OnMessageSkipSePlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnSkipEvent(); // Function BP_SoundManager.BP_SoundManager_C.OnSkipEvent // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void PlaySE_NoDamage(); // Function BP_SoundManager.BP_SoundManager_C.PlaySE_NoDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_SoundManager(int32_t EntryPoint); // Function BP_SoundManager.BP_SoundManager_C.ExecuteUbergraph_BP_SoundManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

