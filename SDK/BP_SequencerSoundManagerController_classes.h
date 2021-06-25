// BlueprintGeneratedClass BP_SequencerSoundManagerController.BP_SequencerSoundManagerController_C
// Size: 0x268 (Inherited: 0x240)
struct ABP_SequencerSoundManagerController_C : ASequencerSoundManagerController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	struct TArray<struct USoundAtomCue*> AtomCueList; // 0x250(0x10)
	enum class ESoundCategory soundCategory; // 0x260(0x01)
	char pad_261[0x3]; // 0x261(0x03)
	float TmpVolume; // 0x264(0x04)

	void ReplacedPlayVoice(struct USoundAtomCue* InputCue); // Function BP_SequencerSoundManagerController.BP_SequencerSoundManagerController_C.ReplacedPlayVoice // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCueByCueNameVoBattleJa(struct FString CueName, struct USoundAtomCue* OutCue); // Function BP_SequencerSoundManagerController.BP_SequencerSoundManagerController_C.GetCueByCueNameVoBattleJa // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBgmCue(int32_t Index, struct USoundAtomCue* AtomCue); // Function BP_SequencerSoundManagerController.BP_SequencerSoundManagerController_C.GetBgmCue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void OnEventStart(enum class ESequencerSoundDemoType DemoType, int32_t EventID, int32_t CueIndex); // Function BP_SequencerSoundManagerController.BP_SequencerSoundManagerController_C.OnEventStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEventEnd(enum class ESequencerSoundDemoType DemoType, int32_t EventID, int32_t CueIndex); // Function BP_SequencerSoundManagerController.BP_SequencerSoundManagerController_C.OnEventEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPlayBgm(enum class EBgmCategory Category, int32_t CueIndex, float FadeTime, float FadeVolume, struct FString SelectorName, struct FString LabelName); // Function BP_SequencerSoundManagerController.BP_SequencerSoundManagerController_C.OnPlayBgm // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStopBgm(enum class EBgmCategory Category, float FadeTime, float FadeVolume); // Function BP_SequencerSoundManagerController.BP_SequencerSoundManagerController_C.OnStopBgm // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFadeInByCategoryName(struct FString CategoryName, float FadeTime, float FadeVolume); // Function BP_SequencerSoundManagerController.BP_SequencerSoundManagerController_C.OnFadeInByCategoryName // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFadeOutByCategoryName(struct FString CategoryName, float FadeTime, float FadeVolume); // Function BP_SequencerSoundManagerController.BP_SequencerSoundManagerController_C.OnFadeOutByCategoryName // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPlayAtomCue(int32_t ListIndex, struct FName AttachName); // Function BP_SequencerSoundManagerController.BP_SequencerSoundManagerController_C.OnPlayAtomCue // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFadeByCategoryName(enum class ESoundCategory Category, float FadeTime, float DestVolume); // Function BP_SequencerSoundManagerController.BP_SequencerSoundManagerController_C.OnFadeByCategoryName // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPlayReplacedVoice(int32_t Index, struct FName attachedName); // Function BP_SequencerSoundManagerController.BP_SequencerSoundManagerController_C.OnPlayReplacedVoice // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnRevitalizationStart(); // Function BP_SequencerSoundManagerController.BP_SequencerSoundManagerController_C.OnRevitalizationStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnRevitalizationEnd(); // Function BP_SequencerSoundManagerController.BP_SequencerSoundManagerController_C.OnRevitalizationEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPauseBgm(enum class EBgmCategory Category, float FadeTime, float FadeVolume); // Function BP_SequencerSoundManagerController.BP_SequencerSoundManagerController_C.OnPauseBgm // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_SequencerSoundManagerController(int32_t EntryPoint); // Function BP_SequencerSoundManagerController.BP_SequencerSoundManagerController_C.ExecuteUbergraph_BP_SequencerSoundManagerController // (Final|UbergraphFunction) // @ game+0x1685580
};

