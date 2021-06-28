// BlueprintGeneratedClass BP_Ai_em0700.BP_Ai_em0700_C
// Size: 0x196 (Inherited: 0x17d)
struct UBP_Ai_em0700_C : UBP_Ai_Enemy_C {
	char pad_17D[0x3]; // 0x17d(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x180(0x08)
	struct ABP_em0700_Base_C* em0700Base; // 0x188(0x08)
	enum class Enum_em0700 Enum; // 0x190(0x01)
	bool IsEnd; // 0x191(0x01)
	enum class Enum_em0700 ActionNone; // 0x192(0x01)
	enum class Enum_em0700 FlyForceChangeAttack; // 0x193(0x01)
	enum class Enum_em0700 GroundForceChangeAttack; // 0x194(0x01)
	bool CanFlyModeChange; // 0x195(0x01)

	void StartActionGround_em0710(); // Function BP_Ai_em0700.BP_Ai_em0700_C.StartActionGround_em0710 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartGroundAttack_em0720(); // Function BP_Ai_em0700.BP_Ai_em0700_C.StartGroundAttack_em0720 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartActionFly_em0720(); // Function BP_Ai_em0700.BP_Ai_em0700_C.StartActionFly_em0720 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartActionFly_em0710(); // Function BP_Ai_em0700.BP_Ai_em0700_C.StartActionFly_em0710 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartFlyAttack_em0700(); // Function BP_Ai_em0700.BP_Ai_em0700_C.StartFlyAttack_em0700 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartFlyAttack_em0710(); // Function BP_Ai_em0700.BP_Ai_em0700_C.StartFlyAttack_em0710 // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartActionGround_em0720(); // Function BP_Ai_em0700.BP_Ai_em0700_C.StartActionGround_em0720 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ForceChangeAttack(); // Function BP_Ai_em0700.BP_Ai_em0700_C.ForceChangeAttack // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NextAction(); // Function BP_Ai_em0700.BP_Ai_em0700_C.NextAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartGroundAttack_em0700(); // Function BP_Ai_em0700.BP_Ai_em0700_C.StartGroundAttack_em0700 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartActionGround_em0700(); // Function BP_Ai_em0700.BP_Ai_em0700_C.StartActionGround_em0700 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartActionFly_em0700(); // Function BP_Ai_em0700.BP_Ai_em0700_C.StartActionFly_em0700 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartFlyAttack_em0720(); // Function BP_Ai_em0700.BP_Ai_em0700_C.StartFlyAttack_em0720 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NotMoveAction(bool return); // Function BP_Ai_em0700.BP_Ai_em0700_C.NotMoveAction // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MoveAction(bool return); // Function BP_Ai_em0700.BP_Ai_em0700_C.MoveAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_Ai_em0700.BP_Ai_em0700_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_Ai_em0700.BP_Ai_em0700_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Ai_em0700(int32_t EntryPoint); // Function BP_Ai_em0700.BP_Ai_em0700_C.ExecuteUbergraph_BP_Ai_em0700 // (Final|UbergraphFunction) // @ game+0x1685580
};

