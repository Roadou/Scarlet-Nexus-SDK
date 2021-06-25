// Class MagicLeapIdentity.MagicLeapIdentity
// Size: 0x38 (Inherited: 0x28)
struct UMagicLeapIdentity : UObject {
	char pad_28[0x10]; // 0x28(0x10)

	void RequestIdentityAttributeValueDelegate__DelegateSignature(enum class EMagicLeapIdentityError ResultCode, struct TArray<struct FMagicLeapIdentityAttribute> AttributeValue); // DelegateFunction MagicLeapIdentity.MagicLeapIdentity.RequestIdentityAttributeValueDelegate__DelegateSignature // (Public|Delegate|HasOutParms) // @ game+0x1685580
	enum class EMagicLeapIdentityError RequestAttributeValueAsync(struct TArray<enum class EMagicLeapIdentityKey> RequestedAttributeList, struct FDelegate ResultDelegate); // Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValueAsync // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7cb0d0
	enum class EMagicLeapIdentityError RequestAttributeValue(struct TArray<enum class EMagicLeapIdentityKey> RequestedAttributeList, struct TArray<struct FMagicLeapIdentityAttribute> RequestedAttributeValues); // Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValue // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7caf80
	void ModifyIdentityAttributeValueDelegate__DelegateSignature(enum class EMagicLeapIdentityError ResultCode, struct TArray<enum class EMagicLeapIdentityKey> AttributesUpdatedSuccessfully); // DelegateFunction MagicLeapIdentity.MagicLeapIdentity.ModifyIdentityAttributeValueDelegate__DelegateSignature // (Public|Delegate|HasOutParms) // @ game+0x1685580
	void GetAllAvailableAttributesAsync(struct FDelegate ResultDelegate); // Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributesAsync // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7caed0
	enum class EMagicLeapIdentityError GetAllAvailableAttributes(struct TArray<enum class EMagicLeapIdentityKey> AvailableAttributes); // Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributes // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7cae10
	void AvailableIdentityAttributesDelegate__DelegateSignature(enum class EMagicLeapIdentityError ResultCode, struct TArray<enum class EMagicLeapIdentityKey> AvailableAttributes); // DelegateFunction MagicLeapIdentity.MagicLeapIdentity.AvailableIdentityAttributesDelegate__DelegateSignature // (Public|Delegate|HasOutParms) // @ game+0x1685580
};

