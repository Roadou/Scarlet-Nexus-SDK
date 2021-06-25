// BlueprintGeneratedClass BP_PlayerActionStateCaptureMapGimmick.BP_PlayerActionStateCaptureMapGimmick_C
// Size: 0x124 (Inherited: 0xe8)
struct UBP_PlayerActionStateCaptureMapGimmick_C : UBP_PlayerActionStateCommonBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct ARsBattleHero_C* OwnerHero; // 0xf0(0x08)
	int32_t Step; // 0xf8(0x04)
	enum class EPlayerCaptureAnimPattern AnimPattern; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	struct UAnimMontage* LoopMontage; // 0x100(0x08)
	struct UAnimMontage* ExecMontage; // 0x108(0x08)
	struct AMapGimmickObject* MapGimmick; // 0x110(0x08)
	struct FName ClaimantName; // 0x118(0x08)
	bool IsExecutedMapGimmick; // 0x120(0x01)
	bool IsCaptureCancel; // 0x121(0x01)
	enum class ECharacterHitPriority StoreCharacterHitPriority; // 0x122(0x01)
	bool bPlayVibrationFlag; // 0x123(0x01)

	void StopVibration(); // Function BP_PlayerActionStateCaptureMapGimmick.BP_PlayerActionStateCaptureMapGimmick_C.StopVibration // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayVibration(); // Function BP_PlayerActionStateCaptureMapGimmick.BP_PlayerActionStateCaptureMapGimmick_C.PlayVibration // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnExecMapGimmickEvent(struct AMapGimmickObject* MapGimmick); // Function BP_PlayerActionStateCaptureMapGimmick.BP_PlayerActionStateCaptureMapGimmick_C.OnExecMapGimmickEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool Transition(); // Function BP_PlayerActionStateCaptureMapGimmick.BP_PlayerActionStateCaptureMapGimmick_C.Transition // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Update(); // Function BP_PlayerActionStateCaptureMapGimmick.BP_PlayerActionStateCaptureMapGimmick_C.Update // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Exit(int32_t NextStateIndex); // Function BP_PlayerActionStateCaptureMapGimmick.BP_PlayerActionStateCaptureMapGimmick_C.Exit // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Enter(int32_t Param); // Function BP_PlayerActionStateCaptureMapGimmick.BP_PlayerActionStateCaptureMapGimmick_C.Enter // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_PlayerActionStateCaptureMapGimmick.BP_PlayerActionStateCaptureMapGimmick_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void BindExecMapGimmickEvent(); // Function BP_PlayerActionStateCaptureMapGimmick.BP_PlayerActionStateCaptureMapGimmick_C.BindExecMapGimmickEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindExecMapGimmickEvent(); // Function BP_PlayerActionStateCaptureMapGimmick.BP_PlayerActionStateCaptureMapGimmick_C.UnbindExecMapGimmickEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PlayerActionStateCaptureMapGimmick(int32_t EntryPoint); // Function BP_PlayerActionStateCaptureMapGimmick.BP_PlayerActionStateCaptureMapGimmick_C.ExecuteUbergraph_BP_PlayerActionStateCaptureMapGimmick // (Final|UbergraphFunction) // @ game+0x1685580
};

