// Enum MagicLeapIdentity.EMagicLeapIdentityKey
enum class EMagicLeapIdentityKey : uint8 {
	GivenName,
	FamilyName,
	Email,
	Bio,
	PhoneNumber,
	Avatar2D,
	Avatar3D,
	Unknown,
	EMagicLeapIdentityKey_MAX,
};

// Enum MagicLeapIdentity.EMagicLeapIdentityError
enum class EMagicLeapIdentityError : uint8 {
	Ok,
	InvalidParam,
	AllocFailed,
	PrivilegeDenied,
	FailedToConnectToLocalService,
	FailedToConnectToCloudService,
	CloudAuthentication,
	InvalidInformationFromCloud,
	NotLoggedIn,
	ExpiredCredentials,
	FailedToGetUserProfile,
	Unauthorized,
	CertificateError,
	RejectedByCloud,
	AlreadyLoggedIn,
	ModifyIsNotSupported,
	NetworkError,
	UnspecifiedFailure,
	EMagicLeapIdentityError_MAX,
};

// ScriptStruct MagicLeapIdentity.MagicLeapIdentityAttribute
// Size: 0x18 (Inherited: 0x00)
struct FMagicLeapIdentityAttribute {
	enum class EMagicLeapIdentityKey Attribute; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Value; // 0x08(0x10)
};

