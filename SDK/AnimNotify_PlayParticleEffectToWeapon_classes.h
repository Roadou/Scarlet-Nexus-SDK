// BlueprintGeneratedClass AnimNotify_PlayParticleEffectToWeapon.AnimNotify_PlayParticleEffectToWeapon_C
// Size: 0x4c (Inherited: 0x38)
struct UAnimNotify_PlayParticleEffectToWeapon_C : UAnimNotify {
	struct UParticleSystem* ParticleSystem; // 0x38(0x08)
	enum class EGetPlayerWeaponType WeaponType; // 0x40(0x01)
	bool bAttached; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	struct FName SocketName; // 0x44(0x08)

	struct FString GetNotifyName(); // Function AnimNotify_PlayParticleEffectToWeapon.AnimNotify_PlayParticleEffectToWeapon_C.GetNotifyName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotify_PlayParticleEffectToWeapon.AnimNotify_PlayParticleEffectToWeapon_C.Received_Notify // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

