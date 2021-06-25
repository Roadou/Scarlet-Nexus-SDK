// BlueprintGeneratedClass BP_SeeThroughJustDodgeCutin.BP_SeeThroughJustDodgeCutin_C
// Size: 0x258 (Inherited: 0x230)
struct ABP_SeeThroughJustDodgeCutin_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	struct ABP_CutinManager_C* CutinManager; // 0x240(0x08)
	struct AActor* CutinCharacterClass; // 0x248(0x08)
	struct ABP_SeeThroughJustDodgeCutinCharacter_C* CutinCharacter; // 0x250(0x08)

	void IsPlayingCutin(bool bPlaying); // Function BP_SeeThroughJustDodgeCutin.BP_SeeThroughJustDodgeCutin_C.IsPlayingCutin // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Set Active Cutin Actor(bool Active); // Function BP_SeeThroughJustDodgeCutin.BP_SeeThroughJustDodgeCutin_C.Set Active Cutin Actor // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateInitialize(); // Function BP_SeeThroughJustDodgeCutin.BP_SeeThroughJustDodgeCutin_C.PrivateInitialize // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadAsset(); // Function BP_SeeThroughJustDodgeCutin.BP_SeeThroughJustDodgeCutin_C.LoadAsset // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_SeeThroughJustDodgeCutin.BP_SeeThroughJustDodgeCutin_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_SeeThroughJustDodgeCutin.BP_SeeThroughJustDodgeCutin_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnStartCutin(); // Function BP_SeeThroughJustDodgeCutin.BP_SeeThroughJustDodgeCutin_C.OnStartCutin // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Private_EndCutin(); // Function BP_SeeThroughJustDodgeCutin.BP_SeeThroughJustDodgeCutin_C.Private_EndCutin // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_SeeThroughJustDodgeCutin.BP_SeeThroughJustDodgeCutin_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_SeeThroughJustDodgeCutin(int32_t EntryPoint); // Function BP_SeeThroughJustDodgeCutin.BP_SeeThroughJustDodgeCutin_C.ExecuteUbergraph_BP_SeeThroughJustDodgeCutin // (Final|UbergraphFunction) // @ game+0x1685580
};

