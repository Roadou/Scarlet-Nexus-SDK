// BlueprintGeneratedClass BP_SequencerComponent.BP_SequencerComponent_C
// Size: 0x253 (Inherited: 0xc0)
struct UBP_SequencerComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct ARSLevelSequenceActor* SequencerActor; // 0xc8(0x08)
	struct TArray<struct FCharactersSequencerData> SequencerDataList; // 0xd0(0x10)
	struct TArray<struct ARSBattlePlayer_C*> PlayerList; // 0xe0(0x10)
	struct TArray<struct ARSCharacterBase*> enemyList; // 0xf0(0x10)
	struct TArray<bool> PlayerHiddenList; // 0x100(0x10)
	struct TArray<bool> EnemyHiddenList; // 0x110(0x10)
	bool bCurrentPos; // 0x120(0x01)
	bool bUIDisplayOff; // 0x121(0x01)
	bool bPlayerDisplayOff; // 0x122(0x01)
	bool bEnemyDisplayOff; // 0x123(0x01)
	bool bPsyObjDisplayOff; // 0x124(0x01)
	bool bFadeStartOut; // 0x125(0x01)
	bool bFadeStartIn; // 0x126(0x01)
	bool bFadeEndOut; // 0x127(0x01)
	bool bFadeEndIn; // 0x128(0x01)
	bool bPlayerEvent; // 0x129(0x01)
	bool bEnemyEvent; // 0x12a(0x01)
	bool bPlaying; // 0x12b(0x01)
	int32_t SequencerIndex; // 0x12c(0x04)
	struct FCharactersSequencerData SequencerData; // 0x130(0x98)
	int32_t PlayIndex; // 0x1c8(0x04)
	bool bFadeProc; // 0x1cc(0x01)
	bool bFadeStartProc; // 0x1cd(0x01)
	bool bFadeOutProc; // 0x1ce(0x01)
	bool bSequencerProc; // 0x1cf(0x01)
	struct AActor* RootActor; // 0x1d0(0x08)
	char pad_1D8[0x8]; // 0x1d8(0x08)
	struct FTransform RootTransform; // 0x1e0(0x30)
	struct FTransform CurrentPos; // 0x210(0x30)
	struct TArray<enum class EPlayerActionKind> PlayerActionKindList; // 0x240(0x10)
	bool bPartyBind; // 0x250(0x01)
	bool bNormalEnd; // 0x251(0x01)
	bool bAfterEventState; // 0x252(0x01)

	void PlayerDynamicEventStart(struct ARSBattlePlayer_C* RSPlayer, bool dummy); // Function BP_SequencerComponent.BP_SequencerComponent_C.PlayerDynamicEventStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CharacterDynamicEventEnd(struct ARSCharacterBase* RSCharacter, bool dummy); // Function BP_SequencerComponent.BP_SequencerComponent_C.CharacterDynamicEventEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindCineCamera(bool dummy); // Function BP_SequencerComponent.BP_SequencerComponent_C.BindCineCamera // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindActor(struct FText ObjName, struct AActor* BindActor, bool dummy); // Function BP_SequencerComponent.BP_SequencerComponent_C.BindActor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetRootActorBindingID(struct FMovieSceneObjectBindingID binding id); // Function BP_SequencerComponent.BP_SequencerComponent_C.GetRootActorBindingID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetEnemyList(struct TArray<struct ARSCharacterBase*> enemyList); // Function BP_SequencerComponent.BP_SequencerComponent_C.GetEnemyList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPlayerList(struct TArray<struct ARSBattlePlayer_C*> player list); // Function BP_SequencerComponent.BP_SequencerComponent_C.GetPlayerList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlaySequencer(bool return); // Function BP_SequencerComponent.BP_SequencerComponent_C.PlaySequencer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetOption(bool start in); // Function BP_SequencerComponent.BP_SequencerComponent_C.SetOption // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetFade(bool fade start in, bool fade out in); // Function BP_SequencerComponent.BP_SequencerComponent_C.SetFade // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateSequencer(struct FCharactersSequencerData seq data in); // Function BP_SequencerComponent.BP_SequencerComponent_C.CreateSequencer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndSequencer(int32_t SequencerIndex, bool dummy); // Function BP_SequencerComponent.BP_SequencerComponent_C.EndSequencer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartSequnecer(int32_t index in, bool dummy); // Function BP_SequencerComponent.BP_SequencerComponent_C.StartSequnecer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Finalize(bool dummy); // Function BP_SequencerComponent.BP_SequencerComponent_C.Finalize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(bool dummy); // Function BP_SequencerComponent.BP_SequencerComponent_C.Update // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(bool dummy); // Function BP_SequencerComponent.BP_SequencerComponent_C.Initialize // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_SequencerComponent.BP_SequencerComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_SequencerComponent(int32_t EntryPoint); // Function BP_SequencerComponent.BP_SequencerComponent_C.ExecuteUbergraph_BP_SequencerComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

