// BlueprintGeneratedClass PLY_IdleWalkRunTransition.PLY_IdleWalkRunTransition_C
// Size: 0x51 (Inherited: 0x50)
struct UPLY_IdleWalkRunTransition_C : UASTransition_BlueprintBase {
	enum class PlayerIdleWalkRunTransitionType TransitionType; // 0x50(0x01)

	void GetTransitionType(struct URSPlayerAnimInstance* playerAnim, enum class PlayerIdleWalkRunTransitionType TransitionType); // Function PLY_IdleWalkRunTransition.PLY_IdleWalkRunTransition_C.GetTransitionType // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool ReceiveCanEnter(struct UAnimInstance* AnimInstance); // Function PLY_IdleWalkRunTransition.PLY_IdleWalkRunTransition_C.ReceiveCanEnter // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

