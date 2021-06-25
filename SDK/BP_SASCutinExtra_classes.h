// BlueprintGeneratedClass BP_SASCutinExtra.BP_SASCutinExtra_C
// Size: 0x251 (Inherited: 0x230)
struct ABP_SASCutinExtra_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	struct UDataTable* SASTable; // 0x240(0x08)
	struct ABP_CutinManager_C* CutinManager; // 0x248(0x08)
	bool CutinPaused; // 0x250(0x01)

	void PauseCutin(bool IsPause); // Function BP_SASCutinExtra.BP_SASCutinExtra_C.PauseCutin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Finalize(); // Function BP_SASCutinExtra.BP_SASCutinExtra_C.Finalize // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateGlobalDilation(); // Function BP_SASCutinExtra.BP_SASCutinExtra_C.UpdateGlobalDilation // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDilation(float Dilation); // Function BP_SASCutinExtra.BP_SASCutinExtra_C.SetDilation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPlaying(bool Playing); // Function BP_SASCutinExtra.BP_SASCutinExtra_C.IsPlaying // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartCutin(enum class ESASCutinExtraID SASExtraID); // Function BP_SASCutinExtra.BP_SASCutinExtra_C.StartCutin // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function BP_SASCutinExtra.BP_SASCutinExtra_C.Initialize // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_SASCutinExtra.BP_SASCutinExtra_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_SASCutinExtra.BP_SASCutinExtra_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_SASCutinExtra.BP_SASCutinExtra_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_SASCutinExtra(int32_t EntryPoint); // Function BP_SASCutinExtra.BP_SASCutinExtra_C.ExecuteUbergraph_BP_SASCutinExtra // (Final|UbergraphFunction) // @ game+0x1685580
};

