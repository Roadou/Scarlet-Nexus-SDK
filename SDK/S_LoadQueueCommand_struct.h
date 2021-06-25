// UserDefinedStruct S_LoadQueueCommand.S_LoadQueueCommand
// Size: 0x51 (Inherited: 0x00)
struct FS_LoadQueueCommand {
	int32_t id_17_0B1A5CEC4C7BC842FCD4E5843B63C689; // 0x00(0x04)
	enum class E_LoadQueueCommand Command_2_071D5CA2433B2D12A6D999806234DCD7; // 0x04(0x01)
	enum class E_LevelCommandStatus Status_20_9DA6FF2044CF856415563ABFAE454EC4; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct FName AreaName_10_EDBBDBEA45677009FBFFE98DD77E94FB; // 0x08(0x08)
	struct FName LevelName_12_885F73BE491E99852FDA1F90C6FA841C; // 0x10(0x08)
	struct FPrimaryAssetType PackName_14_87E29F9840ECF57D3024AC98B32D9DCF; // 0x18(0x08)
	struct TSoftObjectPtr<UObject> Asset_30_7EED51E6449D8A30F0E63080FC27A9FC; // 0x20(0x28)
	struct FName AssetListName_29_C4C798854F5AFBD820235CBF51989C6D; // 0x48(0x08)
	bool Flag_22_B58001254B253FBD4EF8978B00E3AF9E; // 0x50(0x01)
};

