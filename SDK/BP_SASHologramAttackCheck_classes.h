// BlueprintGeneratedClass BP_SASHologramAttackCheck.BP_SASHologramAttackCheck_C
// Size: 0x160 (Inherited: 0x150)
struct UBP_SASHologramAttackCheck_C : UPlayerSASHologramAttackCheckComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	struct ARSBattlePlayer_C* OwnerPlayer; // 0x158(0x08)

	void CheckTips(); // Function BP_SASHologramAttackCheck.BP_SASHologramAttackCheck_C.CheckTips // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugInitialize(); // Function BP_SASHologramAttackCheck.BP_SASHologramAttackCheck_C.DebugInitialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayVoice(enum class EPlayerID InPlayerID); // Function BP_SASHologramAttackCheck.BP_SASHologramAttackCheck_C.PlayVoice // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_SASHologramAttackCheck.BP_SASHologramAttackCheck_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void LoadDataTable(); // Function BP_SASHologramAttackCheck.BP_SASHologramAttackCheck_C.LoadDataTable // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void BeginCallUI(enum class EPlayerID playerId); // Function BP_SASHologramAttackCheck.BP_SASHologramAttackCheck_C.BeginCallUI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void EndCallUI(bool bSuccess); // Function BP_SASHologramAttackCheck.BP_SASHologramAttackCheck_C.EndCallUI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_SASHologramAttackCheck(int32_t EntryPoint); // Function BP_SASHologramAttackCheck.BP_SASHologramAttackCheck_C.ExecuteUbergraph_BP_SASHologramAttackCheck // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

