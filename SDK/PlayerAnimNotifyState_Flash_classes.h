// BlueprintGeneratedClass PlayerAnimNotifyState_Flash.PlayerAnimNotifyState_Flash_C
// Size: 0x44 (Inherited: 0x30)
struct UPlayerAnimNotifyState_Flash_C : UAnimNotifyState {
	struct FLinearColor EmissiveColor; // 0x30(0x10)
	float EmissivePower; // 0x40(0x04)

	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function PlayerAnimNotifyState_Flash.PlayerAnimNotifyState_Flash_C.Received_NotifyEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function PlayerAnimNotifyState_Flash.PlayerAnimNotifyState_Flash_C.Received_NotifyBegin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

