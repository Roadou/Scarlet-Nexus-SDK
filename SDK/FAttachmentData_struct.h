// UserDefinedStruct FAttachmentData.FAttachmentData
// Size: 0x20 (Inherited: 0x00)
struct FFAttachmentData {
	enum class EAttachmentCategory Category_36_C40BBD6745AD6D8FA52A6EB6838AC260; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Variation_9_116523494A7CECE38EB2C1A2C195E751; // 0x04(0x04)
	bool bUseAnimation_31_3C166736430B2AE7D0B90587EDC972AC; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t EquipDataIndex_39_3799DF4345234ADF332299AC3C324385; // 0x0c(0x04)
	struct TArray<struct FFAttachmentMaterialData> MaterialData_43_56C799EC43832C9C78A679B25AD9ED1E; // 0x10(0x10)
};

