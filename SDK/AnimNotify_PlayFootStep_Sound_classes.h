// BlueprintGeneratedClass AnimNotify_PlayFootStep_Sound.AnimNotify_PlayFootStep_Sound_C
// Size: 0x80 (Inherited: 0x38)
struct UAnimNotify_PlayFootStep_Sound_C : UAnimNotify {
	struct FVector HitSegmentOffset; // 0x38(0x0c)
	struct FName SocketName; // 0x44(0x08)
	bool IsGroundAttributeCheck; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct FName ActionTypeName; // 0x50(0x08)
	bool IsPlaySocketPosition; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct TArray<struct FST_DoubleString> BpName_ActionName; // 0x60(0x10)
	bool IsOwnerRotation; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	struct FRotator AddRotator; // 0x74(0x0c)

	void GetBoneLocation(struct USceneComponent* Component, struct AActor* Actor, struct FName BoneName, struct FVector Location); // Function AnimNotify_PlayFootStep_Sound.AnimNotify_PlayFootStep_Sound_C.GetBoneLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotify_PlayFootStep_Sound.AnimNotify_PlayFootStep_Sound_C.Received_Notify // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

