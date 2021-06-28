// BlueprintGeneratedClass AnimNotify_RSPlayParticleEffectSASCopy.AnimNotify_RSPlayParticleEffectSASCopy_C
// Size: 0xdc (Inherited: 0xd0)
struct UAnimNotify_RSPlayParticleEffectSASCopy_C : UAnimNotify_RSPlayParticleEffect_SASCopyBase {
	bool bDefault; // 0xd0(0x01)
	bool bOriginal1; // 0xd1(0x01)
	bool bCopy1; // 0xd2(0x01)
	bool bOriginal2; // 0xd3(0x01)
	bool bCopy2; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	int32_t WeaponChargeLevel; // 0xd8(0x04)

	bool CheckExecNotify(struct USkeletalMeshComponent* MeshComp); // Function AnimNotify_RSPlayParticleEffectSASCopy.AnimNotify_RSPlayParticleEffectSASCopy_C.CheckExecNotify // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

