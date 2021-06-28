// BlueprintGeneratedClass AnimNotify_PlayFootStep.AnimNotify_PlayFootStep_C
// Size: 0x70 (Inherited: 0x38)
struct UAnimNotify_PlayFootStep_C : UAnimNotify {
	struct FVector HitSegmentOffset; // 0x38(0x0c)
	struct FName SocketName; // 0x44(0x08)
	enum class ECharacterPhysicalActionType ActionType; // 0x4c(0x01)
	bool IsGroundAttributeCheck; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
	struct FString ActionName; // 0x50(0x10)
	bool IsPlaySocketPosition; // 0x60(0x01)
	bool isPlayEffect; // 0x61(0x01)
	bool isPlaySound; // 0x62(0x01)
	bool IsOwnerRotation; // 0x63(0x01)
	struct FRotator AddRotator; // 0x64(0x0c)

	void GetBoneLocation(struct USceneComponent* Component, struct AActor* Actor, struct FName BoneName, struct FVector Location); // Function AnimNotify_PlayFootStep.AnimNotify_PlayFootStep_C.GetBoneLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotify_PlayFootStep.AnimNotify_PlayFootStep_C.Received_Notify // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

