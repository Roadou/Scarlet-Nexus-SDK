// BlueprintGeneratedClass BP_SequencerMovieManagerController.BP_SequencerMovieManagerController_C
// Size: 0x260 (Inherited: 0x240)
struct ABP_SequencerMovieManagerController_C : ASequencerMovieManagerController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	struct ABP_MovieManager_C* MovieManager; // 0x250(0x08)
	bool IsPlayed; // 0x258(0x01)
	char pad_259[0x3]; // 0x259(0x03)
	float MovieAlphaRate; // 0x25c(0x04)

	void GetMovieTexture(int32_t MovieTextureIndex, struct UManaTexture* movieTexture); // Function BP_SequencerMovieManagerController.BP_SequencerMovieManagerController_C.GetMovieTexture // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void EventPlayMovie(int32_t MovieTextureIndex); // Function BP_SequencerMovieManagerController.BP_SequencerMovieManagerController_C.EventPlayMovie // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_SequencerMovieManagerController.BP_SequencerMovieManagerController_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void EventStopMovie(); // Function BP_SequencerMovieManagerController.BP_SequencerMovieManagerController_C.EventStopMovie // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_SequencerMovieManagerController.BP_SequencerMovieManagerController_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_SequencerMovieManagerController.BP_SequencerMovieManagerController_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_SequencerMovieManagerController(int32_t EntryPoint); // Function BP_SequencerMovieManagerController.BP_SequencerMovieManagerController_C.ExecuteUbergraph_BP_SequencerMovieManagerController // (Final|UbergraphFunction) // @ game+0x1685580
};

