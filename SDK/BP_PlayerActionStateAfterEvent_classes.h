// BlueprintGeneratedClass BP_PlayerActionStateAfterEvent.BP_PlayerActionStateAfterEvent_C
// Size: 0x10c (Inherited: 0xe8)
struct UBP_PlayerActionStateAfterEvent_C : UBP_PlayerActionStateCommonBase_C {
	struct UAnimMontage* AnimMontage; // 0xe8(0x08)
	struct UAnimMontage* SpAttackMontage; // 0xf0(0x08)
	struct UAnimMontage* SpEndMontage; // 0xf8(0x08)
	enum class EParamAfterEventAction Param; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	struct FName ClaimantName; // 0x104(0x08)

	int32_t Update(); // Function BP_PlayerActionStateAfterEvent.BP_PlayerActionStateAfterEvent_C.Update // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Exit(int32_t NextStateIndex); // Function BP_PlayerActionStateAfterEvent.BP_PlayerActionStateAfterEvent_C.Exit // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Enter(int32_t Param); // Function BP_PlayerActionStateAfterEvent.BP_PlayerActionStateAfterEvent_C.Enter // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

