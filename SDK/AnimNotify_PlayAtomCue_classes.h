// BlueprintGeneratedClass AnimNotify_PlayAtomCue.PlayAtomCue_C
// Size: 0x54 (Inherited: 0x38)
struct UPlayAtomCue_C : UAnimNotify {
	struct USoundAtomCue* Sound; // 0x38(0x08)
	struct FName Bone; // 0x40(0x08)
	bool follow; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float VolumeMultiplier; // 0x4c(0x04)
	float PitchMultiplier; // 0x50(0x04)

	struct FString GetNotifyName(); // Function AnimNotify_PlayAtomCue.PlayAtomCue_C.GetNotifyName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotify_PlayAtomCue.PlayAtomCue_C.Received_Notify // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

