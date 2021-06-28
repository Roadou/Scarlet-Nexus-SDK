// BlueprintGeneratedClass BTT_Enemy_Damage_DownUp.BTT_Enemy_Damage_DownUp_C
// Size: 0xd9 (Inherited: 0xd8)
struct UBTT_Enemy_Damage_DownUp_C : UBTT_Enemy_DamageTaskBase_C {
	enum class EnemyDamageDownAnimKind DamageDownKind; // 0xd8(0x01)

	void OnFinishExecute(struct ARSBattleCharacter_C* Character); // Function BTT_Enemy_Damage_DownUp.BTT_Enemy_Damage_DownUp_C.OnFinishExecute // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Abort(struct APawn* Pawn, bool dummy); // Function BTT_Enemy_Damage_DownUp.BTT_Enemy_Damage_DownUp_C.Abort // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(struct APawn* Pawn, float DeltaSec, bool dummy); // Function BTT_Enemy_Damage_DownUp.BTT_Enemy_Damage_DownUp_C.Update // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(struct APawn* Pawn, bool dummy); // Function BTT_Enemy_Damage_DownUp.BTT_Enemy_Damage_DownUp_C.Initialize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEndDamageMotion(struct APawn* Pawn, bool bEndMotion); // Function BTT_Enemy_Damage_DownUp.BTT_Enemy_Damage_DownUp_C.IsEndDamageMotion // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

