// BlueprintGeneratedClass BP_PlayerActionStateWalkRun.BP_PlayerActionStateWalkRun_C
// Size: 0x114 (Inherited: 0xe8)
struct UBP_PlayerActionStateWalkRun_C : UBP_PlayerActionStateCommonBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	bool bRootMotionModeSwitch; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	float RotateTimer; // 0xf4(0x04)
	float StoreMaxAcceleration; // 0xf8(0x04)
	float RootMotionInterpTimer; // 0xfc(0x04)
	struct FVector RootMotionInterpDir; // 0x100(0x0c)
	float PARAM_RootMotionInterpTime; // 0x10c(0x04)
	float PARAM_RootMotionInterpDistance; // 0x110(0x04)

	void UpdateRootMotionInterp(float DeltaSeconds); // Function BP_PlayerActionStateWalkRun.BP_PlayerActionStateWalkRun_C.UpdateRootMotionInterp // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckRootMotionMode(); // Function BP_PlayerActionStateWalkRun.BP_PlayerActionStateWalkRun_C.CheckRootMotionMode // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnChangeWalkRunStateKind(enum class PlayerWalkRunStateKind kind); // Function BP_PlayerActionStateWalkRun.BP_PlayerActionStateWalkRun_C.OnChangeWalkRunStateKind // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateRotate(float DeltaSeconds); // Function BP_PlayerActionStateWalkRun.BP_PlayerActionStateWalkRun_C.UpdateRotate // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Exit(int32_t NextStateIndex); // Function BP_PlayerActionStateWalkRun.BP_PlayerActionStateWalkRun_C.Exit // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Update(); // Function BP_PlayerActionStateWalkRun.BP_PlayerActionStateWalkRun_C.Update // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Enter(int32_t Param); // Function BP_PlayerActionStateWalkRun.BP_PlayerActionStateWalkRun_C.Enter // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindChangeWalkRunStateKind(); // Function BP_PlayerActionStateWalkRun.BP_PlayerActionStateWalkRun_C.BindChangeWalkRunStateKind // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindChangeWalkRunStateKind(); // Function BP_PlayerActionStateWalkRun.BP_PlayerActionStateWalkRun_C.UnbindChangeWalkRunStateKind // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PlayerActionStateWalkRun(int32_t EntryPoint); // Function BP_PlayerActionStateWalkRun.BP_PlayerActionStateWalkRun_C.ExecuteUbergraph_BP_PlayerActionStateWalkRun // (Final|UbergraphFunction) // @ game+0x1685580
};

