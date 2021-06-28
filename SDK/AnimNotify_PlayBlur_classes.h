// BlueprintGeneratedClass AnimNotify_PlayBlur.AnimNotify_PlayBlur_C
// Size: 0x4e (Inherited: 0x38)
struct UAnimNotify_PlayBlur_C : UAnimNotify {
	struct FName PlaySocketName; // 0x38(0x08)
	struct UCurveVector* CurveData; // 0x40(0x08)
	int32_t Priority; // 0x48(0x04)
	enum class ENotifyRadialBlurModulateType PresetColorType; // 0x4c(0x01)
	bool Force; // 0x4d(0x01)

	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotify_PlayBlur.AnimNotify_PlayBlur_C.Received_Notify // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

