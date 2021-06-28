// BlueprintGeneratedClass BP_em0710.BP_em0710_C
// Size: 0x2218 (Inherited: 0x2210)
struct ABP_em0710_C : ABP_em0700_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2210(0x08)

	void GetET_StopWaitMontage(struct UAnimMontage* WaitMontage); // Function BP_em0710.BP_em0710_C.GetET_StopWaitMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MainTick(float DeltaSeconds, bool dummy); // Function BP_em0710.BP_em0710_C.MainTick // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetTargetHate(); // Function BP_em0710.BP_em0710_C.ResetTargetHate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Set Enemy Target Battle(); // Function BP_em0710.BP_em0710_C.Set Enemy Target Battle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateEnemyWeapon(bool dummy); // Function BP_em0710.BP_em0710_C.CreateEnemyWeapon // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnDamageActorHit(struct FHCHitResult HitResult, bool dummy); // Function BP_em0710.BP_em0710_C.OnDamageActorHit // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_em0710.BP_em0710_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_em0710(int32_t EntryPoint); // Function BP_em0710.BP_em0710_C.ExecuteUbergraph_BP_em0710 // (Final|UbergraphFunction) // @ game+0x1685580
};

