// BlueprintGeneratedClass BP_ch1000.BP_ch1000_C
// Size: 0x1b68 (Inherited: 0x1b13)
struct ABP_ch1000_C : ARSBattlePlayer_C {
	char pad_1B13[0x5]; // 0x1b13(0x05)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1b18(0x08)
	struct UBP_ch1000_Attack_b2_C* BP_ch1000_Attack_b2; // 0x1b20(0x08)
	struct UBP_ch1000_Attack_b1_C* BP_ch1000_Attack_b1; // 0x1b28(0x08)
	struct UBP_ch1000_Attack_a4_C* BP_ch1000_Attack_a4; // 0x1b30(0x08)
	struct UBP_ch1000_Attack_a3_C* BP_ch1000_Attack_a3; // 0x1b38(0x08)
	struct UBP_ch1000_Attack_a2_C* BP_ch1000_Attack_a2; // 0x1b40(0x08)
	struct UBP_ch1000_Attack_a1_C* BP_ch1000_Attack_a1; // 0x1b48(0x08)
	struct UPlayerAnimControllerComponent* PlayerAnimController; // 0x1b50(0x08)
	struct FLinearColor GhostTrailColor; // 0x1b58(0x10)

	void CheckInitializeAccelerate(); // Function BP_ch1000.BP_ch1000_C.CheckInitializeAccelerate // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnDestroy(bool bDummy); // Function BP_ch1000.BP_ch1000_C.OnDestroy // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateWeapon(bool bDummy); // Function BP_ch1000.BP_ch1000_C.CreateWeapon // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetWeaponSocketName(int32_t Index, bool bBattle, bool ForceBattle, struct FName SocketName); // Function BP_ch1000.BP_ch1000_C.GetWeaponSocketName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void ComboSetting(enum class EPlayerComboPattern first, enum class EPlayerComboPattern second, bool dummy); // Function BP_ch1000.BP_ch1000_C.ComboSetting // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_ch1000.BP_ch1000_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnGhostOneShot(float AliveTime); // Function BP_ch1000.BP_ch1000_C.OnGhostOneShot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAcceleratorStart(struct FAcceleratorParam Parameter, struct AActor* Owner, bool bHologram); // Function BP_ch1000.BP_ch1000_C.OnAcceleratorStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAcceleratorEnd(struct FAcceleratorParam Parameter, struct AActor* Owner, float RemainTime, bool bHologram); // Function BP_ch1000.BP_ch1000_C.OnAcceleratorEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInitialize(); // Function BP_ch1000.BP_ch1000_C.OnInitialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_ch1000(int32_t EntryPoint); // Function BP_ch1000.BP_ch1000_C.ExecuteUbergraph_BP_ch1000 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

