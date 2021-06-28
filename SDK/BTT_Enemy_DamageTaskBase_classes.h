// BlueprintGeneratedClass BTT_Enemy_DamageTaskBase.BTT_Enemy_DamageTaskBase_C
// Size: 0xd8 (Inherited: 0xd0)
struct UBTT_Enemy_DamageTaskBase_C : UBP_TaskBase_Enemy_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)

	void OnFinishExecute(struct ARSBattleCharacter_C* Character); // Function BTT_Enemy_DamageTaskBase.BTT_Enemy_DamageTaskBase_C.OnFinishExecute // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Abort(struct APawn* Pawn, bool dummy); // Function BTT_Enemy_DamageTaskBase.BTT_Enemy_DamageTaskBase_C.Abort // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(struct APawn* Pawn, bool dummy); // Function BTT_Enemy_DamageTaskBase.BTT_Enemy_DamageTaskBase_C.Initialize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEndDamageMotion(struct APawn* Pawn, bool bEndMotion); // Function BTT_Enemy_DamageTaskBase.BTT_Enemy_DamageTaskBase_C.IsEndDamageMotion // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(struct APawn* Pawn, float DeltaSec, bool dummy); // Function BTT_Enemy_DamageTaskBase.BTT_Enemy_DamageTaskBase_C.Update // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_Enemy_DamageTaskBase.BTT_Enemy_DamageTaskBase_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTT_Enemy_DamageTaskBase.BTT_Enemy_DamageTaskBase_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_Enemy_DamageTaskBase.BTT_Enemy_DamageTaskBase_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BTT_Enemy_DamageTaskBase(int32_t EntryPoint); // Function BTT_Enemy_DamageTaskBase.BTT_Enemy_DamageTaskBase_C.ExecuteUbergraph_BTT_Enemy_DamageTaskBase // (Final|UbergraphFunction) // @ game+0x1685580
};

