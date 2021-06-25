// BlueprintGeneratedClass BP_TitleMaterialController.BP_TitleMaterialController_C
// Size: 0x280 (Inherited: 0x230)
struct ABP_TitleMaterialController_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	struct ARSLevelSequenceActor* Sequencer0100; // 0x240(0x08)
	struct ARSLevelSequenceActor* Sequencer0200; // 0x248(0x08)
	float SelectedDelaySeconds; // 0x250(0x04)
	float SelectedFadeOutSeconds; // 0x254(0x04)
	bool Selected0100; // 0x258(0x01)
	bool Selected0200; // 0x259(0x01)
	bool InFadeOut; // 0x25a(0x01)
	char pad_25B[0x1]; // 0x25b(0x01)
	float FadeOutTime; // 0x25c(0x04)
	struct FLinearColor FadeStartPlayer1; // 0x260(0x10)
	struct FLinearColor FadeStartPlayer2; // 0x270(0x10)

	void UpdateFadeOut(float DeltaSeconds); // Function BP_TitleMaterialController.BP_TitleMaterialController_C.UpdateFadeOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventDisableMaterial(); // Function BP_TitleMaterialController.BP_TitleMaterialController_C.EventDisableMaterial // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void disable(); // Function BP_TitleMaterialController.BP_TitleMaterialController_C.disable // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeInternal(struct AActor* ControlActor, struct ARSLevelSequenceActor* Sequencer, struct ULevelSequence* LevelSequence); // Function BP_TitleMaterialController.BP_TitleMaterialController_C.InitializeInternal // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SelectCh0200(); // Function BP_TitleMaterialController.BP_TitleMaterialController_C.SelectCh0200 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SelectCh0100(); // Function BP_TitleMaterialController.BP_TitleMaterialController_C.SelectCh0100 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(struct AActor* ch0100, struct AActor* ch0200); // Function BP_TitleMaterialController.BP_TitleMaterialController_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_TitleMaterialController.BP_TitleMaterialController_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_TitleMaterialController(int32_t EntryPoint); // Function BP_TitleMaterialController.BP_TitleMaterialController_C.ExecuteUbergraph_BP_TitleMaterialController // (Final|UbergraphFunction) // @ game+0x1685580
};

