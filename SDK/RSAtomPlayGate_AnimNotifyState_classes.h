// BlueprintGeneratedClass RSAtomPlayGate_AnimNotifyState.RSAtomPlayGate_AnimNotifyState_C
// Size: 0x58 (Inherited: 0x38)
struct URSAtomPlayGate_AnimNotifyState_C : URSAtomCuePlayNotifyStateBase {
	struct USoundAtomCue* Sound; // 0x38(0x08)
	struct FName Bone; // 0x40(0x08)
	struct TArray<struct UAtomComponent*> AtomComponents; // 0x48(0x10)

	void OnSetEditorSound(struct USoundAtomCue* Sound); // Function RSAtomPlayGate_AnimNotifyState.RSAtomPlayGate_AnimNotifyState_C.OnSetEditorSound // (Event|Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function RSAtomPlayGate_AnimNotifyState.RSAtomPlayGate_AnimNotifyState_C.Received_NotifyEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function RSAtomPlayGate_AnimNotifyState.RSAtomPlayGate_AnimNotifyState_C.Received_NotifyBegin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

