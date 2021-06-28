// BlueprintGeneratedClass BP_wp0801.BP_wp0801_C
// Size: 0x418 (Inherited: 0x409)
struct ABP_wp0801_C : ABP_WeaponBase_ch0800_C {
	char pad_409[0x7]; // 0x409(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x410(0x08)

	void Initialize(bool bDummy); // Function BP_wp0801.BP_wp0801_C.Initialize // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TakeBackOwner(float Time); // Function BP_wp0801.BP_wp0801_C.TakeBackOwner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ThrowStart(enum class EWeaponThrowType ThrowType, float CheckHeightOnGround); // Function BP_wp0801.BP_wp0801_C.ThrowStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ThrowEnd(bool bAttach); // Function BP_wp0801.BP_wp0801_C.ThrowEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_wp0801(int32_t EntryPoint); // Function BP_wp0801.BP_wp0801_C.ExecuteUbergraph_BP_wp0801 // (Final|UbergraphFunction) // @ game+0x1685580
};

