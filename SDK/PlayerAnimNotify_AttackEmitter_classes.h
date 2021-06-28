// BlueprintGeneratedClass PlayerAnimNotify_AttackEmitter.PlayerAnimNotify_AttackEmitter_C
// Size: 0x55 (Inherited: 0x38)
struct UPlayerAnimNotify_AttackEmitter_C : UAnimNotify {
	struct TArray<struct FFAttackEmitterInfo> AttackInfo; // 0x38(0x10)
	struct AActor* ClassInfo; // 0x48(0x08)
	float Interval; // 0x50(0x04)
	enum class EAttackEmitterMode Mode; // 0x54(0x01)

	void OnRep_AttackInfo(); // Function PlayerAnimNotify_AttackEmitter.PlayerAnimNotify_AttackEmitter_C.OnRep_AttackInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function PlayerAnimNotify_AttackEmitter.PlayerAnimNotify_AttackEmitter_C.Received_Notify // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

