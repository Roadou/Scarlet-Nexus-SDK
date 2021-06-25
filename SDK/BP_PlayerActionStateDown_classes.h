// BlueprintGeneratedClass BP_PlayerActionStateDown.BP_PlayerActionStateDown_C
// Size: 0x117 (Inherited: 0xe8)
struct UBP_PlayerActionStateDown_C : UBP_PlayerActionStateBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	enum class EPlayerDownType DownType; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	struct FGameTimer Timer; // 0xf4(0x0c)
	enum class ECharacterHitPriority StoreCharacterHitPriority; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	struct FName ClaimantName; // 0x104(0x08)
	bool bInvincible; // 0x10c(0x01)
	bool bBrainFieldTimeUp; // 0x10d(0x01)
	bool bBrainCrash; // 0x10e(0x01)
	char pad_10F[0x1]; // 0x10f(0x01)
	float ReviveTimer; // 0x110(0x04)
	bool bDeadFlag; // 0x114(0x01)
	bool bAutoRevive; // 0x115(0x01)
	bool bActivateRessurectIcon; // 0x116(0x01)

	void CheckDeadTips(); // Function BP_PlayerActionStateDown.BP_PlayerActionStateDown_C.CheckDeadTips // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAutoRevive(); // Function BP_PlayerActionStateDown.BP_PlayerActionStateDown_C.UpdateAutoRevive // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsInvincible(enum class EPlayerDownType Type, bool bInvincible); // Function BP_PlayerActionStateDown.BP_PlayerActionStateDown_C.IsInvincible // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void OnSuccessResurrect(struct AActor* RevivePlayer); // Function BP_PlayerActionStateDown.BP_PlayerActionStateDown_C.OnSuccessResurrect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Exit(int32_t NextStateIndex); // Function BP_PlayerActionStateDown.BP_PlayerActionStateDown_C.Exit // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool Transition(); // Function BP_PlayerActionStateDown.BP_PlayerActionStateDown_C.Transition // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Update(); // Function BP_PlayerActionStateDown.BP_PlayerActionStateDown_C.Update // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Enter(int32_t Param); // Function BP_PlayerActionStateDown.BP_PlayerActionStateDown_C.Enter // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindResurrectEvent(); // Function BP_PlayerActionStateDown.BP_PlayerActionStateDown_C.BindResurrectEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindResurrectEvent(); // Function BP_PlayerActionStateDown.BP_PlayerActionStateDown_C.UnbindResurrectEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PlayerActionStateDown(int32_t EntryPoint); // Function BP_PlayerActionStateDown.BP_PlayerActionStateDown_C.ExecuteUbergraph_BP_PlayerActionStateDown // (Final|UbergraphFunction) // @ game+0x1685580
};

