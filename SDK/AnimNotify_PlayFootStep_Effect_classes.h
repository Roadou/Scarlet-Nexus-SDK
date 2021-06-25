// BlueprintGeneratedClass AnimNotify_PlayFootStep_Effect.AnimNotify_PlayFootStep_Effect_C
// Size: 0x68 (Inherited: 0x38)
struct UAnimNotify_PlayFootStep_Effect_C : UAnimNotify {
	struct FVector HitSegmentOffset; // 0x38(0x0c)
	struct FName SocketName; // 0x44(0x08)
	bool IsGroundAttributeCheck; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct FName ActionTypeName; // 0x50(0x08)
	bool IsPlaySocketPosition; // 0x58(0x01)
	bool IsOwnerRotation; // 0x59(0x01)
	char pad_5A[0x2]; // 0x5a(0x02)
	struct FRotator AddRotator; // 0x5c(0x0c)

	void GetBoneLocation(struct USceneComponent* Component, struct AActor* Actor, struct FName BoneName, struct FVector Location); // Function AnimNotify_PlayFootStep_Effect.AnimNotify_PlayFootStep_Effect_C.GetBoneLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotify_PlayFootStep_Effect.AnimNotify_PlayFootStep_Effect_C.Received_Notify // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

