// Enum OnlineSubsystemUtils.EInAppPurchaseStatus
enum class EInAppPurchaseStatus : uint8 {
	Invalid,
	Failed,
	Deferred,
	Canceled,
	Purchased,
	Restored,
	EInAppPurchaseStatus_MAX,
};

// Enum OnlineSubsystemUtils.EOnlineProxyStoreOfferDiscountType
enum class EOnlineProxyStoreOfferDiscountType : uint8 {
	NotOnSale,
	Percentage,
	DiscountAmount,
	PayAmount,
	EOnlineProxyStoreOfferDiscountType_MAX,
};

// Enum OnlineSubsystemUtils.EBeaconConnectionState
enum class EBeaconConnectionState : uint8 {
	Invalid,
	Closed,
	Pending,
	Open,
	EBeaconConnectionState_MAX,
};

// Enum OnlineSubsystemUtils.EClientRequestType
enum class EClientRequestType : uint8 {
	NonePending,
	ExistingSessionReservation,
	ReservationUpdate,
	EmptyServerReservation,
	Reconnect,
	Abandon,
	ReservationRemoveMembers,
	EClientRequestType_MAX,
};

// Enum OnlineSubsystemUtils.EPartyReservationResult
enum class EPartyReservationResult : uint8 {
	NoResult,
	RequestPending,
	GeneralError,
	PartyLimitReached,
	IncorrectPlayerCount,
	RequestTimedOut,
	ReservationDuplicate,
	ReservationNotFound,
	ReservationAccepted,
	ReservationDenied,
	ReservationDenied_CrossPlayRestriction,
	ReservationDenied_Banned,
	ReservationRequestCanceled,
	ReservationInvalid,
	BadSessionId,
	ReservationDenied_ContainsExistingPlayers,
	EPartyReservationResult_MAX,
};

// Enum OnlineSubsystemUtils.ESpectatorClientRequestType
enum class ESpectatorClientRequestType : uint8 {
	NonePending,
	ExistingSessionReservation,
	ReservationUpdate,
	EmptyServerReservation,
	Reconnect,
	Abandon,
	ESpectatorClientRequestType_MAX,
};

// Enum OnlineSubsystemUtils.ESpectatorReservationResult
enum class ESpectatorReservationResult : uint8 {
	NoResult,
	RequestPending,
	GeneralError,
	SpectatorLimitReached,
	IncorrectPlayerCount,
	RequestTimedOut,
	ReservationDuplicate,
	ReservationNotFound,
	ReservationAccepted,
	ReservationDenied,
	ReservationDenied_CrossPlayRestriction,
	ReservationDenied_Banned,
	ReservationRequestCanceled,
	ReservationInvalid,
	BadSessionId,
	ReservationDenied_ContainsExistingPlayers,
	ESpectatorReservationResult_MAX,
};

// ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
// Size: 0x108 (Inherited: 0x00)
struct FBlueprintSessionResult {
	char pad_0[0x108]; // 0x00(0x108)
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseReceiptInfo2
// Size: 0x30 (Inherited: 0x00)
struct FInAppPurchaseReceiptInfo2 {
	struct FString ItemName; // 0x00(0x10)
	struct FString ItemId; // 0x10(0x10)
	struct FString ValidationInfo; // 0x20(0x10)
};

// ScriptStruct OnlineSubsystemUtils.OnlineProxyStoreOffer
// Size: 0x110 (Inherited: 0x00)
struct FOnlineProxyStoreOffer {
	struct FString OfferId; // 0x00(0x10)
	struct FText Title; // 0x10(0x18)
	struct FText Description; // 0x28(0x18)
	struct FText LongDescription; // 0x40(0x18)
	struct FText RegularPriceText; // 0x58(0x18)
	int32_t RegularPrice; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FText PriceText; // 0x78(0x18)
	int32_t NumericPrice; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct FString CurrencyCode; // 0x98(0x10)
	struct FDateTime ReleaseDate; // 0xa8(0x08)
	struct FDateTime ExpirationDate; // 0xb0(0x08)
	enum class EOnlineProxyStoreOfferDiscountType DiscountType; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct TMap<struct FString, struct FString> DynamicFields; // 0xc0(0x50)
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseRestoreInfo2
// Size: 0x30 (Inherited: 0x00)
struct FInAppPurchaseRestoreInfo2 {
	struct FString ItemName; // 0x00(0x10)
	struct FString ItemId; // 0x10(0x10)
	struct FString ValidationInfo; // 0x20(0x10)
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseReceiptInfo
// Size: 0x30 (Inherited: 0x00)
struct FInAppPurchaseReceiptInfo {
	struct FString ItemName; // 0x00(0x10)
	struct FString ItemId; // 0x10(0x10)
	struct FString ValidationInfo; // 0x20(0x10)
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductInfo2
// Size: 0xf8 (Inherited: 0x00)
struct FInAppPurchaseProductInfo2 {
	struct FString Identifier; // 0x00(0x10)
	struct FString TransactionIdentifier; // 0x10(0x10)
	struct FString DisplayName; // 0x20(0x10)
	struct FString DisplayDescription; // 0x30(0x10)
	struct FString DisplayPrice; // 0x40(0x10)
	float RawPrice; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FString CurrencyCode; // 0x58(0x10)
	struct FString CurrencySymbol; // 0x68(0x10)
	struct FString DecimalSeparator; // 0x78(0x10)
	struct FString GroupingSeparator; // 0x88(0x10)
	struct FString ReceiptData; // 0x98(0x10)
	struct TMap<struct FString, struct FString> DynamicFields; // 0xa8(0x50)
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductRequest2
// Size: 0x18 (Inherited: 0x00)
struct FInAppPurchaseProductRequest2 {
	struct FString ProductIdentifier; // 0x00(0x10)
	bool bIsConsumable; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct OnlineSubsystemUtils.PlayerReservation
// Size: 0x50 (Inherited: 0x00)
struct FPlayerReservation {
	struct FUniqueNetIdRepl UniqueId; // 0x00(0x28)
	struct FString ValidationStr; // 0x28(0x10)
	struct FString Platform; // 0x38(0x10)
	bool bAllowCrossplay; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float ElapsedTime; // 0x4c(0x04)
};

// ScriptStruct OnlineSubsystemUtils.PIELoginSettingsInternal
// Size: 0x40 (Inherited: 0x00)
struct FPIELoginSettingsInternal {
	struct FString ID; // 0x00(0x10)
	struct FString Token; // 0x10(0x10)
	struct FString Type; // 0x20(0x10)
	struct TArray<char> TokenBytes; // 0x30(0x10)
};

// ScriptStruct OnlineSubsystemUtils.PartyReservation
// Size: 0x50 (Inherited: 0x00)
struct FPartyReservation {
	int32_t TeamNum; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FUniqueNetIdRepl PartyLeader; // 0x08(0x28)
	struct TArray<struct FPlayerReservation> PartyMembers; // 0x30(0x10)
	struct TArray<struct FPlayerReservation> RemovedPartyMembers; // 0x40(0x10)
};

// ScriptStruct OnlineSubsystemUtils.SpectatorReservation
// Size: 0x78 (Inherited: 0x00)
struct FSpectatorReservation {
	struct FUniqueNetIdRepl SpectatorId; // 0x00(0x28)
	struct FPlayerReservation Spectator; // 0x28(0x50)
};

