// BlueprintGeneratedClass RSAtomCuePlay_AnimNotify.RSAtomCuePlay_AnimNotify_C
// Size: 0x65 (Inherited: 0x40)
struct URSAtomCuePlay_AnimNotify_C : URSAtomCuePlayNotifyBase {
	struct USoundAtomCue* Sound; // 0x40(0x08)
	struct FName Bone; // 0x48(0x08)
	struct URSAtomComponentBase* Component; // 0x50(0x08)
	struct USoundAttenuation* Attenuation; // 0x58(0x08)
	bool bUseWeaponLocation; // 0x60(0x01)
	enum class EGetPlayerWeaponType WeaponType; // 0x61(0x01)
	bool noUse3DPan; // 0x62(0x01)
	bool bDisableCheck; // 0x63(0x01)
	bool bPlaySASCopyPlayer; // 0x64(0x01)

	void OnSetEditorSound(struct USoundAtomCue* Sound); // Function RSAtomCuePlay_AnimNotify.RSAtomCuePlay_AnimNotify_C.OnSetEditorSound // (Event|Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	struct FString GetNotifyName(); // Function RSAtomCuePlay_AnimNotify.RSAtomCuePlay_AnimNotify_C.GetNotifyName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function RSAtomCuePlay_AnimNotify.RSAtomCuePlay_AnimNotify_C.Received_Notify // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

