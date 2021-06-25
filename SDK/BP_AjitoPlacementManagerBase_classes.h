// BlueprintGeneratedClass BP_AjitoPlacementManagerBase.BP_AjitoPlacementManagerBase_C
// Size: 0x2b0 (Inherited: 0x248)
struct ABP_AjitoPlacementManagerBase_C : AAjitoPlacementManager {
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	struct TMap<struct FName, struct FAjitoPlacementInfo> ActorInfoMap; // 0x250(0x50)
	int32_t NeedProgressId_Yuito; // 0x2a0(0x04)
	int32_t NeedProgressId_Kasane; // 0x2a4(0x04)
	int32_t NeedProgressId_YuitoEx; // 0x2a8(0x04)
	int32_t NeedProgressId_KasaneEx; // 0x2ac(0x04)

	void IsClearScenario(enum class EPlayerID playerId, bool Cleared); // Function BP_AjitoPlacementManagerBase.BP_AjitoPlacementManagerBase_C.IsClearScenario // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsItemPresentedForExternal(struct FName ItemName, bool Presented); // Function BP_AjitoPlacementManagerBase.BP_AjitoPlacementManagerBase_C.IsItemPresentedForExternal // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetActionUseItemVisible(struct FName ActionName, struct FName ItemName, bool Visible, enum class EPlayerID ActionPlayerId); // Function BP_AjitoPlacementManagerBase.BP_AjitoPlacementManagerBase_C.SetActionUseItemVisible // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPresentVisible(bool Visible, struct AActor* ItemActor, struct AActor* HideItemActor, struct FName HideItemTag, struct FName VisibleItemTag, bool UpdateVisibleTag); // Function BP_AjitoPlacementManagerBase.BP_AjitoPlacementManagerBase_C.SetPresentVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetActorVisibleAndCollision(struct AActor* Actor, bool Visible); // Function BP_AjitoPlacementManagerBase.BP_AjitoPlacementManagerBase_C.SetActorVisibleAndCollision // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAjitoActorVisible(struct AActor* Actor, bool Visible); // Function BP_AjitoPlacementManagerBase.BP_AjitoPlacementManagerBase_C.SetAjitoActorVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SplitTags(struct FString Tags, struct TArray<struct FString> TagArray1); // Function BP_AjitoPlacementManagerBase.BP_AjitoPlacementManagerBase_C.SplitTags // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TestTags(); // Function BP_AjitoPlacementManagerBase.BP_AjitoPlacementManagerBase_C.TestTags // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetVisibleActorWithTag(struct FName Tag, bool Visible); // Function BP_AjitoPlacementManagerBase.BP_AjitoPlacementManagerBase_C.SetVisibleActorWithTag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugGetActorInfoMap(struct TMap<struct FName, struct FAjitoPlacementInfo> ActorInfoMap, struct TArray<struct FAjitoPlacementInfo> ActorInfos); // Function BP_AjitoPlacementManagerBase.BP_AjitoPlacementManagerBase_C.DebugGetActorInfoMap // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MakeActorInfoMap(); // Function BP_AjitoPlacementManagerBase.BP_AjitoPlacementManagerBase_C.MakeActorInfoMap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetActorByItemName(struct FName ItemName, struct TArray<struct AActor*> Actor, struct TArray<struct AActor*> HiddenActor); // Function BP_AjitoPlacementManagerBase.BP_AjitoPlacementManagerBase_C.GetActorByItemName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetItemNameList(struct TArray<struct FName> ItemNames); // Function BP_AjitoPlacementManagerBase.BP_AjitoPlacementManagerBase_C.GetItemNameList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsItemPresented(struct TArray<struct FPresentInfoData> PresentInfos, struct FName ItemName, bool isAbsolute, bool Presented); // Function BP_AjitoPlacementManagerBase.BP_AjitoPlacementManagerBase_C.IsItemPresented // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAllItemVisible(bool Visible); // Function BP_AjitoPlacementManagerBase.BP_AjitoPlacementManagerBase_C.SetAllItemVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetItemVisible(struct FName ItemName, bool Visible); // Function BP_AjitoPlacementManagerBase.BP_AjitoPlacementManagerBase_C.SetItemVisible // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Reset Placement Presented Items(); // Function BP_AjitoPlacementManagerBase.BP_AjitoPlacementManagerBase_C.Reset Placement Presented Items // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

