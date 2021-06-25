// BlueprintGeneratedClass RSGameInstanceBP.RSGameInstanceBP_C
// Size: 0x423 (Inherited: 0x418)
struct URSGameInstanceBP_C : URSGameInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x418(0x08)
	bool bCreated; // 0x420(0x01)
	bool IsGameFlowLevel; // 0x421(0x01)
	bool bInitializedDev; // 0x422(0x01)

	void SetUpMouseEvent(); // Function RSGameInstanceBP.RSGameInstanceBP_C.SetUpMouseEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeGameFlowLevel(); // Function RSGameInstanceBP.RSGameInstanceBP_C.InitializeGameFlowLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DestroySystemBP(); // Function RSGameInstanceBP.RSGameInstanceBP_C.DestroySystemBP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateSystemGameManagerBP(); // Function RSGameInstanceBP.RSGameInstanceBP_C.CreateSystemGameManagerBP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateResidentManagersBP(); // Function RSGameInstanceBP.RSGameInstanceBP_C.CreateResidentManagersBP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateGameManagersBP(); // Function RSGameInstanceBP.RSGameInstanceBP_C.CreateGameManagersBP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DestroyResidentManagersBP(); // Function RSGameInstanceBP.RSGameInstanceBP_C.DestroyResidentManagersBP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DestroyGameManagersBP(); // Function RSGameInstanceBP.RSGameInstanceBP_C.DestroyGameManagersBP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartInGameBP(); // Function RSGameInstanceBP.RSGameInstanceBP_C.StartInGameBP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateSystemBP(); // Function RSGameInstanceBP.RSGameInstanceBP_C.CreateSystemBP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartGameFlow(); // Function RSGameInstanceBP.RSGameInstanceBP_C.StartGameFlow // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetRenderTarget(); // Function RSGameInstanceBP.RSGameInstanceBP_C.ResetRenderTarget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_RSGameInstanceBP(int32_t EntryPoint); // Function RSGameInstanceBP.RSGameInstanceBP_C.ExecuteUbergraph_RSGameInstanceBP // (Final|UbergraphFunction) // @ game+0x1685580
};

