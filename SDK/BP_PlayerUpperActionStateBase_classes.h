// BlueprintGeneratedClass BP_PlayerUpperActionStateBase.BP_PlayerUpperActionStateBase_C
// Size: 0xe0 (Inherited: 0xd0)
struct UBP_PlayerUpperActionStateBase_C : URSStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	struct ARSBattlePlayer_C* Player; // 0xd8(0x08)

	bool Transition(); // Function BP_PlayerUpperActionStateBase.BP_PlayerUpperActionStateBase_C.Transition // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Enter(int32_t Param); // Function BP_PlayerUpperActionStateBase.BP_PlayerUpperActionStateBase_C.Enter // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_PlayerUpperActionStateBase.BP_PlayerUpperActionStateBase_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PlayerUpperActionStateBase(int32_t EntryPoint); // Function BP_PlayerUpperActionStateBase.BP_PlayerUpperActionStateBase_C.ExecuteUbergraph_BP_PlayerUpperActionStateBase // (Final|UbergraphFunction) // @ game+0x1685580
};

