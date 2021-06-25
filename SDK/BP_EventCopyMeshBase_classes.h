// BlueprintGeneratedClass BP_EventCopyMeshBase.BP_EventCopyMeshBase_C
// Size: 0x370 (Inherited: 0x2b8)
struct ABP_EventCopyMeshBase_C : ASkeletalMeshActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	enum class EPlayerID playerId; // 0x2c0(0x01)
	char pad_2C1[0x3]; // 0x2c1(0x03)
	struct FPlayerInfo PlayerInfo; // 0x2c4(0xac)

	void GetAttachedCharacterMesh(enum class EPlayerID EquipPlayerID, int32_t EquipMeshIndex, struct USkeletalMeshComponent* Mesh); // Function BP_EventCopyMeshBase.BP_EventCopyMeshBase_C.GetAttachedCharacterMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EquipAttachmentInterface(enum class EPlayerAttachment Index, int32_t AttachmentItemID, enum class EPlayerID EquipPlayerID, int32_t EquipMeshIndex, bool bDummy); // Function BP_EventCopyMeshBase.BP_EventCopyMeshBase_C.EquipAttachmentInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DestroyAttachmentMeshComponent(struct USceneComponent* DestroyMeshComponent, bool bDummy); // Function BP_EventCopyMeshBase.BP_EventCopyMeshBase_C.DestroyAttachmentMeshComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttachmentVisibilityOffOnHead(bool bOff, bool bDummy); // Function BP_EventCopyMeshBase.BP_EventCopyMeshBase_C.AttachmentVisibilityOffOnHead // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPlayerID(enum class EPlayerID playerId); // Function BP_EventCopyMeshBase.BP_EventCopyMeshBase_C.GetPlayerID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetupCostumeAttachment(struct UBP_AttachmentManageComponent_C* AttachmentManageComp); // Function BP_EventCopyMeshBase.BP_EventCopyMeshBase_C.SetupCostumeAttachment // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupWeapon(struct USkeletalMeshComponent* WeaponMeshComp, struct USkeletalMeshComponent* ExtraMeshComp); // Function BP_EventCopyMeshBase.BP_EventCopyMeshBase_C.SetupWeapon // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function BP_EventCopyMeshBase.BP_EventCopyMeshBase_C.Initialize // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventCopyMeshBase.BP_EventCopyMeshBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventCopyMeshBase(int32_t EntryPoint); // Function BP_EventCopyMeshBase.BP_EventCopyMeshBase_C.ExecuteUbergraph_BP_EventCopyMeshBase // (Final|UbergraphFunction) // @ game+0x1685580
};

