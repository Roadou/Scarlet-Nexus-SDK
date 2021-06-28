// BlueprintGeneratedClass BP_Missile_em0760.BP_Missile_em0760_C
// Size: 0x704 (Inherited: 0x6f0)
struct ABP_Missile_em0760_C : ABP_Enemy_Weapon_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6f0(0x08)
	struct FVector TargetVector; // 0x6f8(0x0c)

	void OnHitAttack(struct FHCHitResult HitResult, bool Result); // Function BP_Missile_em0760.BP_Missile_em0760_C.OnHitAttack // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_Missile_em0760.BP_Missile_em0760_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void CreateAttackCollosion(struct UDataTable* DataTable, struct FName SkillName, struct AActor* Owner, float Timer, struct FVector Location); // Function BP_Missile_em0760.BP_Missile_em0760_C.CreateAttackCollosion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Missile_em0760(int32_t EntryPoint); // Function BP_Missile_em0760.BP_Missile_em0760_C.ExecuteUbergraph_BP_Missile_em0760 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

