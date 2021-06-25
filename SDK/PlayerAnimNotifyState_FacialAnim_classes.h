// BlueprintGeneratedClass PlayerAnimNotifyState_FacialAnim.PlayerAnimNotifyState_FacialAnim_C
// Size: 0x31 (Inherited: 0x30)
struct UPlayerAnimNotifyState_FacialAnim_C : UAnimNotifyState {
	enum class EPlayerFacialAnim Pattern; // 0x30(0x01)

	void OnRep_WeaponIndex(); // Function PlayerAnimNotifyState_FacialAnim.PlayerAnimNotifyState_FacialAnim_C.OnRep_WeaponIndex // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function PlayerAnimNotifyState_FacialAnim.PlayerAnimNotifyState_FacialAnim_C.Received_NotifyEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function PlayerAnimNotifyState_FacialAnim.PlayerAnimNotifyState_FacialAnim_C.Received_NotifyBegin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

