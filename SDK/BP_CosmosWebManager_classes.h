// BlueprintGeneratedClass BP_CosmosWebManager.BP_CosmosWebManager_C
// Size: 0x738 (Inherited: 0x6c0)
struct ABP_CosmosWebManager_C : ACosmosWebManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6c0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x6c8(0x08)
	struct FString baseUrl; // 0x6d0(0x10)
	struct UWebApiConnect* WebApiConnect; // 0x6e0(0x08)
	int32_t RetryNum; // 0x6e8(0x04)
	char pad_6EC[0x4]; // 0x6ec(0x04)
	struct FTimerHandle TimerHandle; // 0x6f0(0x08)
	struct FString LoginUserID; // 0x6f8(0x10)
	int32_t psn ret; // 0x708(0x04)
	char pad_70C[0x4]; // 0x70c(0x04)
	struct TArray<struct FString> PlatformUserIDList; // 0x710(0x10)
	struct TArray<struct FCosmosUserConvertInfo> UserConvertInfoList; // 0x720(0x10)
	bool IsAborted; // 0x730(0x01)
	bool IsEnvInitializeComplete; // 0x731(0x01)
	char pad_732[0x2]; // 0x732(0x02)
	int32_t SessionNgRetryNum; // 0x734(0x04)

	void CheckKpiFaile(enum class ECosmosWebAPIType Type, bool NewParam); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.CheckKpiFaile // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckSessionNG(bool IsNG); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.CheckSessionNG // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsEnvironmentBuildComplete(); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.IsEnvironmentBuildComplete // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool EnvironmentValidate(); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.EnvironmentValidate // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetWebDateTime(struct FString DateString, struct FDateTime DateTime); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.GetWebDateTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsResultOK(bool isOK); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.IsResultOK // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetRankingList(struct TArray<struct FRankingInfo> RankingInfoList, struct TArray<struct FCosmosRankingList> list); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.GetRankingList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CreateRankingIDList(struct TArray<struct FRankingMasterInfo> RankingMasterInfo); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.CreateRankingIDList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetRankingMasterList(struct TArray<struct FRankingMasterInfo> NewParam, struct TArray<struct FCosmosRankingGetMasterList> RankingMasterList); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.GetRankingMasterList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetRankingID(struct FString AreaName, struct FString rankingId, bool IsFind); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.GetRankingID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ResetTimer(); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.ResetTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveResponse(enum class ECosmosWebAPIType Type, struct UNetMessage* Data, bool isOK); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.ReceiveResponse // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateKPIColumnData(struct TArray<struct FKpiNoColumnData> NewParam); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.CreateKPIColumnData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateHeader(enum class ECosmosWebAPIType NewParam, struct UWebApiConnect* WebApiConnect); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.CreateHeader // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RequestAPI(enum class ECosmosWebAPIType Type, struct UWebApiConnect* WebApiConnect); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.RequestAPI // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PreCheck(enum class ECosmosWebAPIType Type, bool isOK); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.PreCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void TimerEvent(); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.TimerEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReceiveEvent(struct UNetMessage* Data); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.OnReceiveEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ErrorEvent(int32_t code, struct FString errmsg); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.ErrorEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CosmosWebLoginEventInternal(); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.CosmosWebLoginEventInternal // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void CosmosWebSetRankingEventInternal(); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.CosmosWebSetRankingEventInternal // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void CosmosWebGetRankingEventInternal(); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.CosmosWebGetRankingEventInternal // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void CosmosAgreeKpiEventInternal(); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.CosmosAgreeKpiEventInternal // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void CosmosWebTusReadEventInternal(); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.CosmosWebTusReadEventInternal // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void CosmosWebTusWriteEventInternal(); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.CosmosWebTusWriteEventInternal // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void CosmosWebSealEventInternal(); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.CosmosWebSealEventInternal // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void CosmosWebEventNoLatent(enum class ECosmosWebAPIType Type); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.CosmosWebEventNoLatent // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void CosmosAgreeKpiEventNoLatent(int32_t AgreeFlag); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.CosmosAgreeKpiEventNoLatent // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void CosmosGetEvnEventInternal(); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.CosmosGetEvnEventInternal // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void CosmosUserConvertUserIdEventNoLatent(struct TArray<struct FString> PlatformUserIDList); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.CosmosUserConvertUserIdEventNoLatent // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1685580
	void CosmosCheckAnswerEventInternal(struct FAmieInterlockingCheckAnswer Param); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.CosmosCheckAnswerEventInternal // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void CosmosGetPlayableQuestEventInternal(int32_t Region, int32_t Use, int32_t Language, bool IsWait); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.CosmosGetPlayableQuestEventInternal // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void CosmosGetQuestAnswersEventInternal(struct FName QuestName); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.CosmosGetQuestAnswersEventInternal // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void CosmsoAddNotificationBrainMessageEventInternal(); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.CosmsoAddNotificationBrainMessageEventInternal // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void EnvironmentRebuild(); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.EnvironmentRebuild // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void CosmosWebEventInternal(enum class ECosmosWebAPIType Type); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.CosmosWebEventInternal // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void CosmosWebCoreEventInternal(enum class ECosmosWebAPIType Type); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.CosmosWebCoreEventInternal // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void CosmosCoreAgreeKpiEventInternal(); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.CosmosCoreAgreeKpiEventInternal // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void CosmosWebCoreLoginEventInternal(); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.CosmosWebCoreLoginEventInternal // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void CosmosCoreGetEvnEventInternal(); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.CosmosCoreGetEvnEventInternal // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_CosmosWebManager(int32_t EntryPoint); // Function BP_CosmosWebManager.BP_CosmosWebManager_C.ExecuteUbergraph_BP_CosmosWebManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

