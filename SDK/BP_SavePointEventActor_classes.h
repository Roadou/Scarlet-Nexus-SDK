// BlueprintGeneratedClass BP_SavePointEventActor.BP_SavePointEventActor_C
// Size: 0x510 (Inherited: 0x46a)
struct ABP_SavePointEventActor_C : ABP_MakeEventActorBase_C {
	char pad_46A[0x6]; // 0x46a(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x470(0x08)
	struct FString NPCID; // 0x478(0x10)
	struct TArray<struct FString> VariationID; // 0x488(0x10)
	struct TMap<struct FString, int32_t> VariationID_MaxWord; // 0x498(0x50)
	int32_t MesCount; // 0x4e8(0x04)
	char pad_4EC[0x4]; // 0x4ec(0x04)
	struct TArray<int32_t> ProgressID_Variation_Yuito; // 0x4f0(0x10)
	struct TArray<int32_t> ProgressID_Variation_Kasane; // 0x500(0x10)

	void Variation Check in Progress(struct TArray<int32_t> ProgressID_Variation, int32_t Index); // Function BP_SavePointEventActor.BP_SavePointEventActor_C.Variation Check in Progress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventLoadMessage(); // Function BP_SavePointEventActor.BP_SavePointEventActor_C.EventLoadMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartEvent(); // Function BP_SavePointEventActor.BP_SavePointEventActor_C.StartEvent // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_SavePointEventActor(int32_t EntryPoint); // Function BP_SavePointEventActor.BP_SavePointEventActor_C.ExecuteUbergraph_BP_SavePointEventActor // (Final|UbergraphFunction) // @ game+0x1685580
};

