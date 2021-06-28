// UserDefinedStruct FNewTownPeopleData.FNewTownPeopleData
// Size: 0xc9 (Inherited: 0x00)
struct FFNewTownPeopleData {
	int32_t NpcMeshID_8_686334BC4EF102F20C62BDABF41CAD25; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TSoftClassPtr<UObject> NpcAnimationClass_35_214A9A9249573FAF682DEFB391131068; // 0x08(0x28)
	struct TSoftObjectPtr<UASAnimationSet> NpcAnimationSet_31_B0EDBDDB4EAA0D1FE4B6B6B8D2109A7A; // 0x30(0x28)
	enum class ENewTownPeopleMotionType NpcWaitAnimationType_28_03A97FAF42EE0622DD351EB5BD69853C; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct TSoftObjectPtr<UStaticMesh> SetStaticMesh_38_B3EFADE6479ACB3D5030A0A7AA99F80F; // 0x60(0x28)
	struct TSoftObjectPtr<UDataTable> TalkAnimationList_25_E9A0328F4727AC4E0CA4C3B0F248BFCA; // 0x88(0x28)
	bool IsTalk_5_CA62D62F4503E6804ACA35A09639D2CB; // 0xb0(0x01)
	bool IsLookAt_3_B10D47EA419A86B613CFE3A713581D9E; // 0xb1(0x01)
	bool IsTurn_4_57296D644D9524AE80BB95908219F483; // 0xb2(0x01)
	bool IsOffCharaCollision_33_55ACC25B4DA19426137443A15DA9329C; // 0xb3(0x01)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct TArray<struct FFTownPeopleAttachmentData> AttachmentDataList_44_8372EE4941BECFE8EA7941B49161A2F5; // 0xb8(0x10)
	enum class EPlayerID PlayerID_47_023B05354769193E88B0649A789BCB5F; // 0xc8(0x01)
};

