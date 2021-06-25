// BlueprintGeneratedClass BP_NpcShop_Common.BP_NpcShop_Common_C
// Size: 0x484 (Inherited: 0x46a)
struct ABP_NpcShop_Common_C : ABP_MakeEventActorBase_C {
	char pad_46A[0x6]; // 0x46a(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x470(0x08)
	int32_t ShopVar; // 0x478(0x04)
	int32_t NewVar_1; // 0x47c(0x04)
	int32_t TradeVar; // 0x480(0x04)

	void CustomEvent_1(struct AMainEventLatentActor* latenter); // Function BP_NpcShop_Common.BP_NpcShop_Common_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartEvent(); // Function BP_NpcShop_Common.BP_NpcShop_Common_C.StartEvent // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_NpcShop_Common(int32_t EntryPoint); // Function BP_NpcShop_Common.BP_NpcShop_Common_C.ExecuteUbergraph_BP_NpcShop_Common // (Final|UbergraphFunction) // @ game+0x1685580
};

