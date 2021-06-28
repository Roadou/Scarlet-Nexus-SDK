// BlueprintGeneratedClass AnimNotify_PlaySysBrainTalk.AnimNotify_PlaySysBrainTalk_C
// Size: 0x41 (Inherited: 0x38)
struct UAnimNotify_PlaySysBrainTalk_C : UAnimNotify {
	enum class EBrainTalkSystemType BrainTalkType; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t BrainTalkIndex; // 0x3c(0x04)
	enum class EPlayerID player1; // 0x40(0x01)

	struct FString GetNotifyName(); // Function AnimNotify_PlaySysBrainTalk.AnimNotify_PlaySysBrainTalk_C.GetNotifyName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotify_PlaySysBrainTalk.AnimNotify_PlaySysBrainTalk_C.Received_Notify // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

