// BlueprintGeneratedClass BP_f01s00310.BP_f01s00310_C
// Size: 0x498 (Inherited: 0x47a)
struct ABP_f01s00310_C : ABP_MakeEventActorChild_C {
	char pad_47A[0x6]; // 0x47a(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x480(0x08)
	struct TArray<struct UObject*> ST_LoadAsset; // 0x488(0x10)

	void SubEvent(struct AMainEventLatentActor* latenter); // Function BP_f01s00310.BP_f01s00310_C.SubEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BPEventEnd(); // Function BP_f01s00310.BP_f01s00310_C.BPEventEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventLoadMessage(); // Function BP_f01s00310.BP_f01s00310_C.EventLoadMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartEvent(); // Function BP_f01s00310.BP_f01s00310_C.StartEvent // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void initBPEvent(struct AMainEventLatentActor* latenter); // Function BP_f01s00310.BP_f01s00310_C.initBPEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AfterSettingEvent(struct AMainEventLatentActor* latenter); // Function BP_f01s00310.BP_f01s00310_C.AfterSettingEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_f01s00310(int32_t EntryPoint); // Function BP_f01s00310.BP_f01s00310_C.ExecuteUbergraph_BP_f01s00310 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

