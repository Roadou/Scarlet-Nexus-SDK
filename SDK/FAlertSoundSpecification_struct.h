// UserDefinedStruct FAlertSoundSpecification.FAlertSoundSpecification
// Size: 0x38 (Inherited: 0x00)
struct FFAlertSoundSpecification {
	int32_t ProgressIdMin_3_D9FC5F03458A1AB7D183F99A8E279AFF; // 0x00(0x04)
	int32_t ProgressIdMax_5_2262257843CF224D64E047B15D6AE76C; // 0x04(0x04)
	struct TSoftObjectPtr<USoundAtomCue> SoundCueSoftRef_8_48510E0E43A53708611088ADE7FC2BF8; // 0x08(0x28)
	enum class EPlayerID PlayerCharactor_14_9B214CF947C3FAC9F805A48EC267D903; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float Volume_17_63795973493F4D7B388C869436AD17DC; // 0x34(0x04)
};

