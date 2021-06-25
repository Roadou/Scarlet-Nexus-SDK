// BlueprintGeneratedClass BP_EventTitle.BP_EventTitle_C
// Size: 0x280 (Inherited: 0x230)
struct ABP_EventTitle_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	bool m_manaPreparing; // 0x240(0x01)
	bool m_manaPrepared; // 0x241(0x01)
	char pad_242[0x6]; // 0x242(0x06)
	struct UManaTexture* Sofdec2MovieTexture; // 0x248(0x08)
	bool m_movieAppiled; // 0x250(0x01)
	bool seeked; // 0x251(0x01)
	char pad_252[0x6]; // 0x252(0x06)
	struct ABP_MovieManager_C* MovieManager; // 0x258(0x08)
	struct URSManaComponent* manaComp; // 0x260(0x08)
	bool m_movieManagerHasLoadedMovie; // 0x268(0x01)
	bool WaitPlay; // 0x269(0x01)
	bool WaitPrepare; // 0x26a(0x01)
	bool Loop; // 0x26b(0x01)
	char pad_26C[0x4]; // 0x26c(0x04)
	struct ARSHUDBase* RSHUDBase; // 0x270(0x08)
	struct UDataTable* InitData; // 0x278(0x08)

	void StopMovie(); // Function BP_EventTitle.BP_EventTitle_C.StopMovie // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EditorStopMovie(); // Function BP_EventTitle.BP_EventTitle_C.EditorStopMovie // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MovieManagerLoadedMovie(bool Result); // Function BP_EventTitle.BP_EventTitle_C.MovieManagerLoadedMovie // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MovieManagerHasMovie(bool Result); // Function BP_EventTitle.BP_EventTitle_C.MovieManagerHasMovie // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void invisibleForManner(); // Function BP_EventTitle.BP_EventTitle_C.invisibleForManner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void prepareAlphaMovie(bool succeeded); // Function BP_EventTitle.BP_EventTitle_C.prepareAlphaMovie // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void clearPrepareFlags(); // Function BP_EventTitle.BP_EventTitle_C.clearPrepareFlags // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void playAlphaMovie(); // Function BP_EventTitle.BP_EventTitle_C.playAlphaMovie // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventTitle.BP_EventTitle_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EventTitle.BP_EventTitle_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void Start(); // Function BP_EventTitle.BP_EventTitle_C.Start // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Play(); // Function BP_EventTitle.BP_EventTitle_C.Play // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Prepare(); // Function BP_EventTitle.BP_EventTitle_C.Prepare // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EventTitle.BP_EventTitle_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void OnStatusChanged(manaComp)(enum class EManaComponentStatus Status, struct UManaComponent* ManaComponent); // Function BP_EventTitle.BP_EventTitle_C.OnStatusChanged(manaComp) // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void setupMovieManagerProperties(); // Function BP_EventTitle.BP_EventTitle_C.setupMovieManagerProperties // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Stop(); // Function BP_EventTitle.BP_EventTitle_C.Stop // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DrawMessage(int32_t windowType, struct FString messageLabel, bool skipable, float DrawSecond, bool IsVoiceOnlyMessage, bool isSkipVoiceEnd); // Function BP_EventTitle.BP_EventTitle_C.DrawMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadMessage(struct FString messageTableName, struct TSoftObjectPtr<UDataTable> DataTable); // Function BP_EventTitle.BP_EventTitle_C.LoadMessage // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnloadMessage(struct FString messageTableName); // Function BP_EventTitle.BP_EventTitle_C.UnloadMessage // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FadeOut(struct FLinearColor Color, bool isUnderCaption, float second); // Function BP_EventTitle.BP_EventTitle_C.FadeOut // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FadeIn(struct FLinearColor Color, bool isUnderCaption, float second); // Function BP_EventTitle.BP_EventTitle_C.FadeIn // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventTitle(int32_t EntryPoint); // Function BP_EventTitle.BP_EventTitle_C.ExecuteUbergraph_BP_EventTitle // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

