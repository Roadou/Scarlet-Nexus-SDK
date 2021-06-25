// BlueprintGeneratedClass PlayerAnimNotifyState_EnablePsychic.PlayerAnimNotifyState_EnablePsychic_C
// Size: 0x3f (Inherited: 0x30)
struct UPlayerAnimNotifyState_EnablePsychic_C : UAnimNotifyState {
	bool bNotOff; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FName ClaimantName; // 0x34(0x08)
	bool bPsychicEx; // 0x3c(0x01)
	enum class ECharaExecuteNotifyKind ExecuteKind; // 0x3d(0x01)
	bool bSkipWeightGaugeCheck; // 0x3e(0x01)

	struct FString GetNotifyName(); // Function PlayerAnimNotifyState_EnablePsychic.PlayerAnimNotifyState_EnablePsychic_C.GetNotifyName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function PlayerAnimNotifyState_EnablePsychic.PlayerAnimNotifyState_EnablePsychic_C.Received_NotifyEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function PlayerAnimNotifyState_EnablePsychic.PlayerAnimNotifyState_EnablePsychic_C.Received_NotifyBegin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

