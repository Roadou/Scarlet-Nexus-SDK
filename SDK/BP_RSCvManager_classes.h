// BlueprintGeneratedClass BP_RSCvManager.BP_RSCvManager_C
// Size: 0x188 (Inherited: 0x150)
struct UBP_RSCvManager_C : URSCvManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	struct TArray<struct FSoftObjPtrSoundCueSheet> tmpCvCueSheets; // 0x158(0x10)
	struct FString tmpTagStrings; // 0x168(0x10)
	struct FString dbgstr; // 0x178(0x10)

	void dbg_print(); // Function BP_RSCvManager.BP_RSCvManager_C.dbg_print // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool UnLoadCueSheetAll(); // Function BP_RSCvManager.BP_RSCvManager_C.UnLoadCueSheetAll // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool UnLoadCueSheetFromDtRef(struct FString RowName); // Function BP_RSCvManager.BP_RSCvManager_C.UnLoadCueSheetFromDtRef // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool LoadCueSheetFromDtRef(struct FString RowName); // Function BP_RSCvManager.BP_RSCvManager_C.LoadCueSheetFromDtRef // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool UnLoadCueSheet(struct USoundAtomCueSheet* CueSheet); // Function BP_RSCvManager.BP_RSCvManager_C.UnLoadCueSheet // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool LoadCueSheet(struct USoundAtomCueSheet* CueSheet); // Function BP_RSCvManager.BP_RSCvManager_C.LoadCueSheet // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool LoadSenarioCueSheet(); // Function BP_RSCvManager.BP_RSCvManager_C.LoadSenarioCueSheet // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool LoadCmnCueSheets(); // Function BP_RSCvManager.BP_RSCvManager_C.LoadCmnCueSheets // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FString GetChapterStringFromProgressId(int32_t ProgressId); // Function BP_RSCvManager.BP_RSCvManager_C.GetChapterStringFromProgressId // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_RSCvManager.BP_RSCvManager_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_RSCvManager.BP_RSCvManager_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function BP_RSCvManager.BP_RSCvManager_C.Initialize // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Finalize(); // Function BP_RSCvManager.BP_RSCvManager_C.Finalize // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnChangeVoiceLanguage(); // Function BP_RSCvManager.BP_RSCvManager_C.OnChangeVoiceLanguage // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnChangerProgress(); // Function BP_RSCvManager.BP_RSCvManager_C.OnChangerProgress // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStartTitle(); // Function BP_RSCvManager.BP_RSCvManager_C.OnStartTitle // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAreaLoad(enum class EChangeAreaStatus Status, bool IsChangeLocation); // Function BP_RSCvManager.BP_RSCvManager_C.OnAreaLoad // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnChangeEventStat(); // Function BP_RSCvManager.BP_RSCvManager_C.OnChangeEventStat // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMVarPlayingEventType(); // Function BP_RSCvManager.BP_RSCvManager_C.SetMVarPlayingEventType // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStartBondsEpisode(); // Function BP_RSCvManager.BP_RSCvManager_C.OnStartBondsEpisode // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEndBondsEpisode(); // Function BP_RSCvManager.BP_RSCvManager_C.OnEndBondsEpisode // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_RSCvManager(int32_t EntryPoint); // Function BP_RSCvManager.BP_RSCvManager_C.ExecuteUbergraph_BP_RSCvManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

