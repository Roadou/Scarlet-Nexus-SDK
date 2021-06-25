// BlueprintGeneratedClass AnimNotify_PsyObjAttackThrow.AnimNotify_PsyObjAttackThrow_C
// Size: 0x4d (Inherited: 0x38)
struct UAnimNotify_PsyObjAttackThrow_C : UAnimNotify {
	float ThrowSpeed; // 0x38(0x04)
	float HomingSpeed; // 0x3c(0x04)
	bool bEnemyDirectShot; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FName EnemyAttackRowName; // 0x44(0x08)
	enum class ECharaExecuteNotifyKind ExecuteKind; // 0x4c(0x01)

	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotify_PsyObjAttackThrow.AnimNotify_PsyObjAttackThrow_C.Received_Notify // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

