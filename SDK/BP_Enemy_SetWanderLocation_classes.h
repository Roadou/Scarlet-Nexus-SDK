// BlueprintGeneratedClass BP_Enemy_SetWanderLocation.BP_Enemy_SetWanderLocation_C
// Size: 0x150 (Inherited: 0xb0)
struct UBP_Enemy_SetWanderLocation_C : UTaskBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	float RangeMin; // 0xb8(0x04)
	float RangeMax; // 0xbc(0x04)
	float RangeArea; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FBlackboardKeySelector Home; // 0xc8(0x28)
	struct FBlackboardKeySelector TargetLocation; // 0xf0(0x28)
	struct FVector Goal; // 0x118(0x0c)
	bool IsLoop; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
	int32_t count; // 0x128(0x04)
	struct FVector Location; // 0x12c(0x0c)
	struct FVector CheckLocation; // 0x138(0x0c)
	bool IsFly; // 0x144(0x01)
	char pad_145[0x3]; // 0x145(0x03)
	struct ARSBattleEnemy_C* Enemy; // 0x148(0x08)

	void GetRandomLocation(struct FVector Location, float RandomMin, float RandomMax, bool IsCheckGround, float GroundHeightTop, float GroundHeightBottom, struct FVector return); // Function BP_Enemy_SetWanderLocation.BP_Enemy_SetWanderLocation_C.GetRandomLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHome(struct FVector Vec); // Function BP_Enemy_SetWanderLocation.BP_Enemy_SetWanderLocation_C.SetHome // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Init(struct FVector Vec); // Function BP_Enemy_SetWanderLocation.BP_Enemy_SetWanderLocation_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CountUp(); // Function BP_Enemy_SetWanderLocation.BP_Enemy_SetWanderLocation_C.CountUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsWall(struct FVector Vec1, struct FVector Vec2); // Function BP_Enemy_SetWanderLocation.BP_Enemy_SetWanderLocation_C.IsWall // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	bool IsRangeArea(struct FVector Vec); // Function BP_Enemy_SetWanderLocation.BP_Enemy_SetWanderLocation_C.IsRangeArea // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Enemy_SetWanderLocation.BP_Enemy_SetWanderLocation_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Enemy_SetWanderLocation.BP_Enemy_SetWanderLocation_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Enemy_SetWanderLocation(int32_t EntryPoint); // Function BP_Enemy_SetWanderLocation.BP_Enemy_SetWanderLocation_C.ExecuteUbergraph_BP_Enemy_SetWanderLocation // (Final|UbergraphFunction) // @ game+0x1685580
};

