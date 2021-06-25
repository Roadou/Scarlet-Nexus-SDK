// BlueprintGeneratedClass RSGameModeBPInterface.RSGameModeBPInterface_C
// Size: 0x28 (Inherited: 0x28)
struct URSGameModeBPInterface_C : UInterface {

	void IsInitializedDev(bool IsInitialized); // Function RSGameModeBPInterface.RSGameModeBPInterface_C.IsInitializedDev // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartGameForDebug(); // Function RSGameModeBPInterface.RSGameModeBPInterface_C.StartGameForDebug // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsGameFlowLevelBP(); // Function RSGameModeBPInterface.RSGameModeBPInterface_C.IsGameFlowLevelBP // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDevelopmentBP(bool IsDevelopment); // Function RSGameModeBPInterface.RSGameModeBPInterface_C.IsDevelopmentBP // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPlayerAndEnemyGravity(bool Enable); // Function RSGameModeBPInterface.RSGameModeBPInterface_C.SetPlayerAndEnemyGravity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsLV_MainPersistent(bool IsLV_MainPersistence); // Function RSGameModeBPInterface.RSGameModeBPInterface_C.IsLV_MainPersistent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPersistentLevel(struct UObject* Level, bool IsPersistenceLevel); // Function RSGameModeBPInterface.RSGameModeBPInterface_C.IsPersistentLevel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeEnemys(); // Function RSGameModeBPInterface.RSGameModeBPInterface_C.InitializeEnemys // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPlayersAll(struct TArray<struct ARSCharacterBase*> Players); // Function RSGameModeBPInterface.RSGameModeBPInterface_C.GetPlayersAll // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMainPlayerBP(struct ARSCharacterBase* Player); // Function RSGameModeBPInterface.RSGameModeBPInterface_C.GetMainPlayerBP // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetRightPlayerBP(struct ARSCharacterBase* Player); // Function RSGameModeBPInterface.RSGameModeBPInterface_C.GetRightPlayerBP // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetLeftPlayerBP(struct ARSCharacterBase* Player); // Function RSGameModeBPInterface.RSGameModeBPInterface_C.GetLeftPlayerBP // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnUnloadedLevel(struct UObject* UnloadedLevel); // Function RSGameModeBPInterface.RSGameModeBPInterface_C.OnUnloadedLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnLoadedLevel(struct UObject* LoadedLevel); // Function RSGameModeBPInterface.RSGameModeBPInterface_C.OnLoadedLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnLoadedLevelWithNoCheck(); // Function RSGameModeBPInterface.RSGameModeBPInterface_C.OnLoadedLevelWithNoCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

