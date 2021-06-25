// Enum UdpMessaging.EUdpMessageFormat
enum class EUdpMessageFormat : uint8 {
	None,
	Json,
	TaggedProperty,
	CborPlatformEndianness,
	CborStandardEndianness,
	EUdpMessageFormat_MAX,
};

// ScriptStruct UdpMessaging.UdpMockMessage
// Size: 0x10 (Inherited: 0x00)
struct FUdpMockMessage {
	struct TArray<char> Data; // 0x00(0x10)
};

