// BlueprintGeneratedClass TitleManager.TitleManager_C
// Size: 0x378 (Inherited: 0x2e8)
struct ATitleManager_C : ARSTitleManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2f0(0x08)
	struct ARSLevelSequenceActor* TitleSequencer; // 0x2f8(0x08)
	struct ASkeletalMeshActor* yuito; // 0x300(0x08)
	struct ASkeletalMeshActor* kasane; // 0x308(0x08)
	struct ACameraActor* CineCamera; // 0x310(0x08)
	struct AActor* CameraParent; // 0x318(0x08)
	struct FText PlayCameraName; // 0x320(0x18)
	struct UABP_ch0100_TitleChara_C* YuitoAnime; // 0x338(0x08)
	struct UABP_ch0200_TitleChara_C* KasaneAnime; // 0x340(0x08)
	struct TArray<struct ULevelSequence*> SequencerArray; // 0x348(0x10)
	bool FinishFlag; // 0x358(0x01)
	bool IsStartTitleMenu; // 0x359(0x01)
	bool IsPlayedFirstFlow; // 0x35a(0x01)
	char pad_35B[0x5]; // 0x35b(0x05)
	struct UParticleSystemComponent* YuitoEffect; // 0x360(0x08)
	struct UParticleSystemComponent* KasaneEffect; // 0x368(0x08)
	struct ABP_TitleMaterialController_C* TitleMaterial; // 0x370(0x08)

	bool Pause(bool Flag); // Function TitleManager.TitleManager_C.Pause // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void finalizeMovie(enum class EManaComponentStatus Status, struct UManaComponent* ManaComponent); // Function TitleManager.TitleManager_C.finalizeMovie // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetMaterialEffectKill(); // Function TitleManager.TitleManager_C.SetMaterialEffectKill // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MaterialDisable(); // Function TitleManager.TitleManager_C.MaterialDisable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetYuitoEffect(); // Function TitleManager.TitleManager_C.SetYuitoEffect // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetEffectKill(struct FName chName); // Function TitleManager.TitleManager_C.SetEffectKill // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetKasaneEffect(); // Function TitleManager.TitleManager_C.SetKasaneEffect // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SettingCharacter(); // Function TitleManager.TitleManager_C.SettingCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct ASkeletalMeshActor* GetYuitoMesh(); // Function TitleManager.TitleManager_C.GetYuitoMesh // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct URSTitleAnimInstance* GetYuitoAnimInstance(); // Function TitleManager.TitleManager_C.GetYuitoAnimInstance // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct ASkeletalMeshActor* GetKasaneMesh(); // Function TitleManager.TitleManager_C.GetKasaneMesh // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct URSTitleAnimInstance* GetKasaneAnimInstance(); // Function TitleManager.TitleManager_C.GetKasaneAnimInstance // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool isStreamingLevelLoaded(); // Function TitleManager.TitleManager_C.isStreamingLevelLoaded // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool isStopMovie(); // Function TitleManager.TitleManager_C.isStopMovie // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool StopMovie(); // Function TitleManager.TitleManager_C.StopMovie // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool isReadyMovie(); // Function TitleManager.TitleManager_C.isReadyMovie // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool PlayMovie(); // Function TitleManager.TitleManager_C.PlayMovie // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool isPlayMovie(); // Function TitleManager.TitleManager_C.isPlayMovie // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SettingMovie(); // Function TitleManager.TitleManager_C.SettingMovie // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool PlaySequencerType(enum class EUITitleSequencer Type, struct FText bindPlayName); // Function TitleManager.TitleManager_C.PlaySequencerType // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SettingMotion(); // Function TitleManager.TitleManager_C.SettingMotion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool isPlaySequencer(); // Function TitleManager.TitleManager_C.isPlaySequencer // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool PlaySequencer(struct FText bindPlayName); // Function TitleManager.TitleManager_C.PlaySequencer // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SettingSequencer(struct ULevelSequence* Sequence); // Function TitleManager.TitleManager_C.SettingSequencer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function TitleManager.TitleManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void TitleLSResetBindings(); // Function TitleManager.TitleManager_C.TitleLSResetBindings // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPlaySequencerType(); // Function TitleManager.TitleManager_C.SetPlaySequencerType // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFinished(); // Function TitleManager.TitleManager_C.OnFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SaveLoadError(); // Function TitleManager.TitleManager_C.SaveLoadError // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndBGM(); // Function TitleManager.TitleManager_C.EndBGM // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartBGM(); // Function TitleManager.TitleManager_C.StartBGM // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_TitleManager(int32_t EntryPoint); // Function TitleManager.TitleManager_C.ExecuteUbergraph_TitleManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

