// BlueprintGeneratedClass AnimNotifyState_TimedParticleSystemCharaCondition.AnimNotifyState_TimedParticleSystemCharaCondition_C
// Size: 0x90 (Inherited: 0x88)
struct UAnimNotifyState_TimedParticleSystemCharaCondition_C : UAnimNotifyState_RSTimedParticleSystemWithCondition {
	bool WantCondition; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	int32_t ConditionNo; // 0x8c(0x04)

	bool CheckCondition(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotifyState_TimedParticleSystemCharaCondition.AnimNotifyState_TimedParticleSystemCharaCondition_C.CheckCondition // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
};

