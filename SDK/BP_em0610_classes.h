// BlueprintGeneratedClass BP_em0610.BP_em0610_C
// Size: 0x21b4 (Inherited: 0x2199)
struct ABP_em0610_C : ABP_em0600_Base_C {
	char pad_2199[0x7]; // 0x2199(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x21a0(0x08)
	struct UDamagePartCollisionComponent* DummyWeak; // 0x21a8(0x08)
	float KnockBackResistance; // 0x21b0(0x04)

	void GetET_StopWaitMontage(struct UAnimMontage* WaitMontage); // Function BP_em0610.BP_em0610_C.GetET_StopWaitMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetShootWeapon(struct ABP_Enemy_Weapon_C* Weapon); // Function BP_em0610.BP_em0610_C.GetShootWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStartAction(bool dummy); // Function BP_em0610.BP_em0610_C.OnStartAction // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateEnemyWeapon(bool dummy); // Function BP_em0610.BP_em0610_C.CreateEnemyWeapon // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateEffectOffElec(bool bDummy); // Function BP_em0610.BP_em0610_C.BadStateEffectOffElec // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateEffectOnElec(bool bDummy); // Function BP_em0610.BP_em0610_C.BadStateEffectOnElec // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MainTick(float DeltaSeconds, bool dummy); // Function BP_em0610.BP_em0610_C.MainTick // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateStatus(bool NewParam); // Function BP_em0610.BP_em0610_C.UpdateStatus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEnemySoundEnum(enum class Enum_EnemySound SoundEnum); // Function BP_em0610.BP_em0610_C.GetEnemySoundEnum // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_em0610.BP_em0610_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_em0610(int32_t EntryPoint); // Function BP_em0610.BP_em0610_C.ExecuteUbergraph_BP_em0610 // (Final|UbergraphFunction) // @ game+0x1685580
};

