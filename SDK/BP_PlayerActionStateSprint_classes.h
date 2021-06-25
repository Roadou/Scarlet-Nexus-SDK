// BlueprintGeneratedClass BP_PlayerActionStateSprint.BP_PlayerActionStateSprint_C
// Size: 0x118 (Inherited: 0xe8)
struct UBP_PlayerActionStateSprint_C : UBP_PlayerActionStateCommonBase_C {
	struct FGameTimer AngleInterpTimer; // 0xe8(0x0c)
	struct FGameTimer PsychicComboTimer; // 0xf4(0x0c)
	float StoreMaxAcceleration; // 0x100(0x04)
	float NoStickTime; // 0x104(0x04)
	struct FVector InterpDir; // 0x108(0x0c)
	float TutorialTimer; // 0x114(0x04)

	void CheckTurnBack(bool bTurnBack); // Function BP_PlayerActionStateSprint.BP_PlayerActionStateSprint_C.CheckTurnBack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void ResetMaxAcceleration(); // Function BP_PlayerActionStateSprint.BP_PlayerActionStateSprint_C.ResetMaxAcceleration // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeMaxAcceleration(); // Function BP_PlayerActionStateSprint.BP_PlayerActionStateSprint_C.ChangeMaxAcceleration // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Exit(int32_t NextStateIndex); // Function BP_PlayerActionStateSprint.BP_PlayerActionStateSprint_C.Exit // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool Transition(); // Function BP_PlayerActionStateSprint.BP_PlayerActionStateSprint_C.Transition // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Update(); // Function BP_PlayerActionStateSprint.BP_PlayerActionStateSprint_C.Update // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Enter(int32_t Param); // Function BP_PlayerActionStateSprint.BP_PlayerActionStateSprint_C.Enter // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckSprintEnd(bool bEnd); // Function BP_PlayerActionStateSprint.BP_PlayerActionStateSprint_C.CheckSprintEnd // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

