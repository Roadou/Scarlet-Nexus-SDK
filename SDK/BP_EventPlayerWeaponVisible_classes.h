// BlueprintGeneratedClass BP_EventPlayerWeaponVisible.BP_EventPlayerWeaponVisible_C
// Size: 0x250 (Inherited: 0x230)
struct ABP_EventPlayerWeaponVisible_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	bool IsInitialized; // 0x240(0x01)
	bool RestoreWeaponHidden; // 0x241(0x01)
	char pad_242[0x6]; // 0x242(0x06)
	struct ABP_WeaponBase_C* TargetWeapon; // 0x248(0x08)

	void Restore(); // Function BP_EventPlayerWeaponVisible.BP_EventPlayerWeaponVisible_C.Restore // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function BP_EventPlayerWeaponVisible.BP_EventPlayerWeaponVisible_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventPlayerWeaponVisible.BP_EventPlayerWeaponVisible_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EventPlayerWeaponVisible.BP_EventPlayerWeaponVisible_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EventPlayerWeaponVisible.BP_EventPlayerWeaponVisible_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventPlayerWeaponVisible(int32_t EntryPoint); // Function BP_EventPlayerWeaponVisible.BP_EventPlayerWeaponVisible_C.ExecuteUbergraph_BP_EventPlayerWeaponVisible // (Final|UbergraphFunction) // @ game+0x1685580
};

