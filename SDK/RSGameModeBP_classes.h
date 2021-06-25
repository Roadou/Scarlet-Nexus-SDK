// BlueprintGeneratedClass RSGameModeBP.RSGameModeBP_C
// Size: 0x399 (Inherited: 0x338)
struct ARSGameModeBP_C : ARSGameMode {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x340(0x08)
	struct TArray<struct TSoftClassPtr<UObject>> MainPlayerClasses; // 0x348(0x10)
	struct TArray<struct TSoftClassPtr<UObject>> LeftPlayerClasses; // 0x358(0x10)
	struct TArray<struct TSoftClassPtr<UObject>> RightPlayerClasses; // 0x368(0x10)
	struct ARSBattleCharacter_C* BossCharacter; // 0x378(0x08)
	struct ABP_Fade_C* Fader; // 0x380(0x08)
	struct TArray<struct ARSCharacterBase*> lEnemyList; // 0x388(0x10)
	bool bInitializedDev; // 0x398(0x01)

	void IsInitializedDev(bool IsInitialized); // Function RSGameModeBP.RSGameModeBP_C.IsInitializedDev // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsGameFlowLevelBP(); // Function RSGameModeBP.RSGameModeBP_C.IsGameFlowLevelBP // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDevelopmentBP(bool IsDevelopment); // Function RSGameModeBP.RSGameModeBP_C.IsDevelopmentBP // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsLV_MainPersistent(bool IsLV_MainPersistence); // Function RSGameModeBP.RSGameModeBP_C.IsLV_MainPersistent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPersistentLevel(struct UObject* Level, bool IsPersistenceLevel); // Function RSGameModeBP.RSGameModeBP_C.IsPersistentLevel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPlayersAll(struct TArray<struct ARSCharacterBase*> Players); // Function RSGameModeBP.RSGameModeBP_C.GetPlayersAll // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMainPlayerBP(struct ARSCharacterBase* Player); // Function RSGameModeBP.RSGameModeBP_C.GetMainPlayerBP // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetRightPlayerBP(struct ARSCharacterBase* Player); // Function RSGameModeBP.RSGameModeBP_C.GetRightPlayerBP // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetLeftPlayerBP(struct ARSCharacterBase* Player); // Function RSGameModeBP.RSGameModeBP_C.GetLeftPlayerBP // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetFader(struct ABP_Fade_C* Fader); // Function RSGameModeBP.RSGameModeBP_C.GetFader // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FindRivalTeamCharas(struct TArray<struct ARSBattleCharacter_C*> Enemys); // Function RSGameModeBP.RSGameModeBP_C.FindRivalTeamCharas // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SwapBossControll(); // Function RSGameModeBP.RSGameModeBP_C.SwapBossControll // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnBossChara(struct FTransform SpawnTransform, struct ARSBattleCharacter_C* BossClass); // Function RSGameModeBP.RSGameModeBP_C.SpawnBossChara // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IndexToPartyPlayerKind(int32_t Index, enum class RSPartyPlayerKind kind); // Function RSGameModeBP.RSGameModeBP_C.IndexToPartyPlayerKind // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void MakeArrayBaseToPlayer(struct TArray<struct ARSCharacterBase*> Bases, struct TArray<struct ARSBattlePlayer_C*> Players); // Function RSGameModeBP.RSGameModeBP_C.MakeArrayBaseToPlayer // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void MakeArrayPlayerToBase(struct TArray<struct ARSBattlePlayer_C*> Players, struct TArray<struct ARSCharacterBase*> Bases); // Function RSGameModeBP.RSGameModeBP_C.MakeArrayPlayerToBase // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void StartGameForDebug(); // Function RSGameModeBP.RSGameModeBP_C.StartGameForDebug // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeEnemys(); // Function RSGameModeBP.RSGameModeBP_C.InitializeEnemys // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPlayerAndEnemyGravity(bool Enable); // Function RSGameModeBP.RSGameModeBP_C.SetPlayerAndEnemyGravity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function RSGameModeBP.RSGameModeBP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void HandleStartingNewPlayer(struct APlayerController* NewPlayer); // Function RSGameModeBP.RSGameModeBP_C.HandleStartingNewPlayer // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnPostInitGame(struct FString currentLevelName); // Function RSGameModeBP.RSGameModeBP_C.OnPostInitGame // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPreStartPlay(struct FString currentLevelName); // Function RSGameModeBP.RSGameModeBP_C.OnPreStartPlay // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnLoadedLevelWithNoCheck(); // Function RSGameModeBP.RSGameModeBP_C.OnLoadedLevelWithNoCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnLoadedLevel(struct UObject* LoadedLevel); // Function RSGameModeBP.RSGameModeBP_C.OnLoadedLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnUnloadedLevel(struct UObject* UnloadedLevel); // Function RSGameModeBP.RSGameModeBP_C.OnUnloadedLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_RSGameModeBP(int32_t EntryPoint); // Function RSGameModeBP.RSGameModeBP_C.ExecuteUbergraph_RSGameModeBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

