// BlueprintGeneratedClass BTT_Enemy_BossLostAction.BTT_Enemy_BossLostAction_C
// Size: 0x100 (Inherited: 0xd0)
struct UBTT_Enemy_BossLostAction_C : UBP_TaskBase_Enemy_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	enum class EnemyActionAnimKind LostAction; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct TArray<struct FST_emLostActionInfo> LostActionInfoList; // 0xe0(0x10)
	struct FGameTimer ActionTimer; // 0xf0(0x0c)
	float LostActionTime; // 0xfc(0x04)

	void SelectLostAction(enum class EnemyActionAnimKind LostAction); // Function BTT_Enemy_BossLostAction.BTT_Enemy_BossLostAction_C.SelectLostAction // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void Update(struct APawn* Pawn, float DeltaSec); // Function BTT_Enemy_BossLostAction.BTT_Enemy_BossLostAction_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(struct APawn* Pawn); // Function BTT_Enemy_BossLostAction.BTT_Enemy_BossLostAction_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_Enemy_BossLostAction.BTT_Enemy_BossLostAction_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTT_Enemy_BossLostAction.BTT_Enemy_BossLostAction_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_Enemy_BossLostAction.BTT_Enemy_BossLostAction_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BTT_Enemy_BossLostAction(int32_t EntryPoint); // Function BTT_Enemy_BossLostAction.BTT_Enemy_BossLostAction_C.ExecuteUbergraph_BTT_Enemy_BossLostAction // (Final|UbergraphFunction) // @ game+0x1685580
};

