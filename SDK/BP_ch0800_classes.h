// BlueprintGeneratedClass BP_ch0800.BP_ch0800_C
// Size: 0x1b68 (Inherited: 0x1b13)
struct ABP_ch0800_C : ARSBattlePlayer_C {
	char pad_1B13[0x5]; // 0x1b13(0x05)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1b18(0x08)
	struct UBP_ch0800_Attack_ChainLaunch_C* BP_ch0800_Attack_ChainLaunch; // 0x1b20(0x08)
	struct UBP_ch0800_Attack_ChainDown_C* BP_ch0800_Attack_ChainDown; // 0x1b28(0x08)
	struct UBP_ch0800_Attack_a5_C* BP_ch0800_Attack_a5; // 0x1b30(0x08)
	struct UBP_ch0800_Attack_a4_C* BP_ch0800_Attack_a4; // 0x1b38(0x08)
	struct UBP_ch0800_Attack_a3_C* BP_ch0800_Attack_a3; // 0x1b40(0x08)
	struct UBP_ch0800_Attack_a2_C* BP_ch0800_Attack_a2; // 0x1b48(0x08)
	struct UBP_ch0800_Attack_a1_C* BP_ch0800_Attack_a1; // 0x1b50(0x08)
	struct UPlayerAnimControllerComponent* PlayerAnimController; // 0x1b58(0x08)
	struct FName ThrowClaimantName; // 0x1b60(0x08)

	void DoDynamicEventEnd(bool bDummy); // Function BP_ch0800.BP_ch0800_C.DoDynamicEventEnd // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoDynamicEventStart(bool bDummy); // Function BP_ch0800.BP_ch0800_C.DoDynamicEventStart // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoStaticEventEnd(bool bDummy); // Function BP_ch0800.BP_ch0800_C.DoStaticEventEnd // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoStaticEventStart(bool bDummy); // Function BP_ch0800.BP_ch0800_C.DoStaticEventStart // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CalcAccumulationByDefence(float refWince, float refKnockback, float refDown, float refLaunch, float refFlame, float refElectric, float refFlooded, float refOil, float refConfusion, float refCrashScale, struct AActor* attackActor); // Function BP_ch0800.BP_ch0800_C.CalcAccumulationByDefence // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBattleReady(bool bReady, bool bForce, bool bDummy); // Function BP_ch0800.BP_ch0800_C.SetBattleReady // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateWeapon(bool bDummy); // Function BP_ch0800.BP_ch0800_C.CreateWeapon // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetWeaponSocketName(int32_t Index, bool bBattle, bool ForceBattle, struct FName SocketName); // Function BP_ch0800.BP_ch0800_C.GetWeaponSocketName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void PrepareThrowWeapon(int32_t WeaponIndex, enum class EWeaponThrowType ThrowType, float Range, float TargetSearchAngle, bool bOK, struct ABP_WeaponBase_C* Weapon, struct AActor* Target); // Function BP_ch0800.BP_ch0800_C.PrepareThrowWeapon // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CretaeThrowWeapon(); // Function BP_ch0800.BP_ch0800_C.CretaeThrowWeapon // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ComboSetting(enum class EPlayerComboPattern first, enum class EPlayerComboPattern second, bool dummy); // Function BP_ch0800.BP_ch0800_C.ComboSetting // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_ch0800.BP_ch0800_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInitialize(); // Function BP_ch0800.BP_ch0800_C.OnInitialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EquipAttachment(enum class EPlayerAttachment Index, int32_t attachmentId); // Function BP_ch0800.BP_ch0800_C.EquipAttachment // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_ch0800(int32_t EntryPoint); // Function BP_ch0800.BP_ch0800_C.ExecuteUbergraph_BP_ch0800 // (Final|UbergraphFunction) // @ game+0x1685580
};

