// BlueprintGeneratedClass AnimNotifyState_MoveCharacter.AnimNotifyState_MoveCharacter_C
// Size: 0x4c (Inherited: 0x30)
struct UAnimNotifyState_MoveCharacter_C : UAnimNotifyState {
	bool bHologram; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FVector Direction; // 0x34(0x0c)
	float initSpeed; // 0x40(0x04)
	float Acceleration; // 0x44(0x04)
	float endSpeed; // 0x48(0x04)

	void GetMoveCharacter(struct UActorComponent* MeshComp, struct ARSBattleCharacter_C* Character); // Function AnimNotifyState_MoveCharacter.AnimNotifyState_MoveCharacter_C.GetMoveCharacter // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotifyState_MoveCharacter.AnimNotifyState_MoveCharacter_C.Received_NotifyEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function AnimNotifyState_MoveCharacter.AnimNotifyState_MoveCharacter_C.Received_NotifyBegin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

