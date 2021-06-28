// BlueprintGeneratedClass BP_em0760.BP_em0760_C
// Size: 0x2220 (Inherited: 0x2210)
struct ABP_em0760_C : ABP_em0700_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2210(0x08)
	struct UDamagePartCollisionComponent* Body; // 0x2218(0x08)

	void GetET_StopWaitMontage(struct UAnimMontage* WaitMontage); // Function BP_em0760.BP_em0760_C.GetET_StopWaitMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(bool return); // Function BP_em0760.BP_em0760_C.Initialize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateEnemyWeapon(bool dummy); // Function BP_em0760.BP_em0760_C.CreateEnemyWeapon // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_em0760.BP_em0760_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_em0760(int32_t EntryPoint); // Function BP_em0760.BP_em0760_C.ExecuteUbergraph_BP_em0760 // (Final|UbergraphFunction) // @ game+0x1685580
};

