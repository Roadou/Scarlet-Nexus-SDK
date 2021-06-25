// BlueprintGeneratedClass BP_MatchIDWidgetActor.BP_MatchIDWidgetActor_C
// Size: 0x249 (Inherited: 0x230)
struct ABP_MatchIDWidgetActor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetComponent* Widget; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	bool IsUsedWidget; // 0x248(0x01)

	void SetHiddenInGameMatchIDWidget(bool NewHidden); // Function BP_MatchIDWidgetActor.BP_MatchIDWidgetActor_C.SetHiddenInGameMatchIDWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndMatchIDWidget(); // Function BP_MatchIDWidgetActor.BP_MatchIDWidgetActor_C.EndMatchIDWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartMatchIDWidget(struct FName CharaID, struct FName armyCodeMessageID, struct FVector Scale); // Function BP_MatchIDWidgetActor.BP_MatchIDWidgetActor_C.StartMatchIDWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_MatchIDWidgetActor.BP_MatchIDWidgetActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_MatchIDWidgetActor(int32_t EntryPoint); // Function BP_MatchIDWidgetActor.BP_MatchIDWidgetActor_C.ExecuteUbergraph_BP_MatchIDWidgetActor // (Final|UbergraphFunction) // @ game+0x1685580
};

