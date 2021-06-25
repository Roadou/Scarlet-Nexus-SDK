// BlueprintGeneratedClass BP_ch0400_Menu.BP_ch0400_Menu_C
// Size: 0x3b0 (Inherited: 0x3a4)
struct ABP_ch0400_Menu_C : ABP_MenuPlayerBase_C {
	char pad_3A4[0x4]; // 0x3a4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a8(0x08)

	void OnChangeWeapon(); // Function BP_ch0400_Menu.BP_ch0400_Menu_C.OnChangeWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_ch0400_Menu.BP_ch0400_Menu_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_ch0400_Menu(int32_t EntryPoint); // Function BP_ch0400_Menu.BP_ch0400_Menu_C.ExecuteUbergraph_BP_ch0400_Menu // (Final|UbergraphFunction) // @ game+0x1685580
};

