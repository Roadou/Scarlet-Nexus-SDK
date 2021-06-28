// BlueprintGeneratedClass PlayerAnimNotify.PlayerAnimNotify_C
// Size: 0x50 (Inherited: 0x38)
struct UPlayerAnimNotify_C : UAnimNotify {
	enum class PlayerAnimTransitionKind TransitionType; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct FPlayerDelayNotifyObject> DelayNotifys; // 0x40(0x10)

	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function PlayerAnimNotify.PlayerAnimNotify_C.Received_Notify // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

