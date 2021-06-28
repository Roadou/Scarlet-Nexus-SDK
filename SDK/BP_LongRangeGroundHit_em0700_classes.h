// BlueprintGeneratedClass BP_LongRangeGroundHit_em0700.BP_LongRangeGroundHit_em0700_C
// Size: 0x808 (Inherited: 0x6f0)
struct ABP_LongRangeGroundHit_em0700_C : ABP_Enemy_Weapon_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6f0(0x08)
	bool IsHit; // 0x6f8(0x01)
	char pad_6F9[0x7]; // 0x6f9(0x07)
	struct FHCSkillCommonInfo skill; // 0x700(0xe8)
	struct FHCHitEffectInfo effectInfo; // 0x7e8(0x08)
	struct FVector DefaultMoveDir; // 0x7f0(0x0c)
	float DefaultAttackRadius; // 0x7fc(0x04)
	float AttackIncreaseSize; // 0x800(0x04)
	float MoveSpeed; // 0x804(0x04)

	void SetAttackCollisionRadius(float Radius); // Function BP_LongRangeGroundHit_em0700.BP_LongRangeGroundHit_em0700_C.SetAttackCollisionRadius // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnHitAttack(struct FHCHitResult HitResult, bool Result); // Function BP_LongRangeGroundHit_em0700.BP_LongRangeGroundHit_em0700_C.OnHitAttack // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void HitProcess(); // Function BP_LongRangeGroundHit_em0700.BP_LongRangeGroundHit_em0700_C.HitProcess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_LongRangeGroundHit_em0700.BP_LongRangeGroundHit_em0700_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void CreateAttackCollosion(struct UDataTable* DataTable, struct FName SkillName, struct AActor* Owner, float Timer, struct FVector Location); // Function BP_LongRangeGroundHit_em0700.BP_LongRangeGroundHit_em0700_C.CreateAttackCollosion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_LongRangeGroundHit_em0700(int32_t EntryPoint); // Function BP_LongRangeGroundHit_em0700.BP_LongRangeGroundHit_em0700_C.ExecuteUbergraph_BP_LongRangeGroundHit_em0700 // (Final|UbergraphFunction) // @ game+0x1685580
};

