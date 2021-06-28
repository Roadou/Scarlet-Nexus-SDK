// BlueprintGeneratedClass BP_MissileGroundHit_em0700.BP_MissileGroundHit_em0700_C
// Size: 0x6f9 (Inherited: 0x6f0)
struct ABP_MissileGroundHit_em0700_C : ABP_Enemy_Weapon_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6f0(0x08)
	bool IsHit; // 0x6f8(0x01)

	void InitCustomMove(bool return); // Function BP_MissileGroundHit_em0700.BP_MissileGroundHit_em0700_C.InitCustomMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnHitAttack(struct FHCHitResult HitResult, bool Result); // Function BP_MissileGroundHit_em0700.BP_MissileGroundHit_em0700_C.OnHitAttack // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_MissileGroundHit_em0700.BP_MissileGroundHit_em0700_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void CreateAttackCollosion(struct UDataTable* DataTable, struct FName SkillName, struct AActor* Owner, float Timer, struct FVector Location); // Function BP_MissileGroundHit_em0700.BP_MissileGroundHit_em0700_C.CreateAttackCollosion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_MissileGroundHit_em0700(int32_t EntryPoint); // Function BP_MissileGroundHit_em0700.BP_MissileGroundHit_em0700_C.ExecuteUbergraph_BP_MissileGroundHit_em0700 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

