// BlueprintGeneratedClass BTT_Enemy_BossLostMove.BTT_Enemy_BossLostMove_C
// Size: 0x11d (Inherited: 0xd0)
struct UBTT_Enemy_BossLostMove_C : UBP_TaskBase_Enemy_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	enum class EnemyActionAnimKind LostAction; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct TArray<struct FST_emLostActionInfo> LostActionInfoList; // 0xe0(0x10)
	struct FGameTimer ActionTimer; // 0xf0(0x0c)
	float LostMoveTime; // 0xfc(0x04)
	float RotationZ; // 0x100(0x04)
	float MoveTimeRandomMin; // 0x104(0x04)
	float MoveTimeRandomMax; // 0x108(0x04)
	float RotationRandomMin; // 0x10c(0x04)
	float RotationRandomMax; // 0x110(0x04)
	float checkDistance; // 0x114(0x04)
	float MoveSpeed; // 0x118(0x04)
	bool bNoMoveAnim; // 0x11c(0x01)

	void SelectLostAction(enum class EnemyActionAnimKind LostAction); // Function BTT_Enemy_BossLostMove.BTT_Enemy_BossLostMove_C.SelectLostAction // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void Update(struct APawn* Pawn, float DeltaSec); // Function BTT_Enemy_BossLostMove.BTT_Enemy_BossLostMove_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(struct APawn* Pawn); // Function BTT_Enemy_BossLostMove.BTT_Enemy_BossLostMove_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_Enemy_BossLostMove.BTT_Enemy_BossLostMove_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTT_Enemy_BossLostMove.BTT_Enemy_BossLostMove_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_Enemy_BossLostMove.BTT_Enemy_BossLostMove_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BTT_Enemy_BossLostMove(int32_t EntryPoint); // Function BTT_Enemy_BossLostMove.BTT_Enemy_BossLostMove_C.ExecuteUbergraph_BTT_Enemy_BossLostMove // (Final|UbergraphFunction) // @ game+0x1685580
};

