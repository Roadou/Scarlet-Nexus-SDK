// BlueprintGeneratedClass BP_EnemyAnimNotify_CuePlayKindSwitch.BP_EnemyAnimNotify_CuePlayKindSwitch_C
// Size: 0x70 (Inherited: 0x40)
struct UBP_EnemyAnimNotify_CuePlayKindSwitch_C : URSAtomCuePlayNotifyBase {
	struct USoundAtomCue* Sound; // 0x40(0x08)
	struct FName Bone; // 0x48(0x08)
	struct URSAtomComponentBase* Component; // 0x50(0x08)
	struct USoundAttenuation* Attenuation; // 0x58(0x08)
	struct TArray<enum class EnemyKind> EnemyKind; // 0x60(0x10)

	void OnSetEditorSound(struct USoundAtomCue* Sound); // Function BP_EnemyAnimNotify_CuePlayKindSwitch.BP_EnemyAnimNotify_CuePlayKindSwitch_C.OnSetEditorSound // (Event|Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	struct FString GetNotifyName(); // Function BP_EnemyAnimNotify_CuePlayKindSwitch.BP_EnemyAnimNotify_CuePlayKindSwitch_C.GetNotifyName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function BP_EnemyAnimNotify_CuePlayKindSwitch.BP_EnemyAnimNotify_CuePlayKindSwitch_C.Received_Notify // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

