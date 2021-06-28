// BlueprintGeneratedClass AnimNotifyState_AttackCollision.AnimNotifyState_AttackCollision_C
// Size: 0x102 (Inherited: 0x30)
struct UAnimNotifyState_AttackCollision_C : UAnimNotifyState {
	int32_t WeaponChargeLevel; // 0x30(0x04)
	bool bUseWeaponMeshSocket; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	int32_t WeaponIndex; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FAttackCollisionInfoBP CollisionInfo; // 0x40(0xc0)
	enum class ECharaExecuteNotifyKind ExecuteKind; // 0x100(0x01)
	bool IsDebugDraw; // 0x101(0x01)

	struct FString GetNotifyName(); // Function AnimNotifyState_AttackCollision.AnimNotifyState_AttackCollision_C.GetNotifyName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_NotifyTick(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float FrameDeltaTime); // Function AnimNotifyState_AttackCollision.AnimNotifyState_AttackCollision_C.Received_NotifyTick // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotifyState_AttackCollision.AnimNotifyState_AttackCollision_C.Received_NotifyEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function AnimNotifyState_AttackCollision.AnimNotifyState_AttackCollision_C.Received_NotifyBegin // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

