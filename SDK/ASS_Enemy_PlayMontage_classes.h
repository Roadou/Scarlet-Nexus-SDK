// BlueprintGeneratedClass ASS_Enemy_PlayMontage.ASS_Enemy_PlayMontage_C
// Size: 0x51 (Inherited: 0x40)
struct UASS_Enemy_PlayMontage_C : UASState_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x40(0x08)
	struct UAnimMontage* Montage; // 0x48(0x08)
	bool IsUseBlendOut; // 0x50(0x01)

	void ReceiveBeginPlay(struct UAnimInstance* AnimInstance); // Function ASS_Enemy_PlayMontage.ASS_Enemy_PlayMontage_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaTime, struct UAnimInstance* AnimInstance); // Function ASS_Enemy_PlayMontage.ASS_Enemy_PlayMontage_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_ASS_Enemy_PlayMontage(int32_t EntryPoint); // Function ASS_Enemy_PlayMontage.ASS_Enemy_PlayMontage_C.ExecuteUbergraph_ASS_Enemy_PlayMontage // (Final|UbergraphFunction) // @ game+0x1685580
};

