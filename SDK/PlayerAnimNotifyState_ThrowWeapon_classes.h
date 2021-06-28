// BlueprintGeneratedClass PlayerAnimNotifyState_ThrowWeapon.PlayerAnimNotifyState_ThrowWeapon_C
// Size: 0x51 (Inherited: 0x30)
struct UPlayerAnimNotifyState_ThrowWeapon_C : UAnimNotifyState {
	enum class EWeaponThrowType ThrowType; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float Speed; // 0x34(0x04)
	float Range; // 0x38(0x04)
	float TargetSearchAngle; // 0x3c(0x04)
	struct FVector ThrowDir; // 0x40(0x0c)
	float ReturnTime; // 0x4c(0x04)
	enum class ECharaExecuteNotifyKind ExecuteKind; // 0x50(0x01)

	void OnRep_WeaponIndex(); // Function PlayerAnimNotifyState_ThrowWeapon.PlayerAnimNotifyState_ThrowWeapon_C.OnRep_WeaponIndex // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function PlayerAnimNotifyState_ThrowWeapon.PlayerAnimNotifyState_ThrowWeapon_C.Received_NotifyEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function PlayerAnimNotifyState_ThrowWeapon.PlayerAnimNotifyState_ThrowWeapon_C.Received_NotifyBegin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

