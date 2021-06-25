// UserDefinedStruct PsychicObjectBulletData.PsychicObjectBulletData
// Size: 0x48 (Inherited: 0x00)
struct FPsychicObjectBulletData {
	enum class EPsychicObjectID PsychicObjectID_14_45A3312B42773DDC4FAD42A7F4EBB7A1; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct ABP_PsychicObjectBasic_C*> PsychicBulletFreeList_17_065988034381B44EBCAA5D8B9B88BBD1; // 0x08(0x10)
	struct TArray<struct ABP_PsychicObjectBasic_C*> PsychicBulletWorkList_16_47F750EE40355742440A63A09F0A95BA; // 0x18(0x10)
	int32_t PsychicBulletMagazine_18_115067134F02AF670FA739884EDC93DD; // 0x28(0x04)
	int32_t PsychicBulletMax_19_F525922F4029B54E70AB34959842C3E2; // 0x2c(0x04)
	int32_t PsychicBulletCount_20_E9C9BF144F778175658004AA2DCB536D; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct ABP_PsychicObjectBasic_C*> PsychicBulletOwnerList_24_899B6A034FDF26CD449B12932E8D4C43; // 0x38(0x10)
};

