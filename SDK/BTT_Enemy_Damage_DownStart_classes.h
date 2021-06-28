// BlueprintGeneratedClass BTT_Enemy_Damage_DownStart.BTT_Enemy_Damage_DownStart_C
// Size: 0xe1 (Inherited: 0xd8)
struct UBTT_Enemy_Damage_DownStart_C : UBTT_Enemy_DamageTaskBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	enum class EnemyDamageDownAnimKind DamageDownKind; // 0xe0(0x01)

	void Abort(struct APawn* Pawn, bool dummy); // Function BTT_Enemy_Damage_DownStart.BTT_Enemy_Damage_DownStart_C.Abort // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(struct APawn* Pawn, float DeltaSec, bool dummy); // Function BTT_Enemy_Damage_DownStart.BTT_Enemy_Damage_DownStart_C.Update // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_Enemy_Damage_DownStart.BTT_Enemy_Damage_DownStart_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BTT_Enemy_Damage_DownStart(int32_t EntryPoint); // Function BTT_Enemy_Damage_DownStart.BTT_Enemy_Damage_DownStart_C.ExecuteUbergraph_BTT_Enemy_Damage_DownStart // (Final|UbergraphFunction) // @ game+0x1685580
};

