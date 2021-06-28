// BlueprintGeneratedClass PlayerAnimNotifyState_ChangeWeaponScale.PlayerAnimNotifyState_ChangeWeaponScale_C
// Size: 0x44 (Inherited: 0x30)
struct UPlayerAnimNotifyState_ChangeWeaponScale_C : UAnimNotifyState {
	struct FVector Scale; // 0x30(0x0c)
	float BeginTime; // 0x3c(0x04)
	float endTime; // 0x40(0x04)

	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function PlayerAnimNotifyState_ChangeWeaponScale.PlayerAnimNotifyState_ChangeWeaponScale_C.Received_NotifyEnd // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function PlayerAnimNotifyState_ChangeWeaponScale.PlayerAnimNotifyState_ChangeWeaponScale_C.Received_NotifyBegin // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

