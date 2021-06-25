// UserDefinedStruct S_AreaInfo.S_AreaInfo
// Size: 0x68 (Inherited: 0x00)
struct FS_AreaInfo {
	int32_t LocationID_68_BB9E913545744980C85F85898489A6E2; // 0x00(0x04)
	int32_t AreaID_70_6E12812A452285A11C4D3E9DB7066E66; // 0x04(0x04)
	struct FName AreaName_51_E51E2F0B496EBFDE5F3362849C7A9014; // 0x08(0x08)
	enum class E_SceneType SceneType_34_DBE4E58B490D7EC844354EABF2193F32; // 0x10(0x01)
	enum class EPlayerCameraPreset CameraPreset_80_BD8249CA4A0BE9F5F95805B02F242BBC; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	struct FName SoundSetting_62_9647562F454F621CF70C2381300834F2; // 0x14(0x08)
	enum class E_LevelLoadStatus LoadStatus_37_92CD1C0A49B7530772E153BC604471E6; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct TArray<struct TSoftObjectPtr<UObject>> LBAndPortalLevels_77_048873B243B6599D7021EFB7B270398C; // 0x20(0x10)
	struct TArray<struct TSoftObjectPtr<UObject>> PreloadLevels_52_F45B8D0E45B49343F7FC84BAD524BE2C; // 0x30(0x10)
	struct TArray<struct TSoftObjectPtr<UObject>> Levels_53_B81EB2654640B24DFC7BF489B5B37BBC; // 0x40(0x10)
	struct FName DefaultPlayerStart_65_E10F31AC43170C58331359B5EC3F2A38; // 0x50(0x08)
	struct TArray<bool> ConditionResults_73_03897446420427BF6DE409A5ACF33169; // 0x58(0x10)
};

