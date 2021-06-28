// BlueprintGeneratedClass PlayerAnimNotifyState_Telepo.PlayerAnimNotifyState_Telepo_C
// Size: 0x99 (Inherited: 0x30)
struct UPlayerAnimNotifyState_Telepo_C : UAnimNotifyState {
	enum class EPlayerAnimNotifyState_TelepoMode Mode; // 0x30(0x01)
	bool bLocationTelepo; // 0x31(0x01)
	bool bLocationTargetHeight; // 0x32(0x01)
	char pad_33[0x1]; // 0x33(0x01)
	float NoTelepoToTargetDistance; // 0x34(0x04)
	float TelepoTargetDistance; // 0x38(0x04)
	float DisappearTime; // 0x3c(0x04)
	float AppearTime; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct UParticleSystem* DisappearParticle; // 0x48(0x08)
	struct UParticleSystem* AppearParticle; // 0x50(0x08)
	struct UParticleSystem* DisappearParticleSecond; // 0x58(0x08)
	struct UParticleSystem* AppearParticleSecond; // 0x60(0x08)
	struct FName SocketName; // 0x68(0x08)
	struct FName SocketNameSecond; // 0x70(0x08)
	struct UParticleSystem* TelepoParticle; // 0x78(0x08)
	struct FName SocketNameTelepo; // 0x80(0x08)
	struct UParticleSystem* TelepoParticleSecond; // 0x88(0x08)
	struct FName SocketNameTelepoSecond; // 0x90(0x08)
	bool bNoCollision; // 0x98(0x01)

	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function PlayerAnimNotifyState_Telepo.PlayerAnimNotifyState_Telepo_C.Received_NotifyEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function PlayerAnimNotifyState_Telepo.PlayerAnimNotifyState_Telepo_C.Received_NotifyBegin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

