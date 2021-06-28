// BlueprintGeneratedClass AnimNotifyState_AttackCollisionCharaCondition.AnimNotifyState_AttackCollisionCharaCondition_C
// Size: 0x108 (Inherited: 0x102)
struct UAnimNotifyState_AttackCollisionCharaCondition_C : UAnimNotifyState_AttackCollision_C {
	bool WantCondition; // 0x102(0x01)
	char pad_103[0x1]; // 0x103(0x01)
	int32_t ConditionNo; // 0x104(0x04)

	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function AnimNotifyState_AttackCollisionCharaCondition.AnimNotifyState_AttackCollisionCharaCondition_C.Received_NotifyBegin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

