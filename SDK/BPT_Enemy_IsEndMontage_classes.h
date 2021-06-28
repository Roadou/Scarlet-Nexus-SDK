// BlueprintGeneratedClass BPT_Enemy_IsEndMontage.BPT_Enemy_IsEndMontage_C
// Size: 0x53 (Inherited: 0x50)
struct UBPT_Enemy_IsEndMontage_C : UASTransition_BlueprintBase {
	bool IsEndAnim; // 0x50(0x01)
	enum class EnemyMoveAnimKind SetMoveAnimKind; // 0x51(0x01)
	bool IsUseBlendOut; // 0x52(0x01)

	bool ReceiveCanEnter(struct UAnimInstance* AnimInstance); // Function BPT_Enemy_IsEndMontage.BPT_Enemy_IsEndMontage_C.ReceiveCanEnter // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

