// BlueprintGeneratedClass BP_PlayerActionStateBase.BP_PlayerActionStateBase_C
// Size: 0xe8 (Inherited: 0xd0)
struct UBP_PlayerActionStateBase_C : URSStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	struct ARSBattlePlayer_C* Player; // 0xd8(0x08)
	struct UBP_PlayerFixParamater_C* PlayerFixParam; // 0xe0(0x08)

	int32_t Exit(int32_t NextStateIndex); // Function BP_PlayerActionStateBase.BP_PlayerActionStateBase_C.Exit // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Enter(int32_t Param); // Function BP_PlayerActionStateBase.BP_PlayerActionStateBase_C.Enter // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_PlayerActionStateBase.BP_PlayerActionStateBase_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PlayerActionStateBase(int32_t EntryPoint); // Function BP_PlayerActionStateBase.BP_PlayerActionStateBase_C.ExecuteUbergraph_BP_PlayerActionStateBase // (Final|UbergraphFunction) // @ game+0x1685580
};

