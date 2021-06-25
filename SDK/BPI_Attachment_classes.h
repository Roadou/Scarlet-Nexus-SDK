// BlueprintGeneratedClass BPI_Attachment.BPI_Attachment_C
// Size: 0x28 (Inherited: 0x28)
struct UBPI_Attachment_C : UInterface {

	void AttachmentVisibilityOffOnHead(bool bOff, bool bDummy); // Function BPI_Attachment.BPI_Attachment_C.AttachmentVisibilityOffOnHead // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DestroyAttachmentMeshComponent(struct USceneComponent* DestroyMeshComponent, bool bDummy); // Function BPI_Attachment.BPI_Attachment_C.DestroyAttachmentMeshComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EquipAttachmentInterface(enum class EPlayerAttachment Index, int32_t AttachmentItemID, enum class EPlayerID EquipPlayerID, int32_t EquipMeshIndex, bool bDummy); // Function BPI_Attachment.BPI_Attachment_C.EquipAttachmentInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAttachedCharacterMesh(enum class EPlayerID EquipPlayerID, int32_t EquipMeshIndex, struct USkeletalMeshComponent* Mesh); // Function BPI_Attachment.BPI_Attachment_C.GetAttachedCharacterMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

