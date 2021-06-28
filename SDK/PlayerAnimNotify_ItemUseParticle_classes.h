// BlueprintGeneratedClass PlayerAnimNotify_ItemUseParticle.PlayerAnimNotify_ItemUseParticle_C
// Size: 0x45 (Inherited: 0x38)
struct UPlayerAnimNotify_ItemUseParticle_C : UAnimNotify {
	bool bAttach; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FName SocketName; // 0x3c(0x08)
	bool bRevive; // 0x44(0x01)

	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function PlayerAnimNotify_ItemUseParticle.PlayerAnimNotify_ItemUseParticle_C.Received_Notify // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

