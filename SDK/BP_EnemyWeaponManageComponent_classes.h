// BlueprintGeneratedClass BP_EnemyWeaponManageComponent.BP_EnemyWeaponManageComponent_C
// Size: 0x128 (Inherited: 0xc0)
struct UBP_EnemyWeaponManageComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct TArray<struct ABP_Enemy_Weapon_C*> WeaponList; // 0xc8(0x10)
	struct TMap<struct ABP_Enemy_Weapon_C*, struct FFBulletManageData> ManageData; // 0xd8(0x50)

	void GetUnusedWeaponList(struct ABP_Enemy_Weapon_C* WeaponClass, struct TArray<struct ABP_Enemy_Weapon_C*> WeaponList); // Function BP_EnemyWeaponManageComponent.BP_EnemyWeaponManageComponent_C.GetUnusedWeaponList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnabledUsedWeapon(bool Enabled); // Function BP_EnemyWeaponManageComponent.BP_EnemyWeaponManageComponent_C.SetEnabledUsedWeapon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetUsedWeaponAllList(struct TArray<struct ABP_Enemy_Weapon_C*> WeaponList); // Function BP_EnemyWeaponManageComponent.BP_EnemyWeaponManageComponent_C.GetUsedWeaponAllList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RemoveAllWeapon(); // Function BP_EnemyWeaponManageComponent.BP_EnemyWeaponManageComponent_C.RemoveAllWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetUsedWeaponList(struct ABP_Enemy_Weapon_C* WeaponClass, struct TArray<struct ABP_Enemy_Weapon_C*> WeaponList); // Function BP_EnemyWeaponManageComponent.BP_EnemyWeaponManageComponent_C.GetUsedWeaponList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetUnusedWeapon(struct ABP_Enemy_Weapon_C* WeaponClass, struct ABP_Enemy_Weapon_C* Weapon); // Function BP_EnemyWeaponManageComponent.BP_EnemyWeaponManageComponent_C.GetUnusedWeapon // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddWeapon(struct ABP_Enemy_Weapon_C* WeaponClass, int32_t WeaponNum, bool bSuccess); // Function BP_EnemyWeaponManageComponent.BP_EnemyWeaponManageComponent_C.AddWeapon // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EnemyWeaponManageComponent.BP_EnemyWeaponManageComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EnemyWeaponManageComponent(int32_t EntryPoint); // Function BP_EnemyWeaponManageComponent.BP_EnemyWeaponManageComponent_C.ExecuteUbergraph_BP_EnemyWeaponManageComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

