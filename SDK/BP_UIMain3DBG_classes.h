// BlueprintGeneratedClass BP_UIMain3DBG.BP_UIMain3DBG_C
// Size: 0x2f8 (Inherited: 0x2d9)
struct ABP_UIMain3DBG_C : ABP_UI3DBGBase_C {
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct TArray<struct TSoftObjectPtr<UObject>> ReferenceLevels; // 0x2e8(0x10)

	void SetupMenuBGLevel(); // Function BP_UIMain3DBG.BP_UIMain3DBG_C.SetupMenuBGLevel // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_UIMain3DBG.BP_UIMain3DBG_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_UIMain3DBG(int32_t EntryPoint); // Function BP_UIMain3DBG.BP_UIMain3DBG_C.ExecuteUbergraph_BP_UIMain3DBG // (Final|UbergraphFunction) // @ game+0x1685580
};

