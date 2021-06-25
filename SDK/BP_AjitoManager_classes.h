// BlueprintGeneratedClass BP_AjitoManager.BP_AjitoManager_C
// Size: 0x5d0 (Inherited: 0x238)
struct ABP_AjitoManager_C : AAjitoManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	struct TMap<struct FString, struct FString> name3tofull; // 0x248(0x50)
	struct TArray<struct AActor*> SpawnedActors_old; // 0x298(0x10)
	struct TMap<struct FName, struct FAjitoArrangementPatternInfo> ArrangementPatternDataBase; // 0x2a8(0x50)
	struct TMap<enum class EPlayerID, struct ABP_AjitoMember_C*> AjitoMemberActorClassMap; // 0x2f8(0x50)
	struct TMap<struct FName, struct FAjitoArrangementPatternCondition> LotteryPatternConditions; // 0x348(0x50)
	struct TMap<struct FName, struct ABP_AjitoMember_C*> PlacedAjitoMemberList; // 0x398(0x50)
	struct FName DefaultPatternName; // 0x3e8(0x08)
	struct FName LastPatternName; // 0x3f0(0x08)
	struct TMap<enum class EPlayerID, struct ABP_AjitoPlacementManagerBase_C*> PlacementManagerMap; // 0x3f8(0x50)
	struct TMap<enum class EPlayerID, struct TSoftObjectPtr<UObject>> MemberLevels; // 0x448(0x50)
	struct TMap<struct FName, struct FAjitoArrangementMasterInfo> ArrangementMasterInfo; // 0x498(0x50)
	struct TMap<enum class EPlayerID, struct FS_AjitoCharaTable> AjitoCharaTableMap; // 0x4e8(0x50)
	struct TArray<struct ABP_AjitoMember_C*> SpawnedAjitoActor; // 0x538(0x10)
	struct TArray<struct FName> LotteryAvailablePatternNames; // 0x548(0x10)
	enum class EPlayerID PresentChrTo; // 0x558(0x01)
	enum class EPlayerID PresentChrFrom; // 0x559(0x01)
	char pad_55A[0x2]; // 0x55a(0x02)
	struct FName PresentItemName; // 0x55c(0x08)
	char pad_564[0x4]; // 0x564(0x04)
	struct TMap<struct FName, struct FAjitoUniqueIconOffset> UniqueIconOffset; // 0x568(0x50)
	struct TArray<struct AActor*> ActionHideActors; // 0x5b8(0x10)
	struct FName LastPresentId; // 0x5c8(0x08)

	void IsClearScenario(enum class EPlayerID playerId, bool Cleared); // Function BP_AjitoManager.BP_AjitoManager_C.IsClearScenario // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void PostPresentAccompanyKizunaLvUp(enum class EPlayerID PresentCharaFrom, enum class EPlayerID PresentCharaTo, struct FName PresentItemName, struct FName RowName); // Function BP_AjitoManager.BP_AjitoManager_C.PostPresentAccompanyKizunaLvUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Set Member Interfere Actor Visible(struct FName RowName); // Function BP_AjitoManager.BP_AjitoManager_C.Set Member Interfere Actor Visible // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPresentNeedResetPlayerPos(bool NeedReset); // Function BP_AjitoManager.BP_AjitoManager_C.IsPresentNeedResetPlayerPos // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ResetActionHideActors(); // Function BP_AjitoManager.BP_AjitoManager_C.ResetActionHideActors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddActionHideActors(struct TArray<struct AActor*> HideActor); // Function BP_AjitoManager.BP_AjitoManager_C.AddActionHideActors // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddActionHideActor(struct AActor* HideActor); // Function BP_AjitoManager.BP_AjitoManager_C.AddActionHideActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadIconUniqueOffset(); // Function BP_AjitoManager.BP_AjitoManager_C.LoadIconUniqueOffset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckItemPresented(enum class EPlayerID TargetChr, struct FName PresentID, bool Presented); // Function BP_AjitoManager.BP_AjitoManager_C.CheckItemPresented // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateMemberEquip(); // Function BP_AjitoManager.BP_AjitoManager_C.UpdateMemberEquip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RequestSetPatternMemberAfterPresent(bool PatternChanged); // Function BP_AjitoManager.BP_AjitoManager_C.RequestSetPatternMemberAfterPresent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Set Present Item(enum class EPlayerID PresentChrFrom, enum class EPlayerID PresentChrTo, struct FName PresentItemName); // Function BP_AjitoManager.BP_AjitoManager_C.Set Present Item // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPresentPatternInfo(bool Exist, struct FAjitoArrangementPatternInfo Pattern, struct FName patternName); // Function BP_AjitoManager.BP_AjitoManager_C.GetPresentPatternInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Reset Present Item(); // Function BP_AjitoManager.BP_AjitoManager_C.Reset Present Item // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Debug_ResetAll(); // Function BP_AjitoManager.BP_AjitoManager_C.Debug_ResetAll // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPlacementManager(enum class EPlayerID playerId, struct ABP_AjitoPlacementManagerBase_C* PlacementManager, bool found); // Function BP_AjitoManager.BP_AjitoManager_C.GetPlacementManager // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAjitoMemberActionSystemInitializeCallback(enum class EPlayerID playerId, struct FName AttachmentActorName); // Function BP_AjitoManager.BP_AjitoManager_C.OnAjitoMemberActionSystemInitializeCallback // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsMemberPlacementShouldVisible(enum class EPlayerID playerId, bool ShouldVisible); // Function BP_AjitoManager.BP_AjitoManager_C.IsMemberPlacementShouldVisible // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CheckExistPlayer(enum class EPlayerID playerId, bool bExist); // Function BP_AjitoManager.BP_AjitoManager_C.CheckExistPlayer // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Debug_EventManagerEnd(); // Function BP_AjitoManager.BP_AjitoManager_C.Debug_EventManagerEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Debug_EventManagerStart(); // Function BP_AjitoManager.BP_AjitoManager_C.Debug_EventManagerStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetLotteryAvailablePatternNames(struct TArray<struct FName> Names); // Function BP_AjitoManager.BP_AjitoManager_C.GetLotteryAvailablePatternNames // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsRelaxingMemberInAjito(enum class EPlayerID TargetPlayerId, bool Force, bool Relaxing); // Function BP_AjitoManager.BP_AjitoManager_C.IsRelaxingMemberInAjito // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TestSpawnAjitoMember(); // Function BP_AjitoManager.BP_AjitoManager_C.TestSpawnAjitoMember // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TestFormat(); // Function BP_AjitoManager.BP_AjitoManager_C.TestFormat // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadArrangementMasterInfo(); // Function BP_AjitoManager.BP_AjitoManager_C.LoadArrangementMasterInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnAjitoMember(struct FName ActionKey, struct ABP_AjitoMember_C* Actor); // Function BP_AjitoManager.BP_AjitoManager_C.SpawnAjitoMember // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Reset(); // Function BP_AjitoManager.BP_AjitoManager_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPlacementLevelVisiblePIE(enum class EPlayerID playerId, bool Visible); // Function BP_AjitoManager.BP_AjitoManager_C.SetPlacementLevelVisiblePIE // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPlacementItemName(enum class EPlayerID playerId, struct FName ItemId, struct TArray<struct FString> ItemActorName, struct TArray<struct FString> HiddenItemActorName); // Function BP_AjitoManager.BP_AjitoManager_C.GetPlacementItemName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPlacementPlayerIdList(struct TArray<enum class EPlayerID> PlacementPlayerIdList); // Function BP_AjitoManager.BP_AjitoManager_C.GetPlacementPlayerIdList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetItemList(enum class EPlayerID playerId, struct TArray<struct FName> ItemNameList); // Function BP_AjitoManager.BP_AjitoManager_C.GetItemList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool EventManagerEnd(bool RestoreEnableTick, bool RestoreVisibility); // Function BP_AjitoManager.BP_AjitoManager_C.EventManagerEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool EventManagerStart(bool EnableTick, bool Visibility); // Function BP_AjitoManager.BP_AjitoManager_C.EventManagerStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RequestVisiblePersonalLevelAndItems(); // Function BP_AjitoManager.BP_AjitoManager_C.RequestVisiblePersonalLevelAndItems // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPlacementLevelVisible(enum class EPlayerID playerId, bool Visible); // Function BP_AjitoManager.BP_AjitoManager_C.SetPlacementLevelVisible // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RequestResetSamePatternMemberVisible(); // Function BP_AjitoManager.BP_AjitoManager_C.RequestResetSamePatternMemberVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RequestSetPatternMemberVisibleLottery(); // Function BP_AjitoManager.BP_AjitoManager_C.RequestSetPatternMemberVisibleLottery // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPatternMemberVisibleLottery(); // Function BP_AjitoManager.BP_AjitoManager_C.SetPatternMemberVisibleLottery // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPatternMemberVisibleByName(struct FName patternName, bool Force); // Function BP_AjitoManager.BP_AjitoManager_C.SetPatternMemberVisibleByName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAnimationName(struct FName ActionName, struct FString AnimID); // Function BP_AjitoManager.BP_AjitoManager_C.GetAnimationName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetAllMemberUnvisible(); // Function BP_AjitoManager.BP_AjitoManager_C.SetAllMemberUnvisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPlacedMember(enum class EPlayerID playerId, struct FName ActionName, struct ABP_AjitoMember_C* Actor); // Function BP_AjitoManager.BP_AjitoManager_C.GetPlacedMember // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPlacedAjitoMemberID(enum class EPlayerID playerId, struct FName ActionName, struct FName AjitoMemberID); // Function BP_AjitoManager.BP_AjitoManager_C.GetPlacedAjitoMemberID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetPlacedAllAjitoMembers(); // Function BP_AjitoManager.BP_AjitoManager_C.GetPlacedAllAjitoMembers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Set Pattern Member Visible Internal(struct FAjitoArrangementPatternInfo Pattern, struct FName PatternKey, bool Force); // Function BP_AjitoManager.BP_AjitoManager_C.Set Pattern Member Visible Internal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetWinLottery(struct TMap<struct FName, struct FS_AjitoLotteryTable> lotteryTable, int32_t LotteryMax, struct FName tablaName); // Function BP_AjitoManager.BP_AjitoManager_C.GetWinLottery // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckProgressIdPeriods(struct TArray<struct FAjitoArrangementPatternInfoProgress> ProgressPeriods, bool OK); // Function BP_AjitoManager.BP_AjitoManager_C.CheckProgressIdPeriods // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckPatternPresentItem(struct FName ItemName, struct TArray<enum class EPlayerID> TargetChr, bool OK); // Function BP_AjitoManager.BP_AjitoManager_C.CheckPatternPresentItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAllMemberInParty(struct TArray<enum class EPlayerID> PlayerIDs, bool OK); // Function BP_AjitoManager.BP_AjitoManager_C.IsAllMemberInParty // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadArrangementPatternData(); // Function BP_AjitoManager.BP_AjitoManager_C.LoadArrangementPatternData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetProgressID(); // Function BP_AjitoManager.BP_AjitoManager_C.GetProgressID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetLotteryMemberPattern(struct FAjitoArrangementPatternInfo Pattern, struct FName patternName); // Function BP_AjitoManager.BP_AjitoManager_C.GetLotteryMemberPattern // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadAjitoCharacterTable(); // Function BP_AjitoManager.BP_AjitoManager_C.LoadAjitoCharacterTable // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadLotteryData(); // Function BP_AjitoManager.BP_AjitoManager_C.LoadLotteryData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetArrangementInfo(struct FName MasterKey, struct FAjitoArrangementMasterInfo ArrangementInfo); // Function BP_AjitoManager.BP_AjitoManager_C.GetArrangementInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function BP_AjitoManager.BP_AjitoManager_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCharacterActorClass(enum class EPlayerID playerId, struct ABP_AjitoMember_C* AjitoMemberActorClass); // Function BP_AjitoManager.BP_AjitoManager_C.GetCharacterActorClass // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void _SpawnMemberFromMemberInfo(struct FAjitoArrangementMasterInfo MasterInfo, bool PIE); // Function BP_AjitoManager.BP_AjitoManager_C._SpawnMemberFromMemberInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FAjitoArrangementMasterInfo GetPlaceCandicateToMemberInfo(struct FName PlaceCandicateName); // Function BP_AjitoManager.BP_AjitoManager_C.GetPlaceCandicateToMemberInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FAjitoArrangementMasterInfo VisibleDummyMember(struct FName PlaceCandicateName); // Function BP_AjitoManager.BP_AjitoManager_C.VisibleDummyMember // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnDummyMember(struct FString CharaRoma, struct FString Action); // Function BP_AjitoManager.BP_AjitoManager_C.SpawnDummyMember // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void VisibleAtLevelActor(struct FAjitoArrangementMasterInfo ArrangementInfo); // Function BP_AjitoManager.BP_AjitoManager_C.VisibleAtLevelActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void _SetVisibleAllAtLevelActors_Deprecated(bool Visibility); // Function BP_AjitoManager.BP_AjitoManager_C._SetVisibleAllAtLevelActors_Deprecated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetArrangementPatternInfo(struct FName patternName, struct FAjitoArrangementPatternInfo PatternInfo); // Function BP_AjitoManager.BP_AjitoManager_C.GetArrangementPatternInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DestroyAllSpawnedAjitoMember(); // Function BP_AjitoManager.BP_AjitoManager_C.DestroyAllSpawnedAjitoMember // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHoodAjitoNpc(struct AActor* Actor); // Function BP_AjitoManager.BP_AjitoManager_C.SetHoodAjitoNpc // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_AjitoManager.BP_AjitoManager_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_AjitoManager.BP_AjitoManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void DelayActorUpdate(struct ASkeletalMeshActor* NewParam); // Function BP_AjitoManager.BP_AjitoManager_C.DelayActorUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_AjitoManager.BP_AjitoManager_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void InitializeAtScene(); // Function BP_AjitoManager.BP_AjitoManager_C.InitializeAtScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_AjitoManager(int32_t EntryPoint); // Function BP_AjitoManager.BP_AjitoManager_C.ExecuteUbergraph_BP_AjitoManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

