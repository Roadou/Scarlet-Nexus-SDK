// UserDefinedStruct S_LoadedLevelInfo.S_LoadedLevelInfo
// Size: 0x41 (Inherited: 0x00)
struct FS_LoadedLevelInfo {
	struct TSoftObjectPtr<UObject> LevelRef_12_FC3BC72C44769422E4D0BC985785F37B; // 0x00(0x28)
	bool Visible_4_322AFC9B400D0A02021575A093C6B648; // 0x28(0x01)
	bool ShouldVisible_16_9D78D7CF4486CCA22F1C679CBECCDF71; // 0x29(0x01)
	enum class E_LevelLoadStatus Status_7_7DF38F1441C9AD6FF746B0B16DFE5992; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
	struct TArray<struct FName> UsingAreaNames_11_3C32EA644D21866161F261AAC7796DBB; // 0x30(0x10)
	bool IsChangingVisible_14_3C7443AA484C54CFA7DD8EBB618183C8; // 0x40(0x01)
};

