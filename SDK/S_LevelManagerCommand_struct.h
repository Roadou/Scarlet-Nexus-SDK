// UserDefinedStruct S_LevelManagerCommand.S_LevelManagerCommand
// Size: 0x43 (Inherited: 0x00)
struct FS_LevelManagerCommand {
	enum class E_LevelManagerCommand Command_5_4FED40634C93AC6253741994AFCFA307; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName ArgName_10_76305C1B4E71DB06E4F87ABEF040EAA7; // 0x04(0x08)
	struct FName ArgName2_22_3CD3F8AC4C99DC270D528CB0AD8F4627; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
	struct TSoftObjectPtr<UObject> ArgAsset_19_9C03485F41B91C9BF443CBA384467D10; // 0x18(0x28)
	enum class E_LevelCommandStatus Status_8_858B198F4B6F552207B6FBB9893B8A7E; // 0x40(0x01)
	bool Flag_12_969BD8BB4AB6913B58542DA244054C62; // 0x41(0x01)
	bool Flag2_24_E76529D942133A168395B991722ECD73; // 0x42(0x01)
};

