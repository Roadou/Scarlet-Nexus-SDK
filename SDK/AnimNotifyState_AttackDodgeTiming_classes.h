// BlueprintGeneratedClass AnimNotifyState_AttackDodgeTiming.AnimNotifyState_AttackDodgeTiming_C
// Size: 0x4d (Inherited: 0x30)
struct UAnimNotifyState_AttackDodgeTiming_C : UAnimNotifyState {
	int32_t Param; // 0x30(0x04)
	struct FName ClaimantName; // 0x34(0x08)
	struct FFNotifyAttackData AttackData; // 0x3c(0x10)
	bool bEditorPreview; // 0x4c(0x01)

	void DebugPreview(struct USkeletalMeshComponent* MeshComp); // Function AnimNotifyState_AttackDodgeTiming.AnimNotifyState_AttackDodgeTiming_C.DebugPreview // (Public|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_NotifyTick(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float FrameDeltaTime); // Function AnimNotifyState_AttackDodgeTiming.AnimNotifyState_AttackDodgeTiming_C.Received_NotifyTick // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotifyState_AttackDodgeTiming.AnimNotifyState_AttackDodgeTiming_C.Received_NotifyEnd // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function AnimNotifyState_AttackDodgeTiming.AnimNotifyState_AttackDodgeTiming_C.Received_NotifyBegin // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

