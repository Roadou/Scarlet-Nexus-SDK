// BlueprintGeneratedClass BP_Seiran_Open.BP_Seiran_Open_C
// Size: 0x488 (Inherited: 0x47a)
struct ABP_Seiran_Open_C : ABP_MakeEventActorChild_C {
	char pad_47A[0x6]; // 0x47a(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x480(0x08)

	void SubEvent(struct AMainEventLatentActor* latenter); // Function BP_Seiran_Open.BP_Seiran_Open_C.SubEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventLoadMessage(); // Function BP_Seiran_Open.BP_Seiran_Open_C.EventLoadMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartEvent(); // Function BP_Seiran_Open.BP_Seiran_Open_C.StartEvent // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Seiran_Open(int32_t EntryPoint); // Function BP_Seiran_Open.BP_Seiran_Open_C.ExecuteUbergraph_BP_Seiran_Open // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};
