// UserDefinedStruct struct_ui_brainmap_info.struct_ui_brainmap_info
// Size: 0x30 (Inherited: 0x00)
struct Fstruct_ui_brainmap_info {
	enum class EPlayerSkill SkillID_2_2C76D6084103302E2A73CDBBF2A6FC9E; // 0x00(0x01)
	enum class enum_ui_skill_type SkillType_20_9800A3DD44BAF33F4703CA81F9797D69; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t StartIndex_5_3D9CB31645129A35E0F704BF2098F419; // 0x04(0x04)
	int32_t ConnectNum_12_A2C2864843666A7D1497D4A1A420556A; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<int32_t> ConnectSkillIndexList_16_36D795474081BF2D4ADBD0A6805DB58D; // 0x10(0x10)
	struct TArray<int32_t> ConnectLineIndexList_17_0183621643D8B759D209AAAEF638E3EC; // 0x20(0x10)
};

