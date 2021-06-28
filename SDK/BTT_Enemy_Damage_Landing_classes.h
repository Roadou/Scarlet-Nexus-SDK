// BlueprintGeneratedClass BTT_Enemy_Damage_Landing.BTT_Enemy_Damage_Landing_C
// Size: 0xe1 (Inherited: 0xd8)
struct UBTT_Enemy_Damage_Landing_C : UBTT_Enemy_DamageTaskBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	enum class EnemyDamageDownAnimKind DamageDownKind; // 0xe0(0x01)

	void Initialize(struct APawn* Pawn, bool dummy); // Function BTT_Enemy_Damage_Landing.BTT_Enemy_Damage_Landing_C.Initialize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(struct APawn* Pawn, float DeltaSec, bool dummy); // Function BTT_Enemy_Damage_Landing.BTT_Enemy_Damage_Landing_C.Update // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_Enemy_Damage_Landing.BTT_Enemy_Damage_Landing_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BTT_Enemy_Damage_Landing(int32_t EntryPoint); // Function BTT_Enemy_Damage_Landing.BTT_Enemy_Damage_Landing_C.ExecuteUbergraph_BTT_Enemy_Damage_Landing // (Final|UbergraphFunction) // @ game+0x1685580
};

