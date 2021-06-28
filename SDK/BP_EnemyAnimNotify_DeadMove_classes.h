// BlueprintGeneratedClass BP_EnemyAnimNotify_DeadMove.BP_EnemyAnimNotify_DeadMove_C
// Size: 0x3c (Inherited: 0x30)
struct UBP_EnemyAnimNotify_DeadMove_C : UAnimNotifyState {
	float MovePower; // 0x30(0x04)
	enum class EEasingFunc MoveFunction; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float BlendExp; // 0x38(0x04)

	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function BP_EnemyAnimNotify_DeadMove.BP_EnemyAnimNotify_DeadMove_C.Received_NotifyBegin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

