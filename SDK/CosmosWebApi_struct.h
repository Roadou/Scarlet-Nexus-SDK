// ScriptStruct CosmosWebApi.SavedataMultipartuploadResponseParam
// Size: 0x04 (Inherited: 0x00)
struct FSavedataMultipartuploadResponseParam {
	int32_t Status; // 0x00(0x04)
};

// ScriptStruct CosmosWebApi.SavedataDeleteResponseParam
// Size: 0x04 (Inherited: 0x00)
struct FSavedataDeleteResponseParam {
	int32_t Status; // 0x00(0x04)
};

// ScriptStruct CosmosWebApi.SavedataDownloadResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FSavedataDownloadResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString saveData; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.SavedataUploadResponseParam
// Size: 0x04 (Inherited: 0x00)
struct FSavedataUploadResponseParam {
	int32_t Status; // 0x00(0x04)
};

// ScriptStruct CosmosWebApi.RootBoxRunResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FRootBoxRunResponseParam {
	int32_t Status; // 0x00(0x04)
	int32_t totalCount; // 0x04(0x04)
	struct TArray<struct FRootBoxResultInfo> rootboxResultList; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.RootBoxResultInfo
// Size: 0x48 (Inherited: 0x00)
struct FRootBoxResultInfo {
	struct FString itemConfigId; // 0x00(0x10)
	struct FString ItemId; // 0x10(0x10)
	int32_t itemNum; // 0x20(0x04)
	int32_t ItemType; // 0x24(0x04)
	int32_t onlineType; // 0x28(0x04)
	int32_t replaceFlag; // 0x2c(0x04)
	struct FString replaceItemId; // 0x30(0x10)
	int32_t replaceItemNum; // 0x40(0x04)
	int32_t boxRemaining; // 0x44(0x04)
};

// ScriptStruct CosmosWebApi.RootBoxGetProbabilityResponseParam
// Size: 0x28 (Inherited: 0x00)
struct FRootBoxGetProbabilityResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FRootBoxCampaignInfo> CampaignInfo; // 0x08(0x10)
	struct TArray<struct FRootBoxStatusInfo> rootboxStatusList; // 0x18(0x10)
};

// ScriptStruct CosmosWebApi.RootBoxStatusInfo
// Size: 0x28 (Inherited: 0x00)
struct FRootBoxStatusInfo {
	struct FString rarityId; // 0x00(0x10)
	int32_t rarityRate; // 0x10(0x04)
	int32_t campaignRarityRate; // 0x14(0x04)
	struct TArray<struct FRarityItemInfo> rarityItemList; // 0x18(0x10)
};

// ScriptStruct CosmosWebApi.RarityItemInfo
// Size: 0x58 (Inherited: 0x00)
struct FRarityItemInfo {
	struct FString itemConfigId; // 0x00(0x10)
	struct FString ItemId; // 0x10(0x10)
	int32_t itemNum; // 0x20(0x04)
	int32_t itemRarityRate; // 0x24(0x04)
	int32_t campaignItemRarityRate; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString itemInfo; // 0x30(0x10)
	int32_t ItemType; // 0x40(0x04)
	int32_t onlineType; // 0x44(0x04)
	int32_t singleItemFlag; // 0x48(0x04)
	int32_t boxCount; // 0x4c(0x04)
	int32_t boxRemaining; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct CosmosWebApi.RootBoxCampaignInfo
// Size: 0x40 (Inherited: 0x00)
struct FRootBoxCampaignInfo {
	struct FString campaignId; // 0x00(0x10)
	struct FString campaignStartTime; // 0x10(0x10)
	struct FString campaignEndTime; // 0x20(0x10)
	struct FString campaignOption; // 0x30(0x10)
};

// ScriptStruct CosmosWebApi.RootBoxGetDetailResponseParam
// Size: 0x68 (Inherited: 0x00)
struct FRootBoxGetDetailResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString rootboxId; // 0x08(0x10)
	struct FString rootboxLavel; // 0x18(0x10)
	struct FString StartTime; // 0x28(0x10)
	struct FString endTime; // 0x38(0x10)
	struct TArray<struct FPaymentInfo> paymentList; // 0x48(0x10)
	struct FString Option; // 0x58(0x10)
};

// ScriptStruct CosmosWebApi.PaymentInfo
// Size: 0x30 (Inherited: 0x00)
struct FPaymentInfo {
	struct FString paymentId; // 0x00(0x10)
	int32_t paymentType; // 0x10(0x04)
	int32_t perExecution; // 0x14(0x04)
	int32_t limit; // 0x18(0x04)
	int32_t Num; // 0x1c(0x04)
	struct FString paymentItemid; // 0x20(0x10)
};

// ScriptStruct CosmosWebApi.RootBoxGetListResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FRootBoxGetListResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FRootBoxInfo> rootboxList; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.RootBoxInfo
// Size: 0x68 (Inherited: 0x00)
struct FRootBoxInfo {
	struct FString rootboxId; // 0x00(0x10)
	struct FString rootboxLavel; // 0x10(0x10)
	struct FString StartTime; // 0x20(0x10)
	struct FString endTime; // 0x30(0x10)
	int32_t rootboxType; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString Option; // 0x48(0x10)
	struct TArray<struct FRootBoxCampaignInfo> CampaignInfo; // 0x58(0x10)
};

// ScriptStruct CosmosWebApi.GamecurrencyGetLimitedOwnedResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FGamecurrencyGetLimitedOwnedResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FGamecurrencyGetLimitedOwnedInfo> currencyList; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.GamecurrencyGetLimitedOwnedInfo
// Size: 0x28 (Inherited: 0x00)
struct FGamecurrencyGetLimitedOwnedInfo {
	struct FString limit; // 0x00(0x10)
	int32_t limitCurrencyNum; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString chargedFlag; // 0x18(0x10)
};

// ScriptStruct CosmosWebApi.GamecurrencyGetOwnedResponseParam
// Size: 0x38 (Inherited: 0x00)
struct FGamecurrencyGetOwnedResponseParam {
	int32_t Status; // 0x00(0x04)
	int32_t totalChargedCurrencyNum; // 0x04(0x04)
	int32_t totalFreeCurrencyNum; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString recentLimit; // 0x10(0x10)
	int32_t recentLimitCurrencyNum; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString recentChargedFlag; // 0x28(0x10)
};

// ScriptStruct CosmosWebApi.CommonpurchaseTokushoResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FCommonpurchaseTokushoResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString text; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.CommonpurchaseGetPurchaseStatusResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FCommonpurchaseGetPurchaseStatusResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString purchaseInfoId; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.CommonpurchaseCancelPurchaseResponseParam
// Size: 0x04 (Inherited: 0x00)
struct FCommonpurchaseCancelPurchaseResponseParam {
	int32_t Status; // 0x00(0x04)
};

// ScriptStruct CosmosWebApi.CommonpurchaseCompletePurchaseResponseParam
// Size: 0x04 (Inherited: 0x00)
struct FCommonpurchaseCompletePurchaseResponseParam {
	int32_t Status; // 0x00(0x04)
};

// ScriptStruct CosmosWebApi.CommonpurchaseStartPurchaseResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FCommonpurchaseStartPurchaseResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString purchaseInfoId; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.CommonpurchaseGetCatalogResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FCommonpurchaseGetCatalogResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FCommonpurchaseGetCatalogInfo> catalogList; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.CommonpurchaseGetCatalogInfo
// Size: 0x70 (Inherited: 0x00)
struct FCommonpurchaseGetCatalogInfo {
	struct FString catalogId; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct FString caption; // 0x20(0x10)
	struct FString Image; // 0x30(0x10)
	struct FString establishedPrice; // 0x40(0x10)
	struct FString currentPrice; // 0x50(0x10)
	struct FString Option; // 0x60(0x10)
};

// ScriptStruct CosmosWebApi.GuildNotificationSelfResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FGuildNotificationSelfResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FGuildNotificationInfo> notificationSelfList; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.GuildNotificationInfo
// Size: 0x38 (Inherited: 0x00)
struct FGuildNotificationInfo {
	struct FString userId; // 0x00(0x10)
	struct FString notificationUserId; // 0x10(0x10)
	int32_t notfyType; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString logtime; // 0x28(0x10)
};

// ScriptStruct CosmosWebApi.GuildNotificationResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FGuildNotificationResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FGuildNotificationInfo> notificationList; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.GuildInvitedListResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FGuildInvitedListResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FGuildInfo> addApplyGuildList; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.GuildInfo
// Size: 0x20 (Inherited: 0x00)
struct FGuildInfo {
	struct FString guildId; // 0x00(0x10)
	struct FString guildData; // 0x10(0x10)
};

// ScriptStruct CosmosWebApi.GuildApprovalListResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FGuildApprovalListResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FTmpGuildMemberInfo> addApplyUserList; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.TmpGuildMemberInfo
// Size: 0x30 (Inherited: 0x00)
struct FTmpGuildMemberInfo {
	struct FString userId; // 0x00(0x10)
	struct FString guildId; // 0x10(0x10)
	struct FString guildMemberData; // 0x20(0x10)
};

// ScriptStruct CosmosWebApi.GuildAddApplyListResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FGuildAddApplyListResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FGuildInfo> addApplyGuildList; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.GuildInvitationListResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FGuildInvitationListResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FTmpGuildMemberInfo> invitationUserList; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.GuildEditResponseParam
// Size: 0x28 (Inherited: 0x00)
struct FGuildEditResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FGuildInfo GuildInfo; // 0x08(0x20)
};

// ScriptStruct CosmosWebApi.GuildInfoResponseParam
// Size: 0x38 (Inherited: 0x00)
struct FGuildInfoResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FGuildInfo GuildInfo; // 0x08(0x20)
	struct TArray<struct FGuildMemberInfo> guildMebmerList; // 0x28(0x10)
};

// ScriptStruct CosmosWebApi.GuildMemberInfo
// Size: 0x38 (Inherited: 0x00)
struct FGuildMemberInfo {
	struct FString userId; // 0x00(0x10)
	struct FString guildId; // 0x10(0x10)
	struct FString guildMemberData; // 0x20(0x10)
	int32_t Position; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct CosmosWebApi.GuildGetListResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FGuildGetListResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FGuildInfo> guildList; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.GuildCreateResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FGuildCreateResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString guildId; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.FesGetRewardResponseParam
// Size: 0x28 (Inherited: 0x00)
struct FFesGetRewardResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString workId; // 0x08(0x10)
	struct TArray<struct FGetItemInfo> GetItemList; // 0x18(0x10)
};

// ScriptStruct CosmosWebApi.GetItemInfo
// Size: 0x30 (Inherited: 0x00)
struct FGetItemInfo {
	struct FString ItemId; // 0x00(0x10)
	int32_t itemNum; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString itemInfo; // 0x18(0x10)
	int32_t onlineType; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct CosmosWebApi.FesAddPointResponseParam
// Size: 0x08 (Inherited: 0x00)
struct FFesAddPointResponseParam {
	int32_t Status; // 0x00(0x04)
	int32_t totalPoint; // 0x04(0x04)
};

// ScriptStruct CosmosWebApi.FesGetInfoResponseParam
// Size: 0x90 (Inherited: 0x00)
struct FFesGetInfoResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString FesInfo; // 0x08(0x10)
	struct FString announceStart; // 0x18(0x10)
	struct FString announceEnd; // 0x28(0x10)
	struct FString StartTime; // 0x38(0x10)
	struct FString endTime; // 0x48(0x10)
	struct FString rewardStart; // 0x58(0x10)
	struct TArray<struct FFesFactionsInfo> factionsList; // 0x68(0x10)
	struct TArray<struct FFesRewardInfo> rewardList; // 0x78(0x10)
	struct FFesUserJoinFactionsInfo userFactionsInfo; // 0x88(0x08)
};

// ScriptStruct CosmosWebApi.FesUserJoinFactionsInfo
// Size: 0x08 (Inherited: 0x00)
struct FFesUserJoinFactionsInfo {
	int32_t factionsNo; // 0x00(0x04)
	int32_t factionsPoint; // 0x04(0x04)
};

// ScriptStruct CosmosWebApi.FesRewardInfo
// Size: 0x20 (Inherited: 0x00)
struct FFesRewardInfo {
	int32_t rank; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString ItemId; // 0x08(0x10)
	int32_t itemNum; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct CosmosWebApi.FesFactionsInfo
// Size: 0x08 (Inherited: 0x00)
struct FFesFactionsInfo {
	int32_t factionsNo; // 0x00(0x04)
	int32_t factionsTotalPoint; // 0x04(0x04)
};

// ScriptStruct CosmosWebApi.FesGetListResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FFesGetListResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FFesInfo> fesList; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.FesInfo
// Size: 0x70 (Inherited: 0x00)
struct FFesInfo {
	struct FString fesId; // 0x00(0x10)
	struct FString FesInfo; // 0x10(0x10)
	struct FString announceStart; // 0x20(0x10)
	struct FString announceEnd; // 0x30(0x10)
	struct FString StartTime; // 0x40(0x10)
	struct FString endTime; // 0x50(0x10)
	struct FString rewardStart; // 0x60(0x10)
};

// ScriptStruct CosmosWebApi.DataupSearchResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FDataupSearchResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FDataupSearchResultInfo> resultList; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.DataupSearchResultInfo
// Size: 0x70 (Inherited: 0x00)
struct FDataupSearchResultInfo {
	struct FString RequestID; // 0x00(0x10)
	struct FString appendInfo; // 0x10(0x10)
	struct FDataupSearchTagInfo searchTagInfo; // 0x20(0x50)
};

// ScriptStruct CosmosWebApi.DataupSearchTagInfo
// Size: 0x50 (Inherited: 0x00)
struct FDataupSearchTagInfo {
	struct FString searchTag1; // 0x00(0x10)
	struct FString searchTag2; // 0x10(0x10)
	struct FString searchTag3; // 0x20(0x10)
	struct FString searchTag4; // 0x30(0x10)
	struct FString searchTag5; // 0x40(0x10)
};

// ScriptStruct CosmosWebApi.DataupWriteResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FDataupWriteResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString RequestID; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.DataupReadResponseParam
// Size: 0x78 (Inherited: 0x00)
struct FDataupReadResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Data; // 0x08(0x10)
	struct FString appendInfo; // 0x18(0x10)
	struct FDataupSearchTagInfo searchTagInfo; // 0x28(0x50)
};

// ScriptStruct CosmosWebApi.RewardEarnResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FRewardEarnResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FRewardInfo> rewardList; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.RewardInfo
// Size: 0x60 (Inherited: 0x00)
struct FRewardInfo {
	struct FString campaignId; // 0x00(0x10)
	struct FString ticketId; // 0x10(0x10)
	struct FString ItemId; // 0x20(0x10)
	struct FString ItemName; // 0x30(0x10)
	struct FString itemDetail; // 0x40(0x10)
	int32_t countAll; // 0x50(0x04)
	int32_t countPiece; // 0x54(0x04)
	int32_t rank; // 0x58(0x04)
	int32_t Point; // 0x5c(0x04)
};

// ScriptStruct CosmosWebApi.CampaignInfoResponseParam
// Size: 0x98 (Inherited: 0x00)
struct FCampaignInfoResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FCampaignInfo CampaignInfo; // 0x08(0x90)
};

// ScriptStruct CosmosWebApi.CampaignInfo
// Size: 0x90 (Inherited: 0x00)
struct FCampaignInfo {
	struct FString ID; // 0x00(0x10)
	struct FString titleCd; // 0x10(0x10)
	struct FString Name; // 0x20(0x10)
	struct FString startDate; // 0x30(0x10)
	struct FString endDate; // 0x40(0x10)
	int32_t itemCount; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FString URL; // 0x58(0x10)
	struct FString Description; // 0x68(0x10)
	int32_t config; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct TArray<struct FRewardInfo> rewardList; // 0x80(0x10)
};

// ScriptStruct CosmosWebApi.CampaignTitleListResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FCampaignTitleListResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FCampaignInfo> campaignList; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.CampaignGetListResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FCampaignGetListResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FCampaignInfo> campaignList; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.CampaignRewardListResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FCampaignRewardListResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FRewardInfo> rewardList; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.MissionInfoResponseParam
// Size: 0x78 (Inherited: 0x00)
struct FMissionInfoResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FMissionInfo MissionInfo; // 0x08(0x70)
};

// ScriptStruct CosmosWebApi.MissionInfo
// Size: 0x70 (Inherited: 0x00)
struct FMissionInfo {
	struct FString ID; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct FString titleCd; // 0x20(0x10)
	struct FString Description; // 0x30(0x10)
	struct FString keyword; // 0x40(0x10)
	int32_t Point; // 0x50(0x04)
	int32_t campaignCategoryId; // 0x54(0x04)
	struct FString campaignCategoryName; // 0x58(0x10)
	int32_t count; // 0x68(0x04)
	int32_t upto; // 0x6c(0x04)
};

// ScriptStruct CosmosWebApi.MissionGetListResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FMissionGetListResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FMissionInfo> missionList; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.PointCardUserListResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FPointCardUserListResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FPointInfo> pointInfoList; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.PointInfo
// Size: 0x58 (Inherited: 0x00)
struct FPointInfo {
	struct FString ID; // 0x00(0x10)
	struct FString userId; // 0x10(0x10)
	struct FString titleCd; // 0x20(0x10)
	struct FString campaignId; // 0x30(0x10)
	int32_t Point; // 0x40(0x04)
	int32_t totalPoint; // 0x44(0x04)
	int32_t nowRank; // 0x48(0x04)
	int32_t count; // 0x4c(0x04)
	int32_t precedeRank; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct CosmosWebApi.PointCardInfoResponseParam
// Size: 0x60 (Inherited: 0x00)
struct FPointCardInfoResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FPointInfo PointInfo; // 0x08(0x58)
};

// ScriptStruct CosmosWebApi.GiftBoxOpenResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FGiftBoxOpenResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FGiftInfo> giftList; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.GiftInfo
// Size: 0x60 (Inherited: 0x00)
struct FGiftInfo {
	struct FString giftId; // 0x00(0x10)
	struct FString ItemId; // 0x10(0x10)
	struct FString itemInfo; // 0x20(0x10)
	int32_t itemNum; // 0x30(0x04)
	int32_t onlineType; // 0x34(0x04)
	struct FString giftReasonId; // 0x38(0x10)
	struct FString timeLimit; // 0x48(0x10)
	int32_t remainingTime; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct CosmosWebApi.LoginBonusGetBonusResponseParam
// Size: 0x28 (Inherited: 0x00)
struct FLoginBonusGetBonusResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString workId; // 0x08(0x10)
	struct TArray<struct FGotLoginBonus> loginBonusList; // 0x18(0x10)
};

// ScriptStruct CosmosWebApi.GotLoginBonus
// Size: 0x20 (Inherited: 0x00)
struct FGotLoginBonus {
	struct FString loginBonusId; // 0x00(0x10)
	struct TArray<struct FGetItemInfo> GetItemList; // 0x10(0x10)
};

// ScriptStruct CosmosWebApi.LoginBonusGetInfoResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FLoginBonusGetInfoResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FLoginBonusInfo> loginBonusInfoList; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.LoginBonusInfo
// Size: 0x58 (Inherited: 0x00)
struct FLoginBonusInfo {
	struct FString loginBonusId; // 0x00(0x10)
	int32_t loginBonusType; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString LoginBonusInfo; // 0x18(0x10)
	struct FString StartTime; // 0x28(0x10)
	struct FString endTime; // 0x38(0x10)
	struct TArray<struct FLoginBonusProgressInfo> progressList; // 0x48(0x10)
};

// ScriptStruct CosmosWebApi.LoginBonusProgressInfo
// Size: 0x28 (Inherited: 0x00)
struct FLoginBonusProgressInfo {
	struct FString dayNum; // 0x00(0x10)
	struct FString ItemId; // 0x10(0x10)
	int32_t itemNum; // 0x20(0x04)
	int32_t getFlg; // 0x24(0x04)
};

// ScriptStruct CosmosWebApi.LoginBonusGetListResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FLoginBonusGetListResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FLoginBonus> loginBonusList; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.LoginBonus
// Size: 0x48 (Inherited: 0x00)
struct FLoginBonus {
	struct FString loginBonusId; // 0x00(0x10)
	int32_t loginBonusType; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString LoginBonusInfo; // 0x18(0x10)
	struct FString StartTime; // 0x28(0x10)
	struct FString endTime; // 0x38(0x10)
};

// ScriptStruct CosmosWebApi.ItemGetOwnedResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FItemGetOwnedResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FOwnedItemInfo> itemList; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.OwnedItemInfo
// Size: 0x28 (Inherited: 0x00)
struct FOwnedItemInfo {
	struct FString ItemId; // 0x00(0x10)
	struct FString itemInfo; // 0x10(0x10)
	int32_t itemNum; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct CosmosWebApi.ItemGetMasterResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FItemGetMasterResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FItemMasterInfo> masterList; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.ItemMasterInfo
// Size: 0x28 (Inherited: 0x00)
struct FItemMasterInfo {
	struct FString ItemId; // 0x00(0x10)
	struct FString itemInfo; // 0x10(0x10)
	int32_t ItemType; // 0x20(0x04)
	int32_t onlineType; // 0x24(0x04)
};

// ScriptStruct CosmosWebApi.RankingGetByUserResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FRankingGetByUserResponseParam {
	int32_t Status; // 0x00(0x04)
	int32_t listNum; // 0x04(0x04)
	struct TArray<struct FRankingInfo> rankingList; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.RankingInfo
// Size: 0x30 (Inherited: 0x00)
struct FRankingInfo {
	int32_t uniqueRank; // 0x00(0x04)
	int32_t sameRank; // 0x04(0x04)
	struct FString userId; // 0x08(0x10)
	int32_t score; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString UserData; // 0x20(0x10)
};

// ScriptStruct CosmosWebApi.RankingGetByRangeResponseParam
// Size: 0x20 (Inherited: 0x00)
struct FRankingGetByRangeResponseParam {
	int32_t Status; // 0x00(0x04)
	int32_t sumNum; // 0x04(0x04)
	int32_t listNum; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FRankingInfo> rankingList; // 0x10(0x10)
};

// ScriptStruct CosmosWebApi.RankingGetMasterResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FRankingGetMasterResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FRankingMasterInfo> masterList; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.RankingMasterInfo
// Size: 0x30 (Inherited: 0x00)
struct FRankingMasterInfo {
	struct FString rankingId; // 0x00(0x10)
	int32_t SortType; // 0x10(0x04)
	int32_t scoreType; // 0x14(0x04)
	int32_t setType; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString RankingInfo; // 0x20(0x10)
};

// ScriptStruct CosmosWebApi.CatalogGetLobbyResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FCatalogGetLobbyResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FLobbyInfo> lobbyList; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.LobbyInfo
// Size: 0x70 (Inherited: 0x00)
struct FLobbyInfo {
	struct FString regionId; // 0x00(0x10)
	struct FString areaId; // 0x10(0x10)
	struct FString lobbyId; // 0x20(0x10)
	struct FString nameId; // 0x30(0x10)
	int32_t enterNum; // 0x40(0x04)
	int32_t enterMax; // 0x44(0x04)
	struct FString ip; // 0x48(0x10)
	int32_t Port; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString LobbyInfo; // 0x60(0x10)
};

// ScriptStruct CosmosWebApi.CatalogGetAreaResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FCatalogGetAreaResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FAreaInfo> areaList; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.AreaInfo
// Size: 0x40 (Inherited: 0x00)
struct FAreaInfo {
	struct FString regionId; // 0x00(0x10)
	struct FString areaId; // 0x10(0x10)
	struct FString nameId; // 0x20(0x10)
	struct FString AreaInfo; // 0x30(0x10)
};

// ScriptStruct CosmosWebApi.CatalogGetRegionResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FCatalogGetRegionResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FCosmosRegionInfo> regionList; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.CosmosRegionInfo
// Size: 0x30 (Inherited: 0x00)
struct FCosmosRegionInfo {
	struct FString regionId; // 0x00(0x10)
	struct FString nameId; // 0x10(0x10)
	struct FString regionInfo; // 0x20(0x10)
};

// ScriptStruct CosmosWebApi.HugeTssMultiReadListResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FHugeTssMultiReadListResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FHugeTssInfo> tssDataList; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.HugeTssInfo
// Size: 0x18 (Inherited: 0x00)
struct FHugeTssInfo {
	int32_t slotNo; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString tssUrl; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.HugeTssMultiReadResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FHugeTssMultiReadResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString tssUrl; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.HugeTssReadListResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FHugeTssReadListResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FHugeTssInfo> tssUrlList; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.HugeTssReadResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FHugeTssReadResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString tssUrl; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.TssReadListResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FTssReadListResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FTssInfo> tssDataList; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.TssInfo
// Size: 0x18 (Inherited: 0x00)
struct FTssInfo {
	int32_t slotNo; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString tssData; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.TssReadResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FTssReadResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString tssData; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.TusReadResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FTusReadResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString tusData; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.SysGetEnvV2ResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FSysGetEnvV2ResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString URL; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.SysGetEnvResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FSysGetEnvResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString URL; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.UserGetTrackingNumResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FUserGetTrackingNumResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString tracking_num; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.UserLinkBnidResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FUserLinkBnidResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FUserRedirectUrl> redirectUrl; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.UserRedirectUrl
// Size: 0x30 (Inherited: 0x00)
struct FUserRedirectUrl {
	struct FString redirectUrl; // 0x00(0x10)
	struct FString basicId; // 0x10(0x10)
	struct FString basicPass; // 0x20(0x10)
};

// ScriptStruct CosmosWebApi.UserConvertUserIdResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FUserConvertUserIdResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FUserConvertInfo> UserConvertInfo; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.UserConvertInfo
// Size: 0x20 (Inherited: 0x00)
struct FUserConvertInfo {
	struct FString pUserId; // 0x00(0x10)
	struct FString userId; // 0x10(0x10)
};

// ScriptStruct CosmosWebApi.UserAuthResponseParam
// Size: 0x20 (Inherited: 0x00)
struct FUserAuthResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FCosmosUserData UserInfo; // 0x08(0x18)
};

// ScriptStruct CosmosWebApi.CosmosUserData
// Size: 0x18 (Inherited: 0x00)
struct FCosmosUserData {
	struct FString userId; // 0x00(0x10)
	int32_t registerStatus; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct CosmosWebApi.UserLoginV2ResponseParam
// Size: 0x20 (Inherited: 0x00)
struct FUserLoginV2ResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FCosmosUserData UserInfo; // 0x08(0x18)
};

// ScriptStruct CosmosWebApi.UserLoginResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FUserLoginResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FUserInfo UserInfo; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.UserInfo
// Size: 0x10 (Inherited: 0x00)
struct FUserInfo {
	struct FString userId; // 0x00(0x10)
};

// ScriptStruct CosmosWebApi.UserCreateResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FUserCreateResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FUserInfo UserInfo; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.CommonResponseParam
// Size: 0x04 (Inherited: 0x00)
struct FCommonResponseParam {
	int32_t Status; // 0x00(0x04)
};

// ScriptStruct CosmosWebApi.ResponseHeader
// Size: 0x28 (Inherited: 0x00)
struct FResponseHeader {
	int32_t Result; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString session; // 0x08(0x10)
	struct FString date; // 0x18(0x10)
};

// ScriptStruct CosmosWebApi.GuildPermissionInfo
// Size: 0x08 (Inherited: 0x00)
struct FGuildPermissionInfo {
	int32_t apiNo; // 0x00(0x04)
	int32_t permission; // 0x04(0x04)
};

// ScriptStruct CosmosWebApi.GuildAuthorityInfo
// Size: 0x20 (Inherited: 0x00)
struct FGuildAuthorityInfo {
	int32_t profileSetFlg; // 0x00(0x04)
	int32_t editFlg; // 0x04(0x04)
	int32_t invitationFlg; // 0x08(0x04)
	int32_t expulsionFlg; // 0x0c(0x04)
	int32_t positionFlg; // 0x10(0x04)
	int32_t usePointFlg; // 0x14(0x04)
	int32_t leaderReleaseFlg; // 0x18(0x04)
	int32_t disbandmentFlg; // 0x1c(0x04)
};

// ScriptStruct CosmosWebApi.DataupUpdateSearchTagInfo
// Size: 0x18 (Inherited: 0x00)
struct FDataupUpdateSearchTagInfo {
	int32_t Key; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Value; // 0x08(0x10)
};

// ScriptStruct CosmosWebApi.DataupSearchConditionInfo
// Size: 0x20 (Inherited: 0x00)
struct FDataupSearchConditionInfo {
	int32_t Key; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Value; // 0x08(0x10)
	int32_t comparisonType; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct CosmosWebApi.CosmosItemInfo
// Size: 0x18 (Inherited: 0x00)
struct FCosmosItemInfo {
	struct FString ItemId; // 0x00(0x10)
	int32_t itemNum; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct CosmosWebApi.KpiNoColumnData
// Size: 0x28 (Inherited: 0x00)
struct FKpiNoColumnData {
	int32_t no; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FKpiColumn> kpiColumnList; // 0x08(0x10)
	struct TArray<struct FKpiData> kpiDataList; // 0x18(0x10)
};

// ScriptStruct CosmosWebApi.KpiData
// Size: 0x10 (Inherited: 0x00)
struct FKpiData {
	struct TArray<struct FString> KpiData; // 0x00(0x10)
};

// ScriptStruct CosmosWebApi.KpiColumn
// Size: 0x18 (Inherited: 0x00)
struct FKpiColumn {
	struct FString column; // 0x00(0x10)
	int32_t Type; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

