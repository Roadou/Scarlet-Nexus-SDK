// BlueprintGeneratedClass PlayerAnimNotifyState_WeaponVisibility.PlayerAnimNotifyState_WeaponVisibility_C
// Size: 0x3a (Inherited: 0x30)
struct UPlayerAnimNotifyState_WeaponVisibility_C : UAnimNotifyState {
	bool bAllWeapon; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t WeaponIndex; // 0x34(0x04)
	bool bVisibilityOffMode; // 0x38(0x01)
	bool bCopyOnly; // 0x39(0x01)

	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function PlayerAnimNotifyState_WeaponVisibility.PlayerAnimNotifyState_WeaponVisibility_C.Received_NotifyEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function PlayerAnimNotifyState_WeaponVisibility.PlayerAnimNotifyState_WeaponVisibility_C.Received_NotifyBegin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

