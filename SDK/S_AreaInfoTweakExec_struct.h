// UserDefinedStruct S_AreaInfoTweakExec.S_AreaInfoTweakExec
// Size: 0x19 (Inherited: 0x00)
struct FS_AreaInfoTweakExec {
	enum class EAreaInfoTweakType ThenTweakType_10_B0C00314452CE7748C7A07941B772520; // 0x00(0x01)
	enum class EAreaInfoType AreaInfoType_13_C23336EF452B9F0DA5B65C99A87AEFE5; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct FName> AreaInfoNames_9_B730EC744E178F7514DC969C27000F33; // 0x08(0x10)
	enum class E_SceneType SceneType_16_90A790824B0620969BC0E88F7D941149; // 0x18(0x01)
};

