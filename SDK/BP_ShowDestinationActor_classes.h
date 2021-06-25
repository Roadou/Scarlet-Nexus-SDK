// BlueprintGeneratedClass BP_ShowDestinationActor.BP_ShowDestinationActor_C
// Size: 0x2a5 (Inherited: 0x230)
struct ABP_ShowDestinationActor_C : AShowDestinationActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBoxComponent* ShowBoxComponent; // 0x238(0x08)
	struct UCapsuleComponent* Capsule; // 0x240(0x08)
	enum class EEventEnableCheckType CheckType; // 0x248(0x01)
	char pad_249[0x3]; // 0x249(0x03)
	int32_t ProgressId; // 0x24c(0x04)
	int32_t UpperLimitProgressID; // 0x250(0x04)
	char pad_254[0x4]; // 0x254(0x04)
	struct TArray<struct FFScenarioFlagCheckData> CheckScenarioFlagList; // 0x258(0x10)
	struct AActionIcon* ActionIconActor; // 0x268(0x08)
	struct AActionIcon* ActionIconActorSub; // 0x270(0x08)
	bool IsVisible; // 0x278(0x01)
	char pad_279[0x3]; // 0x279(0x03)
	struct FVector WorldPositionOffset; // 0x27c(0x0c)
	struct TArray<struct FShowDestinationDBDataCell> ShowDesCheckList; // 0x288(0x10)
	enum class EActionIconType actionIconType; // 0x298(0x01)
	char pad_299[0x3]; // 0x299(0x03)
	struct FName SubQuestID; // 0x29c(0x08)
	bool ActionIconEnable; // 0x2a4(0x01)

	void CheckEnableDestinationTownPeople(bool ReturnIsEnableDestinationTownPeople); // Function BP_ShowDestinationActor.BP_ShowDestinationActor_C.CheckEnableDestinationTownPeople // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateActionIcon(struct TArray<int32_t> clearArray); // Function BP_ShowDestinationActor.BP_ShowDestinationActor_C.CreateActionIcon // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckShowDestination2(enum class QuestType QuestType, struct FName questId, enum class EEventEnableCheckType CheckType, int32_t ProgressId, int32_t UpperLimitProgressID, struct TArray<struct FFScenarioFlagCheckData> ScenarioFlagArray, bool ReturnBool); // Function BP_ShowDestinationActor.BP_ShowDestinationActor_C.CheckShowDestination2 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckShowDestinationList2(struct TArray<int32_t> ReturnInt); // Function BP_ShowDestinationActor.BP_ShowDestinationActor_C.CheckShowDestinationList2 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OffVisibleShowIcon(); // Function BP_ShowDestinationActor.BP_ShowDestinationActor_C.OffVisibleShowIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckShowDestination_old(enum class ShowDestinationCheckType CheckType, int32_t ProgressId, int32_t UpperLimitProgressID, struct TArray<struct FFScenarioFlagCheckData> ScenarioFlagArray, int32_t MinBondsProgressID, int32_t MaxBondsProgressID, enum class EPlayerID heroID, enum class EPlayerID partnerId, bool ReturnBool); // Function BP_ShowDestinationActor.BP_ShowDestinationActor_C.CheckShowDestination_old // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckShowDestinationList_Old(bool ReturnBool); // Function BP_ShowDestinationActor.BP_ShowDestinationActor_C.CheckShowDestinationList_Old // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_ShowDestinationActor.BP_ShowDestinationActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_ShowDestinationActor.BP_ShowDestinationActor_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_ShowDestinationActor.BP_ShowDestinationActor_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void EventShowDestinationCheck(); // Function BP_ShowDestinationActor.BP_ShowDestinationActor_C.EventShowDestinationCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeSubQuestIcon(enum class EUINoticeMessageCallType senderType, struct FName datatableId); // Function BP_ShowDestinationActor.BP_ShowDestinationActor_C.ChangeSubQuestIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeActiveSubQuest(struct FName datatableId); // Function BP_ShowDestinationActor.BP_ShowDestinationActor_C.ChangeActiveSubQuest // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnChangeBondsProgress(enum class EPlayerID TargetID, float bondsProgress); // Function BP_ShowDestinationActor.BP_ShowDestinationActor_C.OnChangeBondsProgress // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_ShowDestinationActor(int32_t EntryPoint); // Function BP_ShowDestinationActor.BP_ShowDestinationActor_C.ExecuteUbergraph_BP_ShowDestinationActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

