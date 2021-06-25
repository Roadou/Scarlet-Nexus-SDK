// Enum LocationServicesBPLibrary.ELocationAccuracy
enum class ELocationAccuracy : uint8 {
	LA_ThreeKilometers,
	LA_OneKilometer,
	LA_HundredMeters,
	LA_TenMeters,
	LA_Best,
	LA_Navigation,
	LA_MAX,
};

// ScriptStruct LocationServicesBPLibrary.LocationServicesData
// Size: 0x18 (Inherited: 0x00)
struct FLocationServicesData {
	float Timestamp; // 0x00(0x04)
	float Longitude; // 0x04(0x04)
	float Latitude; // 0x08(0x04)
	float HorizontalAccuracy; // 0x0c(0x04)
	float VerticalAccuracy; // 0x10(0x04)
	float Altitude; // 0x14(0x04)
};

