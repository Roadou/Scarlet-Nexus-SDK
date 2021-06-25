// BlueprintGeneratedClass BP_PlayerActionStateEvent.BP_PlayerActionStateEvent_C
// Size: 0xf1 (Inherited: 0xe8)
struct UBP_PlayerActionStateEvent_C : UBP_PlayerActionStateBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	bool bTurnAnim; // 0xf0(0x01)

	int32_t Exit(int32_t NextStateIndex); // Function BP_PlayerActionStateEvent.BP_PlayerActionStateEvent_C.Exit // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Update(); // Function BP_PlayerActionStateEvent.BP_PlayerActionStateEvent_C.Update // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTalkTurn(float Angle); // Function BP_PlayerActionStateEvent.BP_PlayerActionStateEvent_C.OnTalkTurn // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Enter(int32_t Param); // Function BP_PlayerActionStateEvent.BP_PlayerActionStateEvent_C.Enter // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindTalkTurn(); // Function BP_PlayerActionStateEvent.BP_PlayerActionStateEvent_C.BindTalkTurn // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindTalkTurn(); // Function BP_PlayerActionStateEvent.BP_PlayerActionStateEvent_C.UnbindTalkTurn // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PlayerActionStateEvent(int32_t EntryPoint); // Function BP_PlayerActionStateEvent.BP_PlayerActionStateEvent_C.ExecuteUbergraph_BP_PlayerActionStateEvent // (Final|UbergraphFunction) // @ game+0x1685580
};

