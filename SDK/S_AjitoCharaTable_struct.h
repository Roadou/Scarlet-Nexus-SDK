// UserDefinedStruct S_AjitoCharaTable.S_AjitoCharaTable
// Size: 0x78 (Inherited: 0x00)
struct FS_AjitoCharaTable {
	enum class EPlayerID PlayerID_3_CFF677AD44EA72241FB3ECA5AD758EEB; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString CharaID_27_EA5E67FA4660F52356A1C4897F7033C6; // 0x08(0x10)
	struct FString CharaName_28_50EE392C4EC79640A37E56AAABC948E2; // 0x18(0x10)
	struct FString CharaRoma_30_C3E1DC6B49866A3C0D7B0084BB21C162; // 0x28(0x10)
	int32_t NpcMeshID_14_FCF69C6F4DB3A061257905A76FDA5D2A; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TSoftObjectPtr<USkeletalMesh> Mesh_38_78DD41124ADE8E0384AC92B688A08472; // 0x40(0x28)
	struct ABP_AjitoMember_C* ActorClass_43_63DE75B648F6C8257DA016BDDA559A17; // 0x68(0x08)
	struct URSAjitoAnimInstance* AnimClass_35_FF99A4BF49B9F9709B89B09D558A72D3; // 0x70(0x08)
};

