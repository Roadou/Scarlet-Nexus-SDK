// BlueprintGeneratedClass BP_Ai_em0600.BP_Ai_em0600_C
// Size: 0x1a8 (Inherited: 0x17d)
struct UBP_Ai_em0600_C : UBP_Ai_Enemy_C {
	char pad_17D[0x3]; // 0x17d(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x180(0x08)
	struct ABP_em0600_Base_C* em0600Base; // 0x188(0x08)
	enum class Enum_em0600 Enum; // 0x190(0x01)
	bool IsEnd; // 0x191(0x01)
	enum class Enum_em0600 ActionNone; // 0x192(0x01)
	char pad_193[0x5]; // 0x193(0x05)
	struct TArray<enum class Enum_em0600> AttackChangeAction; // 0x198(0x10)

	void ChangeAvaterAiTable(struct UDataTable* AiTableIn); // Function BP_Ai_em0600.BP_Ai_em0600_C.ChangeAvaterAiTable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartAction_em0620(); // Function BP_Ai_em0600.BP_Ai_em0600_C.StartAction_em0620 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartAction(); // Function BP_Ai_em0600.BP_Ai_em0600_C.StartAction // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartAttack(); // Function BP_Ai_em0600.BP_Ai_em0600_C.StartAttack // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NotMoveAction(bool return); // Function BP_Ai_em0600.BP_Ai_em0600_C.NotMoveAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MoveAction(bool return); // Function BP_Ai_em0600.BP_Ai_em0600_C.MoveAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_Ai_em0600.BP_Ai_em0600_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Ai_em0600(int32_t EntryPoint); // Function BP_Ai_em0600.BP_Ai_em0600_C.ExecuteUbergraph_BP_Ai_em0600 // (Final|UbergraphFunction) // @ game+0x1685580
};

