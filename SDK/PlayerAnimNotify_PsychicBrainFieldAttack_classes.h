// BlueprintGeneratedClass PlayerAnimNotify_PsychicBrainFieldAttack.PlayerAnimNotify_PsychicBrainFieldAttack_C
// Size: 0x44 (Inherited: 0x38)
struct UPlayerAnimNotify_PsychicBrainFieldAttack_C : UAnimNotify {
	enum class EPsychicObjectBrainFieldAttackType AttackType; // 0x38(0x01)
	bool SwingLerp; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	float SwingLerpTime; // 0x3c(0x04)
	float SwingUpdateTime; // 0x40(0x04)

	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function PlayerAnimNotify_PsychicBrainFieldAttack.PlayerAnimNotify_PsychicBrainFieldAttack_C.Received_Notify // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

