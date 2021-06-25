// Class GameplayTags.BlueprintGameplayTagLibrary
// Size: 0x28 (Inherited: 0x28)
struct UBlueprintGameplayTagLibrary : UBlueprintFunctionLibrary {

	bool RemoveGameplayTag(struct FGameplayTagContainer TagContainer, struct FGameplayTag Tag); // Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x26058e0
	bool NotEqual_TagTag(struct FGameplayTag A, struct FString B); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x26057c0
	bool NotEqual_TagContainerTagContainer(struct FGameplayTagContainer A, struct FString B); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2605650
	bool NotEqual_GameplayTagContainer(struct FGameplayTagContainer A, struct FGameplayTagContainer B); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x2605500
	bool NotEqual_GameplayTag(struct FGameplayTag A, struct FGameplayTag B); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2605440
	bool MatchesTag(struct FGameplayTag TagOne, struct FGameplayTag TagTwo, bool bExactMatch); // Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2605350
	bool MatchesAnyTags(struct FGameplayTag TagOne, struct FGameplayTagContainer OtherContainer, bool bExactMatch); // Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x2605210
	struct FGameplayTagContainer MakeLiteralGameplayTagContainer(struct FGameplayTagContainer Value); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2605100
	struct FGameplayTag MakeLiteralGameplayTag(struct FGameplayTag Value); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2605070
	struct FGameplayTagQuery MakeGameplayTagQuery(struct FGameplayTagQuery TagQuery); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2604f40
	struct FGameplayTagContainer MakeGameplayTagContainerFromTag(struct FGameplayTag SingleTag); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2604e90
	struct FGameplayTagContainer MakeGameplayTagContainerFromArray(struct TArray<struct FGameplayTag> GameplayTags); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x2604dc0
	bool IsTagQueryEmpty(struct FGameplayTagQuery TagQuery); // Function GameplayTags.BlueprintGameplayTagLibrary.IsTagQueryEmpty // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x2604ce0
	bool IsGameplayTagValid(struct FGameplayTag GameplayTag); // Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2604c60
	bool HasTag(struct FGameplayTagContainer TagContainer, struct FGameplayTag Tag, bool bExactMatch); // Function GameplayTags.BlueprintGameplayTagLibrary.HasTag // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x2604b20
	bool HasAnyTags(struct FGameplayTagContainer TagContainer, struct FGameplayTagContainer OtherContainer, bool bExactMatch); // Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x2604900
	bool HasAllTags(struct FGameplayTagContainer TagContainer, struct FGameplayTagContainer OtherContainer, bool bExactMatch); // Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x26046b0
	bool HasAllMatchingGameplayTags(struct TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface, struct FGameplayTagContainer OtherContainer); // Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x2604590
	struct FName GetTagName(struct FGameplayTag GameplayTag); // Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x12f2cb0
	int32_t GetNumGameplayTagsInContainer(struct FGameplayTagContainer TagContainer); // Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x2604340
	struct FString GetDebugStringFromGameplayTagContainer(struct FGameplayTagContainer TagContainer); // Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x2604240
	struct FString GetDebugStringFromGameplayTag(struct FGameplayTag GameplayTag); // Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2604170
	void GetAllActorsOfClassMatchingTagQuery(struct UObject* WorldContextObject, struct AActor* ActorClass, struct FGameplayTagQuery GameplayTagQuery, struct TArray<struct AActor*> OutActors); // Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x2603fa0
	bool EqualEqual_GameplayTagContainer(struct FGameplayTagContainer A, struct FGameplayTagContainer B); // Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x2603e50
	bool EqualEqual_GameplayTag(struct FGameplayTag A, struct FGameplayTag B); // Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2603d90
	bool DoesTagAssetInterfaceHaveTag(struct TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface, struct FGameplayTag Tag); // Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2603cb0
	bool DoesContainerMatchTagQuery(struct FGameplayTagContainer TagContainer, struct FGameplayTagQuery TagQuery); // Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x2603b50
	void BreakGameplayTagContainer(struct FGameplayTagContainer GameplayTagContainer, struct TArray<struct FGameplayTag> GameplayTags); // Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x2603a30
	void AppendGameplayTagContainers(struct FGameplayTagContainer InOutTagContainer, struct FGameplayTagContainer InTagContainer); // Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x2603900
	void AddGameplayTag(struct FGameplayTagContainer TagContainer, struct FGameplayTag Tag); // Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x2603800
};

// Class GameplayTags.GameplayTagAssetInterface
// Size: 0x28 (Inherited: 0x28)
struct UGameplayTagAssetInterface : UInterface {

	bool HasMatchingGameplayTag(struct FGameplayTag TagToCheck); // Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2604a80
	bool HasAnyMatchingGameplayTags(struct FGameplayTagContainer TagContainer); // Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2604830
	bool HasAllMatchingGameplayTags(struct FGameplayTagContainer TagContainer); // Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x26044c0
	void GetOwnedGameplayTags(struct FGameplayTagContainer TagContainer); // Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2604400
};

// Class GameplayTags.EditableGameplayTagQuery
// Size: 0x98 (Inherited: 0x28)
struct UEditableGameplayTagQuery : UObject {
	struct FString UserDescription; // 0x28(0x10)
	char pad_38[0x10]; // 0x38(0x10)
	struct UEditableGameplayTagQueryExpression* RootExpression; // 0x48(0x08)
	struct FGameplayTagQuery TagQueryExportText_Helper; // 0x50(0x48)
};

// Class GameplayTags.EditableGameplayTagQueryExpression
// Size: 0x28 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression : UObject {
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
// Size: 0x48 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression_AnyTagsMatch : UEditableGameplayTagQueryExpression {
	struct FGameplayTagContainer Tags; // 0x28(0x20)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
// Size: 0x48 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression_AllTagsMatch : UEditableGameplayTagQueryExpression {
	struct FGameplayTagContainer Tags; // 0x28(0x20)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
// Size: 0x48 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression_NoTagsMatch : UEditableGameplayTagQueryExpression {
	struct FGameplayTagContainer Tags; // 0x28(0x20)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
// Size: 0x38 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression_AnyExprMatch : UEditableGameplayTagQueryExpression {
	struct TArray<struct UEditableGameplayTagQueryExpression*> Expressions; // 0x28(0x10)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
// Size: 0x38 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression_AllExprMatch : UEditableGameplayTagQueryExpression {
	struct TArray<struct UEditableGameplayTagQueryExpression*> Expressions; // 0x28(0x10)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
// Size: 0x38 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression_NoExprMatch : UEditableGameplayTagQueryExpression {
	struct TArray<struct UEditableGameplayTagQueryExpression*> Expressions; // 0x28(0x10)
};

// Class GameplayTags.GameplayTagsManager
// Size: 0x210 (Inherited: 0x28)
struct UGameplayTagsManager : UObject {
	char pad_28[0x98]; // 0x28(0x98)
	struct TArray<struct FGameplayTagSource> TagSources; // 0xc0(0x10)
	char pad_D0[0xe0]; // 0xd0(0xe0)
	struct TArray<struct UDataTable*> GameplayTagTables; // 0x1b0(0x10)
	char pad_1C0[0x50]; // 0x1c0(0x50)
};

// Class GameplayTags.GameplayTagsList
// Size: 0x48 (Inherited: 0x28)
struct UGameplayTagsList : UObject {
	struct FString ConfigFileName; // 0x28(0x10)
	struct TArray<struct FGameplayTagTableRow> GameplayTagList; // 0x38(0x10)
};

// Class GameplayTags.RestrictedGameplayTagsList
// Size: 0x48 (Inherited: 0x28)
struct URestrictedGameplayTagsList : UObject {
	struct FString ConfigFileName; // 0x28(0x10)
	struct TArray<struct FRestrictedGameplayTagTableRow> RestrictedGameplayTagList; // 0x38(0x10)
};

// Class GameplayTags.GameplayTagsSettings
// Size: 0xb8 (Inherited: 0x48)
struct UGameplayTagsSettings : UGameplayTagsList {
	bool ImportTagsFromConfig; // 0x48(0x01)
	bool WarnOnInvalidTags; // 0x49(0x01)
	bool FastReplication; // 0x4a(0x01)
	char pad_4B[0x5]; // 0x4b(0x05)
	struct FString InvalidTagCharacters; // 0x50(0x10)
	struct TArray<struct FGameplayTagCategoryRemap> CategoryRemapping; // 0x60(0x10)
	struct TArray<struct FSoftObjectPath> GameplayTagTableList; // 0x70(0x10)
	struct TArray<struct FGameplayTagRedirect> GameplayTagRedirects; // 0x80(0x10)
	struct TArray<struct FName> CommonlyReplicatedTags; // 0x90(0x10)
	int32_t NumBitsForContainerSize; // 0xa0(0x04)
	int32_t NetIndexFirstBitSegment; // 0xa4(0x04)
	struct TArray<struct FRestrictedConfigInfo> RestrictedConfigFiles; // 0xa8(0x10)
};

// Class GameplayTags.GameplayTagsDeveloperSettings
// Size: 0x38 (Inherited: 0x28)
struct UGameplayTagsDeveloperSettings : UObject {
	struct FString DeveloperConfigName; // 0x28(0x10)
};

