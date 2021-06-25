// BlueprintGeneratedClass BP_UseItemComponent.BP_UseItemComponent_C
// Size: 0x130 (Inherited: 0xc0)
struct UBP_UseItemComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct ARSBattlePlayer_C* OwnerPlayer; // 0xc8(0x08)
	struct AHUDMainGame_C* HUDMainGame; // 0xd0(0x08)
	struct TArray<struct FItemDataCell> ItemDataList; // 0xd8(0x10)
	enum class EConsumeItemID ItemId; // 0xe8(0x01)
	bool bHelpPlayer; // 0xe9(0x01)
	char pad_EA[0x2]; // 0xea(0x02)
	float RecastTimeOld; // 0xec(0x04)
	bool bReviveNpc; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct TArray<struct FGameTimer> RecastTimerList; // 0xf8(0x10)
	enum class EConsumeItemID CurrentItemID; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct TArray<float> RecastTimeList; // 0x110(0x10)
	struct TArray<float> OriginalRecastTimeList; // 0x120(0x10)

	void GetItemID(enum class EConsumeItemID Item); // Function BP_UseItemComponent.BP_UseItemComponent_C.GetItemID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetCurrentItemID(); // Function BP_UseItemComponent.BP_UseItemComponent_C.SetCurrentItemID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetItemTypeNum(enum class EConsumeItemID itemIdIn, int32_t itemTypeNum); // Function BP_UseItemComponent.BP_UseItemComponent_C.GetItemTypeNum // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ResetRecastTime(); // Function BP_UseItemComponent.BP_UseItemComponent_C.ResetRecastTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsRecastItem(bool bRecast, enum class EConsumeItemID ItemId); // Function BP_UseItemComponent.BP_UseItemComponent_C.IsRecastItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void InitRecastTimeParameter(); // Function BP_UseItemComponent.BP_UseItemComponent_C.InitRecastTimeParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateRecastTimer(); // Function BP_UseItemComponent.BP_UseItemComponent_C.UpdateRecastTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRecastTimer(); // Function BP_UseItemComponent.BP_UseItemComponent_C.SetRecastTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetItemName(enum class EConsumeItemID item id in, struct FName Name); // Function BP_UseItemComponent.BP_UseItemComponent_C.GetItemName // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetItemDefenceValue(enum class EConsumeItemID item id in, float Value); // Function BP_UseItemComponent.BP_UseItemComponent_C.GetItemDefenceValue // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetItemVitalityValue(enum class EConsumeItemID item id in, float Value); // Function BP_UseItemComponent.BP_UseItemComponent_C.GetItemVitalityValue // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetItemPsychicValue(enum class EConsumeItemID item id in, float Value); // Function BP_UseItemComponent.BP_UseItemComponent_C.GetItemPsychicValue // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetItemAttackValue(enum class EConsumeItemID item id in, float Value); // Function BP_UseItemComponent.BP_UseItemComponent_C.GetItemAttackValue // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetItemData(enum class EConsumeItemID item id in, bool bFound, struct FItemDataCell item data); // Function BP_UseItemComponent.BP_UseItemComponent_C.GetItemData // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NpcItemCancelCheck(struct ARSBattlePlayer_C* TargetPlayer); // Function BP_UseItemComponent.BP_UseItemComponent_C.NpcItemCancelCheck // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetItemTargetList(struct TArray<struct ARSBattlePlayer_C*> TargetList); // Function BP_UseItemComponent.BP_UseItemComponent_C.GetItemTargetList // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnItemEffectParticle(struct USkeletalMeshComponent* TargetMesh); // Function BP_UseItemComponent.BP_UseItemComponent_C.SpawnItemEffectParticle // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnItemUseParticle(bool bAttach, struct FName SocketName, bool bRevive); // Function BP_UseItemComponent.BP_UseItemComponent_C.SpawnItemUseParticle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetItemID(enum class EConsumeItemID InItemId, bool bInHelpPlayer, bool bInReviveNpc); // Function BP_UseItemComponent.BP_UseItemComponent_C.SetItemID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ItemApply(bool bRevive); // Function BP_UseItemComponent.BP_UseItemComponent_C.ItemApply // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_UseItemComponent.BP_UseItemComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_UseItemComponent.BP_UseItemComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_UseItemComponent(int32_t EntryPoint); // Function BP_UseItemComponent.BP_UseItemComponent_C.ExecuteUbergraph_BP_UseItemComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

