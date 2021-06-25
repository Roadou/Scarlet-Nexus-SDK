// BlueprintGeneratedClass BP_PlayerUpperActionStatePsychicAttack.BP_PlayerUpperActionStatePsychicAttack_C
// Size: 0x100 (Inherited: 0xe0)
struct UBP_PlayerUpperActionStatePsychicAttack_C : UBP_PlayerUpperActionStateBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe0(0x08)
	enum class EPlayerPsychicActionParam ActionParam; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct UAnimMontage* CurrentMontage; // 0xf0(0x08)
	struct FName ClaimantName; // 0xf8(0x08)

	void OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_PlayerUpperActionStatePsychicAttack.BP_PlayerUpperActionStatePsychicAttack_C.OnMontageBlendingOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetProcessEnd(); // Function BP_PlayerUpperActionStatePsychicAttack.BP_PlayerUpperActionStatePsychicAttack_C.SetProcessEnd // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetProcessAttack(); // Function BP_PlayerUpperActionStatePsychicAttack.BP_PlayerUpperActionStatePsychicAttack_C.SetProcessAttack // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Exit(int32_t NextStateIndex); // Function BP_PlayerUpperActionStatePsychicAttack.BP_PlayerUpperActionStatePsychicAttack_C.Exit // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Update(); // Function BP_PlayerUpperActionStatePsychicAttack.BP_PlayerUpperActionStatePsychicAttack_C.Update // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Enter(int32_t Param); // Function BP_PlayerUpperActionStatePsychicAttack.BP_PlayerUpperActionStatePsychicAttack_C.Enter // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindDispatch(); // Function BP_PlayerUpperActionStatePsychicAttack.BP_PlayerUpperActionStatePsychicAttack_C.BindDispatch // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindDispatch(); // Function BP_PlayerUpperActionStatePsychicAttack.BP_PlayerUpperActionStatePsychicAttack_C.UnbindDispatch // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PlayerUpperActionStatePsychicAttack(int32_t EntryPoint); // Function BP_PlayerUpperActionStatePsychicAttack.BP_PlayerUpperActionStatePsychicAttack_C.ExecuteUbergraph_BP_PlayerUpperActionStatePsychicAttack // (Final|UbergraphFunction) // @ game+0x1685580
};

